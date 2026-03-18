/*
 * XREFs of VidSchiSubmitDeviceCommand @ 0x1C0071560
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C007D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00B3990 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C000F018 (VidSchiProcessCompletedQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiSubmitDeviceCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = *((_DWORD *)a1 + 82);
  if ( v1 == 5 || v1 == 6 )
    (*((void (__fastcall **)(char *))a1 + 39))((char *)a1 + 336);
  else
    (*((void (__fastcall **)(_QWORD))a1 + 39))(*((_QWORD *)a1 + 42));
  return VidSchiProcessCompletedQueuePacket(a1, v3, v4);
}
