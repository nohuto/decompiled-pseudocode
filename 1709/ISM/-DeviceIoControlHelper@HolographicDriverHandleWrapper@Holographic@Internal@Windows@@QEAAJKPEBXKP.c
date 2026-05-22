/*
 * XREFs of ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800B5690 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x1800B5850 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800B5AE0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x1800B5C70 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800B5DA0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800B6050 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x1800B6560 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800B66D8 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B7CD0 (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800B7EC0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BB8C8 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800BBB04 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     ??$GetDevicePropertyOfKnownSize@USPATIAL_NODE_ID@@@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAUSPATIAL_NODE_ID@@@Z @ 0x1800BBD10 (--$GetDevicePropertyOfKnownSize@USPATIAL_NODE_ID@@@SpatialGraphDriverClient@Holographic@Internal.c)
 *     ??$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAE@Z @ 0x1800BBEE4 (--$GetDevicePropertyOfKnownSize@E@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ??$GetDevicePropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800BC1EC (--$GetDevicePropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@SpatialGraphDriverCli.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004BF0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006653C (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800AE32C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x1800B11C4 (-IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800B222C (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x1800B2860 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x1800B3830 (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAKPEAU_OVERL.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *lpInBuffer,
        DWORD a4,
        LPVOID bAlertable,
        DWORD a6,
        LPDWORD a7)
{
  DWORD *lpBytesReturned; // r15
  RTL_SRWLOCK *v12; // r12
  unsigned int v13; // r14d
  LPDWORD v14; // rbx
  struct _OVERLAPPED *lpOverlapped; // r14
  void *v16; // rdx
  HANDLE Event; // rbx
  __int64 v18; // r8
  const char *v19; // r9
  int LastError; // esi
  __int64 v21; // r9
  float v22; // xmm6_4
  unsigned int v23; // r14d
  _DWORD *v24; // rcx
  HolographicDriverClientTrace *v25; // rcx
  _DWORD *v26; // rcx
  HolographicDriverClientContinuousTrace *v27; // rcx
  const char *v28; // r9
  const char *nOutBufferSize; // [rsp+30h] [rbp-69h]
  unsigned int nOutBufferSizea; // [rsp+30h] [rbp-69h]
  void *v31; // [rsp+48h] [rbp-51h] BYREF
  __int128 v32; // [rsp+50h] [rbp-49h] BYREF
  __int64 v33; // [rsp+60h] [rbp-39h]
  LPDWORD v34; // [rsp+68h] [rbp-31h]
  _OWORD v35[2]; // [rsp+70h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  LARGE_INTEGER PerformanceCount; // [rsp+E8h] [rbp+4Fh] BYREF
  void *v38; // [rsp+F8h] [rbp+5Fh]
  DWORD nInBufferSize; // [rsp+100h] [rbp+67h]

  nInBufferSize = a4;
  v38 = lpInBuffer;
  lpBytesReturned = a7;
  if ( a7 )
    *a7 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000000ELL,
      (unsigned __int16 *)"this driver handle wrapper is associated with a completion port, so DeviceIoControlOverlapped must be used",
      nOutBufferSize);
    return 2147483662LL;
  }
  else
  {
    v12 = (RTL_SRWLOCK *)((char *)this + 56);
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    v13 = *((_DWORD *)this + 16);
    if ( (v13 & 0x80000000) == 0 )
    {
      if ( *((_BYTE *)this + 112) && (!*((_DWORD *)this + 26) || !*((_DWORD *)this + 27)) )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xC4,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      v14 = 0LL;
      lpOverlapped = 0LL;
      a7 = 0LL;
      if ( *((_BYTE *)this + 113) )
      {
        v31 = 0LL;
        Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( !Event )
        {
          wil::details::in1diag3::FailFast_GetLastError(retaddr, v16, v18, v19);
          __debugbreak();
        }
        GetLastError();
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          &v31,
          Event);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          (void **)&a7,
          v31);
        memset(v35, 0, sizeof(v35));
        v14 = a7;
        lpOverlapped = (struct _OVERLAPPED *)&v32;
        v33 = *(_QWORD *)&v35[1];
        v34 = a7;
        v32 = v35[0];
      }
      QueryPerformanceCounter(&PerformanceCount);
      if ( DeviceIoControl(
             *((HANDLE *)this + 9),
             a2,
             lpInBuffer,
             nInBufferSize,
             bAlertable,
             a6,
             lpBytesReturned,
             lpOverlapped) )
      {
        goto LABEL_38;
      }
      LastError = GetLastError();
      if ( LastError == 997 && lpOverlapped )
      {
        if ( GetOverlappedResultEx(*((HANDLE *)this + 9), lpOverlapped, (LPDWORD)&a7, 0x1388u, 0) )
        {
          LastError = 0;
        }
        else
        {
          LastError = GetLastError();
          if ( LastError == 258 )
            LastError = Windows::Internal::Holographic::HolographicDriverHandleWrapper::HandleIoctlTimeout(
                          this,
                          lpOverlapped,
                          a2,
                          v21,
                          (struct _GUID *)v38,
                          nOutBufferSizea,
                          (unsigned int *)&a7);
        }
        if ( lpBytesReturned )
          *lpBytesReturned = (unsigned int)a7;
      }
      QueryPerformanceCounter((LARGE_INTEGER *)&a7);
      v22 = (double)(1000 * ((int)a7 - PerformanceCount.LowPart)) / (double)(int)qword_18010F278;
      if ( v22 > 500.0 )
      {
        v23 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v23 = LastError;
        v24 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v24 && *v24 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::IoctlRanLong_(v25, (const struct _GUID *)((char *)this + 12), a2, v23, v22, 244);
        }
      }
      if ( !LastError )
      {
LABEL_38:
        v13 = 0;
      }
      else
      {
        v26 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
        if ( v26 && *v26 )
        {
          HolographicDriverClientContinuousTrace::Instance();
          HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
            v27,
            LastError,
            a2,
            this,
            (const struct _GUID *)((char *)this + 12));
        }
        v13 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v13 = LastError;
      }
      if ( v14 && !CloseHandle(v14) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x878,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v28);
        JUMPOUT(0x1800B3C95LL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xBF,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)v13);
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
    return v13;
  }
}
