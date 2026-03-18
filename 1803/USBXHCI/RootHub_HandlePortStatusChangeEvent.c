/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1C001A77C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0019C90 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DumpPortData @ 0x1C001A060 (RootHub_DumpPortData.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001AA4C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

char __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned int *v9; // rdi
  int Ulong; // ebx
  char result; // al
  unsigned int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  v4 = a1[1];
  if ( *(_BYTE *)(v4 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4126);
    v4 = a1[1];
  }
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(unsigned __int8 *)(a2 + 3);
  v12 = v6;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 72),
    4u,
    0xBu,
    0xCDu,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v12);
  v7 = 16LL * (v6 - 1);
  RootHub_DumpPortData((unsigned int *)(v7 + a1[5]), a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v6) )
  {
    LODWORD(v13) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xCEu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v13);
    v8 = (unsigned __int64)(v6 - 1) << 6;
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + v8 + 16));
    v9 = (unsigned int *)(a1[5] + v7);
    Ulong = XilRegister_ReadUlong(v5, v9);
    LODWORD(v14) = Ulong;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xCFu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v14);
    XilRegister_WriteUlong(v5, v9, Ulong & 0xE00C200 | 0xFA0000);
    DynamicLock_Release(*(_QWORD *)(a1[6] + v8 + 16));
    LODWORD(v15) = XilRegister_ReadUlong(v5, v9);
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xD0u,
             (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
             v15);
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v6, 0);
    if ( !result )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C004C870)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, *a1);
  }
  return result;
}
