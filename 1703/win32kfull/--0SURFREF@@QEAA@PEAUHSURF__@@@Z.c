/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C01958E0
 * Callers:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0105B20 (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  HSURF v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 5;
  *(_QWORD *)this = HmgShareLockCheck(v3, a2);
  return this;
}
