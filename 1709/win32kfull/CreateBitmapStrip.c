/*
 * XREFs of CreateBitmapStrip @ 0x1C0083E70
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 */

__int64 CreateBitmapStrip()
{
  unsigned int v0; // ebx

  if ( !gbGreTextReady )
    return 1LL;
  if ( !(unsigned int)CreateDPIBitmapStrip(0) )
    return 0;
  v0 = 1;
  if ( !(unsigned int)CreateDPIBitmapStrip(1) )
    return 0;
  return v0;
}
