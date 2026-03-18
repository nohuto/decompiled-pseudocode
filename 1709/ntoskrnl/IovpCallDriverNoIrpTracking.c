/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x1407A52B0
 * Callers:
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x140131044 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1401FB3F4 (IopPerfCallDriver.c)
 *     VfAfterCallDriver @ 0x1407B0324 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407B0514 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, IRP *a2, __int64 a3)
{
  unsigned int v5; // esi
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v5 = VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v6 = IopPerfCallDriver(Object, a2);
  else
    v6 = IopfCallDriver((__int64)Object, a2);
  LODWORD(v8) = v6;
  VfAfterCallDriver(0LL, &v8, v5);
  return (unsigned int)v8;
}
