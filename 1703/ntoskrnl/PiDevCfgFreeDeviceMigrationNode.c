/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x14069A4E4
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(__int64 a1)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = *(void **)(a1 + 40);
  if ( v2 )
    ZwClose(v2);
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 24));
  v3 = (UNICODE_STRING *)(a1 + 48);
  v4 = 2LL;
  do
  {
    RtlFreeUnicodeString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 104));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 120));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 160));
  ExFreePoolWithTag((PVOID)a1, 0);
}
