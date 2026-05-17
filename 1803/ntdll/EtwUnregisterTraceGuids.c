/*
 * XREFs of EtwUnregisterTraceGuids @ 0x180007FE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = EtwNotificationUnregister(a1, &v4);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  return v2;
}
