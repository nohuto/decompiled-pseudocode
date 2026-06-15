/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000D8A0
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18000A330 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18000DB18 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18002B31C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002F834 (--$emplace_back@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakR.c)
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x180030774 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 *     ?OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180030CC0 (-OnNewProcessSubmix@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800919B8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        Microsoft::WRL::Details::WeakReferenceImpl ***this,
        CProcessSubmixProxy **a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *); // rax
  volatile signed __int32 *v14; // rcx
  void (*v15)(void); // rax
  struct IProcessSubmixProxy *v16; // rax
  const char *v17; // r9
  __int64 result; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v19; // rbx
  CProcessSubmixProxy *v20; // r12
  int v21; // r13d
  struct IProcessSubmixProxy *v22; // rax
  struct IProcessSubmixProxy *v23; // rsi
  __int64 (__fastcall *v24)(volatile signed __int32 *); // rax
  __int64 (__fastcall *v25)(volatile signed __int32 *); // rax
  volatile signed __int32 *v26; // rcx
  void (*v27)(void); // rax
  int v28; // [rsp+20h] [rbp-148h]
  struct IProcessSubmixProxy *v29; // [rsp+30h] [rbp-138h] BYREF
  CProcessSubmixProxy *v30; // [rsp+38h] [rbp-130h] BYREF
  struct IProcessSubmixProxy *v31; // [rsp+40h] [rbp-128h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v32; // [rsp+48h] [rbp-120h] BYREF
  CProcessSubmixProxy **v33; // [rsp+50h] [rbp-118h] BYREF
  struct IProcessSubmixProxy **v34; // [rsp+58h] [rbp-110h]
  __int64 v35; // [rsp+60h] [rbp-108h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+68h] [rbp-100h]
  _QWORD v37[22]; // [rsp+70h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v35 = -2LL;
  v34 = a4;
  v33 = a2;
  try
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
    v36 = v6;
    if ( ((unsigned __int8 (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl ***))(*this)[18])(this) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x178,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x80070057LL,
        v28);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942487LL;
    }
    CBaseStreamGroupProxy::PruneStaleProcessSubmixes((CBaseStreamGroupProxy *)this);
    v29 = 0LL;
    for ( i = this[27]; ; ++i )
    {
      if ( i == this[28] )
      {
LABEL_5:
        if ( v29 )
          goto LABEL_13;
        memset(v37, 0, 0xA8uLL);
        v37[0] = *((unsigned int *)a2[2] + 2);
        v37[4] = *(_QWORD *)a2[2];
        LODWORD(v37[1]) = *(unsigned __int16 *)(*((_QWORD *)a2[2] + 2) + 16LL) + 18;
        v37[2] = *((_QWORD *)a2[2] + 2);
        LODWORD(v37[5]) = *(unsigned __int16 *)(*((_QWORD *)a2[2] + 2) + 16LL) + 18;
        v37[6] = *((_QWORD *)a2[2] + 2);
        v37[7] = *((_QWORD *)a2[2] + 3);
        LODWORD(v37[8]) = 0;
        *(_OWORD *)((char *)&v37[8] + 4) = *((_OWORD *)a2[2] + 2);
        LODWORD(v37[3]) = *((unsigned __int8 *)a2[2] + 50);
        v32 = (Microsoft::WRL::Details::WeakReferenceImpl *)this;
        v31 = (struct IProcessSubmixProxy *)v37;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v29);
        v8 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &>(
               (unsigned int)&v29,
               (unsigned int)&v33,
               (unsigned int)&v31,
               (unsigned int)&v32);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1A1,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v8,
            v28);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v29);
          if ( v6 )
            LeaveCriticalSection(v6);
          return v9;
        }
        else
        {
          v30 = 0LL;
          v33 = &v30;
          v10 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v33);
          v11 = Microsoft::WRL::AsWeak<ISaDeviceProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v29, v10);
          v12 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x1A5,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v11,
              v28);
            v26 = (volatile signed __int32 *)v30;
            if ( v30 )
            {
              v30 = 0LL;
              v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
              if ( (char *)v27 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v26);
              else
                v27();
            }
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v29);
            if ( v6 )
              LeaveCriticalSection(v6);
            return v12;
          }
          else
          {
            std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(this + 27, &v30);
            v13 = *(__int64 (__fastcall **)(CProcessSubmixManager *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)g_ProcessSubmixManager + 64LL);
            if ( v13 == CProcessSubmixManager::OnNewProcessSubmix )
              CProcessSubmixManager::OnNewProcessSubmix(g_ProcessSubmixManager, v29);
            else
              v13(g_ProcessSubmixManager, v29);
            v14 = (volatile signed __int32 *)v30;
            if ( v30 )
            {
              v30 = 0LL;
              v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
              if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v14);
              else
                v15();
            }
LABEL_13:
            v16 = v29;
            v29 = 0LL;
            *v34 = v16;
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v29);
            if ( v6 )
              LeaveCriticalSection(v6);
            return 0LL;
          }
        }
      }
      v19 = *i;
      v32 = v19;
      if ( v19 )
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v19 + 8LL))(v19);
      v30 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v32, (struct IInspectable **)&v30) < 0 || !v30 )
        goto LABEL_37;
      v31 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v30, &v31) < 0
        || (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v31 + 200LL))(v31) )
      {
        break;
      }
      v20 = *a2;
      v21 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v31 + 96LL))(v31);
      if ( (*(unsigned int (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v20 + 40LL))(v20) == v21
        && *((_BYTE *)a2 + 8) == (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v31 + 112LL))(v31) )
      {
        v22 = v29;
        v23 = v31;
        if ( v29 != v31 )
        {
          if ( v31 )
          {
            (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v31 + 8LL))(v31);
            v22 = v29;
          }
          v32 = v22;
          v29 = v23;
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v32);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v31);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v30);
        if ( v19 )
        {
          v24 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL);
          if ( v24 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v19);
          else
            v24((volatile signed __int32 *)v19);
        }
        goto LABEL_5;
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v30);
LABEL_38:
      if ( v19 )
      {
        v25 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL);
        if ( v25 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v19);
        else
          v25((volatile signed __int32 *)v19);
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v31);
LABEL_37:
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v30);
    goto LABEL_38;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AF,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v17);
  }
  return result;
}
