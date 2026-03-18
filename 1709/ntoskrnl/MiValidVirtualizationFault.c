/*
 * XREFs of MiValidVirtualizationFault @ 0x140228F84
 * Callers:
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiCompleteSecureProcessFault @ 0x14022870C (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x1402287AC (MiFillVirtualFaultInfo.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiValidVirtualizationFault(__int64 a1, unsigned __int64 a2)
{
  __int64 PteShadow; // rbx
  int v5; // r9d
  __int64 v6; // rax
  unsigned __int8 v7; // r10
  __int64 v8; // rsi
  char v9; // r9
  __int64 v10; // rdx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v5 = *(_DWORD *)(a1 + 48);
  v11 = PteShadow;
  if ( (v5 & 1) == 0 || (PteShadow & 0x42) != 0 )
  {
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
    v8 = v6;
    if ( (v9 & 0x20) != 0 )
    {
      v10 = 48 * v6 - 0x58000000000LL;
      if ( *(__int64 *)(v10 + 8) >= 0 )
      {
        if ( !(unsigned int)MiCopyOnWriteEx((__int64)(a2 << 25) >> 16, (__int64 *)a2, -1LL, v7, 0) )
          return;
        PteShadow = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v11 = PteShadow;
        v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
        v10 = 48 * v8 - 0x58000000000LL;
      }
      MiCompleteSecureProcessFault(v10);
    }
    if ( (PteShadow & 0x20) == 0 )
    {
      PteShadow |= 0x20uLL;
      MiWriteValidPteNewPage((unsigned __int64 *)a2, PteShadow);
    }
    MiFillVirtualFaultInfo(a1, v8, PteShadow);
  }
}
