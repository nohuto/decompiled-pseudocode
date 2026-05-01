/*
 * XREFs of ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801082CC
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x18010BAD0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$Make@V?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@AEAIAEAIAEAPEAEAEAP6AXPEAX@Z@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@@12@AEAI0AEAPEAEAEAP6AXPEAX@Z@Z @ 0x18010ED94 (--$Make@V-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180194E50 (memset.c)
 *     memcpy_0 @ 0x1801976BE (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeserializePropertySet(
        struct MsgBlob *Src,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct MsgBlob *v3; // rsi
  int v4; // r14d
  void *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rdi
  int v9; // eax
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+38h] [rbp-49h] BYREF
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  __int64 v19; // [rsp+48h] [rbp-39h] BYREF
  int v20; // [rsp+50h] [rbp-31h] BYREF
  int v21; // [rsp+58h] [rbp-29h] BYREF
  int v22[2]; // [rsp+60h] [rbp-21h] BYREF
  void *v23; // [rsp+68h] [rbp-19h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-11h] BYREF
  void *v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v26 = -2LL;
  v3 = Src;
  *a2 = 0LL;
  if ( Src )
    v4 = *(_DWORD *)Src & 0x1FFFFFFF;
  else
    v4 = 0;
  v5 = CoTaskMemAlloc(v4);
  v25 = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_42;
  }
  if ( v3 )
  {
    v7 = *(_DWORD *)v3 & 0xE0000000;
    if ( v7 == 1610612736 )
    {
      v3 = (struct MsgBlob *)((char *)v3 + 8);
    }
    else
    {
      if ( v7 != -1610612736 )
        __debugbreak();
      v3 = (struct MsgBlob *)*((_QWORD *)v3 + 1);
    }
  }
  if ( v4 )
  {
    if ( v3 )
    {
      memcpy_0(v5, v3, v4);
    }
    else
    {
      memset(v5, 0, v4);
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
  }
  v19 = 0LL;
  *(_QWORD *)v22 = CoTaskMemFree;
  v23 = v5;
  v20 = v4;
  v21 = v4;
  Microsoft::WRL::Details::Make<Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>,unsigned int &,unsigned int &,unsigned char * &,void (*&)(void *)>(
    (unsigned int)&v24,
    (unsigned int)&v21,
    (unsigned int)&v20,
    (unsigned int)&v23,
    (__int64)v22);
  v8 = v24;
  v6 = v24 == 0LL ? 0x8007000E : 0;
  if ( v24 )
    v6 = (**v24)(v24, &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da, &v19);
  else
    CoTaskMemFree(v5);
  if ( v8 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  if ( (v6 & 0x80000000) == 0 )
  {
    v5 = 0LL;
    v25 = 0LL;
    v18 = 0LL;
    v9 = RoCreatePropertySetSerializer(&v18);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x61,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
LABEL_38:
      v14 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      goto LABEL_40;
    }
    v17 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v17);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, __int64))(*(_QWORD *)v18 + 56LL))(
              v18,
              v17,
              v19);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v13 = v17;
        if ( v17 )
        {
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 8LL))(v17);
          v13 = v17;
        }
        *a2 = v13;
        v6 = 0;
        goto LABEL_36;
      }
      v12 = 103LL;
    }
    else
    {
      v12 = 102LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v11);
    v13 = v17;
LABEL_36:
    if ( v13 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5D,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)v6);
LABEL_40:
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_42:
  if ( v5 )
    CoTaskMemFree(v5);
  return v6;
}
