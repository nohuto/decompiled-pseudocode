/*
 * XREFs of PiDrvDbDestroyNode @ 0x1406A9814
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14059E02C (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall PiDrvDbDestroyNode(__int64 a1)
{
  void *v2; // rcx

  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 16));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 32));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 48));
  if ( *(_BYTE *)(a1 + 192) )
    ExDeleteResourceLite((PERESOURCE)(a1 + 88));
  v2 = *(void **)(a1 + 472);
  if ( v2 )
    ZwClose(v2);
  ExFreePoolWithTag((PVOID)a1, 0);
}
