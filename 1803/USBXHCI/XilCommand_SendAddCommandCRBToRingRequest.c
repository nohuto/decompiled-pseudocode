/*
 * XREFs of XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0005FBC
 * Callers:
 *     XilCommand_AddCommandCRBToRing @ 0x1C0005878 (XilCommand_AddCommandCRBToRing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v3; // r9d
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r15
  size_t v9; // rbp
  char *PoolWithTag; // rax
  char *v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  __int64 v17; // r9
  const char *v18; // rcx
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 80);
  v3 = -1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v2 + 72 >= v2 )
    v3 = v2 + 72;
  v7 = 0;
  v8 = *(_QWORD *)(v6 + 112);
  if ( v2 + 72 >= v2 )
    v7 = v3;
  v9 = v7;
  PoolWithTag = (char *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v7, 0x49434858u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), 2u, 7u, 0x13u, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids);
    Debug_FreAssertMsg(
      "Allocate(sendCommandTrbToRingIn) failed",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
      517LL);
    return;
  }
  memset(PoolWithTag, 0, v9);
  *((_QWORD *)v11 + 3) = *(_QWORD *)(a1 + 32);
  *((_DWORD *)v11 + 8) = 18;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)(a2 + 24);
  v12 = *(_DWORD *)(a2 + 80);
  if ( v12 )
  {
    memmove(v11 + 72, *(const void **)(a2 + 72), v12);
    *((_DWORD *)v11 + 17) = *(_DWORD *)(a2 + 80);
  }
  *((_DWORD *)v11 + 16) = *(_DWORD *)(a2 + 84);
  v13 = *(_DWORD *)(a2 + 84);
  if ( v13 == 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 560LL);
  }
  else if ( v13 == 2 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1312LL);
  }
  else
  {
    if ( v13 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), 2u, 7u, 0x14u, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids);
      v17 = 570LL;
      v18 = "Crb->InputContextType is invalid";
      goto LABEL_20;
    }
    v14 = 0LL;
  }
  *((_QWORD *)v11 + 7) = v14;
  v15 = SecureChannel_SendRequestSynchronously(v8, (_DWORD)v11, v9, (unsigned int)&v19, 4);
  if ( v15 >= 0 )
  {
    if ( v19 >= 0 )
      goto LABEL_21;
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v16, 7, 22, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v19);
    v17 = 593LL;
    v18 = "IOCTL succeeded but CommandAddCommandTRBToRing failed in VTL-1 failed";
LABEL_20:
    Debug_FreAssertMsg(v18, 0LL, "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c", v17);
    goto LABEL_21;
  }
  LOBYTE(v16) = 2;
  WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v16, 7, 21, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v15);
LABEL_21:
  ExFreePoolWithTag(v11, 0x49434858u);
}
