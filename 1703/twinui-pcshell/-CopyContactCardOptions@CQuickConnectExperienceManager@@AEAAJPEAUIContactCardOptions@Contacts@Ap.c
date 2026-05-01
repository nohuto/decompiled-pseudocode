/*
 * XREFs of ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1800AB9A0
 * Callers:
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1800ABE40 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1800ADB24 (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::CopyContactCardOptions(
        CQuickConnectExperienceManager *this,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a2,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions **a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  HRESULT v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v20; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v21; // rcx
  __int64 v22; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v23; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v25; // [rsp+28h] [rbp-39h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v26; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-5h] BYREF
  _QWORD v33[3]; // [rsp+60h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  HSTRING string; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v33[1] = -2LL;
  if ( !a2 )
  {
    v5 = 336LL;
LABEL_3:
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v6;
  }
  if ( !a3 )
  {
    v5 = 337LL;
    goto LABEL_3;
  }
  *a3 = 0LL;
  v25 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Contacts.ContactCardOptions",
         0x34u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  v25 = 0LL;
  v6 = RoActivateInstance(string, &v26);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)&GUID_8c0a4f7e_6ab6_4f3f_be72_817236eeea5b.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_8c0a4f7e_6ab6_4f3f_be72_817236eeea5b.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v25 = v26;
    }
    else
    {
      v6 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, GUID *, struct Windows::ApplicationModel::Contacts::IContactCardOptions **))v26)(
             v26,
             &GUID_8c0a4f7e_6ab6_4f3f_be72_817236eeea5b,
             &v25);
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( v6 >= 0 )
    {
      v33[2] = a2;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
             a2,
             &v31);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 350LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
LABEL_56:
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)a2 + 16LL))(a2);
        goto LABEL_58;
      }
      v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v25 + 56LL))(
             v25,
             v31);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 351LL;
        goto LABEL_22;
      }
      v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, unsigned int *))(*(_QWORD *)a2 + 64LL))(
             a2,
             &v32);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 354LL;
        goto LABEL_22;
      }
      v8 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, _QWORD))(*(_QWORD *)v25 + 72LL))(
             v25,
             v32);
      v6 = v8;
      if ( v8 < 0 )
      {
        v9 = 355LL;
        goto LABEL_22;
      }
      v30 = 0LL;
      if ( (**(int (__fastcall ***)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, GUID *, __int64 *))a2)(
             a2,
             &GUID_8f271ba0_d74b_4cc6_9f53_1b0eb5d1273c,
             &v30) >= 0 )
      {
        v26 = 0LL;
        v10 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, GUID *, struct Windows::ApplicationModel::Contacts::IContactCardOptions **))v25)(
                v25,
                &GUID_8f271ba0_d74b_4cc6_9f53_1b0eb5d1273c,
                &v26);
        v6 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x16A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v10);
LABEL_43:
          v17 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v17 + 16LL))(v17);
          }
LABEL_54:
          v22 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_56;
        }
        v28 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v28);
        v6 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x16D,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
LABEL_41:
          v16 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          goto LABEL_43;
        }
        v29 = 0LL;
        v12 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *, __int64 *))(*(_QWORD *)v26 + 48LL))(
                v26,
                &v29);
        v6 = v12;
        if ( v12 < 0 )
        {
          v13 = 368LL;
          goto LABEL_39;
        }
        v27 = 0;
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 56LL))(v28, &v27);
        v6 = v12;
        if ( v12 < 0 )
        {
          v13 = 371LL;
LABEL_39:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v12);
          v15 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          goto LABEL_41;
        }
        v14 = 0;
        if ( v27 )
        {
          while ( 1 )
          {
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v28 + 48LL))(v28, v14, v33);
            v6 = v12;
            if ( v12 < 0 )
              break;
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 104LL))(v29, v33[0]);
            v6 = v12;
            if ( v12 < 0 )
            {
              v13 = 377LL;
              goto LABEL_39;
            }
            if ( ++v14 >= v27 )
              goto LABEL_45;
          }
          v13 = 376LL;
          goto LABEL_39;
        }
LABEL_45:
        v18 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        v19 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      v21 = v25;
      if ( v25 )
      {
        (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v25 + 8LL))(v25);
        v21 = v25;
      }
      *a3 = v21;
      v6 = 0;
      goto LABEL_54;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x159,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_58:
  v23 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Contacts::IContactCardOptions *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v6;
}
