/*
 * XREFs of sub_1800817D0 @ 0x1800817D0
 * Callers:
 *     RtlLockCurrentThread @ 0x180081720 (RtlLockCurrentThread.c)
 * Callees:
 *     ZwLockVirtualMemory @ 0x18009CB90 (ZwLockVirtualMemory.c)
 */

__int64 sub_1800817D0()
{
  struct _TEB *v0; // rdx
  char *StackBase; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rcx
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  StackBase = (char *)v0->NtTib.StackBase;
  v2 = (unsigned __int64)v0->DeallocationStack + *(unsigned int *)&v0->ReservedPad1 + 20480;
  for ( i = (unsigned __int64)(StackBase - 4096); i >= v2; i -= 4096LL )
    ;
  v6 = (__int64)v0->DeallocationStack + *(unsigned int *)&v0->ReservedPad1 + 20480;
  v5 = &StackBase[-v2];
  return ZwLockVirtualMemory(-1LL, &v6, &v5, 1LL);
}
