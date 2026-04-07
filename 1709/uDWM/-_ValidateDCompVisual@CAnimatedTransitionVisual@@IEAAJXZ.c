/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C744
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18002EAC0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18008AA3C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  CBaseObject *v1; // rdi
  unsigned int v2; // esi
  int v4; // eax
  __int64 v5; // rax
  LONG v6; // r8d
  struct tagPOINT *v7; // rcx
  struct CResource *BrushNoRef; // rax
  int v10; // eax
  int v11; // eax
  struct tagPOINT v12; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0;
  v12 = 0LL;
  v4 = *((_DWORD *)this + 22);
  if ( (v4 & 0x1000) == 0 && (v4 & 0x2000) == 0 && (v4 & 0x20) == 0 )
    return v2;
  if ( *((_BYTE *)this + 975) )
  {
    v5 = *((_QWORD *)this + 91);
    v6 = *((_DWORD *)this + 215);
    v12.x = *((_DWORD *)this + 214);
    v12.y = v6;
    v7 = **(struct tagPOINT ***)(v5 + 48);
    if ( v7[14].x != v12.x || v7[14].y != v6 )
      CVisual::SetOffset(v7, &v12);
    goto LABEL_8;
  }
  if ( (v4 & 0x2000) != 0 )
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 91));
  if ( *(_DWORD *)(*((_QWORD *)this + 91) + 272LL) )
    goto LABEL_8;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 89) + 16LL) + 688LL))(
    *(_QWORD *)(*((_QWORD *)this + 89) + 16LL),
    *(unsigned int *)(*((_QWORD *)this + 89) + 24LL));
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v10 = CDrawGeometryInstruction::Create(
          BrushNoRef,
          *((struct CResource **)this + 89),
          (struct CDrawGeometryInstruction **)&v12);
  v2 = v10;
  if ( v10 >= 0 )
  {
    v1 = (CBaseObject *)v12;
    v11 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 91), *(struct CRenderDataInstruction **)&v12);
    v2 = v11;
    if ( v11 >= 0 )
    {
LABEL_8:
      *((_DWORD *)this + 22) &= 0xFFFFCFDF;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5D3u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5D2u);
    v1 = (CBaseObject *)v12;
  }
LABEL_9:
  if ( v1 )
    CBaseObject::Release(v1);
  return v2;
}
