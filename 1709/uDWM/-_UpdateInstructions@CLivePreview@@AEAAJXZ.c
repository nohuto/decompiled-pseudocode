/*
 * XREFs of ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006C274
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18006ACC8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateInstructions(CRenderDataVisual **this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // r15d
  CRenderDataVisual *v8; // rcx
  __int64 v9; // r14
  int v10; // eax
  int v11; // eax
  CRenderDataVisual *v12; // rcx
  int v13; // eax
  int v14; // eax
  struct CRenderDataInstruction *v16; // [rsp+68h] [rbp+10h] BYREF
  struct CRenderDataInstruction *v17; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x493u);
    return v5;
  }
  v6 = CRenderDataVisual::ClearInstructions(this[66]);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x494u);
    return v5;
  }
  v7 = 0;
  if ( !*((_DWORD *)this + 98) )
    return v5;
  while ( 1 )
  {
    v8 = this[46];
    v9 = 136LL * v7;
    if ( *((_BYTE *)v8 + v9 + 128) )
    {
      v10 = CDrawGeometryInstruction::Create(
              *(struct CResource **)((char *)v8 + v9 + 32),
              *(struct CResource **)((char *)v8 + v9 + 16),
              &v16);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x49Au);
        v1 = v16;
        goto LABEL_24;
      }
      v1 = v16;
      v11 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v16);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x49Bu);
        goto LABEL_24;
      }
      if ( v1 )
      {
        CBaseObject::Release(v1);
        v1 = 0LL;
        v16 = 0LL;
      }
    }
    v12 = this[46];
    if ( !*((_BYTE *)v12 + v9 + 129) )
      goto LABEL_17;
    v13 = CDrawGeometryInstruction::Create(
            *(struct CResource **)((char *)v12 + v9 + 72),
            *(struct CResource **)((char *)v12 + v9 + 56),
            &v17);
    v5 = v13;
    if ( v13 < 0 )
      break;
    v2 = v17;
    v14 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v17);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4A2u);
      goto LABEL_24;
    }
    if ( v2 )
    {
      CBaseObject::Release(v2);
      v2 = 0LL;
      v17 = 0LL;
    }
LABEL_17:
    if ( ++v7 >= *((_DWORD *)this + 98) )
      goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4A1u);
  v2 = v17;
LABEL_24:
  if ( v1 )
    CBaseObject::Release(v1);
  if ( v2 )
    CBaseObject::Release(v2);
  return v5;
}
