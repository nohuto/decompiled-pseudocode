/*
 * XREFs of ObDeassignSecurity @ 0x140457700
 * Callers:
 *     WmipSecurityMethod @ 0x1404575E0 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObDeassignSecurity(_QWORD *a1)
{
  unsigned __int64 v2; // rcx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  *a1 = 0LL;
  ObDereferenceSecurityDescriptor(v2);
  return 0LL;
}
