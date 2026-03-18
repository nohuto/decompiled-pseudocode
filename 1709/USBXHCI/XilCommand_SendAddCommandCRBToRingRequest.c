/*
 * XREFs of XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000F1B8
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C0008700 (memmove.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebp
  __int64 v6; // rsi
  __int64 v7; // r12
  char *PoolWithTag; // rax
  char *v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r9
  const char *v15; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 80);
  v3 = -1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v2 + 72 >= v2 )
    v3 = v2 + 72;
  v7 = *(_QWORD *)(v6 + 112);
  if ( v2 + 72 < v2 )
    v3 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v3, 0x49434858u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), 2u, 7u, 0x13u, (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids);
    Debug_FreAssertMsg(
      "Allocate(sendCommandTrbToRingIn) failed",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
      507LL);
    return;
  }
  memset(PoolWithTag, 0, v3);
  *((_QWORD *)v9 + 3) = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v9 + 8) = 18;
  *(_OWORD *)(v9 + 40) = *(_OWORD *)(a2 + 24);
  v10 = *(_DWORD *)(a2 + 80);
  if ( v10 )
  {
    memmove(v9 + 72, *(const void **)(a2 + 72), v10);
    *((_DWORD *)v9 + 17) = *(_DWORD *)(a2 + 80);
  }
  *((_DWORD *)v9 + 16) = *(_DWORD *)(a2 + 84);
  v11 = *(_DWORD *)(a2 + 84);
  if ( v11 == 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 560LL);
LABEL_13:
    *((_QWORD *)v9 + 7) = v12;
    goto LABEL_16;
  }
  if ( v11 == 2 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1312LL);
    goto LABEL_13;
  }
  if ( v11 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), 2u, 7u, 0x14u, (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids);
    v14 = 560LL;
    v15 = "Crb->InputContextType is invalid";
    goto LABEL_21;
  }
  *((_QWORD *)v9 + 7) = 0LL;
LABEL_16:
  v13 = SecureChannel_SendRequestSynchronously(v7, (_DWORD)v9, v3, (unsigned int)&v16, 4);
  if ( v13 >= 0 )
  {
    if ( v16 >= 0 )
      goto LABEL_22;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 72),
      2u,
      7u,
      0x16u,
      (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids,
      v16);
    v14 = 583LL;
    v15 = "IOCTL succeeded but CommandAddCommandTRBToRing failed in VTL-1 failed";
LABEL_21:
    Debug_FreAssertMsg(v15, 0LL, "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c", v14);
    goto LABEL_22;
  }
  WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), 2u, 7u, 0x15u, (__int64)&WPP_feebadd708d238b58d4835f0a8daaaf3_Traceguids, v13);
LABEL_22:
  ExFreePoolWithTag(v9, 0x49434858u);
}
