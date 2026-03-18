/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x1C006053C
 * Callers:
 *     XilCommand_AllocateSecureResources @ 0x1C000EB44 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C000ECE0 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C000EE30 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C000EFA0 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C000F0AC (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C000F1B8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000F3D0 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C000F4E0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C000F5FC (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C00165B8 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0016744 (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0016868 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C001699C (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016AAC (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0016D00 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016E14 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016F60 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00170A0 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0017628 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C001778C (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0017958 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0017A90 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0017B5C (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0017D2C (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     TR_AcquireSecureSegments @ 0x1C0022054 (TR_AcquireSecureSegments.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00224A8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CreateSecureObject @ 0x1C00228E0 (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C0023120 (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C00234B4 (TR_InitializeTransferSegment.c)
 *     TR_SendCompleteStageRequest @ 0x1C0023860 (TR_SendCompleteStageRequest.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00331F8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003331C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0033418 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_Unmap @ 0x1C003F910 (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x1C00565B8 (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1C0056E88 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x1C005CFE0 (Register_CreateSecureObject.c)
 *     Register_MapSecureMmio @ 0x1C005D0D4 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C005DD6C (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0060104 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0060218 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qqqq @ 0x1C0008528 (McTemplateK0qqqq.c)
 *     McTemplateK0qqx @ 0x1C00085C0 (McTemplateK0qqx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DP @ 0x1C003F9E4 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C003FAB4 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(
        __int64 a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v9; // rax
  signed __int32 v10; // esi
  unsigned int v11; // r12d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-60h]
  __int64 v24; // [rsp+28h] [rbp-58h]
  _QWORD v25[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+30h] BYREF

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
  {
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v9 )
      EtwActivityIdControl(3u, a2);
  }
  v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  v11 = a5;
  a2[1].Data1 = v10;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
    McTemplateK0qqqq(a1, (__int64)a2, a2, a2[2].Data1, a3, v11, v10);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
  v26[1] = a2;
  v26[2] = a3;
  v26[0] = 1LL;
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
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, unsigned __int64 *))(WdfFunctions_01015 + 1488))(
          WdfDriverGlobals,
          v13,
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
      0xCu,
      (__int64)&WPP_d3b706e0f10d373cc7042ef29394172c_Traceguids,
      v24);
  }
  if ( v19 < 0 )
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v16, v17, v18, v23);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  v20 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
    McTemplateK0qqx(v21, v20 % *(_QWORD *)(a1 + 16), a2, a2[2].Data1, v10, v20 / *(_QWORD *)(a1 + 16));
  return (unsigned int)v19;
}
