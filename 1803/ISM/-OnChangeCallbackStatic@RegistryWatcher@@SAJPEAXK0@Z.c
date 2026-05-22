/*
 * XREFs of ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x1800096A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryWatcher::OnChangeCallbackStatic(RegistryWatcher *a1, int a2, void *a3)
{
  if ( a2 )
    return 2147549183LL;
  else
    return RegistryWatcher::OnKeyChange(a1);
}
