/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x180087650
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x180001AE0 (TppETWCallbackDequeue.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall TppExecuteWaitTimerCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r8

  v3 = a2 - 200;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    TppETWCallbackDequeue(*(_QWORD *)(v3 + 144), a2, *(_QWORD *)(v3 + 80), *(_QWORD *)(v3 + 88), *(_QWORD *)(v3 + 104));
  return TppExecuteWaitCallback(Instance, (char *)v3, 0x102u);
}
