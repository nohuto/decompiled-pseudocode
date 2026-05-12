/*
 * XREFs of RaidAdapterRemoveUnit @ 0x1C0014BE0
 * Callers:
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0014B94 (RaidBusEnumeratorReleaseUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C003E42C (RaidUnitConvertToZombieUnit.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00069A0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A30 (RaidAdapterAcquireInterruptLock.c)
 *     StorFindDictionary @ 0x1C0006B0C (StorFindDictionary.c)
 */

void __fastcall RaidAdapterRemoveUnit(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  int v5; // r8d
  KIRQL v6; // bp
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = RaidAdapterAcquireInterruptLock(a1);
  v5 = *(_DWORD *)(a2 + 88);
  v12 = 0LL;
  v6 = v4;
  if ( (int)StorFindDictionary(
              a1 + 144,
              BYTE2(v5) | (unsigned __int64)((((unsigned __int8)v5 << 8) | (unsigned int)BYTE1(v5)) << 8),
              &v12) >= 0 )
  {
    v7 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v8 = (_QWORD *)v12[1], (_QWORD *)*v8 != v12) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    --*(_DWORD *)(a1 + 144);
  }
  RaidAdapterReleaseInterruptLock(a1, v6);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v9 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(v9 + 8) != a2 + 48 || (v10 = *(_QWORD **)(a2 + 56), *v10 != a2 + 48) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  --*(_DWORD *)(a1 + 136);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
