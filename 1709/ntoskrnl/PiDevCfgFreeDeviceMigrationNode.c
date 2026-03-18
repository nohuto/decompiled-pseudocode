/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x1406C60A8
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(char *P)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
    ZwClose(v2);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 24));
  v3 = (UNICODE_STRING *)(P + 48);
  v4 = 2LL;
  do
  {
    RtlFreeUnicodeString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 104));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 10);
  ExFreePoolWithTag(P, 0);
}
