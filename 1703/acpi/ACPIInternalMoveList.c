/*
 * XREFs of ACPIInternalMoveList @ 0x1C002B028
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C000B5C0 (ACPIBuildDeviceDpc.c)
 *     ACPITableLoadCallBack @ 0x1C0029E20 (ACPITableLoadCallBack.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C004FA04 (ACPIInitRemoveDeviceExtension.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInternalMoveList(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v3 = *(_QWORD **)(a2 + 8);
    result = (_QWORD *)a1[1];
    *result = a2;
    *(_QWORD *)(a2 + 8) = result;
    v2[1] = v3;
    *v3 = v2;
    a1[1] = a1;
    *a1 = a1;
  }
  return result;
}
