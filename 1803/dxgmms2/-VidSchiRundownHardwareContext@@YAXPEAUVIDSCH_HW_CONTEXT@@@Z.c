/*
 * XREFs of ?VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0031084
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108 (-VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0031278 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiRundownHardwareContext(struct VIDSCH_HW_CONTEXT *a1)
{
  char *v1; // rsi
  char *i; // rbx
  _QWORD *v4; // r14

  v1 = (char *)a1 + 136;
  for ( i = (char *)*((_QWORD *)a1 + 17); i != v1; i = *(char **)i )
  {
    v4 = i + 88;
    *((_QWORD *)i + 13) = i + 88;
    while ( (_QWORD *)*v4 != v4 )
      VidSchiRundownHardwarePacket((struct _VIDSCH_QUEUE_PACKET *)(*v4 - 32LL), (struct VIDSCH_HW_QUEUE *)(i - 8));
    VidSchiSetHwQueueState(i - 8, 0LL);
  }
  VidSchiCheckPendingDeviceCommand(*((_QWORD **)a1 + 1));
}
