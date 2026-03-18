/*
 * XREFs of ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801AF910
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v6; // al
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  int v10; // eax
  int v11; // eax
  _BYTE v13[8]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-20h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    v7 = (__int64 *)*((_QWORD *)this + 31);
    v8 = *((_QWORD *)this + 27) + 132LL;
    v9 = *v7;
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64, _BYTE *, _BYTE *, _QWORD))(v9 + 232))(
              v7,
              a2,
              v8,
              v13,
              v14,
              0LL);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x201u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64, _BYTE *, _BYTE *))(v9 + 160))(
              v7,
              a2,
              v8,
              v13,
              v14);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x208u);
    }
  }
  return v3;
}
