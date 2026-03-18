/*
 * XREFs of ?VidSchiGetSchedulingLogBufferSize@@YA_KI@Z @ 0x1C0030D04
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchiGetSchedulingLogBufferSize(int a1)
{
  return (unsigned int)(32 * (a1 + 1));
}
