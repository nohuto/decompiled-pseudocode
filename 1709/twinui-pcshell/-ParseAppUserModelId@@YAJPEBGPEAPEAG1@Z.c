/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1801C2290 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C23E4 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1801CDE24 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1801DDD24 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1801C0C08 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(char *a1, unsigned __int16 **a2, unsigned __int16 **a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  int v9; // edi
  unsigned __int64 v10; // r9
  unsigned __int64 v12; // [rsp+20h] [rbp-158h]
  unsigned __int16 v13[72]; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int16 v14[72]; // [rsp+C0h] [rbp-B8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v5 = ParseAppUserModelId(a1, (char *)v13, (__int64)a3, (char *)v14, 0x41uLL);
  v8 = -1LL;
  v9 = v5;
  if ( a2 && v5 >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v13[v10] );
    v9 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, v13, v10, v12, (void **)a2);
  }
  if ( a3 && v9 >= 0 )
  {
    do
      ++v8;
    while ( v14[v8] );
    v9 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, v14, v8, v12, (void **)a3);
    if ( v9 < 0 && a2 )
    {
      CoTaskMemFree(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)v9;
}
