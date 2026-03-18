/*
 * XREFs of Controller_D0ExitSaveState @ 0x1C00075B4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C000D0C0 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C000D364 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_I @ 0x1C000D968 (WPP_RECORDER_SF_I.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
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
  __int64 v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // r8
  ULONGLONG UnbiasedInterruptTime; // r14
  int v13; // eax
  int i; // esi
  __int16 v15; // ax
  ULONGLONG v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r8d
  ULONGLONG v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // r8d
  ULONGLONG v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // r8d
  int v26; // [rsp+20h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3888LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x78u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(v3, &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_START, v4, *(_QWORD *)(a1 + 8));
  v5 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = v6 + 4;
  Ulong = XilRegister_ReadUlong(v5, v6 + 4);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (Ulong & 1) == 0 )
  {
    v10 = 121;
LABEL_8:
    WPP_RECORDER_SF_(v9, 2u, 4u, v10, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    goto LABEL_21;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    v10 = 122;
    goto LABEL_8;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    v10 = 123;
    goto LABEL_8;
  }
  WPP_RECORDER_SF_(v9, 4u, 4u, 0x7Cu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, v13 | 0x100u);
  for ( i = 20; ; --i )
  {
    v15 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v7);
    if ( (v15 & 0x400) != 0 )
      break;
    if ( (v15 & 0x100) == 0 )
    {
      v19 = KeQueryUnbiasedInterruptTime();
      v20 = (v19 - UnbiasedInterruptTime) / 0xA;
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v20, v21, 126, v26, (v19 - UnbiasedInterruptTime) / 0xA);
      goto LABEL_22;
    }
    if ( !i )
    {
      v16 = KeQueryUnbiasedInterruptTime();
      v17 = (v16 - UnbiasedInterruptTime) / 0x2710;
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v17, v18, 127, v26, (v16 - UnbiasedInterruptTime) / 0x2710);
      goto LABEL_21;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v22 = KeQueryUnbiasedInterruptTime();
  v23 = (v22 - UnbiasedInterruptTime) / 0x2710;
  LOBYTE(v23) = 2;
  WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), v23, v24, 125, v26, (v22 - UnbiasedInterruptTime) / 0x2710);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v7, 1024LL);
LABEL_21:
  v1 = -1073741630;
LABEL_22:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc),
      &USBXHCI_ETW_EVENT_CONTROLLER_SAVE_STATE_COMPLETE,
      v11,
      *(_QWORD *)(a1 + 8),
      v1);
  return v1;
}
