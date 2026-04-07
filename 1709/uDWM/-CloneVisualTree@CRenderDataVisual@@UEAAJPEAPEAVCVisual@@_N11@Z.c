/*
 * XREFs of ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180015730
 * Callers:
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800140E0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016860 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18009B150 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180011E7C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::CloneVisualTree(
        CRenderDataVisual *this,
        struct CVisual **a2,
        bool a3,
        bool a4,
        bool a5)
{
  CRenderDataVisual *v6; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 i; // rsi
  int v15; // eax
  CRenderDataVisual *v16; // [rsp+30h] [rbp-28h] BYREF

  v16 = 0LL;
  v6 = *a2;
  if ( *a2 )
  {
    v16 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
LABEL_3:
    v10 = (volatile signed __int32 *)v16;
    goto LABEL_4;
  }
  v15 = CRenderDataVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v16);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xADu);
    v10 = (volatile signed __int32 *)v16;
    goto LABEL_7;
  }
  v10 = (volatile signed __int32 *)v16;
  *a2 = v16;
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    goto LABEL_3;
  }
LABEL_4:
  v11 = CVisual::CloneVisualTree(this, a2, a3, a4, a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xBBu);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 68); i = (unsigned int)(i + 1) )
      CRenderDataVisual::AddInstruction(
        (CRenderDataVisual *)v10,
        *(struct CRenderDataInstruction **)(*((_QWORD *)this + 31) + 8 * i));
  }
LABEL_7:
  if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CRenderDataVisual *, __int64))v16)(v16, 1LL);
  return v12;
}
