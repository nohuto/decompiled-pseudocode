/*
 * XREFs of ?SetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010E680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CopyPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@4@0@Z @ 0x18010B76C (-CopyPropertySet@Holographic@Shell@Internal@Windows@@YAJPEAUIPropertySet@Collections@Foundation@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::SetActivationPropertySet(
        ApplicationViewBackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  HRESULT v4; // eax
  int v5; // eax
  struct Windows::Foundation::Collections::IPropertySet *v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v9; // r8
  struct Windows::Foundation::Collections::IPropertySet *v10; // rbx
  __int64 v11; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v13[2]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v13[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  v13[0] = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)v13);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 470LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
    v9 = v13[0];
    goto LABEL_14;
  }
  v5 = Windows::Internal::Shell::Holographic::CopyPropertySet(a2, v13[0], v6);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 472LL;
    goto LABEL_7;
  }
  v9 = v13[0];
  if ( *((struct Windows::Foundation::Collections::IPropertySet **)this + 14) != v13[0] )
  {
    v10 = v13[0];
    if ( v13[0] )
    {
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13[0] + 8LL))(v13[0]);
      v9 = v13[0];
    }
    v11 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v10;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v9 = v13[0];
    }
  }
  v7 = 0;
LABEL_14:
  if ( v9 )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
