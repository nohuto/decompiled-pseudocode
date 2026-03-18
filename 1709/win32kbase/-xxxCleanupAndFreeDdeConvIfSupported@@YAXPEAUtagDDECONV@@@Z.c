/*
 * XREFs of ?xxxCleanupAndFreeDdeConvIfSupported@@YAXPEAUtagDDECONV@@@Z @ 0x1C00E4D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  if ( (int)IsxxxCleanupAndFreeDdeConvSupported() >= 0 )
    xxxCleanupAndFreeDdeConv(a1);
}
