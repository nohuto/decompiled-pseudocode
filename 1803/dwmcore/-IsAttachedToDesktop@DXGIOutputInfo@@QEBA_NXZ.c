/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800CB660
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B6D9C (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800CAC94 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
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
