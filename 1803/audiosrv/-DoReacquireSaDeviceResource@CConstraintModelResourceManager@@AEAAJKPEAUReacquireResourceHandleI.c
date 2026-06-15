/*
 * XREFs of ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800D89B0
 * Callers:
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800DACF8 (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180060310 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180098EF0 (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___M.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800D8DF4 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x1800DA1BC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800DA688 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800DA92C (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 *     WPP_SF_ddI @ 0x1800DB1B0 (WPP_SF_ddI.c)
 *     WPP_SF_ddID @ 0x1800DB210 (WPP_SF_ddID.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CConstraintModelResourceManager::DoReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        unsigned int a2,
        unsigned __int64 **a3)
{
  unsigned int v4; // r13d
  int v6; // r15d
  __int64 v7; // r8
  CAudioSessionManager *v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rsi
  int v12; // r13d
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdi
  _OWORD *v16; // rax
  LPCRITICAL_SECTION *v17; // rcx
  __int64 v18; // rdx
  int StreamResourceConsumption; // eax
  struct _ResourceInfo *v20; // rdi
  LPCRITICAL_SECTION v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int v27[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _ResourceInfo *v28; // [rsp+58h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  LPCRITICAL_SECTION v31; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h]
  LPCRITICAL_SECTION v33; // [rsp+80h] [rbp-88h] BYREF
  char v34; // [rsp+88h] [rbp-80h]
  LPCRITICAL_SECTION v35; // [rsp+90h] [rbp-78h] BYREF
  char v36; // [rsp+98h] [rbp-70h]
  LPCRITICAL_SECTION v37; // [rsp+A0h] [rbp-68h] BYREF
  char v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  struct _GUID v40; // [rsp+B8h] [rbp-50h] BYREF
  LPCRITICAL_SECTION v41; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int16 v42[128]; // [rsp+D4h] [rbp-34h] BYREF
  struct _GUID v43; // [rsp+1D4h] [rbp+CCh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v44; // [rsp+1E8h] [rbp+E0h]
  unsigned int v45; // [rsp+590h] [rbp+488h]

  v39 = -2LL;
  v4 = a2;
  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v37,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v35,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v9 )
      v10 = 0LL;
    else
      v10 = **a3;
    WPP_SF_ddI(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v7, v4, v9, v10);
    v8 = WPP_GLOBAL_Control;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v11 = *a3;
    if ( **a3 )
    {
      memset_0(&v41, 0, 0x4D0uLL);
      v12 = 0;
      v13 = 0LL;
      v31 = (LPCRITICAL_SECTION)((char *)this + 120);
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)this + 3);
      v33 = (LPCRITICAL_SECTION)((char *)this + 160);
      v15 = *((_QWORD *)this + 20);
      *(_QWORD *)v27 = v15;
      while ( v15 )
      {
        v16 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v14, v15);
        v17 = &v41;
        v18 = 9LL;
        v7 = 128LL;
        do
        {
          *(_OWORD *)v17 = *v16;
          *((_OWORD *)v17 + 1) = v16[1];
          *((_OWORD *)v17 + 2) = v16[2];
          *((_OWORD *)v17 + 3) = v16[3];
          *((_OWORD *)v17 + 4) = v16[4];
          *((_OWORD *)v17 + 5) = v16[5];
          *((_OWORD *)v17 + 6) = v16[6];
          v17 += 16;
          *((_OWORD *)v17 - 1) = v16[7];
          v16 += 8;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)v17 = *v16;
        *((_OWORD *)v17 + 1) = v16[1];
        *((_OWORD *)v17 + 2) = v16[2];
        *((_OWORD *)v17 + 3) = v16[3];
        *((_OWORD *)v17 + 4) = v16[4];
        if ( (LPCRITICAL_SECTION)*v11 == v41 )
        {
          v13 = v15;
          v12 = 1;
          break;
        }
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
          (__int64)v17,
          (_QWORD **)v27);
        v15 = *(_QWORD *)v27;
      }
      if ( (_BYTE)v30 )
        LeaveCriticalSection(lpCriticalSection);
      if ( !v12 )
        goto LABEL_32;
      lpCriticalSection = 0LL;
      v27[0] = 0;
      v28 = 0LL;
      v40 = v43;
      StreamResourceConsumption = CConstraintModel::GetStreamResourceConsumption(
                                    *((CConstraintModel **)this + 2),
                                    v42,
                                    v7,
                                    &v40,
                                    v44,
                                    v27,
                                    &v28);
      v20 = v28;
      if ( StreamResourceConsumption >= 0 && v27[0] )
      {
        v4 = a2;
        v6 = CConstraintModelResourceManager::ReacquireResourceHandle(
               this,
               *v11,
               v28,
               v27[0],
               a2,
               (unsigned __int64 *)&lpCriticalSection);
        if ( v6 < 0 )
        {
          ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
            (__int64)&v31,
            v31);
          ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAt(
            v33,
            v13);
          if ( (_BYTE)v32 )
            LeaveCriticalSection(v31);
        }
        else
        {
          v21 = lpCriticalSection;
          v41 = lpCriticalSection;
          v45 = a2;
          ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
            (__int64)&v33,
            v31);
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v22, v13, &v41);
          if ( v34 )
            LeaveCriticalSection(v33);
          *v11 = (unsigned __int64)v21;
        }
      }
      else
      {
        v6 = RmReleaseResources(*v11);
        v4 = a2;
      }
      if ( v20 )
        operator delete(v20);
      else
LABEL_32:
        v4 = a2;
      v8 = WPP_GLOBAL_Control;
    }
  }
  if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v8 + 7) & 0x100) != 0
    && *((_BYTE *)v8 + 25) >= 4u )
  {
    v23 = *((unsigned int *)a3 + 2);
    if ( (_DWORD)v23 )
      v24 = 0LL;
    else
      v24 = **a3;
    WPP_SF_ddID(*((_QWORD *)v8 + 2), v23, v7, v4, v23, v24, v6);
  }
  if ( v36 )
    LeaveCriticalSection(v35);
  if ( v38 )
    LeaveCriticalSection(v37);
  return (unsigned int)v6;
}
