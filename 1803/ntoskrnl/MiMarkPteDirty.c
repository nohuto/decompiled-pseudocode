/*
 * XREFs of MiMarkPteDirty @ 0x140048BD0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x140048EC8 (MiLockWorkingSetOptimal.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiMarkPteDirty(unsigned __int64 a1)
{
  __int64 result; // rax
  __int16 v3; // dx
  __int64 AnyMultiplexedVm; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int16 v9; // r8
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
  {
    if ( (MiFlags & 0x1800000) != 0 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) != 1 && (v3 & 1) != 0 )
      {
        if ( (v3 & 0x20) != 0 && (v3 & 0x42) != 0 )
          return result;
        result = (__int64)KeGetCurrentThread();
        v8 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1544LL);
        if ( v8 )
        {
          result = *(_QWORD *)(v8 + 8 * ((a1 >> 3) & 0x1FF));
          v9 = v3 | 0x20;
          if ( (result & 0x20) == 0 )
            v9 = v3;
          v3 = v9;
          if ( (result & 0x42) != 0 )
            v3 = v9 | 0x42;
        }
      }
    }
  }
  if ( (v3 & 0x42) == 0 && (v3 & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
    v5 = MiLockWorkingSetOptimal(AnyMultiplexedVm, a1, &v10);
    v6 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v6 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v6 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    return MiUnlockWorkingSetShared(AnyMultiplexedVm, v10, v7);
  }
  return result;
}
