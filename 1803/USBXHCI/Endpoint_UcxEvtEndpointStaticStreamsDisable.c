/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C000FF58 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0010134 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0010534 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_Enable_Internal @ 0x1C0020638 (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C0020AF8 (TR_GetDequeuePointer.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0032ACC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  int v8; // edx
  PVOID PoolWithTag; // rax
  int StreamContextArray; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  __int64 v16; // rdx
  int v17; // r8d
  _QWORD *v18; // rcx
  _QWORD v19[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v19);
  v5 = v19[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C004B368);
  v7 = *(_QWORD *)v6;
  v8 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL);
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    v8,
    13,
    109,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               a3,
               off_1C004B098) = v6;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x98uLL, 0x49434858u);
  *(_QWORD *)(v7 + 128) = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
LABEL_10:
    v18 = *(_QWORD **)(v7 + 128);
    if ( v18 )
    {
      XilEndpoint_FreeStreamContextArray(v18);
      ExFreePoolWithTag(*(PVOID *)(v7 + 128), 0x49434858u);
      *(_QWORD *)(v7 + 128) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)StreamContextArray);
  }
  memset(PoolWithTag, 0, 0x98uLL);
  **(_QWORD **)(v7 + 128) = v7;
  *(_DWORD *)(*(_QWORD *)(v7 + 128) + 8LL) = 1;
  *(_DWORD *)(*(_QWORD *)(v7 + 128) + 12LL) = 1;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray(*(_QWORD *)(v7 + 128));
  if ( StreamContextArray < 0 )
    goto LABEL_10;
  v11 = *(_QWORD *)(v7 + 128);
  v12 = *(_QWORD *)(v7 + 88);
  *(_QWORD *)(v7 + 136) = v11;
  *(_QWORD *)(v11 + 48) = v12;
  StreamContextArray = TR_Enable_Internal(*(_QWORD *)(v7 + 88));
  if ( StreamContextArray >= 0 )
  {
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v7 + 88));
    v16 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL);
    *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) = DequeuePointer;
    result = XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v7 + 136), v16, v17);
    StreamContextArray = result;
    if ( (int)result >= 0 )
    {
      result = UsbDevice_ReconfigureEndpoint(
                 *(_QWORD *)(v7 + 16),
                 v7,
                 Endpoint_EndpointStaticStreamsDisableCompletion,
                 a3);
      StreamContextArray = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 4) = -2147481600;
    }
  }
  else
  {
    LOBYTE(v13) = 2;
    result = WPP_RECORDER_SF_ddL(
               *(_QWORD *)(v7 + 80),
               v13,
               13,
               110,
               (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
               *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
               *(_DWORD *)(v7 + 144),
               StreamContextArray);
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  if ( StreamContextArray < 0 )
    goto LABEL_10;
  return result;
}
