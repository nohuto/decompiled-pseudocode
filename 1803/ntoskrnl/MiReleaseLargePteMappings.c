/*
 * XREFs of MiReleaseLargePteMappings @ 0x140267410
 * Callers:
 *     MiEmptyPteBins @ 0x1400DAC70 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1401109A0 (MiInsertCachedPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     MiLockPageTable @ 0x140185E74 (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x14018626C (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  __int64 v6; // r14
  __int64 v7; // rdx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 PteTimeStamp; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r11
  unsigned __int64 v19; // r13
  __int64 v20; // r10
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // eax
  signed __int32 v30[8]; // [rsp+0h] [rbp-158h] BYREF
  unsigned __int8 v31; // [rsp+20h] [rbp-138h]
  __int64 v32; // [rsp+28h] [rbp-130h]
  __int64 v33; // [rsp+30h] [rbp-128h]
  _DWORD *v34; // [rsp+38h] [rbp-120h]
  unsigned __int64 v35; // [rsp+40h] [rbp-118h]
  __int64 v36; // [rsp+48h] [rbp-110h]
  int v37; // [rsp+50h] [rbp-108h] BYREF
  __int16 v38; // [rsp+54h] [rbp-104h]
  __int64 v39; // [rsp+58h] [rbp-100h]
  __int64 v40; // [rsp+60h] [rbp-F8h]
  __int64 v41; // [rsp+68h] [rbp-F0h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16) >> 9;
  v34 = a2;
  v6 = (v4 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = 20LL;
  v37 = 0;
  v38 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  do
  {
    v9 = v6 + 8 * v7;
    v12 = MI_READ_PTE_LOCK_FREE(v9);
    if ( (v12 & 0xF000) == 0x1000 )
    {
      PteTimeStamp = 1LL;
    }
    else
    {
      v14 = MI_READ_PTE_LOCK_FREE(v9 + 8);
      PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v14, v15, v16, v17);
    }
    v32 = (unsigned int)MiGetPteTimeStamp(v12, v10, v11, v12);
    v35 = PteTimeStamp << 21;
    v19 = (((__int64)((v9 << 25) - v18) >> 16 << 25) - v18) >> 16;
    v33 = PteTimeStamp + v20;
    v21 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTable((__int64)AnyMultiplexedVm, v21);
    if ( PteTimeStamp )
    {
      do
      {
        *(_QWORD *)v9 = ZeroPte;
        if ( MiPteInShadowRange(v9) )
          MiWritePteShadow(v23, v22, v24);
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)&v37, 1u, v9);
        v9 += 8LL;
        if ( (v9 & 0xFFF) == 0 && v3 + 1 < PteTimeStamp )
        {
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v21);
          v21 += 8LL;
          MiLockPageTable((__int64)AnyMultiplexedVm, v21);
        }
        ++v3;
      }
      while ( v3 < PteTimeStamp );
    }
    MiUnlockPageTable((__int64)AnyMultiplexedVm, v21);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v31, v25);
    if ( a3 )
    {
      MiFlushTbList((__int64)&v37, v26, v27);
      v3 = 0;
      if ( v32 )
      {
        _InterlockedOr(v30, 0);
        v28 = KiTbFlushTimeStamp - *v34;
        a3 = v28 <= 2 && ((*v34 & 1) != 0 || v28 < 2);
      }
    }
    else
    {
      v3 = 0;
    }
    MiReturnSystemVa(v19, v19 + v35, 14);
    v7 = v32;
  }
  while ( v32 );
  return v33;
}
