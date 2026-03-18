/*
 * XREFs of _lambda_99abfd18865ed9d0c307366addb35405_::operator() @ 0x1C024A53C
 * Callers:
 *     GreOnCURSINFODestroy @ 0x1C00451AC (GreOnCURSINFODestroy.c)
 * Callees:
 *     GreSetPointer @ 0x1C00471C8 (GreSetPointer.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall lambda_99abfd18865ed9d0c307366addb35405_::operator()(__int64 a1, __int64 a2, struct _CURSINFO *a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  GreAcquireSemaphore(a2);
  if ( gCachedSetPointerState == a3 )
    GreSetPointer(0LL, 0LL, 0LL, 0LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
