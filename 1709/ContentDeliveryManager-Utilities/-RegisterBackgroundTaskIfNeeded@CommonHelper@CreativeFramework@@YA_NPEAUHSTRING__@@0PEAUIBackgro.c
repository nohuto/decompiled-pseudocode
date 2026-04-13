/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180092314
 * Callers:
 *     _lambda_245d84deaf182427ab842afa126b70f8_::operator() @ 0x180092D88 (_lambda_245d84deaf182427ab842afa126b70f8_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x180092FFC (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180092298 (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___ @ 0x180093288 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 *a6)
{
  volatile signed __int32 *v10; // rbx
  _QWORD *v12; // rax
  HRESULT v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HRESULT v20; // eax
  __int64 v21; // rcx
  int ActivationFactory; // eax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  HRESULT v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdi
  int v47; // eax
  int v48; // eax
  volatile signed __int32 *v49; // rbx
  char v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR StringRawBuffer; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v64[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING string; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING_HEADER v68; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING v69; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v70; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v71; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v64[2] = -2LL;
  v64[3] = a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v50 = 0;
  v64[0] = &v50;
  v64[1] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___(v64);
  if ( v50 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v10 = (volatile signed __int32 *)a6[1];
      if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
      return 0;
    }
    if ( a5 == 1 )
    {
      v12 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v65,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask((__int64)a1, (__int64)v12);
    }
  }
  v51 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
          0x39u,
          &hstringHeader,
          &string);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v14 = v51;
  v51 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v51 = 0LL;
  v15 = RoActivateInstance(string, &v56);
  if ( v15 < 0 )
    goto LABEL_19;
  if ( *(_QWORD *)&GUID_0351550e_3e64_4572_a93a_84075a37c917.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    || *(_QWORD *)GUID_0351550e_3e64_4572_a93a_84075a37c917.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v56)(
            v56,
            &GUID_0351550e_3e64_4572_a93a_84075a37c917,
            &v51);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
LABEL_19:
    v16 = v51;
    goto LABEL_20;
  }
  v16 = v56;
  v51 = v56;
LABEL_20:
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v15);
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v16 + 80LL))(v16, a1);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 48LL))(v51, a2);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 64LL))(v51, a3);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v53 = 0LL;
  v69 = 0LL;
  v20 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.SystemCondition", 0x33u, &v68, &v69);
  if ( v20 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
  v21 = v53;
  v53 = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  ActivationFactory = RoGetActivationFactory(v69, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v53);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v52 = 0LL;
  v23 = 0LL;
  v55 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v52 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v53 + 48LL))(
            v53,
            4 * (unsigned int)((a4 & 4) == 0) + 3,
            &v52);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v24);
      __debugbreak();
    }
    v25 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v52)(
            v52,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v62);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v25);
      __debugbreak();
    }
    v23 = v62;
    v55 = v62;
    v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 72LL))(v51, v62);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v26);
      __debugbreak();
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v27 = v53;
    v28 = v52;
    v52 = 0LL;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, 5LL, &v52);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v29);
      __debugbreak();
    }
    v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v52)(
            v52,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v57);
    if ( v30 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v30);
      __debugbreak();
    }
    v31 = v57;
    v57 = 0LL;
    v32 = v23;
    v23 = v31;
    v55 = v31;
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 72LL))(v51, v31);
    if ( v33 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v33);
      __debugbreak();
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v54 = 0LL;
    v71 = 0LL;
    v34 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.CSystemCondition", 0x34u, &v70, &v71);
    if ( v34 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34);
    v35 = v54;
    v54 = 0LL;
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    v36 = RoGetActivationFactory(v71, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &v54);
    if ( v36 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v36);
    v59 = 0LL;
    v37 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v54 + 48LL))(v54, 7LL, 0LL, &v59);
    if ( v37 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v37);
      __debugbreak();
    }
    v38 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v59)(
            v59,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v58);
    if ( v38 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v38);
      __debugbreak();
    }
    v39 = v58;
    v58 = 0LL;
    v40 = v23;
    v23 = v39;
    v55 = v39;
    if ( v40 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 72LL))(v51, v39);
    if ( v41 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xAE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v41);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v42 = v53;
  v43 = v52;
  v52 = 0LL;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  v44 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, 8LL, &v52);
  if ( v44 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v44);
    __debugbreak();
  }
  v45 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v52)(
          v52,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v60);
  if ( v45 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v45);
    __debugbreak();
  }
  v46 = v60;
  v60 = 0LL;
  v55 = v46;
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 72LL))(v51, v46);
  if ( v47 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v47);
  v61 = 0LL;
  v48 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v51 + 96LL))(v51, &v61);
  if ( v48 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xBA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v48);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  v49 = (volatile signed __int32 *)a6[1];
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
      if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
    }
  }
  return 1;
}
