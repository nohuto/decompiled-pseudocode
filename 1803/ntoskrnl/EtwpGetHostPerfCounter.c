/*
 * XREFs of EtwpGetHostPerfCounter @ 0x1402AFA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 EtwpGetHostPerfCounter()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  ((void (__fastcall *)(__int64 *))off_140398AC0)(&v1);
  return v1;
}
