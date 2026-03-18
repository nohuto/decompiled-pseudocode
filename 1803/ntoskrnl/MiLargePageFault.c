/*
 * XREFs of MiLargePageFault @ 0x140261DA4
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiNoFaultFound @ 0x1400B53AC (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1400B545C (MiCheckSystemNxFault.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiCanGrantExecute @ 0x140261800 (MiCanGrantExecute.c)
 *     MiGetVirtualFaultPageInfo @ 0x140261C24 (MiGetVirtualFaultPageInfo.c)
 *     MiValidVirtualizationFault @ 0x140262110 (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2)
{
  int v4; // r15d
  __int64 v5; // r14
  unsigned __int64 v6; // rdx
  signed __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  _BYTE *v17; // rbx
  unsigned __int64 v18; // rax
  _QWORD *v19; // r11
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 i; // r9
  __int16 v24; // ax
  __int64 v25; // rax
  _QWORD v26[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v28; // [rsp+44h] [rbp-BCh]
  int v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+4Ch] [rbp-B4h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]

  v4 = 1;
  v5 = 0x200000LL;
  v6 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++v4;
    v6 = (__int64)(v6 << 25) >> 16;
    v5 <<= 9;
  }
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v26[0] = v7;
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 1) == 0 || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    {
      if ( (v7 & 0x800) == 0 )
        return 3221225477LL;
      if ( MiNoFaultFound(a1, (volatile signed __int64 *)a2, *(_QWORD *)a1, v8, 0, v7) )
      {
        v30 = 0;
        v28 = 0;
        v31 = 0LL;
        v11 = *(_QWORD *)a1 & ~(v5 - 1);
        v32 = 0LL;
        v27 = 1;
        v29 = 20;
        MiInsertTbFlushEntry((__int64)&v27, v11, 1LL, v4);
        MiFlushTbList((__int64)&v27, v12, v13);
      }
    }
    if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
    {
      if ( v7 >= 0 )
      {
        if ( !*(_BYTE *)(a1 + 80) )
          MiCheckSystemNxFault(a1, v7, 7u);
      }
      else
      {
        if ( !(unsigned int)MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)a1) )
          return 3221225477LL;
        v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
        if ( !MiIsPfnInline((v14 >> 12) & 0xFFFFFFFFFLL) )
          return 3221225477LL;
        v15 = v7 & 0x7FFFFFFFFFFFFFFFLL;
        v26[0] = v7 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        {
          v15 = v7 & 0x7FFFFFFFFFFFFFDFLL | 0x20;
          v26[0] = v15;
        }
        MiWriteValidPteNewProtection(a2, v15);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(*(_QWORD *)a1, 1u, 0);
      }
    }
    v16 = *(_QWORD *)(a1 + 16);
    if ( (v16 & 1) != 0 )
    {
      v17 = (_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v17 == 5 )
      {
        MiValidVirtualizationFault(a1, v17, a2);
        MiGetVirtualFaultPageInfo((__int64)v17, *(_QWORD *)a1);
        v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
        v21 = v20 >> 12;
        v22 = 1LL;
        for ( i = (v18 >> 12) & 0xFFFFFFFFFLL; v4; --v4 )
        {
          v24 = v21;
          v21 >>= 9;
          v25 = v22 * (v24 & 0x1FF);
          v22 <<= 9;
          i += v25;
        }
        *v19 ^= (i ^ *v19) & 0xFFFFFFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}
