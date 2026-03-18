/*
 * XREFs of VidSchSwitchFromContext @ 0x1C006C800
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B6D8 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0001F8C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C006C8E0 (VidSchSubmitGlobalCommand.c)
 */

char __fastcall VidSchSwitchFromContext(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v6[16]; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT *p_Event; // [rsp+E0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v1 + 32);
  if ( v1 != *(_QWORD *)(v3 + 208) && (*(_BYTE *)(v3 + 2844) & 1) == 0 )
  {
    LOBYTE(v1) = VidSchIsTDRPending(*(_QWORD *)(v1 + 32));
    if ( !(_BYTE)v1 )
    {
      v1 = *(_QWORD *)(a1 + 96);
      if ( a1 == *(_QWORD *)(v1 + 224) )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        memset(v6, 0, sizeof(v6));
        LODWORD(v6[0]) = 0;
        v6[3] = VidSchiSwitchNodeFromContext;
        LODWORD(v6[5]) = 1;
        v6[4] = &Event;
        v6[6] = a1;
        VidSchSubmitGlobalCommand(v3, v6);
        p_Event = &Event;
        LOBYTE(v1) = VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
      }
    }
  }
  return v1;
}
