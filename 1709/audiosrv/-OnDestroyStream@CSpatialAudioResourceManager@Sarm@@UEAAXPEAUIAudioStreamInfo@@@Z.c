/*
 * XREFs of ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002EC50
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetKey@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo@@PEAU3@@Z @ 0x180030B64 (-GetKey@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo.c)
 *     ?GetNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIAudioStreamInfo@@AEAI1AEAPEAV312@@Z @ 0x1800316B8 (-GetNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStre.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008D084 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C1BE4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C1CCC (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1800C40C8 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::OnDestroyStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 Key; // rax
  __int64 v8; // rbx
  __int64 Node; // rax
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // r15d
  __int128 v13; // xmm0
  const GUID *v14; // r9
  LPCGUID v15; // r8
  char v16; // si
  std::_Ref_count_base *v17; // rcx
  int v18; // eax
  int cData; // [rsp+20h] [rbp-E0h]
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+60h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall ***v28)(); // [rsp+98h] [rbp-68h]
  __int128 v29; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v32; // [rsp+E0h] [rbp-20h]
  const GUID *v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int128 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+10h]
  const GUID *v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  const GUID *v41; // [rsp+128h] [rbp+28h]
  int *v42; // [rsp+130h] [rbp+30h]
  const GUID *v43; // [rsp+138h] [rbp+38h]
  __int128 *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnDestroyStream", 0x198u);
  v5 = 0LL;
  Key = util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetKey(v6, a2);
  v8 = Key;
  if ( Key )
  {
    v23 = Key;
    Node = ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNode(
             (int)this + 232,
             (unsigned int)&v23,
             (unsigned int)&v21,
             (unsigned int)&v22,
             (__int64)&v24);
    if ( Node )
      v5 = Node + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v5 )
    {
      v11 = *(_QWORD *)(v5 + 8);
      if ( !v11 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1A2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          v10);
        __debugbreak();
      }
      v12 = *(_DWORD *)(v5 + 52);
      if ( (unsigned int)dword_18014A370 > 4 )
      {
        TlgCreateSz(&pDesc, "Sarm::CSpatialAudioResourceManager::OnDestroyStream");
        v13 = *(_OWORD *)(v5 + 16);
        v20 = 434;
        v32 = &v20;
        v25 = *(_QWORD *)(v5 + 40);
        v34 = &v25;
        v36 = &v29;
        LODWORD(v23) = *(_DWORD *)(v5 + 84);
        v38 = &v23;
        v21 = *(_DWORD *)(v5 + 80);
        v40 = &v21;
        v42 = &v22;
        v44 = &v24;
        v33 = v14;
        v35 = 8LL;
        v29 = v13;
        v37 = 16LL;
        v39 = v14;
        v41 = v14;
        v22 = v12;
        v43 = v14;
        *(_QWORD *)&v24 = v11;
        v45 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_180110C99, v15, v14, 0xAu, &pData);
      }
      Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v5);
      v16 = *(_BYTE *)(v11 + 8);
      v20 = 0;
      Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v11, &v20);
      if ( *(_DWORD *)(v11 + 12) )
        goto LABEL_25;
      if ( *(_QWORD *)v11 )
        ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
      if ( *((_QWORD *)this + 20) )
      {
LABEL_25:
        if ( *((_QWORD *)this + 30) )
        {
          if ( v16 )
          {
            if ( v20 )
            {
              *(_QWORD *)&v24 = this;
              v26 = off_1800F4818;
              DWORD2(v24) = v12;
              v28 = &v26;
              v27 = v24;
              v18 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
              if ( v18 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1CD,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                  (const char *)(unsigned int)v18,
                  cData);
            }
          }
        }
      }
      else
      {
        v17 = qword_18014C460;
        qword_18014C460 = 0LL;
        Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
        if ( v17 )
          std::_Ref_count_base::_Decref(v17);
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
