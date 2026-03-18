/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x1C0019C90
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C000C190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001A77C (RootHub_HandlePortStatusChangeEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001AE58 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C001F6AC (WPP_RECORDER_SF_dDd.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbp
  char v9; // r15
  unsigned __int64 v10; // rdi
  unsigned int *v11; // r14
  int Ulong; // eax
  int v13; // ebx
  char v14; // al
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned __int16 v18; // r14
  int v19; // ebx
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp+8h]

  v5 = a1[1];
  if ( *(_BYTE *)(v5 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      3969);
    v5 = a1[1];
  }
  v7 = *(_QWORD *)(v5 + 88);
  v8 = a1[6];
  v9 = 0;
  v10 = (unsigned __int64)(a2 - 1) << 6;
  v11 = (unsigned int *)(a1[5] + 16LL * (a2 - 1));
  v23 = v7;
  DynamicLock_Acquire(*(_QWORD *)(v10 + v8 + 16));
  Ulong = XilRegister_ReadUlong(v7, v11);
  v13 = Ulong;
  if ( *(_BYTE *)(v10 + v8 + 1) == 3
    && (Ulong & 0x400000) != 0
    && (Ulong & 0x1E0) == 0
    && (*(_QWORD *)(a1[1] + 272LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (v13 & 0x1E0) != 0x1E0 || !a3 && (v13 & 0x400000) == 0 )
    goto LABEL_20;
  v9 = 1;
  if ( *(_BYTE *)(v10 + v8 + 6) == 1 )
    goto LABEL_20;
  v14 = *(_BYTE *)(v10 + v8 + 1);
  *(_BYTE *)(v10 + v8 + 6) = 1;
  if ( v14 != 2 )
  {
    if ( v14 == 3 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        3u,
        0xBu,
        0xCAu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        a2,
        v13);
      v19 = v13 & 0xE40C200 | 0x10000;
      LODWORD(v21) = v19;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xCBu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v21);
      XilRegister_WriteUlong(v23, v11, v19);
      LODWORD(v22) = XilRegister_ReadUlong(v23, v11);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xCCu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v22);
    }
LABEL_20:
    DynamicLock_Release(*(_QWORD *)(a1[6] + v10 + 16));
    return v9;
  }
  DynamicLock_Release(*(_QWORD *)(a1[6] + v10 + 16));
  if ( *(int *)(v10 + v8 + 48) <= 0 )
    v18 = 50;
  else
    v18 = *(_WORD *)(v10 + v8 + 52);
  WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v15, v16, v17);
  ExSetTimer(*(_QWORD *)(v10 + v8 + 32), -10000LL * v18, 0LL, 0LL);
  return v9;
}
