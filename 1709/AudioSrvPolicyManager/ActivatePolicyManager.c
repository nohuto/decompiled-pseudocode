/*
 * XREFs of ActivatePolicyManager @ 0x1800048F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x180004DEC (-Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall ActivatePolicyManager(
        struct IEndpointCharacteristicsCache *a1,
        struct IVolumeProvider *a2,
        __int64 a3,
        struct CWindowsPolicyManager **a4)
{
  HRESULT Instance; // eax
  __int64 result; // rax
  struct CWindowsPolicyManager *v7; // rcx
  struct CWindowsPolicyManager *v8; // [rsp+40h] [rbp+8h] BYREF

  g_pVolumeProvider = a2;
  g_pEndpointChCache = a1;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               3u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &g_DeviceEnumerator);
  v8 = 0LL;
  if ( Instance < 0 )
    return 2147500034LL;
  result = CWindowsPolicyManager::Create(&v8);
  if ( (int)result < 0 )
    return 2147500034LL;
  v7 = v8;
  *a4 = v8;
  g_PolicyManager = v7;
  return result;
}
