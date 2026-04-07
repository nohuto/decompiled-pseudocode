/*
 * XREFs of ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800208C0
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180023E90 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180014E18 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001F7D0 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::CloneVisualTree(CCanvasVisual *this, struct CVisual **a2, bool a3, bool a4, bool a5)
{
  struct CCanvasVisual *v5; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  struct CCanvasVisual *v14; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  if ( !*a2 )
  {
    v10 = CCanvasVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v14);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4Fu);
      v5 = v14;
      goto LABEL_7;
    }
    v5 = v14;
    *a2 = v14;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      v5 = v14;
    }
  }
  v12 = CRenderDataVisual::CloneVisualTree(this, a2, a3, a4, a5);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x58u);
LABEL_7:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(struct CCanvasVisual *, __int64))v14)(v14, 1LL);
  return v11;
}
