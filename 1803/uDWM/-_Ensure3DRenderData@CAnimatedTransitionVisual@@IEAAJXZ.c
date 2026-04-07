/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094958
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009487C (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180033C78 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x1800355B0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180035620 (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  CBaseObject *v1; // rbx
  CBaseObject *v2; // rdi
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rdx
  int v7; // eax
  struct CResource *v8; // rsi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CRenderDataInstruction *v12; // [rsp+70h] [rbp+30h] BYREF
  struct CRenderDataInstruction *v13; // [rsp+78h] [rbp+38h] BYREF
  struct CPopInstruction *v14; // [rsp+80h] [rbp+40h] BYREF

  v12 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !*((_DWORD *)this + 70) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 40) + 16LL) + 1152LL))(
           *(_QWORD *)(*((_QWORD *)this + 40) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 40) + 24LL));
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1612LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_20;
    }
    v7 = CPushTransformInstruction::Create(*((struct CResource **)this + 40), &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64D,
        (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v7);
      v1 = v13;
      goto LABEL_20;
    }
    v1 = v13;
    v4 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1614LL;
      goto LABEL_18;
    }
    v8 = (struct CResource *)*((_QWORD *)this + 75);
    if ( !v8 )
      v8 = (struct CResource *)*((_QWORD *)this + 73);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
    v4 = CDrawBitmapInstruction::Create(v8, &v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1616LL;
      goto LABEL_18;
    }
    v4 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v12);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1617LL;
      goto LABEL_18;
    }
    v9 = CPopInstruction::Create(&v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x654,
        (__int64)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v9);
      v2 = v14;
      goto LABEL_20;
    }
    v2 = v14;
    v4 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1621LL;
      goto LABEL_18;
    }
  }
  v5 = 0;
LABEL_20:
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v1 )
    CBaseObject::Release(v1);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
  return v5;
}
