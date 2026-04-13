/*
 * XREFs of ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x18002E818
 * Callers:
 *     ?SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@Z @ 0x18002ECF0 (-SetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@E@.c)
 *     ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18002ED90 (-GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct WindowsInternal::CDSProperties::ICDSLocalTileProperties **a3)
{
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v7; // rsi
  RTL_SRWLOCK *v8; // r15
  HRESULT v9; // eax
  HSTRING v10; // rdi
  PVOID v11; // rcx
  int ActivationFactory; // eax
  int v13; // edi
  PVOID v14; // rdi
  HRESULT v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID v19; // rdi
  PVOID v20; // rcx
  void *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, struct WindowsInternal::CDSProperties::ICDSLocalTileProperties **); // rcx
  PVOID v28; // rcx
  __int64 v29; // rcx
  PVOID v31; // [rsp+38h] [rbp-39h] BYREF
  __int64 v32; // [rsp+40h] [rbp-31h] BYREF
  HSTRING v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, struct WindowsInternal::CDSProperties::ICDSLocalTileProperties **); // [rsp+50h] [rbp-21h] BYREF
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  PVOID v36; // [rsp+60h] [rbp-11h]
  __int64 v37; // [rsp+68h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v37 = -2LL;
  *a3 = 0LL;
  Ptr = 0LL;
  v36 = 0LL;
  v7 = this + 16;
  AcquireSRWLockShared(this + 16);
  v8 = this + 20;
  if ( this[20].Ptr )
  {
    Ptr = v8->Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8->Ptr + 8LL))(v8->Ptr);
    v36 = Ptr;
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v7);
    if ( v8->Ptr )
      goto LABEL_15;
    string = 0LL;
    v9 = WindowsCreateStringReference(
           L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
           0x3Fu,
           &hstringHeader,
           &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = string;
    v11 = v8->Ptr;
    if ( v8->Ptr )
    {
      v8->Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    ActivationFactory = RoGetActivationFactory(v10, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &this[20]);
    v13 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x34C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)ActivationFactory);
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      goto LABEL_62;
    }
    if ( v8->Ptr )
    {
LABEL_15:
      Ptr = v8->Ptr;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8->Ptr + 8LL))(v8->Ptr);
      v36 = Ptr;
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
  v35 = 0LL;
  v13 = (*(__int64 (__fastcall **)(PVOID, HSTRING, __int64 *))(*(_QWORD *)Ptr + 48LL))(Ptr, a2, &v35);
  if ( v13 >= 0 )
  {
    v31 = 0LL;
    AcquireSRWLockShared(v7);
    v14 = this[21].Ptr;
    if ( v14 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v14 + 8LL))(this[21].Ptr);
      v31 = v14;
    }
    if ( v7 )
      ReleaseSRWLockShared(v7);
    if ( v31 )
    {
LABEL_47:
      v33 = 0LL;
      v23 = v35;
      WindowsDeleteString(0LL);
      v33 = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 56LL))(v23, &v33);
      v13 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x374,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v24);
LABEL_57:
        WindowsDeleteString(v33);
        v33 = 0LL;
LABEL_58:
        v28 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v28 + 16LL))(v28);
        }
        goto LABEL_60;
      }
      v34 = 0LL;
      v25 = (*(__int64 (__fastcall **)(PVOID, HSTRING, _QWORD))(*(_QWORD *)v31 + 80LL))(v31, v33, &v34);
      v13 = v25;
      if ( v25 >= 0 )
      {
        v25 = (**v34)(v34, &GUID_1feb7eca_a3a7_4f99_967c_c6ef0f2386c2, a3);
        v13 = v25;
        if ( v25 >= 0 )
        {
          v13 = 0;
LABEL_55:
          v27 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct WindowsInternal::CDSProperties::ICDSLocalTileProperties **)))(*v27)[2])(v27);
          }
          goto LABEL_57;
        }
        v26 = 888LL;
      }
      else
      {
        v26 = 887LL;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v26,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v25);
      goto LABEL_55;
    }
    v32 = 0LL;
    string = 0LL;
    v15 = WindowsCreateStringReference(
            L"WindowsInternal.CDSProperties.CDSTilePropertiesBatched",
            0x36u,
            &hstringHeader,
            &string);
    if ( v15 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = RoGetActivationFactory(string, &GUID_3055f2cd_a89f_43f3_be60_867e2644b283, &v32);
    v13 = v16;
    if ( v16 < 0 )
    {
      v17 = 869LL;
      goto LABEL_30;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, PVOID *))(*(_QWORD *)v32 + 48LL))(v32, 0LL, 1LL, &v31);
    v13 = v16;
    if ( v16 < 0 )
    {
      v17 = 870LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v17,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v16);
      v18 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_58;
    }
    AcquireSRWLockExclusive(v7);
    if ( this[21].Ptr )
    {
      v19 = this[21].Ptr;
      v20 = v31;
      if ( v31 != v19 )
      {
        if ( v19 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v19 + 8LL))(this[21].Ptr);
          v20 = v31;
        }
        v31 = v19;
LABEL_41:
        if ( v20 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      v21 = v31;
      if ( this[21].Ptr != v31 )
      {
        if ( v31 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v31 + 8LL))(v31);
        v20 = this[21].Ptr;
        this[21].Ptr = v21;
        goto LABEL_41;
      }
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v22 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    goto LABEL_47;
  }
LABEL_60:
  v29 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
LABEL_62:
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return (unsigned int)v13;
}
