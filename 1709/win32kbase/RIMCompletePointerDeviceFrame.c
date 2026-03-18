/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C010D1BC
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00AA4DC (RIMSuppressAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0110514 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C011098C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C001B01C (rimFindHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C010BBEC (rimProcessCompleteFrame.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C010D800 (WPP_RECORDER_SF_ddd.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C010D8EC (rimCountContactsToDeliverWithFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010DA08 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C010DC08 (rimReclaimHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C010DC60 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C010FAE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  LARGE_INTEGER *v8; // r8
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  _QWORD *HoldingFrame; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v18; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER *v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 472);
  v3 = 0;
  LODWORD(v19) = 0;
  v20 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x35u,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  rimCountContactsToDeliverWithFrame(v2, &v20, &v19);
  v6 = v20;
  v7 = (unsigned int)v19;
  if ( v20 )
  {
    RIMUpdatePrimaryAndFinalizePointerFlags(a1, v2);
    if ( (unsigned int)rimStorePointersInHoldingFrame(a1, a2, v6, v7) )
    {
      v19 = 0LL;
      if ( (unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, a2, &v19) )
      {
        v8 = v19;
        v3 = 1;
        v19[6].HighPart = v7;
        if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
        {
          v8[4] = *(LARGE_INTEGER *)(a2 + 24);
          v8[6].LowPart = 1;
        }
        rimProcessCompleteFrame(a1, a2, v8);
        goto LABEL_13;
      }
      v9 = 54;
    }
    else
    {
      v9 = 55;
    }
    v10 = 20;
  }
  else
  {
    v9 = 56;
    v10 = 19;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    v10,
    v9,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( HoldingFrame )
    rimReclaimHoldingFrame(v13, v12, HoldingFrame);
LABEL_13:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, a2, v3, 0LL);
  WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v18, v3, v7, v6);
  return v3;
}
