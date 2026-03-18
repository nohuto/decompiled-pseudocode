/*
 * XREFs of MiInvalidateHiberPhasePages @ 0x14042F0B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiInvalidateHiberPhasePages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 *i; // r10
  __int64 PteShadow; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 *PteAddress; // r8
  __int64 v12; // rax
  unsigned __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a4 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      PteShadow = *i;
      if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v13[0] = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        v8 = MI_GET_PAGE_FRAME_FROM_PTE(v13);
        if ( MiIsPfn(v8) )
        {
          if ( v10 != qword_1403891A0 && v10 != qword_140389188 )
            goto LABEL_14;
          PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)i);
          v12 = *PteAddress;
          if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
          {
            LOWORD(v12) = MiReadPteShadow();
          }
          if ( (v12 & 0x800) != 0 )
          {
LABEL_14:
            if ( _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)v10) )
              return;
            v13[0] = v9 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
            *i = v13[0];
            if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow();
          }
        }
      }
    }
  }
}
