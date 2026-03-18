/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x1C005D940
 * Callers:
 *     XilCommand_AllocateSecureResources @ 0x1C0005948 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C0005AE4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C0005C34 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C0005DA4 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C0005EB0 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C0005FBC (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C00061C8 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00062D8 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C00063F4 (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C000F15C (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C000F2E8 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C000F40C (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C000F540 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C000F650 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C000F8A4 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C000F9B8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C000FB04 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C000FC44 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0010290 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C00103F4 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C00105C4 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C00106FC (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C00107C8 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0010998 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     TR_AcquireSecureSegments @ 0x1C001F8FC (TR_AcquireSecureSegments.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C001FD40 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CreateSecureObject @ 0x1C0020190 (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00209E0 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C0020D68 (TR_InitializeTransferSegment.c)
 *     TR_SendCompleteStageRequest @ 0x1C00211E4 (TR_SendCompleteStageRequest.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0030D50 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C0030E94 (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0030F74 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_Unmap @ 0x1C003DEAC (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x1C00534EC (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1C0053D60 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x1C005A33C (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C005A448 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C005AEA0 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C005B0E0 (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005B15C (Register_WriteSecureMmio.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C005D4F4 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C005D618 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qqqq @ 0x1C003DF80 (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C003E018 (McTemplateK0qqx.c)
 *     WPP_RECORDER_SF_DP @ 0x1C003E094 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C003E164 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(
        __int64 a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  LARGE_INTEGER v5; // rbx
  __int64 v9; // rcx
  signed __int32 v10; // r15d
  unsigned int v11; // r12d
  char v12; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  __int64 v24; // [rsp+28h] [rbp-58h]
  _QWORD v25[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+58h]

  v28 = a4;
  v5.QuadPart = 0LL;
  v9 = 1LL;
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  v11 = a5;
  a2[1].Data1 = v10;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_NULL.Data4 )
      EtwActivityIdControl(3u, a2);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
      McTemplateK0qqqq(v9, (__int64)a2, a2, a2[2].Data1, a3, v11, v10);
    v12 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a4 = v28;
    v5 = PerformanceCounter;
  }
  else
  {
    v12 = 0;
  }
  v26[1] = a2;
  v26[0] = 1LL;
  v26[2] = a3;
  if ( a4 )
  {
    v25[0] = 1LL;
    v14 = v25;
    v25[1] = a4;
    v25[2] = v11;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, unsigned __int64 *))(WdfFunctions_01023 + 3592))(
          WdfDriverGlobals,
          *(_QWORD *)a1,
          0LL,
          6078464LL,
          v26,
          v14,
          0LL,
          &v27);
  v19 = v15;
  if ( v15 >= 0 )
  {
    if ( v27 > 0xFFFFFFFF || (_DWORD)v27 != v11 )
    {
      WPP_RECORDER_SF_DP(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, v23);
      v19 = -1073741306;
    }
  }
  else
  {
    LODWORD(v24) = v15;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
      2u,
      0x13u,
      0xDu,
      (__int64)&WPP_8e4a88313dd436790ae6788f85b62921_Traceguids,
      v24);
  }
  if ( v19 < 0 )
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, v23);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( v12 )
  {
    v20 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v5.QuadPart);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x200) != 0 )
      McTemplateK0qqx(v21, v20 % *(_QWORD *)(a1 + 16), a2, a2[2].Data1, v10, v20 / *(_QWORD *)(a1 + 16));
  }
  return (unsigned int)v19;
}
