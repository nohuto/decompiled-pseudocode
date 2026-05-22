/*
 * XREFs of ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091840
 * Callers:
 *     _lambda_f0fb12180c22145fe0b52491eb1f97bd_::operator() @ 0x180093BA4 (_lambda_f0fb12180c22145fe0b52491eb1f97bd_--operator().c)
 *     ?EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18009483C (-EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerCollection::EnsureResources(
        SpatialInputControllerCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 *v4; // rbx
  HRESULT v5; // eax
  __int64 v6; // rcx
  HSTRING v7; // r14
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rbx
  HRESULT v12; // eax
  __int64 v13; // rcx
  HSTRING v14; // r14
  HRESULT v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 3136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  v4 = (__int64 *)((char *)this + 3176);
  if ( !*((_QWORD *)this + 397) )
  {
    string = 0LL;
    v5 = WindowsCreateStringReference(L"Windows.Perception.PerceptionTimestampHelper", 0x2Cu, &hstringHeader, &string);
    if ( v5 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = *v4;
    v7 = string;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ActivationFactory = RoGetActivationFactory(v7, &GUID_47a611d4_a9df_4edc_855d_f4d339d967ac, (char *)this + 3176);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v10 = 609LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)ActivationFactory);
      goto LABEL_27;
    }
  }
  v11 = (__int64 *)((char *)this + 3184);
  if ( !*((_QWORD *)this + 398) )
  {
    string = 0LL;
    v12 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = *v11;
    v14 = string;
    if ( *v11 )
    {
      *v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ActivationFactory = RoGetActivationFactory(v14, &GUID_cb374983_e7b0_4841_8355_3ae5b536e9a4, (char *)this + 3184);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v10 = 615LL;
      goto LABEL_13;
    }
  }
  if ( *((_QWORD *)this + 399) )
    goto LABEL_26;
  v22 = 0LL;
  string = 0LL;
  v15 = WindowsCreateStringReference(L"Windows.Perception.Spatial.SpatialLocator", 0x29u, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    JUMPOUT(0x180091AC8LL);
  }
  v16 = RoGetActivationFactory(string, &GUID_b76e3340_a7c2_361b_bb82_56e93b89b1bb, &v22);
  v9 = v16;
  if ( v16 < 0 )
  {
    v17 = 622LL;
    goto LABEL_22;
  }
  v18 = *((_QWORD *)this + 399);
  if ( v18 )
  {
    *((_QWORD *)this + 399) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v16 = (**v22)(v22, &GUID_a96534fe_8251_42e7_8755_e3eb989e56e9, (char *)this + 3192);
  v9 = v16;
  if ( v16 >= 0 )
  {
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v20)[2])(v20);
    }
LABEL_26:
    v9 = 0;
    goto LABEL_27;
  }
  v17 = 624LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v16);
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v19)[2])(v19);
  }
LABEL_27:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v9;
}
