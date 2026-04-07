/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050
 * Callers:
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017108 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x18001B958 (--0CText@@AEAA@XZ.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18001CAE4 (--0CAccent@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18002ED88 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x18003800C (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180039744 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B34C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18003CBFC (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180041564 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180042C6C (-Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x180049C94 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x18007C524 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007E4F0 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180082640 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180082730 (-Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x18009FEB4 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800238B0 (--0CVisual@@IEAA@XZ.c)
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
