/*
 * XREFs of BiDeleteRegistryValue @ 0x1407354B8
 * Callers:
 *     BiSetFirmwareModified @ 0x140265E08 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x14058A118 (BiMarkTreatAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwClose @ 0x14014CF3C (BiZwClose.c)
 *     BiZwDeleteValueKey @ 0x140265F00 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, void *a3)
{
  unsigned __int64 v4; // rax
  HANDLE v5; // rsi
  int v6; // eax
  HANDLE v7; // rbx
  unsigned int v8; // edi
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = a3;
  RtlInitUnicodeString(&ValueName, a2);
  v4 = BiSanitizeHandle(a1);
  KeyHandle = 0LL;
  v5 = (HANDLE)v4;
  v6 = BiOpenKey(v4, L"Description", 0x2001Fu, &KeyHandle);
  v7 = KeyHandle;
  v8 = v6;
  if ( v6 >= 0 )
    v8 = BiZwDeleteValueKey(KeyHandle, &ValueName);
  if ( v7 != v5 && v7 )
    BiZwClose(v7);
  return v8;
}
