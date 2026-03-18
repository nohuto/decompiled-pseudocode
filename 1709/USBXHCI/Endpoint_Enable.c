/*
 * XREFs of Endpoint_Enable @ 0x1C00185D0
 * Callers:
 *     UsbDevice_UcxEvtEnable @ 0x1C00360C0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C000E0D8 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C00173A8 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0017504 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     Endpoint_Disable_Internal @ 0x1C001849C (Endpoint_Disable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001D4FC (WPP_RECORDER_SF_ddq.c)
 *     TR_Enable_Internal @ 0x1C0022D7C (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C002322C (TR_GetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_Enable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rsi
  PVOID PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int StreamContextArray; // edi
  unsigned __int16 v9; // r9
  __int64 DequeuePointer; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  _DWORD v21[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]
  char v23; // [rsp+68h] [rbp-40h]
  int v24; // [rsp+6Ch] [rbp-3Ch]
  char pszDest[16]; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_ddq(
    *(_QWORD *)(*(_QWORD *)a1 + 72LL),
    4,
    13,
    22,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL),
    *(_DWORD *)(a1 + 144),
    *(_QWORD *)(a1 + 24));
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 (__fastcall *)()))qword_1C004F898)(
         *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
         *(_QWORD *)(a1 + 24),
         Endpoint_Enable);
  v3 = v2;
  if ( !*(_BYTE *)(a1 + 37) )
  {
    StreamContextArray = TR_Enable_Internal(*(_QWORD *)(a1 + 88));
    if ( StreamContextArray < 0 )
    {
      v9 = 25;
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  if ( !v2 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( !v4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x98uLL, 0x49434858u);
      *(_QWORD *)(a1 + 128) = PoolWithTag;
      v4 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        StreamContextArray = -1073741670;
LABEL_16:
        LOBYTE(v6) = 1;
        Endpoint_Disable_Internal(a1, v6, v7);
        goto LABEL_27;
      }
      *(_QWORD *)(a1 + 136) = PoolWithTag;
      memset(PoolWithTag, 0, 0x98uLL);
      *(_QWORD *)v4 = a1;
      *(_DWORD *)(v4 + 8) = 1;
      *(_DWORD *)(v4 + 12) = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 48LL) = *(_QWORD *)(a1 + 88);
      StreamContextArray = XilEndpoint_AllocateStreamContextArray(v4);
      if ( StreamContextArray < 0 )
        goto LABEL_16;
    }
    StreamContextArray = TR_Enable_Internal(*(_QWORD *)(a1 + 88));
    if ( StreamContextArray < 0 )
    {
      v9 = 23;
LABEL_9:
      LODWORD(v20) = StreamContextArray;
      LODWORD(v19) = *(_DWORD *)(a1 + 144);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)a1 + 72LL),
        2u,
        0xDu,
        v9,
        (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
        v18,
        v19,
        v20);
      goto LABEL_15;
    }
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(a1 + 88));
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) = DequeuePointer;
    goto LABEL_11;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v2,
          off_1C004E368);
  *(_QWORD *)(a1 + 136) = v13;
  v4 = v13;
  if ( !*(_QWORD *)(v13 + 32) )
  {
    StreamContextArray = XilEndpoint_AllocateStreamContextArray(v13);
    if ( StreamContextArray < 0 )
      goto LABEL_16;
  }
  v14 = 1;
  if ( !*(_DWORD *)(v4 + 8) )
  {
LABEL_11:
    StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v4, v6, v7);
    if ( StreamContextArray < 0 )
      goto LABEL_16;
LABEL_12:
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)a1;
    v22 = 0LL;
    v21[1] = 0;
    v21[0] = 48;
    pszDest[0] = 0;
    v24 = 16;
    v23 = 0;
    v21[2] = 1024;
    v21[3] = 200;
    RtlStringCchPrintfA(
      pszDest,
      0x10uLL,
      "%02d SLT%02d DCI%02d",
      *(_DWORD *)(v12 + 176),
      *(unsigned __int8 *)(v11 + 135),
      *(_DWORD *)(a1 + 144));
    if ( (unsigned int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v21, a1 + 80) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 72LL);
      *(_QWORD *)(a1 + 80) = v7;
    }
    StreamContextArray = 0;
    goto LABEL_15;
  }
  while ( 1 )
  {
    StreamContextArray = TR_Enable_Internal(*(_QWORD *)(104LL * (v14 - 1) + *(_QWORD *)(a1 + 136) + 48));
    if ( StreamContextArray < 0 )
      break;
    v15 = Endpoint_GetDequeuePointer(a1, v14);
    v16 = v14++;
    v6 = 2 * v16;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 32LL) + 16LL) + 8 * v6) = v15;
    if ( v14 > *(_DWORD *)(v4 + 8) )
      goto LABEL_11;
  }
  LODWORD(v20) = v14 + 1;
  LODWORD(v19) = *(_DWORD *)(a1 + 144);
  LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL);
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)a1 + 72LL),
    2u,
    0xDu,
    0x18u,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    v18,
    v19,
    v20,
    StreamContextArray);
LABEL_15:
  if ( StreamContextArray < 0 )
    goto LABEL_16;
  ESM_AddEvent((PVOID)(a1 + 288));
LABEL_27:
  if ( v3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v3,
      Endpoint_Enable,
      990LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.c");
  return (unsigned int)StreamContextArray;
}
