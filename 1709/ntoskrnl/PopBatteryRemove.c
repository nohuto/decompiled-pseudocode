/*
 * XREFs of PopBatteryRemove @ 0x1406FE840
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (_QWORD *)(a1 + 64);
  if ( *v2 )
  {
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140365914;
    ++dword_140365978;
    byte_140365918 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_140365910 )
  {
    PopAcquirePolicyLock();
    if ( byte_14036631E )
    {
      byte_14036631E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
}
