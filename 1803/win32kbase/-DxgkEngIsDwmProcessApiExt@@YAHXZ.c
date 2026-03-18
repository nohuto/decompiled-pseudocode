/*
 * XREFs of ?DxgkEngIsDwmProcessApiExt@@YAHXZ @ 0x1C00C9060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DxgkEngIsDwmProcessApiExt(void)
{
  int IsDwmProcessSupported; // eax
  unsigned int v1; // ecx

  IsDwmProcessSupported = IsDxgkEngIsDwmProcessSupported();
  v1 = 0;
  if ( IsDwmProcessSupported >= 0 )
    return (unsigned int)DxgkEngIsDwmProcess(0LL);
  return v1;
}
