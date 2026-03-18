/*
 * XREFs of PiDrvDbDestroyNode @ 0x14073C7F4
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140622A40 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

void __fastcall PiDrvDbDestroyNode(char *P)
{
  void *v2; // rcx

  RtlFreeAnsiString((PUNICODE_STRING)P + 1);
  RtlFreeAnsiString((PUNICODE_STRING)P + 2);
  RtlFreeAnsiString((PUNICODE_STRING)P + 3);
  if ( P[192] )
    ExDeleteResourceLite((PERESOURCE)(P + 88));
  v2 = (void *)*((_QWORD *)P + 59);
  if ( v2 )
    ZwClose(v2);
  ExFreePoolWithTag(P, 0);
}
