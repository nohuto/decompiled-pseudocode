/*
 * XREFs of BiSetRegistryValue @ 0x14058BEBC
 * Callers:
 *     BiSetFirmwareModified @ 0x140265E08 (BiSetFirmwareModified.c)
 *     BiAddStoreFromFile @ 0x140589778 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x14058A118 (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x140735038 (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x140736E78 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x14014CF98 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(HANDLE a1, const WCHAR *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  unsigned int i; // esi
  void *v11; // rax
  __int64 v12; // r8
  int v13; // ebx
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = (void *)BiSanitizeHandle((__int64)a1);
    a1 = v11;
    Handle = 0LL;
    if ( a3 )
    {
      v13 = BiOpenKey((__int64)v11, a3, 0x2001Fu, &Handle);
      if ( v13 < 0 )
        goto LABEL_5;
    }
    else
    {
      Handle = v11;
    }
    v13 = BiZwSetValueKey(Handle, &DestinationString, v12, a4, a5, a6);
LABEL_5:
    if ( Handle != a1 && Handle )
      BiCloseKey(Handle);
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
