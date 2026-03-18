/*
 * XREFs of ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E5B70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801E5ADC (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, char a2, struct ID2D1Bitmap1 **a3)
{
  unsigned int v3; // ebx
  struct ID2D1Bitmap1 *v6; // rax
  int v7; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v7 = CD2DBitmap::EnsureIgnoreAlphaBitmap((CD2DBitmap *)((char *)this - 104));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xD4u);
      return v3;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
    v6 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    v6 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 6);
  }
  *a3 = v6;
  return v3;
}
