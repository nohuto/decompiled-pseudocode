/*
 * XREFs of EtwUnregisterTraceGuids @ 0x180060B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 */

__int64 __fastcall EtwUnregisterTraceGuids(REGHANDLE a1)
{
  LONG v1; // eax
  unsigned __int32 v2; // ebx
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  v1 = EtwNotificationUnregister(a1, &Context);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Context);
  return v2;
}
