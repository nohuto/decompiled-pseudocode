/*
 * XREFs of PiDrvDbDestroyNode @ 0x1406D43B0
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1405C645C (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

void __fastcall PiDrvDbDestroyNode(char *P)
{
  void *v2; // rcx

  RtlFreeUnicodeString((PUNICODE_STRING)P + 1);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 2);
  RtlFreeUnicodeString((PUNICODE_STRING)P + 3);
  if ( P[192] )
    ExDeleteResourceLite((PERESOURCE)(P + 88));
  v2 = (void *)*((_QWORD *)P + 59);
  if ( v2 )
    ZwClose(v2);
  ExFreePoolWithTag(P, 0);
}
