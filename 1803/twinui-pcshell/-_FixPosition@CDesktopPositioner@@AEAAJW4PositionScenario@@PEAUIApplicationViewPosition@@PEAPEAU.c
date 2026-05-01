/*
 * XREFs of ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC
 * Callers:
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800226F8 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1802BF250 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1802C1728 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028870 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1800F4E58 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F5144 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1802BE328 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1802BE328.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1802BE364 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802C0C80 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_FixPosition(
        __int64 a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 *a4)
{
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  void (*v14)(void); // rax
  void (__fastcall *v15)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)); // rax
  void *v16; // rcx
  int DefaultRect; // eax
  __int64 v19; // rdx
  CDesktopPositioner *v20; // rcx
  CDesktopPositioner *v21; // rcx
  int v22; // eax
  int v23; // eax
  int fixed; // eax
  __int64 v25; // rdx
  CDesktopPositioner *v26; // rcx
  void *v27; // rax
  struct tagRECT *v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  void *v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v34[44]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall ***v36)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp-78h]
  struct tagRECT v37; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v38; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  struct tagRECT v43; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v44[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v45; // [rsp+100h] [rbp+0h] BYREF
  __int64 v46; // [rsp+110h] [rbp+10h]
  __m128i v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v35 = -2LL;
  v30 = 0LL;
  *a4 = 0LL;
  v36 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  if ( a3 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[1])(a3);
  v29 = 0LL;
  v8 = **a3;
  if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface )
    v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
           a3,
           &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
           &v29);
  else
    v9 = v8(a3, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v29);
  if ( v9 < 0 )
  {
    if ( *(_DWORD *)(a1 + 284) )
    {
      fixed = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*a3)[3])(a3, v44);
      v12 = fixed;
      if ( fixed < 0 )
      {
        v25 = 1757LL;
LABEL_66:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)fixed,
          (int)v28);
        goto LABEL_12;
      }
      v28 = (struct tagRECT *)&v48;
      fixed = CDesktopPositioner::_FixRectForWorkArea(a1, a2, v44, 0LL);
      v12 = fixed;
      if ( fixed < 0 )
      {
        if ( fixed != -2147024809 )
        {
          v25 = 1788LL;
          goto LABEL_66;
        }
        fixed = CDesktopPositioner::_GetDefaultRect(a1, v44, 0LL, &v37);
        v12 = fixed;
        if ( fixed < 0 )
        {
          v25 = 1770LL;
          goto LABEL_66;
        }
        if ( a2 == 4 )
        {
          Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v30);
          fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v30);
          v12 = fixed;
          if ( fixed < 0 )
          {
            v25 = 1776LL;
            goto LABEL_66;
          }
        }
        else
        {
          fixed = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v26, &v37, &v38);
          v12 = fixed;
          if ( fixed < 0 )
          {
            v25 = 1782LL;
            goto LABEL_66;
          }
          v31 = 3;
          fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                    &v30,
                    &v31,
                    &v38);
          v12 = fixed;
          if ( fixed < 0 )
          {
            v25 = 1783LL;
            goto LABEL_66;
          }
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v30);
        fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v30);
        v12 = fixed;
        if ( fixed < 0 )
        {
          v25 = 1763LL;
          goto LABEL_66;
        }
      }
      v27 = v30;
      v30 = 0LL;
      *a4 = (__int64)v27;
    }
    v12 = 0;
    goto LABEL_12;
  }
  v10 = v29;
  v33 = v29;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  if ( a2 )
    goto LABEL_9;
  DefaultRect = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 32LL))(v29, &v32);
  v12 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v19 = 1693LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultRect,
      (int)v28);
    goto LABEL_10;
  }
  DefaultRect = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 72LL))(v29, &v45);
  v12 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v19 = 1698LL;
    goto LABEL_43;
  }
  memset_0(v34, 0, sizeof(v34));
  *(_DWORD *)v34 = 44;
  *(_OWORD *)&v34[4] = v45;
  *(_QWORD *)&v34[20] = v46;
  *(__m128i *)&v34[28] = v47;
  v39 = *(_OWORD *)v34;
  v40 = *(struct tagRECT *)&v34[16];
  v41 = *(__int64 *)((char *)v47.m128i_i64 + 4);
  v42 = _mm_cvtsi128_si32(_mm_srli_si128(v47, 12));
  if ( v32 == 1 )
  {
    DefaultRect = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 64LL))(v29, &v31);
    v12 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v19 = 1706LL;
      goto LABEL_43;
    }
    DWORD2(v39) = (v31 != 1) + 3;
  }
  DefaultRect = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v29 + 56LL))(v29, &v43);
  v12 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v19 = 1714LL;
    goto LABEL_43;
  }
  DefaultRect = CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v20, &v43, &v38);
  v12 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v19 = 1718LL;
    goto LABEL_43;
  }
  v28 = &v37;
  if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(a1, 0LL, &v38, 0LL) == -2147024809 )
  {
    DefaultRect = CDesktopPositioner::_GetDefaultRect(a1, &v43, 0LL, &v37);
    v12 = DefaultRect;
    if ( DefaultRect < 0 )
    {
      v19 = 1726LL;
      goto LABEL_43;
    }
    v22 = DWORD2(v39);
    if ( v32 == 2 )
      v22 = 3;
    DWORD2(v39) = v22;
  }
  DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v21, &v37, (struct tagRECT *)&v40.bottom);
  v12 = DefaultRect;
  if ( DefaultRect < 0 )
  {
    v19 = 1736LL;
    goto LABEL_43;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v23 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(
          &v33,
          &v39);
  v12 = v23;
  if ( v23 >= 0 )
  {
    v10 = v33;
LABEL_9:
    v11 = v10;
    v10 = 0LL;
    *a4 = v11;
    v12 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6CA,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v23,
    (int)&v37);
  v10 = v33;
LABEL_10:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_12:
  v13 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    v14 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v13);
    else
      v14();
  }
  v15 = (void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a3)[2];
  if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(a3);
  else
    v15(a3);
  v16 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v12;
}
