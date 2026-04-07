/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180014FB4
 * Callers:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18000C90C (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180010A64 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CAccent@@IEAA@XZ @ 0x180011FF4 (--0CAccent@@IEAA@XZ.c)
 *     ??0CText@@AEAA@XZ @ 0x180014068 (--0CText@@AEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x1800232C8 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x18002F390 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800359E4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180039084 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180039F44 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003DC84 (-Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x180071B54 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180073DF0 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18007577C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180075A58 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007A130 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007A220 (-Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x18009DF54 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180018320 (--0CVisual@@IEAA@XZ.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CRenderDataVisual::`vftable';
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_DWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 240) = 0LL;
  return (CRenderDataVisual *)v1;
}
