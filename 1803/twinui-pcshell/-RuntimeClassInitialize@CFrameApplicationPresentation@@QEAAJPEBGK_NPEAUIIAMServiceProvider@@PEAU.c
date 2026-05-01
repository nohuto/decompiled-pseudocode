/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa8acc1eed1698d6ba192654be930d00___ @ 0x180012B34 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_aa8acc1eed1698d6ba192654be930d00___.c)
 *     ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00 (-GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001CD10 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18003BE40 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180082440 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_Sdd @ 0x1801121FC (WPP_SF_Sdd.c)
 *     WPP_SF_Sd @ 0x180132780 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        struct IIAMServiceProvider *a5,
        struct IImmersiveApplicationInternal *a6)
{
  int *v9; // rbx
  __int64 v10; // rbx
  const GUID *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  signed __int64 *v14; // rdi
  signed __int64 v15; // rcx
  __int64 (__fastcall *v16)(CApplicationManager *__hidden, const struct _GUID *, const struct _GUID *, void **); // rax
  int Service; // eax
  int v18; // edi
  int (*v19)(CApplicationFrameService *__hidden, const unsigned __int16 *, unsigned int, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  __int64 (__fastcall *v21)(CApplicationFrameWrapper *__hidden, HWND *); // rax
  int FrameWindow; // eax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  char *v25; // rax
  signed __int64 v26; // r9
  __int16 v27; // cx
  struct IApplicationFrameProxy *v28; // rcx
  struct IApplicationFrameProxy *v29; // rbx
  bool v30; // bl
  __int64 v31; // rcx
  struct IApplicationFrameProxy *v32; // rcx
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(CApplicationManager *__hidden, const struct _GUID *, const struct _GUID *, void **); // rax
  void **v35; // r9
  int v36; // eax
  CApplicationFrameService *v37; // rcx
  volatile signed __int32 *v38; // rdx
  HANDLE ProcessHeap; // rax
  _DWORD *v41; // rax
  signed __int64 v42; // rax
  char v43; // bl
  int v44; // eax
  __int64 v45; // rdx
  void *v46; // rbx
  HANDLE v47; // rax
  HANDLE v48; // rax
  struct IApplicationFrameProxy *v50; // [rsp+38h] [rbp-C8h] BYREF
  CApplicationFrameService *v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL v54; // [rsp+54h] [rbp-ACh] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-A8h] BYREF
  int pvAttribute; // [rsp+5Ch] [rbp-A4h] BYREF
  WINBOOL v57; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v59; // [rsp+70h] [rbp-90h] BYREF
  HWND hwnd; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v61; // [rsp+80h] [rbp-80h] BYREF
  char v62[8]; // [rsp+88h] [rbp-78h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int64 v65[2]; // [rsp+A8h] [rbp-58h] BYREF
  bool v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  struct IIAMServiceProvider *v68; // [rsp+C8h] [rbp-38h]
  struct IIAMServiceProvider *v69; // [rsp+D0h] [rbp-30h]
  void **v70; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v71[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v72; // [rsp+F8h] [rbp-8h]
  DWORD v73; // [rsp+100h] [rbp+0h]
  int *v74; // [rsp+108h] [rbp+8h]
  int *v75; // [rsp+110h] [rbp+10h]
  int v76; // [rsp+118h] [rbp+18h] BYREF
  char v77; // [rsp+11Ch] [rbp+1Ch]
  char v78[32]; // [rsp+120h] [rbp+20h] BYREF
  int v79; // [rsp+140h] [rbp+40h] BYREF
  const char *v80; // [rsp+148h] [rbp+48h]
  LPVOID v81; // [rsp+150h] [rbp+50h]
  char v82; // [rsp+158h] [rbp+58h]
  __int64 v83; // [rsp+160h] [rbp+60h]
  char v84[144]; // [rsp+168h] [rbp+68h] BYREF
  LPVOID lpMem; // [rsp+1F8h] [rbp+F8h]
  __int64 v86; // [rsp+200h] [rbp+100h]
  __int64 v87; // [rsp+208h] [rbp+108h]
  void *v88; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp+120h] BYREF
  void *v90; // [rsp+230h] [rbp+130h]
  int v91; // [rsp+238h] [rbp+138h]
  int v92; // [rsp+23Ch] [rbp+13Ch]
  DWORD *p_CurrentThreadId; // [rsp+240h] [rbp+140h]
  __int64 v94; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+250h] [rbp+150h] BYREF

  v67 = -2LL;
  v71[0] = 0LL;
  v71[1] = &v70;
  v72 = 0LL;
  v73 = 0;
  v74 = &v79;
  v75 = &v76;
  v76 = 0;
  v77 = 0;
  v82 = 0;
  v79 = 0;
  v80 = "Initialization";
  v81 = 0LL;
  v83 = 1LL;
  lpMem = 0LL;
  memset_0(v84, 0, sizeof(v84));
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v70 = &CImmersiveAppTelemetry::Initialization::`vftable';
  v9 = v75;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v9 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v9 + 2));
  *v9 = 1;
  v59 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v54, &v59) && v54 )
  {
    v59 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v10 = *((_QWORD *)v59 + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v94 = 4LL;
    TlgCreateWsz(&pDesc, a2);
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v70);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388C1F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v10 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v90 = &unk_180388C2A;
    v91 = 49;
    v92 = 1;
    EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, (LPCGUID)(v75 + 2), v11, 4u, &UserData);
  }
  if ( !v73 )
  {
    v12 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_81;
    v13 = GetCurrentThreadId();
    v14 = (signed __int64 *)(v12 + 8 * (v13 % 0xA));
    v15 = *v14;
    if ( *v14 )
    {
      while ( *(_DWORD *)(v15 + 8) != (_DWORD)v13 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        if ( !v15 )
          goto LABEL_77;
      }
      goto LABEL_17;
    }
LABEL_77:
    ProcessHeap = GetProcessHeap();
    v41 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v15 = (signed __int64)v41;
    if ( v41 )
    {
      *(_QWORD *)v41 = 0LL;
      v41[2] = v13;
      *((_QWORD *)v41 + 2) = 0LL;
      _m_prefetchw(v14);
      do
      {
        v42 = *v14;
        *(_QWORD *)(v15 + 16) = *v14;
      }
      while ( v42 != _InterlockedCompareExchange64(v14, v15, v42) );
    }
    else
    {
LABEL_81:
      v15 = 0LL;
    }
LABEL_17:
    v71[0] = v15;
    if ( v15 )
    {
      v72 = *(_QWORD *)v15;
      *(_QWORD *)v15 = v71;
      v73 = GetCurrentThreadId();
    }
  }
  *((_BYTE *)this + 53) = a4;
  v68 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v51 = 0LL;
  v16 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)a5 + 24LL);
  if ( v16 == CApplicationManager::PrivateQueryService )
    Service = CApplicationManager::PrivateQueryService(
                a5,
                &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
                &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
                (void **)&v51);
  else
    Service = v16(
                a5,
                &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
                &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
                (void **)&v51);
  v18 = Service;
  if ( Service >= 0 )
  {
    v50 = 0LL;
    v19 = *(int (**)(CApplicationFrameService *__hidden, const unsigned __int16 *, unsigned int, struct IApplicationFrameProxy **))(*(_QWORD *)v51 + 72LL);
    if ( v19 == CApplicationFrameService::GetFrame )
      Frame = CApplicationFrameService::GetFrame(v51, a2, a3, &v50);
    else
      Frame = ((__int64 (__fastcall *)(CApplicationFrameService *, const unsigned __int16 *, _QWORD, struct IApplicationFrameProxy **))v19)(
                v51,
                a2,
                a3,
                &v50);
    v18 = Frame;
    if ( Frame < 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids,
          (_DWORD)a2,
          a3);
      goto LABEL_55;
    }
    v21 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *__hidden, HWND *))(*(_QWORD *)v50 + 24LL);
    if ( v21 == CApplicationFrameWrapper::GetFrameWindow )
      FrameWindow = CApplicationFrameWrapper::GetFrameWindow(v50, &hwnd);
    else
      FrameWindow = v21(v50, &hwnd);
    v18 = FrameWindow;
    if ( FrameWindow < 0 )
    {
LABEL_55:
      v32 = v50;
      if ( v50 )
      {
        v50 = 0LL;
        (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( v18 >= 0 )
      {
        v33 = *((_QWORD *)this + 72);
        if ( v33 )
        {
          *((_QWORD *)this + 72) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        v34 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)a5 + 24LL);
        v35 = (void **)((char *)this + 576);
        if ( v34 == CApplicationManager::PrivateQueryService )
          v36 = CApplicationManager::PrivateQueryService(
                  a5,
                  (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
                  &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                  v35);
        else
          v36 = v34(
                  a5,
                  (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
                  &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                  v35);
        v18 = v36;
      }
      goto LABEL_63;
    }
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr)
      && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
    {
      *((_BYTE *)this + 52) = (pvAttribute & 2) == 0;
    }
    v18 = 0;
    if ( a2 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a2[v23] );
      v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (char *)this + 544,
              v23);
      if ( v18 >= 0 )
      {
        v24 = v23 + 1;
        v25 = (char *)*((_QWORD *)this + 68);
        if ( v23 > 0x7FFFFFFE )
        {
          if ( v23 == -1LL )
            goto LABEL_43;
        }
        else
        {
          v26 = (char *)a2 - v25;
          while ( v24 != 1 )
          {
            v27 = *(_WORD *)&v25[v26];
            if ( !v27 )
              break;
            *(_WORD *)v25 = v27;
            v25 += 2;
            if ( !--v24 )
              goto LABEL_87;
          }
          if ( v24 )
            goto LABEL_42;
LABEL_87:
          v25 -= 2;
        }
LABEL_42:
        *(_WORD *)v25 = 0;
LABEL_43:
        *((_QWORD *)this + 69) = v23;
      }
    }
    else
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 544);
    }
    if ( v18 >= 0 )
    {
      v28 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
      v29 = v50;
      if ( v28 != v50 )
      {
        if ( v50 )
        {
          (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v50 + 8LL))(v50);
          v28 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
        }
        *((_QWORD *)this + 15) = v29;
        if ( v28 )
          (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      *((_QWORD *)this + 16) = hwnd;
      *((_QWORD *)this + 71) = a6;
      v69 = a5;
      (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
      v30 = 0;
      v52 = 0LL;
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 71))(
             *((_QWORD *)this + 71),
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v52) >= 0 )
        v30 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 328LL))(v52, 6LL) == 0;
      v65[0] = (__int64)this;
      v65[1] = (__int64)a5;
      (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
      v66 = v30;
      v18 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa8acc1eed1698d6ba192654be930d00___(this, v65);
      v31 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
    }
    goto LABEL_55;
  }
LABEL_63:
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_f92450d1a1f4360b97610f5cce7870ef_Traceguids,
      (_DWORD)a2,
      a3,
      *((_DWORD *)this + 12));
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v70, v18);
  v37 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(CApplicationFrameService *))(*(_QWORD *)v37 + 16LL))(v37);
  }
  (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 16LL))(a5);
  v70 = &CImmersiveAppTelemetry::Initialization::`vftable';
  v38 = (volatile signed __int32 *)v88;
  if ( !v88 )
    goto LABEL_67;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v70,
    &SRWLock);
  v38 = (volatile signed __int32 *)v88;
  if ( v88 && *(_DWORD *)v88 == 1 )
  {
    v43 = 1;
  }
  else
  {
    v43 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v88);
    v38 = (volatile signed __int32 *)v88;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v38 = (volatile signed __int32 *)v88;
  }
  if ( v43 )
  {
LABEL_67:
    if ( *v75 == 1 )
    {
      v44 = v75[21];
      v45 = 2147942974LL;
      if ( v44 < 0 )
        v45 = (unsigned int)v44;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v75,
        v45,
        v62);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v70);
      v38 = (volatile signed __int32 *)v88;
    }
  }
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd(v38, 0xFFFFFFFF) == 1 )
    {
      v46 = v88;
      if ( v88 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v88 + 8);
        operator delete(v46, (const struct std::nothrow_t *)0x100);
      }
    }
    v88 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v47 = GetProcessHeap();
      HeapFree(v47, 0, lpMem);
    }
    lpMem = 0LL;
    v86 = 0LL;
  }
  if ( v82 )
  {
    v48 = GetProcessHeap();
    HeapFree(v48, 0, v81);
    v82 = 0;
  }
  v81 = 0LL;
  if ( v76 == 1 )
  {
    v76 = 2;
    v61 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v57, &v61) && v57 )
    {
      v61 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v61 + 1), v78);
  }
  v76 = 3;
  if ( v73 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v71);
  return (unsigned int)v18;
}
