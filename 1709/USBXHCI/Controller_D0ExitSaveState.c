/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C00104A4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0006B4C (WPP_RECORDER_SF_I.c)
 *     McTemplateK0p @ 0x1C0007558 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00077FC (McTemplateK0pq.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_D0ExitSaveState(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int16 Ulong; // ax
  unsigned __int16 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  int i; // esi
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+20h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3754LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x77u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(v3, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, v4, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = v6 + 4;
  Ulong = XilRegister_ReadUlong(v5, v6 + 4);
  if ( (Ulong & 1) == 0 )
  {
    v9 = 120;
LABEL_8:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, v9, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    goto LABEL_21;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    v9 = 121;
    goto LABEL_8;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    v9 = 122;
    goto LABEL_8;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x7Bu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  KeQueryUnbiasedInterruptTime();
  v11 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, v11 | 0x100u);
  for ( i = 20; ; --i )
  {
    v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    if ( (v13 & 0x400) != 0 )
      break;
    if ( (v13 & 0x100) == 0 )
    {
      KeQueryUnbiasedInterruptTime();
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), 4u, v15, 0x7Du, v19);
      goto LABEL_22;
    }
    if ( !i )
    {
      KeQueryUnbiasedInterruptTime();
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), 2u, v14, 0x7Eu, v19);
      goto LABEL_21;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  KeQueryUnbiasedInterruptTime();
  WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), 2u, v16, 0x7Cu, v19);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024LL);
LABEL_21:
  v1 = -1073741630;
LABEL_22:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v18) = v1;
    McTemplateK0pq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc),
      &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE,
      v10,
      *(_QWORD *)(a1 + 8),
      v18);
  }
  return v1;
}
