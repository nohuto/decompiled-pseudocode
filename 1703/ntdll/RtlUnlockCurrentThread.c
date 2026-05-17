/*
 * XREFs of RtlUnlockCurrentThread @ 0x18008BD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BE18 @ 0x18008BE18 (sub_18008BE18.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A8A90 (ZwUnlockVirtualMemory.c)
 */

__int64 RtlUnlockCurrentThread()
{
  struct _TEB *v0; // rdx
  unsigned int LockCount; // eax
  unsigned int v2; // eax
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return 3221225514LL;
  v2 = LockCount - 1;
  v0->LockCount = v2;
  if ( !v2 )
  {
    if ( (int)ZwQueryVirtualMemory(-1LL, v0, 0LL, v4, 48LL, 0LL) >= 0 )
    {
      v6 = v4[0];
      v5 = v4[3];
      ZwUnlockVirtualMemory(-1LL, &v6, &v5, 1LL);
    }
    sub_18008BE18();
  }
  return 0LL;
}
