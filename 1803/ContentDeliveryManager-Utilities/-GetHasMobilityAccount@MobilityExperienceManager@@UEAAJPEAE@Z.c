/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x180093B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180094320 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  HRESULT v15; // eax
  HRESULT v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  INT32 result; // [rsp+28h] [rbp-49h] BYREF
  HSTRING string1; // [rsp+30h] [rbp-41h] BYREF
  __int64 v24; // [rsp+38h] [rbp-39h] BYREF
  __int64 v25; // [rsp+40h] [rbp-31h] BYREF
  __int64 v26; // [rsp+48h] [rbp-29h] BYREF
  __int64 v27; // [rsp+50h] [rbp-21h]
  unsigned int v28; // [rsp+58h] [rbp-19h] BYREF
  int *v29; // [rsp+60h] [rbp-11h]
  int v30; // [rsp+68h] [rbp-9h] BYREF
  __int64 v31; // [rsp+70h] [rbp-1h] BYREF
  __int64 v32; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v33[2]; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v33[1] = -2LL;
  *a2 = 0;
  v26 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
LABEL_62:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    JUMPOUT(0x180094010LL);
  }
  v26 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v26);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_58;
  }
  v33[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 96LL))(v26, v33);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_56;
  }
  v32 = 0LL;
  v7 = v33[0];
  v5 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(v33[0]);
  if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v32), v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_54;
  }
  v27 = v32;
  v29 = &v30;
  v30 = 0;
  v31 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 56LL))(v32, &v28);
  *v29 = v8;
  if ( v8 >= 0 && v28 )
  {
    v9 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, 0LL, &v31);
    *v29 = v10;
  }
  v11 = 0;
  v12 = v28;
  while ( 1 )
  {
    if ( *v29 < 0 || v11 == v12 )
      goto LABEL_39;
    v25 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v25);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_49;
    }
    v24 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
           v25,
           &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
           &v24) < 0 )
      goto LABEL_24;
    string1 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 56LL))(v24, &string1);
    v5 = v14;
    if ( v14 < 0 )
      break;
    result = 0;
    string = 0LL;
    v15 = WindowsCreateStringReference(L"consumers", 9u, &hstringHeader, &string);
    if ( v15 < 0 )
      goto LABEL_62;
    v16 = WindowsCompareStringOrdinal(string1, string, &result);
    v5 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v16);
      string = 0LL;
      goto LABEL_44;
    }
    string = 0LL;
    if ( !result )
    {
      *a2 = 1;
      if ( string1 )
        WindowsDeleteString(string1);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_39:
      v19 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v5 = 0;
      goto LABEL_54;
    }
    if ( string1 )
      WindowsDeleteString(string1);
LABEL_24:
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    ++v11;
    if ( *v29 >= 0 && v11 < v28 )
    {
      v17 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, v11, &v31);
      *v29 = v18;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)v14);
LABEL_44:
  if ( string1 )
    WindowsDeleteString(string1);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_49:
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v20 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_54:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
LABEL_56:
  if ( v33[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33[0] + 16LL))(v33[0]);
LABEL_58:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return (unsigned int)v5;
}
