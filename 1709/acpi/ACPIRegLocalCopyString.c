/*
 * XREFs of ACPIRegLocalCopyString @ 0x1C0087B1C
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A4004 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A5C28 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AE1C8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIRegLocalCopyString(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  char *v4; // r10
  __int64 v5; // r11
  char v6; // dl
  char v7; // al
  char *result; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = a1;
    v5 = a2 - (_QWORD)a1;
    do
    {
      v6 = v4[v5];
      if ( !v6 )
        break;
      v7 = v4[v5];
      if ( v6 == 32 )
        v7 = 95;
      ++v3;
      *v4++ = v7;
    }
    while ( v3 < a3 );
  }
  result = &a1[v3];
  *result = 0;
  return result;
}
