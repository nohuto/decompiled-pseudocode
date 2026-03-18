/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00D4C50
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00D4AB4 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C012DDFC (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 */

void __fastcall QueryFontTreeRequest::CaptureUsermodeParameters(QueryFontTreeRequest *this, _QWORD *a2)
{
  _QWORD *v2; // r9

  v2 = (_QWORD *)a2[3];
  *((_QWORD *)this + 9) = a2[4];
  if ( v2 == *((_QWORD **)this + 8) )
  {
    **((_QWORD **)this + 6) = *v2;
    if ( *((_DWORD *)this + 11) == 2 )
    {
      QueryFontTreeRequest::CaptureKerningPairs(this);
    }
    else if ( *((_DWORD *)this + 11) == 3 )
    {
      QueryFontTreeRequest::CaptureGlyphSet(this);
    }
  }
}
