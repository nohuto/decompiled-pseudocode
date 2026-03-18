/*
 * XREFs of RIMCompletePointerDeviceFrame @ 0x1C010E278
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0111A34 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0111EAC (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     rimFindHoldingFrame @ 0x1C0095120 (rimFindHoldingFrame.c)
 *     rimProcessCompleteFrame @ 0x1C010CCA0 (rimProcessCompleteFrame.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C010E8B8 (WPP_RECORDER_SF_ddd.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C010E9A4 (rimCountContactsToDeliverWithFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010EAB8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C010ECB8 (rimReclaimHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C010ED10 (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0111020 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01112F4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 */

__int64 __fastcall RIMCompletePointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v6; // edx
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  LARGE_INTEGER *v9; // r8
  int v10; // r9d
  int v11; // r8d
  _QWORD *HoldingFrame; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v19; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER *v20; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 472);
  v3 = 0;
  LODWORD(v20) = 0;
  v4 = a2;
  v21 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    53,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  rimCountContactsToDeliverWithFrame(v2, &v21, &v20);
  v7 = v21;
  v8 = (unsigned int)v20;
  if ( v21 )
  {
    RIMUpdatePrimaryAndFinalizePointerFlags(a1, v2);
    if ( (unsigned int)rimStorePointersInHoldingFrame(a1, v4, v7, v8) )
    {
      v20 = 0LL;
      if ( (unsigned int)rimGetCompleteFrameAndReleaseHoldingFrame(a1, v4, &v20) )
      {
        v9 = v20;
        v3 = 1;
        v20[6].HighPart = v8;
        if ( (*(_DWORD *)(v4 + 184) & 0x1000) != 0 )
        {
          v9[4] = *(LARGE_INTEGER *)(v4 + 24);
          v9[6].LowPart = 1;
        }
        rimProcessCompleteFrame(a1, v4, v9);
        goto LABEL_13;
      }
      v10 = 54;
    }
    else
    {
      v10 = 55;
    }
    v11 = 20;
  }
  else
  {
    v10 = 56;
    v11 = 19;
  }
  LOBYTE(v6) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v6,
    v11,
    v10,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, v4);
  if ( HoldingFrame )
    rimReclaimHoldingFrame(v14, v13, HoldingFrame);
LABEL_13:
  RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v4, v3, 0LL);
  WPP_RECORDER_SF_ddd(WPP_GLOBAL_Control->DeviceExtension, v15, v16, v17, v19, v3, v8, v7);
  return v3;
}
