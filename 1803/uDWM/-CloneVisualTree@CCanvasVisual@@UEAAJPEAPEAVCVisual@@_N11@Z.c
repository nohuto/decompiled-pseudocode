/*
 * XREFs of ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800186C0
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180018460 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800338C4 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCanvasVisual::CloneVisualTree(CCanvasVisual *this, struct CVisual **a2, bool a3, bool a4, bool a5)
{
  volatile signed __int32 *v5; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  struct CCanvasVisual *v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  if ( !*a2 )
  {
    v10 = CCanvasVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v14);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x4Fu);
      v5 = (volatile signed __int32 *)v14;
      goto LABEL_7;
    }
    v5 = (volatile signed __int32 *)v14;
    *a2 = v14;
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v14;
    }
  }
  v12 = CRenderDataVisual::CloneVisualTree(this, a2, a3, a4, a5);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x58u);
LABEL_7:
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  return v11;
}
