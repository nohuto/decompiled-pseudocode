/*
 * XREFs of ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180045060
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::Flush(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  unsigned int v3; // edi
  int v4; // eax

  CD2DContext::FlushDrawList(this);
  v3 = 0;
  if ( *((_BYTE *)this + 464) && *((_BYTE *)this + 465) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 336LL))(
           *((_QWORD *)this + 22),
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x415u);
    *((_BYTE *)this + 465) = 0;
  }
  return v3;
}
