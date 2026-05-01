/*
 * XREFs of ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x180073BB8
 * Callers:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x1801CD2A0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMarshaledInterface::CMarshaledInterface(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  return a1;
}
