/*
 * XREFs of MiLargePageFault @ 0x14021C114
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     MiCheckSystemNxFault @ 0x14003446C (MiCheckSystemNxFault.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiNoFaultFound @ 0x1400B0400 (MiNoFaultFound.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiCanGrantExecute @ 0x14021BD68 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x14021C39C (MiValidVirtualizationFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, char a4, __int64 a5)
{
  unsigned int v8; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r11
  _KPROCESS *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int v20; // [rsp+44h] [rbp-BCh]
  signed __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v24; // [rsp+64h] [rbp-9Ch]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]

  v22 = a5;
  v8 = MI_IS_PHYSICAL_ADDRESS(a2);
  v20 = v8;
  v9 = 4096LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v8 )
  {
    v11 = v8;
    do
    {
      v9 <<= 9;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v11;
    }
    while ( v11 );
  }
  v21 = MI_READ_PTE_LOCK_FREE(v10);
  if ( (a3 & 1) == 0 || *(_BYTE *)(a3 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( (v21 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, v10, a2, v13, v22, 0, ZeroPte) )
      {
        v26 = 0;
        v24 = 0;
        v27 = 0LL;
        v28 = 0LL;
        v23 = 1;
        v25 = 20;
        MiInsertTbFlushEntry((__int64)&v23, a2 & ~(v9 - 1), 1LL, v20);
        MiFlushTbList((__int64)&v23, v16);
      }
      v14 = a4;
    }
    if ( (a1 & 0x10) != 0 )
    {
      if ( v21 >= 0 )
      {
        if ( !v14 )
          MiCheckSystemNxFault(a1, a2, a3, v21, 7u);
      }
      else
      {
        if ( !(unsigned int)MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, a2) )
          return 3221225477LL;
        v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v21);
        if ( !MiIsPfnInline(v17) )
          return 3221225477LL;
        MiWriteValidPteNewProtection(v10);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(a2, 1u, 0);
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v18 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v18 == 5 )
      {
        LOBYTE(v12) = 17;
        MiValidVirtualizationFault(v18, v10, v12, v13);
        *(_QWORD *)(v18 + 40) = MiVaToPfn(a2);
      }
    }
  }
  return 0LL;
}
