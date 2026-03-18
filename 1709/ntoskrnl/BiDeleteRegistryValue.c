/*
 * XREFs of BiDeleteRegistryValue @ 0x1405AE26C
 * Callers:
 *     BiSetFirmwareModified @ 0x1401349DC (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x1405AE0EC (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140131B74 (BiSanitizeHandle.c)
 *     BiZwClose @ 0x140134ADC (BiZwClose.c)
 *     BiZwDeleteValueKey @ 0x140134B8C (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  void *v6; // rsi
  int v7; // eax
  void *v8; // rbx
  unsigned int v9; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v5 = BiSanitizeHandle(a1);
  v12 = 0LL;
  v6 = (void *)v5;
  if ( !a3 )
  {
    v8 = (void *)v5;
    goto LABEL_3;
  }
  v7 = BiOpenKey(v5, a3, 131103LL, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
LABEL_3:
    v9 = BiZwDeleteValueKey(v8, &DestinationString);
  if ( v8 != v6 && v8 )
    BiZwClose(v8);
  return v9;
}
