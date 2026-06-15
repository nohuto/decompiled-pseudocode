/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180044670
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x180044280 (-OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B38F0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800F4394 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800F447C (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F468C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1800F65C4 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r14
  __int64 v6; // r9
  const GUID *v7; // r8
  const char *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // r15d
  __int128 v12; // xmm0
  char v13; // r14
  std::_Ref_count_base *v14; // rcx
  int v15; // eax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+78h] [rbp-88h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall ***v28)(); // [rsp+B0h] [rbp-50h]
  __int128 v29; // [rsp+B8h] [rbp-48h] BYREF
  void *v30; // [rsp+D0h] [rbp-30h] BYREF
  int v31; // [rsp+D8h] [rbp-28h]
  int v32; // [rsp+DCh] [rbp-24h]
  void *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  const char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int128 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  __int64 *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v18 = 413;
  if ( (unsigned int)dword_180188330 > 5 )
  {
    v37 = 69LL;
    v36 = "Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice";
    v38 = &v18;
    v39 = 4LL;
    DWORD1(v22) = 5;
    v30 = off_180188338;
    LODWORD(v22) = ((unsigned int)&unk_180147CC8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *((_QWORD *)&v22 + 1) = 0LL;
    v31 = *(unsigned __int16 *)off_180188338;
    v33 = &unk_180147CD3;
    v32 = 2;
    v34 = 21;
    v35 = 1;
    EtwEventWriteTransfer(qword_180188350, &v22, 0LL, 0LL, 4, &v30, v17);
  }
  v23 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9,
      &v23);
    if ( v23 )
    {
      v6 = *((_QWORD *)this + 29);
      if ( v6 )
      {
        v9 = *(_QWORD *)(v6 + 8LL * ((unsigned int)v23 % *((_DWORD *)this + 62)));
        if ( v9 )
        {
          while ( *(_DWORD *)(v9 + 112) != (_DWORD)v23 || *(_QWORD *)v9 != v23 )
          {
            v9 = *(_QWORD *)(v9 + 104);
            if ( !v9 )
              goto LABEL_6;
          }
          v5 = v9 + 8;
        }
      }
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v5 )
      {
        v10 = *(_QWORD *)(v5 + 8);
        if ( !v10 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1A7,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v8);
          __debugbreak();
        }
        v11 = *(_DWORD *)(v5 + 52);
        if ( (unsigned int)dword_180188330 > 4 )
        {
          v12 = *(_OWORD *)(v5 + 16);
          v24 = *(_QWORD *)(v5 + 40);
          v41 = &v24;
          v43 = &v29;
          v19 = *(_DWORD *)(v5 + 84);
          v45 = &v19;
          v20 = *(_DWORD *)(v5 + 80);
          v47 = &v20;
          v49 = &v21;
          v51 = &v25;
          v42 = 8LL;
          v29 = v12;
          v44 = 16LL;
          v46 = 4LL;
          v48 = 4LL;
          v21 = v11;
          v50 = 4LL;
          v25 = v10;
          v52 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_180188330, &unk_180147996, v7, (LPCGUID)v8, 8u, &pData);
        }
        Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v5);
        v13 = *(_BYTE *)(v10 + 8);
        v17 = 0;
        Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v10, &v17);
        if ( *(_DWORD *)(v10 + 12) )
          goto LABEL_34;
        if ( *(_QWORD *)v10 )
          ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
        if ( *((_QWORD *)this + 20) )
        {
LABEL_34:
          if ( *((_QWORD *)this + 30) )
          {
            if ( v13 )
            {
              if ( v17 )
              {
                *(_QWORD *)&v22 = this;
                v26 = off_18012CD18;
                DWORD2(v22) = v11;
                v28 = &v26;
                v27 = v22;
                v15 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1D0,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                    (const char *)(unsigned int)v15,
                    cData);
              }
            }
          }
        }
        else
        {
          v14 = qword_18018B188;
          Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
          qword_18018B188 = 0LL;
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
