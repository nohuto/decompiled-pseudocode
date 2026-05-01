/*
 * XREFs of ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1802BFD20
 * Callers:
 *     ?ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800AF260 (-ResizeView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800AF270 (-ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1802C1418 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::ResizeView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  __int64 v7; // rbx
  unsigned int LastError; // esi
  int fixed; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  char v12; // r15
  CDesktopPositioner *v13; // rcx
  int FullPositionSnapshot; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  struct IOcclusionBasedApplicationViewPosition *v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  int v20; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  struct tagSIZE v22; // [rsp+50h] [rbp-29h]
  __int64 v23; // [rsp+58h] [rbp-21h]
  RECT rcSrc; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp-9h] BYREF
  int v26[4]; // [rsp+80h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v23 = -2LL;
  cx = a3.cx;
  v22 = a3;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v21);
  v7 = v21;
  if ( !v21 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_31;
  }
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v19);
  fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
            a2,
            &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
            &v19);
  LastError = fixed;
  if ( fixed < 0 )
  {
    v10 = 138LL;
LABEL_27:
    v11 = (unsigned int)fixed;
    goto LABEL_28;
  }
  fixed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 32LL))(v19, &v20);
  LastError = fixed;
  if ( fixed < 0 )
  {
    v10 = 142LL;
    goto LABEL_27;
  }
  if ( (unsigned int)(v20 - 2) > 1 )
  {
    LastError = -2147019873;
    v11 = 2147947423LL;
    v10 = 145LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v11);
    goto LABEL_30;
  }
  v12 = 0;
  if ( v20 == 2 )
  {
    fixed = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v19 + 24LL))(v19, &rcSrc);
    LastError = fixed;
    if ( fixed < 0 )
    {
      v10 = 151LL;
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  if ( v20 == 3 )
  {
    v12 = 1;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v13, a2, &v18);
    LastError = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v15 = 160LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)FullPositionSnapshot);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      goto LABEL_30;
    }
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v18 + 56LL))(
                             v18,
                             &rcSrc);
    LastError = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v15 = 161LL;
      goto LABEL_17;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
LABEL_19:
  if ( CopyRect(&rcDst, &rcSrc) )
  {
    rcSrc.right = cx + rcSrc.left;
    rcSrc.bottom = v22.cy + rcSrc.top;
    if ( v12 || !EqualRect(&rcDst, &rcSrc) )
    {
      fixed = CDesktopPositioner::_FixRectForWorkArea((char *)this - 104, 3LL, &rcSrc, 0LL);
      LastError = fixed;
      if ( fixed < 0 )
      {
        v10 = 176LL;
        goto LABEL_27;
      }
      *(_OWORD *)(v7 + 96) = *(_OWORD *)v26;
      *(_BYTE *)(v7 + 92) = 1;
      fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v7);
      LastError = fixed;
      if ( fixed < 0 )
      {
        v10 = 182LL;
        goto LABEL_27;
      }
    }
    LastError = 0;
    goto LABEL_30;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0xA7,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                v16);
LABEL_30:
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v19);
LABEL_31:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v7);
  return LastError;
}
