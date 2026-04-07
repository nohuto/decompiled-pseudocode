/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800957D4
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180011860 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x180093B1C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  __int64 v3; // rax
  LONG v4; // r8d
  struct tagPOINT *v5; // rcx
  unsigned int v6; // edi
  struct CResource *BrushNoRef; // rax
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct CRenderDataInstruction *v12; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v13; // [rsp+98h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = *((_DWORD *)this + 22);
  if ( (v2 & 0x1000) == 0 && (v2 & 0x2000) == 0 && (v2 & 0x20) == 0 )
    goto LABEL_9;
  if ( *((_BYTE *)this + 975) )
  {
    v3 = *((_QWORD *)this + 91);
    v4 = *((_DWORD *)this + 215);
    v13.x = *((_DWORD *)this + 214);
    v13.y = v4;
    v5 = **(struct tagPOINT ***)(v3 + 48);
    if ( v5[14].x != v13.x || v5[14].y != v4 )
      CVisual::SetOffset(v5, &v13);
    goto LABEL_8;
  }
  if ( (v2 & 0x2000) != 0 )
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 91));
  if ( *(_DWORD *)(*((_QWORD *)this + 91) + 272LL) )
    goto LABEL_8;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 89) + 16LL) + 704LL))(
    *(_QWORD *)(*((_QWORD *)this + 89) + 16LL),
    *(unsigned int *)(*((_QWORD *)this + 89) + 24LL));
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v9 = CDrawGeometryInstruction::Create(BrushNoRef, *((struct CResource **)this + 89), &v12);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = 1461LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_10;
  }
  v9 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 91), v12);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = 1462LL;
    goto LABEL_18;
  }
LABEL_8:
  *((_DWORD *)this + 22) &= ~0x1000u;
  *((_DWORD *)this + 22) &= 0xFFFFDFDF;
LABEL_9:
  v6 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
  return v6;
}
