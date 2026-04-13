/*
 * XREFs of ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A1D28
 * Callers:
 *     _lambda_245d84deaf182427ab842afa126b70f8_::operator() @ 0x1800A27FC (_lambda_245d84deaf182427ab842afa126b70f8_--operator().c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800A2A80 (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A1CAC (-UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V-$shared_ptr@VCorrelationVect.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___ @ 0x1800A2D20 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  int v6; // ebx
  volatile signed __int32 *v11; // rbx
  _QWORD *v13; // rax
  HRESULT v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  __int64 v23; // rcx
  int ActivationFactory; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rcx
  int v37; // eax
  HRESULT v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  wil::details::in1diag3 *v41; // rcx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  int v44; // eax
  __int64 v45; // rdi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rcx
  int v50; // eax
  wil::details::in1diag3 *v51; // rcx
  int v52; // eax
  __int64 v53; // rdi
  int v54; // eax
  int v55; // eax
  wil::details::in1diag3 *v56; // rcx
  volatile signed __int32 *v57; // rbx
  char v58; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-98h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR StringRawBuffer; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v72[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING string; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING_HEADER v76; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING v77; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v78; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v79; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v72[2] = -2LL;
  v72[3] = a6;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v58 = 0;
  v72[0] = &v58;
  v72[1] = &StringRawBuffer;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_76d04c7ef948b78080500df2ea23cc78___(v72);
  if ( v58 )
  {
    if ( (unsigned int)(a5 - 1) > 1 )
    {
      v11 = (volatile signed __int32 *)a6[1];
      if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      return 0;
    }
    if ( a5 == 1 )
    {
      v13 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              &v73,
              a6);
      CreativeFramework::CommonHelper::UnregisterTask((__int64)a1, (__int64)v13);
    }
  }
  v59 = 0LL;
  string = 0LL;
  v14 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.BackgroundTaskBuilder",
          0x39u,
          &hstringHeader,
          &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    goto LABEL_80;
  }
  v15 = v59;
  v59 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v59 = 0LL;
  v6 = RoActivateInstance(string, &v64);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)&GUID_0351550e_3e64_4572_a93a_84075a37c917.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_0351550e_3e64_4572_a93a_84075a37c917.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v16 = v64;
      v59 = v64;
      goto LABEL_19;
    }
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v64)(
           v64,
           &GUID_0351550e_3e64_4572_a93a_84075a37c917,
           &v59);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  v16 = v59;
LABEL_19:
  v17 = retaddr;
  if ( v6 < 0 )
  {
LABEL_80:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v6);
LABEL_81:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x83,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v16 + 80LL))(v16, a1);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_81;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 48LL))(v59, a2);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 64LL))(v59, a3);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_84;
  }
  v61 = 0LL;
  v77 = 0LL;
  v22 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.SystemCondition", 0x33u, &v76, &v77);
  if ( v22 < 0 )
  {
LABEL_84:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
LABEL_85:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_86;
  }
  v23 = v61;
  v61 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  ActivationFactory = RoGetActivationFactory(v77, &GUID_d269d1f1_05a7_49ae_87d7_16b2b8b9a553, &v61);
  v25 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_85;
  v60 = 0LL;
  v26 = 0LL;
  v63 = 0LL;
  if ( (a4 & 1) == 0 )
    goto LABEL_31;
  v60 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v61 + 48LL))(
          v61,
          4 * (unsigned int)((a4 & 4) == 0) + 3,
          &v60);
  v28 = retaddr;
  if ( v27 < 0 )
  {
LABEL_86:
    wil::details::in1diag3::Throw_Hr(
      v28,
      (void *)0x93,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  v29 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v60)(
          v60,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v70);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v29);
    __debugbreak();
  }
  v26 = v70;
  v63 = v70;
  v30 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 72LL))(v59, v70);
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v30);
    __debugbreak();
  }
LABEL_31:
  if ( (a4 & 2) != 0 )
  {
    v31 = v61;
    v32 = v60;
    v60 = 0LL;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v33 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, 5LL, &v60);
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v33);
      __debugbreak();
    }
    v34 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v60)(
            v60,
            &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
            &v65);
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x163B,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v34);
      __debugbreak();
    }
    v35 = v65;
    v65 = 0LL;
    v36 = v26;
    v26 = v35;
    v63 = v35;
    if ( v36 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      if ( v65 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 72LL))(v59, v35);
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v37);
LABEL_92:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v38);
LABEL_93:
      wil::details::in1diag3::Throw_Hr(
        v41,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v40);
LABEL_94:
      wil::details::in1diag3::Throw_Hr(
        v43,
        (void *)0xAC,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
        (const char *)(unsigned int)v42);
      __debugbreak();
    }
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_55;
  v62 = 0LL;
  v79 = 0LL;
  v38 = WindowsCreateStringReference(L"Windows.ApplicationModel.Background.CSystemCondition", 0x34u, &v78, &v79);
  if ( v38 < 0 )
    goto LABEL_92;
  v39 = v62;
  v62 = 0LL;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  v40 = RoGetActivationFactory(v79, &GUID_6f989a99_770e_4539_840b_ec97284926d5, &v62);
  v41 = retaddr;
  if ( v40 < 0 )
    goto LABEL_93;
  v67 = 0LL;
  v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v62 + 48LL))(v62, 7LL, 0LL, &v67);
  v43 = retaddr;
  if ( v42 < 0 )
    goto LABEL_94;
  v44 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v67)(
          v67,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v66);
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v44);
    __debugbreak();
  }
  v45 = v66;
  v66 = 0LL;
  v46 = v26;
  v26 = v45;
  v63 = v45;
  if ( v46 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v66 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 72LL))(v59, v45);
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v47);
    goto LABEL_97;
  }
  if ( v67 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
LABEL_55:
  v48 = v61;
  v49 = v60;
  v60 = 0LL;
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v48 + 48LL))(v48, 8LL, &v60);
  v51 = retaddr;
  if ( v50 < 0 )
  {
LABEL_97:
    wil::details::in1diag3::Throw_Hr(
      v51,
      (void *)0xB4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v50);
    __debugbreak();
  }
  v52 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v60)(
          v60,
          &GUID_ae48a1ee_8951_400a_8302_9c9c9a2a3a3b,
          &v68);
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v52);
    __debugbreak();
  }
  v53 = v68;
  v68 = 0LL;
  v63 = v53;
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v68 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
  }
  v54 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 72LL))(v59, v53);
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v54);
    goto LABEL_100;
  }
  v69 = 0LL;
  v55 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v59 + 96LL))(v59, &v69);
  v56 = retaddr;
  if ( v55 < 0 )
  {
LABEL_100:
    wil::details::in1diag3::Throw_Hr(
      v56,
      (void *)0xBA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v55);
    JUMPOUT(0x1800A261ELL);
  }
  if ( v69 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  v57 = (volatile signed __int32 *)a6[1];
  if ( v57 )
  {
    if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
      if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
    }
  }
  return 1;
}
