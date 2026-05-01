/*
 * XREFs of ?UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z @ 0x1801A13D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServiceProvider@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019CE6C (--$As@UIServiceProvider@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PrivilegedHotkeyOperations::UnrequestPrivilegedHotkeys(
        Microsoft::WRL::Details::WeakReferenceImpl **this,
        unsigned int a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  struct IInspectable *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>(this + 7, &v11);
  if ( v11 )
  {
    v12 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IInspectable>::As<IServiceProvider>(&v11, &v12);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v4);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      goto LABEL_13;
    }
    v10 = 0LL;
    v5 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           &v10);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, a2);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = 0;
        goto LABEL_11;
      }
      v7 = 512LL;
    }
    else
    {
      v7 = 509LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    goto LABEL_12;
  }
  v3 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F8,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)0x80070490LL);
LABEL_13:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v11);
  return v3;
}
