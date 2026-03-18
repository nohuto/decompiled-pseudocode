/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x14042F440
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiIsPfnTradable @ 0x14022A520 (MiIsPfnTradable.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

void __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  ULONG_PTR v9; // r9
  __int64 v10; // rdx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v12; // rax
  void *v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)a2 <= a3 )
  {
    v6 = a2;
    do
    {
      if ( a4 )
      {
        v7 = MI_GET_PAGE_FRAME_FROM_PTE(v6);
        if ( MiIsPfn(v7) )
        {
          v9 = 512LL;
          if ( a4 > 1 )
          {
            v10 = a4 - 1;
            do
            {
              v9 <<= 9;
              --v10;
            }
            while ( v10 );
          }
          PoSetHiberRange(0LL, 0x14000u, v8, v9, 0x6C64704Eu);
        }
      }
      else
      {
        PteShadow = *v6;
        if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v16 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v16);
          if ( MiIsPfn(v12) )
          {
            v14 = 48LL * (_QWORD)v13 - 0x58000000000LL;
            if ( *(_WORD *)(v14 + 32) > 1u
              || !(unsigned int)MiIsPfnTradable((_BYTE *)v14)
              || (*(_BYTE *)(v15 + 35) & 8) != 0 )
            {
              PoSetHiberRange(0LL, 0x14000u, v13, 1uLL, 0x7364704Eu);
            }
          }
        }
      }
      ++v6;
    }
    while ( (unsigned __int64)v6 <= a3 );
  }
}
