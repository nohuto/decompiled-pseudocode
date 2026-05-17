/*
 * XREFs of sub_18008BE18 @ 0x18008BE18
 * Callers:
 *     RtlUnlockCurrentThread @ 0x18008BD20 (RtlUnlockCurrentThread.c)
 * Callees:
 *     ZwUnlockVirtualMemory @ 0x1800A8A90 (ZwUnlockVirtualMemory.c)
 */

__int64 sub_18008BE18()
{
  struct _TEB *v0; // rdx
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  v1 = (char *)v0->NtTib.StackBase - ((char *)v0->DeallocationStack + *(unsigned int *)&v0->ReservedPad1 + 20480);
  v4 = (__int64)v0->DeallocationStack + *(unsigned int *)&v0->ReservedPad1 + 20480;
  v3 = v1;
  return ZwUnlockVirtualMemory(-1LL, &v4, &v3, 1LL);
}
