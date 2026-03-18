/*
 * XREFs of MiLargePageFault @ 0x140228A74
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiNoFaultFound @ 0x140116D14 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x14012C034 (MiCheckSystemNxFault.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiCanGrantExecute @ 0x140228660 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x140228F84 (MiValidVirtualizationFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLargePageFault(char a1, unsigned __int64 a2, ULONG_PTR a3, char a4, __int64 a5)
{
  __int64 v8; // r9
  unsigned int v9; // r12d
  __int64 v10; // r8
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  unsigned int v13; // r11d
  __int64 v14; // rcx
  __int64 PteShadow; // rbx
  BOOL v17; // eax
  _KPROCESS *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  __int64 v23; // [rsp+50h] [rbp-118h] BYREF
  int v24; // [rsp+60h] [rbp-108h] BYREF
  __int16 v25; // [rsp+64h] [rbp-104h]
  __int64 v26; // [rsp+68h] [rbp-100h]
  __int64 v27; // [rsp+70h] [rbp-F8h]
  __int64 v28; // [rsp+78h] [rbp-F0h]

  v9 = MI_IS_PHYSICAL_ADDRESS(a2);
  v10 = 0x7FFFFFFFF8LL;
  v11 = 4096LL;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = 0;
  if ( v9 )
  {
    v14 = v9;
    do
    {
      v11 <<= 9;
      v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
  }
  PteShadow = *(_QWORD *)v12;
  if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v23 = PteShadow;
  if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( (PteShadow & 0x800) == 0 )
        return 3221225477LL;
      v17 = MiNoFaultFound(a1, (volatile signed __int64 *)v12, a2, v8, a5, v13, PteShadow);
      LOBYTE(v13) = 0;
      if ( v17 )
      {
        v26 = 20LL;
        v24 = 1;
        v25 = 0;
        v27 = 0LL;
        v28 = 0LL;
        MiInsertTbFlushEntry(&v24, a2 & ~(v11 - 1), 1LL, v9);
        MiFlushTbList((__int64)&v24, v18);
        LOBYTE(v13) = 0;
      }
    }
    if ( (a1 & 0x10) != 0 )
    {
      if ( PteShadow >= 0 )
      {
        if ( a4 == (_BYTE)v13 )
          MiCheckSystemNxFault(a1, a2, a3, PteShadow, 7u);
      }
      else
      {
        if ( !(unsigned int)MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, a2) )
          return 3221225477LL;
        v19 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
        if ( !MiIsPfnInline(v19) )
          return 3221225477LL;
        v20 = PteShadow & 0x7FFFFFFFFFFFFFFFLL;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          v20 |= 0x20uLL;
        MiWriteValidPteNewPage((unsigned __int64 *)v12, v20);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(a2, 1u, 0);
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v21 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v21 == 5 )
      {
        LOBYTE(v10) = 17;
        MiValidVirtualizationFault(v21, v12, v10);
        *(_QWORD *)(v21 + 40) = MiVaToPfn(a2);
      }
    }
  }
  return 0LL;
}
