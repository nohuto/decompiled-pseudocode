/*
 * XREFs of VidSchSuspendAdapter @ 0x1C0056B00
 * Callers:
 *     <none>
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0005B40 (VidSchWaitForEvents.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00127CC (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0079320 (VidSchSubmitGlobalCommand.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v5; // ecx
  struct _KEVENT Event; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v8[16]; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT *p_Event; // [rsp+F0h] [rbp+67h] BYREF

  v3 = *(_DWORD *)(a1 + 964);
  v5 = *(_DWORD *)(a1 + 976);
  if ( v3 || v5 )
  {
    if ( !a3 )
      VidSchiSuspendResumeDevicesForPowerTransition(a1, 1);
    VidSchFlushDevice(*(_QWORD *)(a1 + 232));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = 0;
    v8[3] = VidSchiDrainFlipQueue;
    LODWORD(v8[5]) = 8;
    v8[4] = &Event;
    v8[6] = a1;
    VidSchSubmitGlobalCommand(a1, v8);
    p_Event = &Event;
    VidSchWaitForEvents(a1, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  return 0LL;
}
