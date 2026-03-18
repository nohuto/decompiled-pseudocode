/*
 * XREFs of ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180021440
 * Callers:
 *     <none>
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000D258 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18000F938 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015610 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RestoreState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  CDrawingContext::PopAlpha(a2, 0);
  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x6Cu);
  }
  else
  {
    v6 = CDrawingContext::FlushD2D(a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6Du);
    }
    else if ( g_LockAndReadLayer )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 176LL))(
        *((_QWORD *)this + 1),
        *((_QWORD *)a2 + 49),
        ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
    }
  }
  return v5;
}
