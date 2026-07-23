/*
 * XREFs of BiExportBcdObjects @ 0x14077BB1C
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x14077BF94 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiIsPortableWorkspaceBoot @ 0x140779A48 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14077A32C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x14077B3C8 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14077B8DC (BiDeleteBootEntry.c)
 *     BiUpdateEfiEntry @ 0x14077D100 (BiUpdateEfiEntry.c)
 */

__int64 __fastcall BiExportBcdObjects(void *a1, const GUID **a2)
{
  const GUID *v2; // rbx
  unsigned int v3; // edi
  unsigned int Data1; // ecx
  int v7; // eax
  int v8; // eax
  int EfiEntry; // esi
  bool IsPortableWorkspaceBoot; // bp
  int updated; // eax

  v2 = *a2;
  v3 = 0;
  if ( *a2 == (const GUID *)a2 )
    return v3;
  do
  {
    Data1 = v2[3].Data1;
    v7 = Data1 & 5;
    if ( (Data1 & 5) == 0 )
      goto LABEL_24;
    if ( (Data1 & 0x10) != 0 )
    {
      if ( (Data1 & 1) == 0 )
        goto LABEL_24;
      v8 = BiDeleteBootEntry((PUNICODE_STRING)v2[2].Data1);
      if ( v8 >= 0 )
      {
        v2[3].Data1 &= ~1u;
        goto LABEL_24;
      }
LABEL_9:
      v3 = v8;
      goto LABEL_24;
    }
    if ( v7 == 1 )
    {
      v8 = BiDeleteBootEntry((PUNICODE_STRING)v2[2].Data1);
      if ( v8 >= 0 )
        goto LABEL_24;
      goto LABEL_9;
    }
    if ( v7 == 4 )
    {
      EfiEntry = 0;
      IsPortableWorkspaceBoot = BiIsPortableWorkspaceBoot();
      if ( (v2[3].Data1 & 8) != 0 || !IsPortableWorkspaceBoot )
        EfiEntry = BiCreateEfiEntry(a1, v2);
      if ( (v2[3].Data1 & 8) == 0 && !IsPortableWorkspaceBoot )
      {
        if ( EfiEntry < 0 )
          EfiEntry = 0;
        else
          BiAddBootEntryToEfiBootManagerDisplayOrder(a1, (__int64)v2);
      }
      if ( EfiEntry < 0 )
        v3 = -2143748095;
    }
    else
    {
      updated = BiUpdateEfiEntry(a1, v2);
      if ( updated < 0 )
      {
        v3 = updated;
        if ( (v2[3].Data1 & 8) != 0 )
          v3 = -2143748093;
      }
    }
LABEL_24:
    v2 = *(const GUID **)&v2->Data1;
  }
  while ( v2 != (const GUID *)a2 );
  if ( (v3 & 0x80000000) != 0 )
    BiLogMessage(4LL, L"BiExportBcdObjects failed %x", v3);
  return v3;
}
