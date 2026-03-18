/*
 * XREFs of ?SetIntegerProperty@CDropShadowMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014F200
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C000A410 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetIntegerProperty(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 != 5 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *((_DWORD *)this + 4) |= 0x1000u;
  *((_DWORD *)this + 25) = a4;
  *a5 = 1;
  return 0LL;
}
