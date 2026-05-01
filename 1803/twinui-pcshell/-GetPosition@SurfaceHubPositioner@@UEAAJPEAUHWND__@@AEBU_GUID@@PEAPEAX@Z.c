/*
 * XREFs of ?GetPosition@SurfaceHubPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1802BC970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18008B228 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SurfaceHubPositioner::GetPosition(
        SurfaceHubPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  HWND v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_BYTE *)this + 448) )
  {
    *a4 = 0LL;
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v11);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
           &v11,
           &v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v11)(v11, a3, a4);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v8 = 173LL;
    }
    else
    {
      v8 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v11);
    return v6;
  }
  v6 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)0x8000FFFFLL);
  return v6;
}
