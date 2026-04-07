/*
 * XREFs of ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x180073080
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180071A70 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateInstructions(CRenderDataVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // esi
  __int64 v6; // r14
  CRenderDataVisual *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct CRenderDataInstruction *v10; // [rsp+48h] [rbp+28h] BYREF
  struct CRenderDataInstruction *v11; // [rsp+50h] [rbp+30h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1171LL;
    goto LABEL_21;
  }
  v2 = CRenderDataVisual::ClearInstructions(this[66]);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 1172LL;
    goto LABEL_21;
  }
  v5 = 0;
  if ( !*((_DWORD *)this + 98) )
  {
LABEL_15:
    v3 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v6 = 136LL * v5;
    v7 = this[46];
    if ( *((_BYTE *)v7 + v6 + 128) )
    {
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
      v2 = CDrawGeometryInstruction::Create(
             *(struct CResource **)((char *)this[46] + v6 + 32),
             *(struct CResource **)((char *)this[46] + v6 + 16),
             &v11);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 1178LL;
        goto LABEL_21;
      }
      v2 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v11);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 1179LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
      v7 = this[46];
    }
    if ( !*((_BYTE *)v7 + v6 + 129) )
      goto LABEL_14;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
    v2 = CDrawGeometryInstruction::Create(
           *(struct CResource **)((char *)this[46] + v6 + 72),
           *(struct CResource **)((char *)this[46] + v6 + 56),
           &v10);
    v3 = v2;
    if ( v2 < 0 )
      break;
    v2 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v10);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 1186LL;
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
LABEL_14:
    if ( ++v5 >= *((_DWORD *)this + 98) )
      goto LABEL_15;
  }
  v4 = 1185LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"windows\\dwm\\udwm\\livepreview.cpp",
    (const char *)(unsigned int)v2);
LABEL_16:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  return v3;
}
