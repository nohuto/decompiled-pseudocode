/*
 * XREFs of PostPointerEventMessage @ 0x1C00B0620
 * Callers:
 *     PostDeviceNotification @ 0x1C00B173C (PostDeviceNotification.c)
 *     ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01A52D0 (-NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C01A7520 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C01A7540 (PostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     PHIDTtoPT @ 0x1C0023614 (PHIDTtoPT.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

void __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v9; // r11
  struct _LIST_ENTRY *v10; // r10
  BOOL v11; // r8d

  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
    a3 = (int)PHIDTtoPT(a1);
  while ( Flink != &gPointerDeviceClients )
  {
    v9 = Flink[-1].Flink;
    v10 = v9[1].Flink;
    if ( a4 )
    {
      if ( a2 == 568 && a3 - 1 <= 1 )
      {
        v11 = v10[25].Blink[2].Blink->Flink == (struct _LIST_ENTRY *)gSessionId;
LABEL_10:
        if ( !v11 )
          goto LABEL_15;
      }
      else if ( v10[25].Blink != (struct _LIST_ENTRY *)grpdeskRitInput )
      {
        v11 = 0;
        goto LABEL_10;
      }
      PostInputMessage(
        (struct tagMLIST *)v10[24].Flink,
        (InputTransform *)v9,
        a2,
        a3,
        *(_QWORD *)(a1 + 712),
        0,
        0LL,
        0LL,
        0,
        0LL,
        0LL,
        0LL);
      goto LABEL_15;
    }
    if ( LODWORD(Flink[-1].Blink) && v10[25].Blink == (struct _LIST_ENTRY *)grpdeskRitInput )
      PostMessage(Flink[-1].Flink, a2, a3, *(_QWORD *)(a1 + 712));
LABEL_15:
    Flink = Flink->Flink;
  }
}
