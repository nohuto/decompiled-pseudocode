/*
 * XREFs of PpmProfileAcDcUpdate @ 0x1406D5E40
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406CEFD0 (PpmCompareAndApplyPolicySettings.c)
 */

LONG PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_14034BB2C;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = PpmCurrentProfile + 5;
  do
  {
    v4 = *v3 | v3[175];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v6 = v1 & 0x7FFD8030FC0LL;
  return PpmCompareAndApplyPolicySettings(
           &v6,
           (__int64)PpmCurrentProfile + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFFA88uLL) + 1440,
           (__int64)&PpmCurrentProfile[175 * v0 + 5]);
}
