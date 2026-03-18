/*
 * XREFs of ACPIRegLocalCopyString @ 0x1C00838A8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0083718 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A13B4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A2FDC (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AB3D0 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall ACPIRegLocalCopyString(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  char v5; // al
  _BYTE *result; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = a1 - (_QWORD)a2;
    do
    {
      if ( !*a2 )
        break;
      v5 = *a2;
      if ( *a2 == 32 )
        v5 = 95;
      ++v3;
      (a2++)[v4] = v5;
    }
    while ( v3 < a3 );
  }
  result = (_BYTE *)(a1 + v3);
  *result = 0;
  return result;
}
