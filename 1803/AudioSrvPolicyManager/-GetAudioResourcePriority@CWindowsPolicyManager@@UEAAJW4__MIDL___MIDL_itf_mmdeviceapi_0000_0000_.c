/*
 * XREFs of ?GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHHPEAK@Z @ 0x1800095C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetAudioResourcePriority(
        CWindowsPolicyManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  int v6; // ecx
  int v7; // edx

  v6 = 0;
  if ( a2 )
    v7 = *((_DWORD *)&g_dwCaptureCategoryPriorities + a3);
  else
    v7 = *((_DWORD *)&g_dwRenderCategoryPriorities + a3);
  LOBYTE(v6) = a4 == 0;
  *a6 = v6 + 2 * (v7 + (a5 != 0 ? 0x10 : 0));
  return 0LL;
}
