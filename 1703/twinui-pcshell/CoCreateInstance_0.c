/*
 * XREFs of CoCreateInstance_0 @ 0x180195106
 * Callers:
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180175A9C (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd670893ef0___ @ 0x180176E00 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationViewByAppID__lambda_3211724b24d58107645aebd.c)
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
