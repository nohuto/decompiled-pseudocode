/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800B6974
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x180045F1C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B72E4 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
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
