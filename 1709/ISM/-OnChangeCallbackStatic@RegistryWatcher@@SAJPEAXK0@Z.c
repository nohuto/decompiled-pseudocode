/*
 * XREFs of ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x180009900
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18000995C (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 */

__int64 __fastcall RegistryWatcher::OnChangeCallbackStatic(RegistryWatcher *a1, int a2, void *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( a2 )
  {
    v5 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, 181, 255);
  }
  else
  {
    v3 = RegistryWatcher::OnKeyChange(a1);
    v5 = v3;
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 177, v3);
  }
  return v5;
}
