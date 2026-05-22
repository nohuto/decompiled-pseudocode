/*
 * XREFs of ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1800D84F4
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D8130 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x1800D3750 (-ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x1800D3950 (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x1800D6060 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1800D60D0 (-SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800D68EC (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800D925C (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 *     ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x1800DA82C (--$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3,
        unsigned int *a4)
{
  int v8; // r12d
  unsigned int v9; // r14d
  _DWORD *v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  char v12; // di
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  unsigned __int8 v20[4]; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+24h] [rbp-2Ch] BYREF
  unsigned int v22; // [rsp+28h] [rbp-28h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v23; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v24[1] = -2LL;
  v8 = 0;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters(this);
  v9 = 1;
  if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount )
  {
    while ( !*((_BYTE *)this + 100) )
    {
      if ( v9 > 1 )
        Sleep(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingWaitBeforeRetryMilliseconds);
      v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, _QWORD, struct Windows::Internal::Holographic::DynamicNodeInfo *))(*(_QWORD *)a2 + 64LL))(
             a2,
             *((_QWORD *)this + 3),
             a3);
      if ( v8 >= 0 )
      {
        v21 = 0;
        if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, int *))(*(_QWORD *)a2 + 160LL))(
               a2,
               a3,
               &v21) >= 0
          && (unsigned int)v21 <= 0xF423F )
        {
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
            this,
            v21);
        }
        v22 = 0;
        if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned int *))(*(_QWORD *)a2 + 168LL))(
               a2,
               a3,
               &v22) >= 0
          && v22 < 0xF4240 )
        {
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
            this,
            v22);
        }
        v20[0] = 0;
        if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned __int8 *))(*(_QWORD *)a2 + 176LL))(
               a2,
               a3,
               v20) >= 0 )
        {
          v12 = v20[0];
          if ( v20[0] <= 0x64u )
          {
            *((_BYTE *)this + 996) = v20[0];
            v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
            if ( v13 )
            {
              if ( *v13 )
              {
                SpatialInteractionDevices::SpatialInteractionTrace::Instance();
                SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
                  v14,
                  *((_DWORD *)this + 2),
                  *((_DWORD *)this + 3),
                  v12);
              }
            }
          }
        }
        v23 = a2;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 888));
        v24[2] = (char *)this + 888;
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
          this,
          v15);
        v24[0] = this;
        v16 = *((_QWORD *)this + 116);
        if ( v16 )
        {
          *((_QWORD *)this + 116) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *,SPATIAL_NODE_ID const &,Windows::Internal::Holographic::ISpatialGraphDriverClient * &>(
                (char *)this + 928,
                v24,
                a3,
                &v23);
        v18 = v17;
        if ( v17 >= 0 )
        {
          if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)-888LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 888));
          v18 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5F5,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v17);
          if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)-888LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 888));
        }
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E3,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v18);
          return (unsigned int)v18;
        }
        AcquireSRWLockExclusive((PSRWLOCK)this + 104);
        *(_OWORD *)((char *)this + 840) = *(_OWORD *)a3;
        *((_DWORD *)this + 214) = *((_DWORD *)a3 + 4);
        if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)-832LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 104);
        break;
      }
      v10 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v10 )
      {
        if ( *v10 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::ControllerGetDynamicNodeFailed_(
            v11,
            v8,
            *((_DWORD *)this + 2));
        }
      }
      if ( ++v9 > Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount )
        break;
    }
  }
  *a4 = v9 - 1;
  return (unsigned int)v8;
}
