/*
 * XREFs of ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180010160
 * Callers:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18000F938 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::Flush(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  unsigned int v3; // edi
  int v4; // eax

  CD2DContext::FlushDrawList(this);
  v3 = 0;
  if ( *((_BYTE *)this + 480) && *((_BYTE *)this + 481) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 336LL))(
           *((_QWORD *)this + 22),
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4D4u);
    *((_BYTE *)this + 481) = 0;
  }
  return v3;
}
