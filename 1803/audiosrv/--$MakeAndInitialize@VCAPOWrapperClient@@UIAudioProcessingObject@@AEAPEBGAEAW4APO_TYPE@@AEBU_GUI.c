/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002C1E0
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002C760 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180007B78 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4)
{
  int *v8; // rax
  int *v9; // rbx
  HRESULT Instance; // edi
  LPCRITICAL_SECTION v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // r12
  const GUID *v14; // r8
  const GUID *v15; // r9
  int (*v16)(CAPOWrapperClient *__hidden, const struct _GUID *, void **); // rax
  void (*v17)(void); // rax
  void *(__fastcall *v18)(CAPOWrapperClient *__hidden, unsigned int); // rax
  LPCRITICAL_SECTION v19; // rsi
  __int64 v21; // rcx
  __int64 v22; // rcx
  HANDLE ProcessHeap; // rax
  HRESULT v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-B8h] BYREF
  char v28; // [rsp+50h] [rbp-B0h]
  LPCRITICAL_SECTION v29; // [rsp+58h] [rbp-A8h] BYREF
  char v30; // [rsp+60h] [rbp-A0h]
  int *v31; // [rsp+68h] [rbp-98h]
  int *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  int *v34; // [rsp+80h] [rbp-80h]
  int *v35; // [rsp+88h] [rbp-78h]
  GUID v36; // [rsp+90h] [rbp-70h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  const char *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  HRESULT *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]

  v33 = -2LL;
  *a1 = 0LL;
  v8 = (int *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v31 = v8;
  v34 = v8;
  if ( !v8 )
    return (unsigned int)-2147024882;
  v35 = v8;
  v8[11] = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v8 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)v8 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &CAPOWrapperClient::`vftable';
  *((_QWORD *)v9 + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v9 + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v9 + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)v9 + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  v9[16] = 0;
  v11 = g_ADGProcess;
  lpCriticalSection = g_ADGProcess;
  v28 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( ++LODWORD(v11[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v11);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v11);
  }
  if ( v28 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v28 = 0;
  }
  v32 = v9;
  v31 = 0LL;
  v12 = *a3;
  v13 = *a2;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_69fed9b6_5405_48b8_3db0_4ca492fc3677,
               (LPVOID *)v9 + 6);
  v25 = Instance;
  if ( Instance >= 0 )
  {
    v36 = ActivityId;
    Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64, int *))(**((_QWORD **)v9 + 6) + 24LL))(
                 *((_QWORD *)v9 + 6),
                 &v36,
                 v13,
                 v12,
                 a4,
                 v9 + 14);
    v25 = Instance;
    if ( Instance >= 0 )
      goto LABEL_14;
  }
  if ( (unsigned int)dword_1801884D0 > 2 )
  {
    v39 = "CAPOWrapperClient::RuntimeClassInitialize";
    v40 = 42LL;
    v26 = 44;
    v41 = &v26;
    v42 = 4LL;
    v43 = &v25;
    v44 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, v14, v15, 5u, &pData);
    Instance = v25;
  }
  if ( Instance >= 0 )
  {
LABEL_14:
    v16 = **(int (***)(CAPOWrapperClient *__hidden, const struct _GUID *, void **))v9;
    if ( v16 == CAPOWrapperClient::QueryInterface )
    {
      if ( *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1
        && *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4 == *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4
        && !v9[16] )
      {
        *a1 = 0LL;
        Instance = -2147467262;
      }
      else
      {
        *a1 = v9 + 2;
        (*(void (__fastcall **)(int *))(*((_QWORD *)v9 + 1) + 8LL))(v9 + 2);
        Instance = 0;
      }
    }
    else
    {
      Instance = ((__int64 (__fastcall *)(int *, GUID *, _QWORD *))v16)(
                   v9,
                   &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                   a1);
    }
  }
  if ( v9 )
  {
    v32 = 0LL;
    v17 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v17 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release )
    {
LABEL_37:
      v17();
      return (unsigned int)Instance;
    }
    if ( !ATL::SafeDecrementReferenceMultiThread(v9 + 11) )
    {
      v18 = *(void *(__fastcall **)(CAPOWrapperClient *__hidden, unsigned int))(*(_QWORD *)v9 + 32LL);
      if ( v18 == CAPOWrapperClient::`scalar deleting destructor' )
      {
        *(_QWORD *)v9 = &CAPOWrapperClient::`vftable';
        *((_QWORD *)v9 + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
        *((_QWORD *)v9 + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
        *((_QWORD *)v9 + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
        *((_QWORD *)v9 + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
        v19 = g_ADGProcess;
        v29 = g_ADGProcess;
        v30 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v29);
        if ( LODWORD(v19[1].DebugInfo)-- == 1 )
          CAudioDGProcess::StartADGTerminationTimer((struct _TP_TIMER **)v19);
        if ( v30 )
        {
          LeaveCriticalSection(v29);
          v30 = 0;
        }
        v21 = *((_QWORD *)v9 + 7);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v22 = *((_QWORD *)v9 + 6);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v9[11] = -1073741823;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v9);
      }
      else
      {
        v18((CAPOWrapperClient *)v9, 1u);
      }
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v17 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_37;
      }
    }
  }
  return (unsigned int)Instance;
}
