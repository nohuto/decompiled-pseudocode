/*
 * XREFs of MiWriteAwePtes @ 0x140262D60
 * Callers:
 *     NtMapUserPhysicalPages @ 0x140750614 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140750968 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiWriteAwePtes(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 ValidPte; // rdi
  unsigned int v10; // r12d
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // al
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned __int64 v15; // r13
  BOOL v16; // eax
  __int64 v17; // rcx
  char v18; // r10
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 result; // rax
  unsigned __int8 v24; // [rsp+20h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v30; // [rsp+54h] [rbp-ACh]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]

  v6 = a3;
  v28 = a3;
  v7 = a2;
  v27 = a2;
  ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, 2147483652LL, a4);
  v31 = 20LL;
  v29 = 1;
  v30 = 0;
  v10 = 0;
  v32 = 0LL;
  v11 = 0LL;
  v33 = 0LL;
  v12 = MiLockWorkingSetShared(a1);
  v24 = v12;
  if ( a4 )
  {
    do
    {
      if ( v6 )
      {
        a5 = ((*(_QWORD *)(v6 + 8LL * v10) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v7 && *(_QWORD *)(v7 + 8LL * v10) )
          v14 = ValidPte;
        else
          v14 = ZeroPte;
      }
      else
      {
        v14 = ZeroPte;
        if ( v7 )
          v14 = ValidPte;
      }
      if ( (v14 & 1) != 0 )
        v14 ^= (v14 ^ (*(_QWORD *)(v7 + 8LL * v10) << 12)) & 0xFFFFFFFFF000LL;
      v15 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v11 != v15 )
      {
        if ( v11 )
        {
          MiFlushTbList((__int64)&v29, 0x7FFFFFFFF8LL, v13);
          MiUnlockPageTableInternal(a1, v11);
        }
        v11 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(a1, v15, 0LL);
      }
      v26 = MI_READ_PTE_LOCK_FREE(a5);
      v16 = MiPteInShadowRange(a5);
      *(_QWORD *)a5 = v14;
      if ( v16 )
        MiWritePteShadow(v17, v14, v13);
      if ( (v18 & 1) != 0 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(48
                                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26) >> 12) & 0xFFFFFFFFFLL)
                                    - 0x57FFFFFFFF8LL),
          0LL);
        MiInsertTbFlushEntry((__int64)&v29, (__int64)((a5 << 25) - (v19 << 25)) >> 16, 1LL, 0);
      }
      a5 += 8LL;
      if ( (++v10 & 0x3F) == 0
        && ((unsigned int)MiWorkingSetIsContended(a1)
         || (unsigned int)MiPageTableLockIsContended(v21, v11)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList((__int64)&v29, v20, v13);
        MiUnlockPageTableInternal(a1, v11);
        v11 = 0LL;
        MiUnlockWorkingSetShared(a1, v24, v22);
        result = v10;
        if ( v10 == a4 )
          return result;
        MiLockWorkingSetShared(a1);
      }
      v7 = v27;
      v6 = v28;
    }
    while ( v10 < a4 );
    if ( v11 )
    {
      MiFlushTbList((__int64)&v29, 0x7FFFFFFFF8LL, v13);
      MiUnlockPageTableInternal(a1, v11);
    }
    v12 = v24;
  }
  return MiUnlockWorkingSetShared(a1, v12, v13);
}
