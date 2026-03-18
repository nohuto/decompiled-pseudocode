/*
 * XREFs of PpmProfileAcDcUpdate @ 0x14070BBB4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 */

LONG PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_1403661AC;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = (_QWORD *)(PpmCurrentProfile + 40);
  do
  {
    v4 = *v3 | v3[336];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v6 = v1 & 0x1FFFD8030FC0LL;
  return PpmCompareAndApplyPolicySettings(
           &v6,
           PpmCurrentProfile + 2728 + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFF580uLL),
           2688 * v0 + PpmCurrentProfile + 40);
}
