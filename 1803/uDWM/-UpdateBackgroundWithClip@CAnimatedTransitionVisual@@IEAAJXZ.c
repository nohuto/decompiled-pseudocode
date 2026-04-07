/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094474
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011698 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180006C10 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180010A44 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180093B1C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  const RECT *v2; // r14
  CBaseObject *v3; // rbx
  int v4; // ecx
  __int64 v5; // r9
  int v6; // eax
  struct tagRECT v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r8
  int RectangleGeometry; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  struct CResource *BrushNoRef; // rax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  struct CRenderDataInstruction *v20; // [rsp+30h] [rbp-40h] BYREF
  struct CResource *v21; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = (const RECT *)((char *)this + 840);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v5 = 0LL;
  v20 = 0LL;
  v6 = v2->bottom - v2->top;
  v7 = *(struct tagRECT *)((char *)this + 856);
  v8 = *((unsigned int *)this + 211);
  if ( v6 >= 0 )
    v5 = (unsigned int)v6;
  v9 = 0LL;
  v21 = 0LL;
  rc = v7;
  if ( v4 >= 0 )
    v9 = (unsigned int)v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        (unsigned int)v2->left,
                        v8,
                        v9,
                        v5,
                        (struct CResource **)this + 89);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1124LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)RectangleGeometry);
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  RectangleGeometry = CDrawGeometryInstruction::Create(BrushNoRef, *((struct CResource **)this + 89), &v20);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1130LL;
    goto LABEL_18;
  }
  RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v20);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1132LL;
    goto LABEL_18;
  }
  v14 = RoundToNearestInt(*((float *)this + 189));
  v15 = RoundToNearestInt(*((float *)this + 188));
  OffsetRect(&rc, v15, v14);
  IntersectRect(&rcDst, v2, &rc);
  v16 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v21);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x472,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v16);
    v3 = v21;
    goto LABEL_20;
  }
  v3 = v21;
  v17 = *((_QWORD *)this + 3);
  if ( v17 )
    v18 = *(unsigned int *)(v17 + 24);
  else
    v18 = 0LL;
  RectangleGeometry = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 4)
                                                                         + 400LL))(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                        v18,
                        *((unsigned int *)v21 + 6));
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1143LL;
    goto LABEL_18;
  }
  v11 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
  if ( v3 )
    CBaseObject::Release(v3);
  return v11;
}
