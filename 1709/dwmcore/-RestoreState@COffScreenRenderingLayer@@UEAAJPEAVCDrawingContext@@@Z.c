/*
 * XREFs of ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BFD00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18003B6C0 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180043794 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RestoreState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  CDrawingContext::PopAlpha(a2, 0);
  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x69u);
  }
  else
  {
    v6 = CDrawingContext::FlushD2D(a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x6Au);
    }
    else if ( g_LockAndReadLayer )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 184LL))(
        *((_QWORD *)this + 1),
        *((_QWORD *)a2 + 48),
        ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
    }
  }
  return v5;
}
