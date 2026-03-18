/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180076EB8
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18008C290 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18009863C (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGIOutputInfo::IsAttachedToDesktop(DXGIOutputInfo *this)
{
  char v1; // dl

  v1 = 1;
  if ( !*((_DWORD *)this + 46) && !*((_DWORD *)this + 47) && !*((_DWORD *)this + 48) )
    return *((_DWORD *)this + 49) != 0;
  return v1;
}
