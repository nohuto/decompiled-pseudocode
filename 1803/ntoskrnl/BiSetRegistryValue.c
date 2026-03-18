/*
 * XREFs of BiSetRegistryValue @ 0x1406092E4
 * Callers:
 *     BiSetFirmwareModified @ 0x1401642D0 (BiSetFirmwareModified.c)
 *     BiAddStoreFromFile @ 0x140606570 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x1406066B8 (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x1407E1F40 (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x1407E3DA8 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1400D2628 (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     BiZwSetValueKey @ 0x140164440 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
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
