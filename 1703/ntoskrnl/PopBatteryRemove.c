/*
 * XREFs of PopBatteryRemove @ 0x1406CAA10
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopBatteryQueueWork @ 0x14014A7C0 (PopBatteryQueueWork.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (_QWORD *)(a1 + 64);
  if ( *v2 )
  {
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_14034B394;
    ++dword_14034B3F8;
    byte_14034B398 = 1;
    PopBatteryQueueWork(3u);
  }
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_14034B390 )
  {
    PopAcquirePolicyLock();
    if ( byte_14034BC9E )
    {
      byte_14034BC9E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
  if ( !dword_14034B394 )
  {
    Buffer = 0;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &Buffer, 4u, 0LL, 0LL, 0, 0);
  }
}
