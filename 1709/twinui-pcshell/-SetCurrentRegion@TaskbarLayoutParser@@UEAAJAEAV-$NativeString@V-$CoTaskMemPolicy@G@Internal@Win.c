/*
 * XREFs of ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18008DD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutParser::SetCurrentRegion(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r8

  v2 = a2[1];
  if ( v2 == -1LL )
  {
    if ( *a2 )
    {
      do
        ++v2;
      while ( *(_WORD *)(*a2 + 2 * v2) );
    }
    else
    {
      v2 = 0LL;
    }
  }
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           a1 + 112,
           *a2,
           v2);
}
