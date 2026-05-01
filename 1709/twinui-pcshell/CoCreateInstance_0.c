/*
 * XREFs of CoCreateInstance_0 @ 0x1801E31BB
 * Callers:
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801C1204 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___ @ 0x1801C2A90 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoCreateInstance_0(
        const IID *const rclsid,
        LPUNKNOWN pUnkOuter,
        DWORD dwClsContext,
        const IID *const riid,
        LPVOID *ppv)
{
  return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}
