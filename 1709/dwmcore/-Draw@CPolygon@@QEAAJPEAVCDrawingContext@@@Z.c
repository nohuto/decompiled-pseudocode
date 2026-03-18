/*
 * XREFs of ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017EA50
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v6; // al
  __int64 *v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rax
  signed int v11; // eax
  signed int v12; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v7 = (__int64 *)*((_QWORD *)this + 31);
    v8 = *((_QWORD *)this + 27) + 132LL;
    v9 = v6 == 0;
    v10 = *v7;
    if ( v9 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64, _QWORD, _QWORD))(v10 + 160))(
              v7,
              a2,
              v8,
              0LL,
              0LL);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x205u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64, _QWORD, _QWORD, _QWORD))(v10 + 232))(
              v7,
              a2,
              v8,
              0LL,
              0LL,
              0LL);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1FEu);
    }
  }
  return v3;
}
