/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x180099E58
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180098C1C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180099644 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180003E28 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180006C10 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180037DE8 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  LONG cx; // eax
  CBaseObject *v4; // rbx
  struct CResource *v6; // rdi
  __int64 v9; // rax
  LONG v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  struct CResource *v15; // rcx
  __int128 v16; // xmm0
  struct CSolidRectangleInstruction *v17; // rdx
  int v18; // eax
  struct CSolidRectangleInstruction *v20; // [rsp+20h] [rbp-50h] BYREF
  struct CRenderDataInstruction *v21; // [rsp+28h] [rbp-48h] BYREF
  struct CDrawOcclusionRectangleInstruction *v22; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-38h] BYREF
  struct _MARGINS v24; // [rsp+48h] [rbp-28h] BYREF
  struct CResource *v25[2]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  cx = a2->cx;
  v4 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v24.cxLeftWidth = 0LL;
  *(_QWORD *)&v24.cyTopHeight = 0LL;
  v23.left = cx;
  v23.top = a2->cy;
  v9 = *(_QWORD *)this;
  v22 = 0LL;
  v25[0] = 0LL;
  (*(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(v9 + 80))(this, &v23);
  CRenderDataVisual::ClearInstructions(this);
  if ( a3 )
  {
    v10 = *((_DWORD *)this + 30);
    v23.left = 0;
    v23.top = 0;
    v23.right = v10;
    v23.bottom = *((_DWORD *)this + 31);
    v11 = ResourceHelper::CreateRectangleGeometry(&v23, v25);
    v6 = v25[0];
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 40LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"windows\\dwm\\udwm\\screenrotation.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
    v14 = *((_QWORD *)this + 39);
    v15 = *(struct CResource **)(v14 + 608);
    if ( !v15 )
      v15 = *(struct CResource **)(v14 + 592);
    v11 = CDrawGeometryInstruction::Create(v15, v6, &v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 41LL;
      goto LABEL_18;
    }
    v11 = CRenderDataVisual::AddInstruction(this, v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 42LL;
      goto LABEL_18;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
    v11 = CSolidRectangleInstruction::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v20);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 47LL;
      goto LABEL_18;
    }
    v16 = *(_OWORD *)((char *)this + 364);
    v17 = v20;
    v25[0] = 0LL;
    *((_OWORD *)v20 + 1) = v16;
    *(float *)&v16 = (float)a2->cy;
    *(float *)&v25[1] = (float)a2->cx;
    HIDWORD(v25[1]) = v16;
    *((_OWORD *)v17 + 2) = *(_OWORD *)v25;
    v11 = CRenderDataVisual::AddInstruction(this, v17);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 56LL;
      goto LABEL_18;
    }
  }
  v18 = CDrawOcclusionRectangleInstruction::Create(&v24, &v22);
  v12 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (__int64)"windows\\dwm\\udwm\\screenrotation.cpp",
      (const char *)(unsigned int)v18);
    v4 = v22;
    goto LABEL_20;
  }
  v4 = v22;
  v11 = CRenderDataVisual::AddInstruction(this, v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 64LL;
    goto LABEL_18;
  }
  v12 = 0;
LABEL_20:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v4 )
    CBaseObject::Release(v4);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
  return v12;
}
