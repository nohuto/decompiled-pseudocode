/*
 * XREFs of ?SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z @ 0x18018EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::SetDirectorReference(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  int v4; // eax
  int AgileReference; // ebx
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &v13);
  AgileReference = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_15;
  }
  AcquireSRWLockExclusive(this + 18);
  v6 = (__int64 *)&this[19];
  v7 = v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&this[19]);
  if ( v7 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v12);
    AgileReference = RoGetAgileReference(0LL, &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, v7, &v12);
    if ( AgileReference >= 0 )
    {
      v8 = *v6;
      *v6 = v12;
      v12 = v8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v12);
    if ( AgileReference < 0 )
    {
      v9 = 72LL;
      goto LABEL_10;
    }
  }
  if ( !*v6 )
  {
    AgileReference = -2147418113;
    v9 = 73LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)AgileReference);
    if ( this != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockExclusive(this + 18);
    goto LABEL_15;
  }
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
  SetEvent(this[17].Ptr);
  AgileReference = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)AgileReference;
}
