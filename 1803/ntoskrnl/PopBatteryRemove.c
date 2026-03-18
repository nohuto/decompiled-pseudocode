/*
 * XREFs of PopBatteryRemove @ 0x1407640B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x14062625C (PopResetCurrentPolicies.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_1403AA274;
    ++dword_1403AA2D8;
    byte_1403AA278 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((ULONG_PTR)&PopCB);
  if ( !--dword_1403AA270 )
  {
    PopAcquirePolicyLock();
    if ( byte_1403AAB7E )
    {
      byte_1403AAB7E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
}
