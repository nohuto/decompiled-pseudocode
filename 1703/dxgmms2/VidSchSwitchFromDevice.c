/*
 * XREFs of VidSchSwitchFromDevice @ 0x1C00AC9E0
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B6D8 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0001F8C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C006C8E0 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSwitchFromDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v5[16]; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT *p_Event; // [rsp+E0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v1 + 2844) & 1) == 0 && !VidSchIsTDRPending(*(_QWORD *)(a1 + 32)) )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 0;
    v5[3] = VidSchiSwitchNodeFromDevice;
    LODWORD(v5[5]) = 4;
    v5[4] = &Event;
    v5[6] = a1;
    VidSchSubmitGlobalCommand(v1, (__int64)v5);
    v3 = *(_QWORD *)(a1 + 32);
    p_Event = &Event;
    VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
}
