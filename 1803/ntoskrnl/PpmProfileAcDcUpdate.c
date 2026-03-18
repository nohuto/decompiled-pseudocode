/*
 * XREFs of PpmProfileAcDcUpdate @ 0x14076F08C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14076A578 (PpmCompareAndApplyPolicySettings.c)
 */

void PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_1403AAA2C;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = PpmCurrentProfile + 5;
  do
  {
    v4 = *v3 | v3[336];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 & 0x3FFFD8030FC0LL;
  PpmCompareAndApplyPolicySettings(
    &v5,
    (__int64)PpmCurrentProfile + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFF580uLL) + 2728,
    (__int64)&PpmCurrentProfile[336 * v0 + 5]);
}
