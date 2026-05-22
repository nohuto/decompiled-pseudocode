/*
 * XREFs of ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x1800C43F0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800C49B0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x1800C4B30 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800C4C50 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800C4EB0 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C4F78 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1800C538C (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x1800C6080 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1800C620C (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C76FC (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800C78E0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x1800CCBC0 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x1800CCD1C (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005D854 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B9954 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x1800BC6F8 (-IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x1800BF000 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x1800C0B6C (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
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
  signed int LastError; // esi
  unsigned int v21; // r9d
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
  __int128 v35; // [rsp+70h] [rbp-29h] BYREF
  __int128 v36; // [rsp+80h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  LARGE_INTEGER PerformanceCount; // [rsp+E8h] [rbp+4Fh] BYREF
  void *v39; // [rsp+F8h] [rbp+5Fh]
  DWORD nInBufferSize; // [rsp+100h] [rbp+67h]

  nInBufferSize = a4;
  v39 = lpInBuffer;
  lpBytesReturned = a7;
  if ( a7 )
    *a7 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x8B,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000000ELL,
      (unsigned __int16 *)"this driver handle wrapper is associated with a completion port, so DeviceIoControlOverlapped must be used",
      nOutBufferSize);
    return 2147483662LL;
  }
  else
  {
    v12 = (RTL_SRWLOCK *)((char *)this + 112);
    AcquireSRWLockShared((PSRWLOCK)this + 14);
    v13 = *((_DWORD *)this + 30);
    if ( (v13 & 0x80000000) == 0 )
    {
      if ( *((_BYTE *)this + 160) && (!*((_DWORD *)this + 38) || !*((_DWORD *)this + 39)) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      v14 = 0LL;
      lpOverlapped = 0LL;
      a7 = 0LL;
      if ( *((_BYTE *)this + 161) )
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
        memset_0(&v35, 0, 0x20uLL);
        v14 = a7;
        lpOverlapped = (struct _OVERLAPPED *)&v32;
        v33 = v36;
        v34 = a7;
        v32 = v35;
      }
      QueryPerformanceCounter(&PerformanceCount);
      if ( DeviceIoControl(
             *((HANDLE *)this + 16),
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
        if ( GetOverlappedResultEx(*((HANDLE *)this + 16), lpOverlapped, (LPDWORD)&a7, 0x1388u, 0) )
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
                          v39,
                          nOutBufferSizea,
                          (unsigned int *)&a7);
        }
        if ( lpBytesReturned )
          *lpBytesReturned = (unsigned int)a7;
      }
      QueryPerformanceCounter((LARGE_INTEGER *)&a7);
      v22 = (double)(1000 * ((int)a7 - PerformanceCount.LowPart)) / (double)(int)qword_1801366F8;
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
          (void *)0x879,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v28);
        JUMPOUT(0x1800C03BALL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)v13);
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
    return v13;
  }
}
