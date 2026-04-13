/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x180010F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@1234@Upermission@01234@@Z @ 0x18001ABE4 (--0-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$Defaul.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001D958 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // edi
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // rcx
  int ActivationFactory; // eax
  __int64 v11; // rbx
  HRESULT v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // [rsp+38h] [rbp-49h] BYREF
  __int64 v40; // [rsp+40h] [rbp-41h] BYREF
  __int64 v41; // [rsp+48h] [rbp-39h] BYREF
  __int64 v42; // [rsp+50h] [rbp-31h] BYREF
  int v43; // [rsp+58h] [rbp-29h] BYREF
  __int64 v44; // [rsp+60h] [rbp-21h] BYREF
  __int64 v45; // [rsp+68h] [rbp-19h] BYREF
  __int64 v46; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v47[2]; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v47[1] = -2LL;
  *a3 = 0LL;
  v39 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
         0x41u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v39 = 0LL;
  v6 = RoActivateInstance(string, v47);
  if ( v6 < 0 )
    goto LABEL_64;
  if ( *(_QWORD *)&GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v39 = v47[0];
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v47[0])(
           v47[0],
           &GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb,
           &v39);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v47[0] + 16LL))(v47[0]);
  }
  if ( v6 < 0 )
  {
LABEL_64:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x371,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_65;
  }
  v42 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
         0x45u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = string;
  v9 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v42);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v41 = 0LL;
    v11 = v42;
    string = 0LL;
    v12 = WindowsCreateStringReference(L"MBI_SSL", 7u, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            a2,
            string,
            &v41);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x37C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v14);
LABEL_60:
      v35 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      goto LABEL_62;
    }
    v15 = 0LL;
    v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( !v16
      || (v17 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(v16),
          (v18 = v17) == 0) )
    {
      v6 = -2147024882;
      v20 = 2147942414LL;
      v21 = 895LL;
      goto LABEL_57;
    }
    v15 = v17;
    v47[0] = v17;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 104LL))(v17, v41);
    v6 = v19;
    if ( v19 < 0 )
    {
      v20 = (unsigned int)v19;
      v21 = 896LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v21,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v20);
LABEL_58:
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_60;
    }
    v46 = 0LL;
    v40 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v39 + 64LL))(
            v39,
            (v18 + 16) & -(__int64)(v18 != 0),
            &v46);
    v6 = v22;
    if ( v22 < 0 )
    {
      v23 = (unsigned int)v22;
      v24 = 901LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v24,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v23);
      goto LABEL_52;
    }
    v25 = v46;
    v26 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(v25);
    if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v40), v6 < 0) )
    {
      v23 = (unsigned int)v6;
      v24 = 902LL;
      goto LABEL_51;
    }
    if ( !v40 )
    {
      v6 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x387,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80070490LL);
LABEL_52:
      v33 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      goto LABEL_58;
    }
    v45 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 48LL))(v40, &v45);
    v6 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x38B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v27);
LABEL_48:
      v32 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_52;
    }
    v44 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, 0LL, &v44);
    v6 = v28;
    if ( v28 >= 0 )
    {
      v43 = 0;
      v28 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 64LL))(v44, &v43);
      v6 = v28;
      if ( v28 >= 0 )
      {
        v6 = v43;
        if ( v43 < 0 )
        {
          v30 = (unsigned int)v43;
          v29 = 914LL;
LABEL_44:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v29,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v30);
          goto LABEL_46;
        }
        v28 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 48LL))(v44, a3);
        v6 = v28;
        if ( v28 >= 0 )
        {
          v6 = 0;
LABEL_46:
          v31 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          goto LABEL_48;
        }
        v29 = 915LL;
      }
      else
      {
        v29 = 913LL;
      }
    }
    else
    {
      v29 = 910LL;
    }
    v30 = (unsigned int)v28;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x376,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_62:
  v36 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
LABEL_65:
  v37 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return (unsigned int)v6;
}
