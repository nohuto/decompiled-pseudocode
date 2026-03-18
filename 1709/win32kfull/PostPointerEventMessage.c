/*
 * XREFs of PostPointerEventMessage @ 0x1C00C6E10
 * Callers:
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C01CA4A0 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C01CA4C0 (PostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PHIDTtoPT @ 0x1C00B16A0 (PHIDTtoPT.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 */

void __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v9; // r11
  __int64 v10; // r10
  BOOL v11; // r8d
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-38h]

  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
    a3 = (int)PHIDTtoPT(a1);
  while ( Flink != &gPointerDeviceClients )
  {
    v9 = (__int64)Flink[-1].Flink;
    v10 = *(_QWORD *)(v9 + 16);
    if ( a4 )
    {
      if ( a2 == 568 && (unsigned __int64)(a3 - 1) <= 1 )
      {
        v11 = **(_DWORD **)(*(_QWORD *)(v10 + 432) + 40LL) == gSessionId;
LABEL_10:
        if ( !v11 )
          goto LABEL_15;
      }
      else if ( *(_QWORD *)(v10 + 432) != grpdeskRitInput )
      {
        v11 = 0;
        goto LABEL_10;
      }
      LODWORD(v13) = 0;
      LODWORD(v12) = 0;
      PostInputMessage(*(_QWORD *)(v10 + 408), v9, a2, a3, *(_QWORD *)(a1 + 696), v12, 0LL, 0LL, v13, 0LL, 0LL, 0LL);
      goto LABEL_15;
    }
    if ( LODWORD(Flink[-1].Blink) && *(_QWORD *)(v10 + 432) == grpdeskRitInput )
      PostMessage(Flink[-1].Flink, a2, a3, *(_QWORD *)(a1 + 696));
LABEL_15:
    Flink = Flink->Flink;
  }
}
