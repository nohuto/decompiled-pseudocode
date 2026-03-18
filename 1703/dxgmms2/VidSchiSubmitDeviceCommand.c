/*
 * XREFs of VidSchiSubmitDeviceCommand @ 0x1C006CD24
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiSubmitDeviceCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = *((_DWORD *)a1 + 76);
  if ( v1 == 5 || v1 == 6 )
    (*((void (__fastcall **)(char *))a1 + 36))((char *)a1 + 312);
  else
    (*((void (__fastcall **)(_QWORD))a1 + 36))(*((_QWORD *)a1 + 39));
  return VidSchiProcessCompletedQueuePacket(a1, v3, v4);
}
