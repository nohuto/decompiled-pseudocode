/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001C8D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C00173A8 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0017504 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C00178C8 (XilEndpoint_FreeStreamContextArray.c)
 *     TR_Enable_Internal @ 0x1C0022D7C (TR_Enable_Internal.c)
 *     TR_GetDequeuePointer @ 0x1C002322C (TR_GetDequeuePointer.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C0034F0C (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  PVOID PoolWithTag; // rax
  int StreamContextArray; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 DequeuePointer; // rax
  __int64 v14; // rdx
  int v15; // r8d
  _QWORD *v16; // rcx
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  _QWORD v20[5]; // [rsp+40h] [rbp-48h] BYREF

  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a3,
    v20);
  v5 = v20[1];
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C004E368);
  v7 = *(_QWORD *)v6;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(*(_QWORD *)v6 + 80LL),
    4u,
    0xDu,
    0x6Du,
    (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 135LL),
    *(_DWORD *)(*(_QWORD *)v6 + 144LL),
    v6[2]);
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               a3,
               off_1C004E098) = v6;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x98uLL, 0x49434858u);
  *(_QWORD *)(v7 + 128) = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
LABEL_10:
    v16 = *(_QWORD **)(v7 + 128);
    if ( v16 )
    {
      XilEndpoint_FreeStreamContextArray(v16);
      ExFreePoolWithTag(*(PVOID *)(v7 + 128), 0x49434858u);
      *(_QWORD *)(v7 + 128) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
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
  v10 = *(_QWORD *)(v7 + 128);
  v11 = *(_QWORD *)(v7 + 88);
  *(_QWORD *)(v7 + 136) = v10;
  *(_QWORD *)(v10 + 48) = v11;
  StreamContextArray = TR_Enable_Internal(*(_QWORD *)(v7 + 88));
  if ( StreamContextArray >= 0 )
  {
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v7 + 88));
    v14 = *(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL);
    *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) = DequeuePointer;
    result = XilEndpoint_CommitStreamContextArrayUpdates(*(_QWORD *)(v7 + 136), v14, v15);
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
    LODWORD(v19) = StreamContextArray;
    LODWORD(v18) = *(_DWORD *)(v7 + 144);
    LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    result = WPP_RECORDER_SF_ddd(
               *(_QWORD *)(v7 + 80),
               2u,
               0xDu,
               0x6Eu,
               (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
               v17,
               v18,
               v19);
    *(_DWORD *)(v5 + 4) = -1073737728;
  }
  if ( StreamContextArray < 0 )
    goto LABEL_10;
  return result;
}
