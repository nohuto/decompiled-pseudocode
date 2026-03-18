/*
 * XREFs of Controller_D0EntryRestoreState @ 0x1C0010234
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_I @ 0x1C0006B4C (WPP_RECORDER_SF_I.c)
 *     McTemplateK0p @ 0x1C0007558 (McTemplateK0p.c)
 *     McTemplateK0pq @ 0x1C00077FC (McTemplateK0pq.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_D0EntryRestoreState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int16 Ulong; // ax
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  int v12; // eax
  __int16 v13; // ax
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // edi
  __int64 v17; // r8
  __int64 v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+20h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3296LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x67u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0p(v2, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_START, v3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = v5 + 4;
  Ulong = XilRegister_ReadUlong(v4, v5 + 4);
  if ( (Ulong & 1) == 0 )
  {
    v8 = 104;
LABEL_8:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, v8, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    goto LABEL_21;
  }
  if ( (Ulong & 0x100) != 0 )
  {
    v8 = 105;
    goto LABEL_8;
  }
  if ( (Ulong & 0x200) != 0 )
  {
    v8 = 106;
    goto LABEL_8;
  }
  v11 = 20;
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4u, 4u, 0x6Bu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  KeQueryUnbiasedInterruptTime();
  v12 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v5);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v5, v12 | 0x200u);
  while ( 1 )
  {
    v13 = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), v6);
    if ( (v13 & 0x400) != 0 )
      break;
    if ( (v13 & 0x200) == 0 )
    {
      KeQueryUnbiasedInterruptTime();
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), 4u, v15, 0x6Du, v20);
      v16 = 0;
      goto LABEL_22;
    }
    if ( !v11 )
    {
      KeQueryUnbiasedInterruptTime();
      WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), 2u, v14, 0x6Eu, v20);
      goto LABEL_21;
    }
    Interval.QuadPart = -2000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    --v11;
  }
  KeQueryUnbiasedInterruptTime();
  WPP_RECORDER_SF_I(*(_QWORD *)(a1 + 72), 2u, v17, 0x6Cu, v20);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v6, 1024LL);
LABEL_21:
  v16 = -1073741630;
LABEL_22:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
  {
    LODWORD(v19) = v16;
    McTemplateK0pq(v9, &USBXHCI_ETW_EVENT_CONTROLLER_RESTORE_STATE_COMPLETE, v10, *(_QWORD *)(a1 + 8), v19);
  }
  if ( v16 < 0 )
    ++*(_DWORD *)(a1 + 404);
  return (unsigned int)v16;
}
