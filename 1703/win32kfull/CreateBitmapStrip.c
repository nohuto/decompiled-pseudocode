/*
 * XREFs of CreateBitmapStrip @ 0x1C000AD10
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C002A968 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 */

__int64 CreateBitmapStrip()
{
  unsigned int v1; // ebx

  if ( !gbGreTextReady )
    return 1LL;
  if ( !(unsigned int)CreateDPIBitmapStrip(0) )
    return 0;
  v1 = 1;
  if ( !(unsigned int)CreateDPIBitmapStrip(1) )
    return 0;
  return v1;
}
