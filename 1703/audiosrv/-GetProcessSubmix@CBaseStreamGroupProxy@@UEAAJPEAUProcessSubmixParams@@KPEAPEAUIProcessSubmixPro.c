/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ?AllowLoopback@CProcessSubmixProxy@@UEAA_NXZ @ 0x180008670 (-AllowLoopback@CProcessSubmixProxy@@UEAA_NXZ.c)
 *     ?GetProcessId@CProcessSubmixProxy@@UEAAKXZ @ 0x180008680 (-GetProcessId@CProcessSubmixProxy@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800086F0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800087E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UIInspect.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UIInspectable@@V.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18002B418 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002C754 (--$emplace_back@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakR.c)
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18002DC64 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 *     ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002DD50 (-OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x18007CE18 (_lambda_6721409c6d8d6be39a12e154768b61d2_--operator().c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        struct IInspectable *this,
        struct ProcessSubmixParams *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  const char *v7; // r9
  const char **lpVtbl; // rbx
  const char **v9; // rdi
  CProcessSubmixProxy *v10; // rcx
  __int64 (__fastcall *v11)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v12; // rcx
  int v13; // eax
  bool v14; // r15
  void (*v15)(void); // rax
  Microsoft::WRL::Details::WeakReferenceImpl **j; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v17; // rbx
  __int64 (__fastcall *v18)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v19; // eax
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rax
  int v21; // eax
  CProcessSubmixProxy *v22; // r15
  __int64 (__fastcall *v23)(CProcessSubmixProxy *); // rax
  int ProcessId; // eax
  bool (__fastcall *v25)(CProcessSubmixProxy *); // rax
  char v26; // al
  struct IProcessSubmixProxy *v27; // rcx
  struct IProcessSubmixProxy *v28; // rdi
  CProcessSubmixProxy *v29; // rcx
  void (*v30)(void); // rax
  __int64 (__fastcall *v31)(volatile signed __int32 *); // rax
  struct IProcessSubmixProxy *v32; // rax
  __int64 result; // rax
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // eax
  unsigned int v37; // ebx
  __int64 (__fastcall *v38)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *); // rax
  void (*Release)(void); // rax
  CProcessSubmixProxy **v40; // r15
  CProcessSubmixProxy **v41; // rdx
  CProcessSubmixProxy *v42; // rax
  struct IInspectableVtbl *v43; // r15
  const char **i; // rbx
  const char *v45; // rcx
  int v46; // [rsp+20h] [rbp-148h]
  struct IInspectable *v47; // [rsp+30h] [rbp-138h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-130h] BYREF
  struct IProcessSubmixProxy *v49; // [rsp+40h] [rbp-128h] BYREF
  LPCRITICAL_SECTION v50; // [rsp+48h] [rbp-120h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v51; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v52[3]; // [rsp+58h] [rbp-110h] BYREF
  _QWORD v53[22]; // [rsp+70h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v52[1] = -2LL;
  v52[0] = a2;
  try
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock(&this[18], &v50);
    if ( ((unsigned __int8 (__fastcall *)(struct IInspectable *))this->lpVtbl[3].QueryInterface)(this) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x182,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x80070057LL,
        v46);
      if ( v50 )
        LeaveCriticalSection(v50);
      result = 2147942487LL;
    }
    else
    {
      Microsoft::WRL::Wrappers::CriticalSection::Lock(&this[18], &lpCriticalSection);
      lpVtbl = (const char **)this[24].lpVtbl;
      v9 = (const char **)this[23].lpVtbl;
      if ( v9 != lpVtbl )
      {
        do
        {
          v10 = 0LL;
          v47 = 0LL;
          v7 = *v9;
          v14 = 1;
          if ( *v9 )
          {
            v11 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v7 + 24LL);
            v12 = (Microsoft::WRL::Details::WeakReferenceImpl *)*v9;
            v13 = v11 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
                ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
                    v12,
                    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    &v47)
                : v11(v12, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v47);
            v10 = (CProcessSubmixProxy *)v47;
            if ( v13 >= 0 )
            {
              if ( v47 )
                v14 = 0;
            }
          }
          if ( v10 )
          {
            v47 = 0LL;
            v15 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
            if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
                v10,
                (__int64)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release);
            else
              v15();
          }
          if ( v14 )
            break;
          ++v9;
        }
        while ( v9 != lpVtbl );
        if ( v9 != lpVtbl )
        {
          v40 = (CProcessSubmixProxy **)(v9 + 1);
          if ( v9 + 1 != lpVtbl )
          {
            do
            {
              if ( !(unsigned __int8)lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(v10, v40) )
              {
                v41 = (CProcessSubmixProxy **)v9++;
                v42 = 0LL;
                if ( &v51 != v40 )
                {
                  v42 = *v40;
                  *v40 = 0LL;
                }
                v10 = *v41;
                *v41 = v42;
                if ( v10 )
                  (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v10 + 16LL))(v10);
              }
              ++v40;
            }
            while ( v40 != (CProcessSubmixProxy **)lpVtbl );
          }
        }
      }
      if ( v9 != (const char **)this[24].lpVtbl )
      {
        v43 = this[24].lpVtbl;
        for ( i = v9; i != (const char **)v43; ++i )
        {
          v45 = *i;
          if ( *i )
          {
            *i = 0LL;
            (*(void (__fastcall **)(const char *))(*(_QWORD *)v45 + 16LL))(v45);
          }
        }
        this[24].lpVtbl = (struct IInspectableVtbl *)v9;
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v49 = 0LL;
      for ( j = (Microsoft::WRL::Details::WeakReferenceImpl **)this[23].lpVtbl;
            j != (Microsoft::WRL::Details::WeakReferenceImpl **)this[24].lpVtbl;
            ++j )
      {
        v17 = *j;
        v51 = v17;
        if ( v17 )
          (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v17 + 8LL))(v17);
        v47 = 0LL;
        if ( !v17
          || ((v18 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v17 + 24LL),
               v18 != Microsoft::WRL::Details::WeakReferenceImpl::Resolve)
            ? (v19 = v18(v17, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v47))
            : (v19 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
                       v17,
                       &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                       &v47)),
              v19 < 0 || !v47) )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
          if ( !v17 )
            continue;
          goto LABEL_89;
        }
        lpCriticalSection = 0LL;
        QueryInterface = v47->lpVtbl->QueryInterface;
        if ( (char *)QueryInterface == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
          v21 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  (__int64)v47,
                  (__int64)&GUID_5e790b7d_f599_4860_a1a3_71ec94c032e1,
                  &lpCriticalSection);
        else
          v21 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, LPCRITICAL_SECTION *))QueryInterface)(
                  v47,
                  &GUID_5e790b7d_f599_4860_a1a3_71ec94c032e1,
                  &lpCriticalSection);
        if ( v21 < 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&lpCriticalSection);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
LABEL_89:
          (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v17 + 16LL))(v17);
          continue;
        }
        v22 = (CProcessSubmixProxy *)lpCriticalSection;
        v23 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))&lpCriticalSection->DebugInfo[2].Type;
        if ( v23 == CProcessSubmixProxy::GetProcessId )
        {
          ProcessId = CProcessSubmixProxy::GetProcessId((CProcessSubmixProxy *)lpCriticalSection);
        }
        else
        {
          ProcessId = v23((CProcessSubmixProxy *)lpCriticalSection);
          v22 = (CProcessSubmixProxy *)lpCriticalSection;
        }
        if ( *(_DWORD *)a2 == ProcessId )
        {
          v25 = *(bool (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v22 + 104LL);
          if ( v25 == CProcessSubmixProxy::AllowLoopback )
          {
            v26 = CProcessSubmixProxy::AllowLoopback(v22);
          }
          else
          {
            v26 = v25(v22);
            v22 = (CProcessSubmixProxy *)lpCriticalSection;
          }
          if ( *((_BYTE *)a2 + 20) == v26 )
          {
            v27 = v49;
            if ( v49 != v22 )
            {
              v28 = v22;
              if ( v22 )
              {
                (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v22 + 8LL))(v22);
                v27 = v49;
                v22 = (CProcessSubmixProxy *)lpCriticalSection;
              }
              v49 = v28;
              if ( v27 )
              {
                (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v27 + 16LL))(v27);
                v22 = (CProcessSubmixProxy *)lpCriticalSection;
              }
            }
            if ( v22 )
            {
              lpCriticalSection = 0LL;
              (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v22 + 16LL))(v22);
            }
            v29 = (CProcessSubmixProxy *)v47;
            if ( v47 )
            {
              v47 = 0LL;
              v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
              if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
                  v29,
                  (__int64)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release);
              else
                v30();
            }
            v31 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL);
            if ( v31 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v17);
            else
              v31((volatile signed __int32 *)v17);
            break;
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&lpCriticalSection);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v47);
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v49 )
        goto LABEL_50;
      memset(v53, 0, 0xA8uLL);
      v53[0] = *(unsigned int *)(*((_QWORD *)a2 + 3) + 8LL);
      v53[4] = **((_QWORD **)a2 + 3);
      LODWORD(v53[1]) = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) + 16LL) + 18;
      v53[2] = *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL);
      LODWORD(v53[5]) = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) + 16LL) + 18;
      v53[6] = *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL);
      v53[7] = *(_QWORD *)(*((_QWORD *)a2 + 3) + 24LL);
      LODWORD(v53[8]) = 0;
      *(_OWORD *)((char *)&v53[8] + 4) = *(_OWORD *)(*((_QWORD *)a2 + 3) + 32LL);
      LODWORD(v53[3]) = *(unsigned __int8 *)(*((_QWORD *)a2 + 3) + 50LL);
      v47 = this;
      lpCriticalSection = (LPCRITICAL_SECTION)v53;
      v34 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &>(
              (unsigned int)&v49,
              (unsigned int)v52,
              (unsigned int)&lpCriticalSection,
              (unsigned int)&v47);
      v35 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1A8,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v34,
          v46);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v49);
        if ( v50 )
          LeaveCriticalSection(v50);
        result = v35;
      }
      else
      {
        v47 = 0LL;
        v36 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v49, &v47);
        v37 = v36;
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1AC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v36,
            v46);
          if ( v47 )
            ((void (__fastcall *)(struct IInspectable *))v47->lpVtbl->Release)(v47);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v49);
          if ( v50 )
            LeaveCriticalSection(v50);
          result = v37;
        }
        else
        {
          std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(&this[23], &v47);
          v38 = *(__int64 (__fastcall **)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)g_ProcessSubmixManager + 56LL);
          if ( v38 == CProcessSubmixManager::OnNewProcessSubmix )
            CProcessSubmixManager::OnNewProcessSubmix(g_ProcessSubmixManager, v49);
          else
            v38(g_ProcessSubmixManager, v49);
          if ( v47 )
          {
            Release = (void (*)(void))v47->lpVtbl->Release;
            if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v47);
            else
              Release();
          }
LABEL_50:
          v32 = v49;
          v49 = 0LL;
          *a4 = v32;
          if ( v50 )
            LeaveCriticalSection(v50);
          result = 0LL;
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1B6,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v7);
  }
  return result;
}
