/*
 * XREFs of DxgkDiagCalcDuration1us @ 0x1C0012764
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDiagCalcDuration1us(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = MEMORY[0xFFFFF78000000320] - *a1;
  v2 = v1 * KeQueryTimeIncrement() / 10;
  if ( HIDWORD(v2) )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
