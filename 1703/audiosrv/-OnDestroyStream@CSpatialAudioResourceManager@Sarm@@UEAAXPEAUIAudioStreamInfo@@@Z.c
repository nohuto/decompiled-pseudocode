/*
 * XREFs of ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002B5F0
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AD6C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C3EF8 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C3FE0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C41D8 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1800C53B0 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::OnDestroyStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r9
  const char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r14d
  __int128 v10; // xmm0
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  char v13; // si
  std::_Ref_count_base *v14; // rcx
  int v15; // eax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall ***v30)(); // [rsp+B8h] [rbp-48h]
  __int128 v31; // [rsp+C0h] [rbp-40h] BYREF
  void *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+DCh] [rbp-24h]
  void *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  const CHAR *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  __int64 *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  __int128 *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  int *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  int *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  __int64 *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 64, (__int64)&lpCriticalSection);
  v18 = 301;
  if ( (unsigned int)dword_18012A220 > 5 )
  {
    v38 = "Sarm::CSpatialAudioResourceManager::OnDestroyStream";
    v40 = &v18;
    v39 = 52LL;
    v41 = 4LL;
    DWORD1(v23) = 5;
    v32 = off_18012A228;
    LODWORD(v23) = ((unsigned int)&unk_1800FAFA8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *((_QWORD *)&v23 + 1) = 0LL;
    v33 = *(unsigned __int16 *)off_18012A228;
    v35 = &unk_1800FAFB3;
    cData = 4;
    v34 = 2;
    v36 = 21;
    v37 = 1;
    EtwEventWriteTransfer(qword_18012A240, &v23, 0LL, 0LL);
  }
  v24 = 0LL;
  v4 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
      a2,
      &GUID_9b8a7740_a0c4_407f_ab8a_6058ad80845c,
      &v24);
    if ( v24 )
    {
      v5 = *((_QWORD *)this + 24);
      if ( v5 )
      {
        v7 = *(_QWORD *)(v5 + 8LL * ((unsigned int)v24 % *((_DWORD *)this + 52)));
        if ( v7 )
        {
          while ( *(_DWORD *)(v7 + 112) != (_DWORD)v24 || *(_QWORD *)v7 != v24 )
          {
            v7 = *(_QWORD *)(v7 + 104);
            if ( !v7 )
              goto LABEL_6;
          }
          v4 = v7 + 8;
        }
      }
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v4 )
      {
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x137,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            v6);
          __debugbreak();
        }
        v9 = *(_DWORD *)(v4 + 52);
        if ( (unsigned int)dword_18012A220 > 4 )
        {
          TlgCreateSz(&pDesc, "Sarm::CSpatialAudioResourceManager::OnDestroyStream");
          v10 = *(_OWORD *)(v4 + 16);
          v19 = 327;
          v44 = &v19;
          v25 = *(_QWORD *)(v4 + 40);
          v46 = &v25;
          v48 = &v31;
          v20 = *(_DWORD *)(v4 + 84);
          v50 = &v20;
          v21 = *(_DWORD *)(v4 + 80);
          v52 = &v21;
          v54 = &v22;
          v56 = &v26;
          v45 = 4LL;
          v47 = 8LL;
          v31 = v10;
          v49 = 16LL;
          v51 = 4LL;
          v53 = 4LL;
          v22 = v9;
          v55 = 4LL;
          v26 = v8;
          v57 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FA8F4, v11, v12, 0xAu, &pData);
        }
        Sarm::CSpatialAudioResourceManager::RemoveStream(this, (struct Sarm::CStreamResource *)v4);
        v13 = *(_BYTE *)(v8 + 8);
        v17 = 0;
        Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount((Sarm::CEndpointResourcePool *)v8, &v17);
        if ( *(_DWORD *)(v8 + 12) )
          goto LABEL_34;
        if ( *(_QWORD *)v8 )
          ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 112);
        if ( *((_QWORD *)this + 15) )
        {
LABEL_34:
          if ( *((_QWORD *)this + 25) )
          {
            if ( v13 )
            {
              if ( v17 )
              {
                *(_QWORD *)&v23 = this;
                v28 = off_1800DE550;
                DWORD2(v23) = v9;
                v30 = &v28;
                v29 = v23;
                v15 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
                if ( v15 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x162,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                    (const char *)(unsigned int)v15,
                    cData);
              }
            }
          }
        }
        else
        {
          v14 = qword_18012C538;
          qword_18012C538 = 0LL;
          Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
        }
      }
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
