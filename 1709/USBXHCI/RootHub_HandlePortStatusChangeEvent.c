/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x1C0020124
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C001DE94 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0006330 (RootHub_DetectAndAcknowledgePortResume.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     RootHub_DumpPortData @ 0x1C001F9CC (RootHub_DumpPortData.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00202E0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned int *v9; // rdi
  int Ulong; // ebx
  __int64 result; // rax
  unsigned int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  if ( *(_BYTE *)(a1[1] + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4126);
  v4 = a1[1];
  v5 = *(unsigned __int8 *)(a2 + 3);
  v6 = *(_QWORD *)(v4 + 88);
  v12 = v5;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v4 + 72),
    4u,
    0xBu,
    0xCDu,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v12);
  v7 = 16LL * (v5 - 1);
  RootHub_DumpPortData((unsigned int *)(v7 + a1[5]), a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v5) )
  {
    LODWORD(v13) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xCEu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v13);
    v8 = (unsigned __int64)(v5 - 1) << 6;
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + v8 + 16));
    v9 = (unsigned int *)(a1[5] + v7);
    Ulong = XilRegister_ReadUlong(v6, v9);
    LODWORD(v14) = Ulong;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xCFu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v14);
    XilRegister_WriteUlong(v6, v9, Ulong & 0xE00C200 | 0xFA0000);
    DynamicLock_Release(*(_QWORD *)(a1[6] + v8 + 16));
    LODWORD(v15) = XilRegister_ReadUlong(v6, v9);
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xD0u,
             (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
             v15);
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v5, 0);
    if ( !(_BYTE)result )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C004F870)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32, *a1);
  }
  return result;
}
