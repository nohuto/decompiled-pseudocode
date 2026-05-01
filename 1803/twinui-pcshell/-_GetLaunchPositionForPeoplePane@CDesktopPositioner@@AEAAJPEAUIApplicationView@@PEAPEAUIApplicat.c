/*
 * XREFs of ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802C1490
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_2ecfb1edd99be80c777c6c32d24effa2__&___ptr64_::Run @ 0x180089C90 (wil--details--functor_wrapper_void__lambda_2ecfb1edd99be80c777c6c32d24effa2__-___ptr64_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1802C0744 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x1803055C4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  struct IImmersiveApplication **v6; // r8
  int ApplicationFromView; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  struct IApplicationViewPosition *v16; // rax
  void *v18; // [rsp+30h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  int v22; // [rsp+50h] [rbp-29h] BYREF
  struct tagSIZE v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 v24; // [rsp+60h] [rbp-19h]
  RECT rc; // [rsp+70h] [rbp-9h] BYREF
  RECT v26; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v27; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v24 = -2LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v21, v6);
  v8 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v20 = 0LL;
    v9 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
            v9,
            1LL,
            &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
            &v20);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x561,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      goto LABEL_26;
    }
    v11 = 0;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, &v22) < 0 )
      goto LABEL_12;
    v11 = ~v22;
    v12 = *((_QWORD *)this + 30);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v12 + 96LL))(v12, v11, &pv);
    v8 = v13;
    if ( v13 < 0 )
    {
      v14 = 1385LL;
      goto LABEL_18;
    }
    if ( v11 && pv )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, RECT *))(**((_QWORD **)this + 30) + 112LL))(
              *((_QWORD *)this + 30),
              pv,
              &v26);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 1397LL;
        goto LABEL_18;
      }
    }
    else
    {
LABEL_12:
      v13 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 30) + 120LL))(*((_QWORD *)this + 30), &v26);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 1393LL;
        goto LABEL_18;
      }
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagSIZE *))(**((_QWORD **)this + 30) + 104LL))(
            *((_QWORD *)this + 30),
            v11,
            &v23);
    v8 = v13;
    if ( v13 >= 0 )
    {
      rc = v26;
      v13 = CDesktopPositioner::_CalculateTaskbarFlyoutPosition(this, &rc, v23, &v27);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v18 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v18);
        v15 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                &v18,
                (__int128 *)&v27.left);
        v8 = v15;
        if ( v15 >= 0 )
        {
          v16 = (struct IApplicationViewPosition *)v18;
          v18 = 0LL;
          *a3 = v16;
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x57F,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v15);
        }
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v18);
        goto LABEL_23;
      }
      v14 = 1404LL;
    }
    else
    {
      v14 = 1401LL;
    }
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v13);
LABEL_23:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55E,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v8;
}
