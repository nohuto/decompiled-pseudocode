/*
 * XREFs of TppExecuteWaitTimerCallback @ 0x180087650
 * Callers:
 *     <none>
 * Callees:
 *     TppETWCallbackDequeue @ 0x180001AE0 (TppETWCallbackDequeue.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall TppExecuteWaitTimerCallback(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r8

  v3 = (__int64 *)(a2 - 200);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  if ( *(_BYTE *)v5 )
    TppETWCallbackDequeue(v3[18], a2, v3[10], v3[11], v3[13]);
  return TppExecuteWaitCallback(a1, (__int64)v3, 0x102u);
}
