/*
 * XREFs of ?SetFloatProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0151040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetFloatProperty(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
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
    *((float *)this + 22) = a3;
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 14) = a3;
  }
  *a4 = 1;
  return 0LL;
}
