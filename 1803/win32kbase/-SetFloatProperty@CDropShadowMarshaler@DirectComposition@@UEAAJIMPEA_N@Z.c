/*
 * XREFs of ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C014F1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetFloatProperty(
        DirectComposition::CDropShadowMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  *a4 = 0;
  if ( a2 )
  {
    if ( a2 != 4 )
      return 3221225485LL;
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 24) = a3;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 20) = a3;
  }
  *a4 = 1;
  return 0LL;
}
