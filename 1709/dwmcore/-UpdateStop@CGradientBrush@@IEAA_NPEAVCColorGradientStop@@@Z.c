/*
 * XREFs of ?UpdateStop@CGradientBrush@@IEAA_NPEAVCColorGradientStop@@@Z @ 0x1800718C4
 * Callers:
 *     ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800719B0 (-OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

char __fastcall CGradientBrush::UpdateStop(CGradientBrush *this, struct CColorGradientStop *a2)
{
  struct CColorGradientStop **i; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _BYTE v8[20]; // [rsp+20h] [rbp-28h]

  for ( i = (struct CColorGradientStop **)*((_QWORD *)this + 14);
        i != *((struct CColorGradientStop ***)this + 15) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == *((struct CColorGradientStop ***)this + 15) )
    return 0;
  v4 = (__int64)i - *((_QWORD *)this + 14);
  v5 = *((_QWORD *)this + 17);
  *(__m128i *)&v8[4] = _mm_loadu_si128((const __m128i *)((char *)a2 + 60));
  *(_DWORD *)v8 = *((_DWORD *)a2 + 14);
  v6 = 5 * (v4 >> 3);
  *(_OWORD *)(v5 + 4 * v6) = *(_OWORD *)v8;
  *(_DWORD *)(v5 + 4 * v6 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v8[4], 12));
  *((_BYTE *)this + 104) = 0;
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  return 1;
}
