/*
 * XREFs of VrpDecommissionKeyContext @ 0x140679560
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 *     VrpFreeKeyContext @ 0x1406795DC (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDecommissionKeyContext(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}
