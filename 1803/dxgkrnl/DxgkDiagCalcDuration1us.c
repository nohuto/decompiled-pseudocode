/*
 * XREFs of DxgkDiagCalcDuration1us @ 0x1C003B9C8
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
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
