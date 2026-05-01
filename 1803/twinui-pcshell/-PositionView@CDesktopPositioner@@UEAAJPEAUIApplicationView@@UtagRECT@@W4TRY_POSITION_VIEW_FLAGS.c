/*
 * XREFs of ?PositionView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1802BF840
 * Callers:
 *     ?PositionView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1800AF160 (-PositionView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAG.c)
 *     ?PositionView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1800AF170 (-PositionView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022050 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1802C1418 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::PositionView(__int64 a1, struct IApplicationView *a2, unsigned int *a3, char a4)
{
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // r15
  CDesktopPositioner *v14; // rcx
  int FullPositionSnapshot; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  IUnknown *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r9
  __int64 v25; // rdx
  LONG top; // r11d
  LONG left; // edi
  int v28; // r10d
  int right; // r9d
  int bottom; // r10d
  unsigned int v31; // edx
  unsigned int v32; // r8d
  int fixed; // eax
  struct IApplicationViewTitlebarConfiguration *v35; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-61h] BYREF
  __int64 v37; // [rsp+58h] [rbp-59h] BYREF
  __int64 v38; // [rsp+60h] [rbp-51h] BYREF
  __int64 v39; // [rsp+68h] [rbp-49h] BYREF
  int v40; // [rsp+70h] [rbp-41h] BYREF
  __int64 v41[2]; // [rsp+78h] [rbp-39h] BYREF
  RECT v42; // [rsp+88h] [rbp-29h] BYREF
  __int64 v43; // [rsp+98h] [rbp-19h] BYREF
  __int64 v44; // [rsp+A0h] [rbp-11h]
  RECT rc1; // [rsp+A8h] [rbp-9h] BYREF
  RECT rc2; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v41[1] = -2LL;
  v38 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v38);
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v38);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v37);
    v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL))(
            a2,
            &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
            &v37);
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = 214LL;
LABEL_12:
      v12 = (unsigned int)v10;
      goto LABEL_13;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 32LL))(v37, &v40);
    v9 = v10;
    if ( v10 < 0 )
    {
      v11 = 217LL;
      goto LABEL_12;
    }
    if ( (unsigned int)(v40 - 2) > 1 )
    {
      v9 = -2147019873;
      v12 = 2147947423LL;
      v11 = 220LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v12);
LABEL_55:
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v37);
      goto LABEL_56;
    }
    v13 = 0;
    if ( v40 == 2 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v37 + 24LL))(v37, &rc1);
      v9 = v10;
      if ( v10 < 0 )
      {
        v11 = 226LL;
        goto LABEL_12;
      }
LABEL_21:
      v36 = 0;
      v39 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
      if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
             a2,
             &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
             &v39) >= 0 )
      {
        v35 = 0LL;
        v17 = v39;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        v18 = (*(__int64 (__fastcall **)(__int64, struct IApplicationViewTitlebarConfiguration **))(*(_QWORD *)v17 + 24LL))(
                v17,
                &v35);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 244LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
LABEL_54:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
          goto LABEL_55;
        }
        v18 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, unsigned int *))(*(_QWORD *)v35 + 368LL))(
                v35,
                &v36);
        v9 = v18;
        if ( v18 < 0 )
        {
          v19 = 245LL;
          goto LABEL_26;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      }
      v35 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      v21 = CDesktopPositioner::_CreateTitlebarConfiguration(v20, a2, &v35);
      v9 = v21;
      if ( v21 < 0 )
      {
        v22 = 249LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v21);
LABEL_53:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        goto LABEL_54;
      }
      v43 = 0LL;
      v44 = 0LL;
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, struct IApplicationViewTitlebarConfiguration *, __int64 *))(**(_QWORD **)(a1 + 96) + 72LL))(
              *(_QWORD *)(a1 + 96),
              v38,
              v36,
              1LL,
              1,
              v35,
              &v43);
      v9 = v21;
      if ( v21 < 0 )
      {
        v22 = 258LL;
        goto LABEL_32;
      }
      *a3 -= v43;
      a3[2] += v44;
      a3[1] -= HIDWORD(v43);
      a3[3] += HIDWORD(v44);
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v41);
      v23 = v41[0];
      if ( v41[0] )
      {
        v42 = rc1;
        top = rc1.top;
        left = rc1.left;
        if ( (a4 & 4) != 0 )
        {
          v28 = a3[3] - a3[1];
          right = rc1.left + a3[2] - *a3;
          v42.right = right;
          bottom = rc1.top + v28;
          v42.bottom = bottom;
        }
        else
        {
          bottom = v42.bottom;
          right = v42.right;
        }
        if ( (a4 & 1) != 0 )
        {
          v31 = *a3;
          if ( (a4 & 2) != 0 )
          {
            v31 += v43;
            *a3 = v31;
            a3[1] += HIDWORD(v43);
          }
          v32 = a3[1];
          *(_QWORD *)&v42.left = __PAIR64__(v32, v31);
          v42.right = v31 - left + right;
          v42.bottom = v32 - top + bottom;
        }
        fixed = CDesktopPositioner::_FixRectForWorkArea(a1 - 104, 6LL, &v42, v38);
        v9 = fixed;
        if ( fixed >= 0 )
        {
          if ( !v13 && EqualRect(&rc1, &rc2)
            || (*(RECT *)(v23 + 96) = rc2,
                *(_BYTE *)(v23 + 92) = 1,
                fixed = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v23),
                v9 = fixed,
                fixed >= 0) )
          {
            v9 = 0;
LABEL_51:
            if ( v23 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v23);
            goto LABEL_53;
          }
          v25 = 301LL;
        }
        else
        {
          v25 = 292LL;
        }
        v24 = (unsigned int)fixed;
      }
      else
      {
        v9 = -2147024882;
        v24 = 2147942414LL;
        v25 = 267LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)v24);
      goto LABEL_51;
    }
    if ( v40 != 3 )
      goto LABEL_21;
    v13 = 1;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v14, a2, &v35);
    v9 = FullPositionSnapshot;
    if ( FullPositionSnapshot >= 0 )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, RECT *))(*(_QWORD *)v35 + 56LL))(
                               v35,
                               &rc1);
      v9 = FullPositionSnapshot;
      if ( FullPositionSnapshot >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        goto LABEL_21;
      }
      v16 = 236LL;
    }
    else
    {
      v16 = 235LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)FullPositionSnapshot);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    goto LABEL_55;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_56:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v38);
  return v9;
}
