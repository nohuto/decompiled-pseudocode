/*
 * XREFs of BiSetRegistryValue @ 0x1405B0308
 * Callers:
 *     BiSetFirmwareModified @ 0x1401349DC (BiSetFirmwareModified.c)
 *     BiAddStoreFromFile @ 0x1405ADFA4 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x1405AE0EC (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x1407792D4 (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x14077B3C8 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x140134B60 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( a3 )
    {
      v13 = BiOpenKey(v11, a3, 0x2001Fu, v15);
      if ( v13 < 0 )
        goto LABEL_5;
    }
    else
    {
      *(_QWORD *)v15 = v11;
    }
    v13 = BiZwSetValueKey(*(void **)v15, &DestinationString, v12, a4, a5, a6);
LABEL_5:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      BiCloseKey(*(void **)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
