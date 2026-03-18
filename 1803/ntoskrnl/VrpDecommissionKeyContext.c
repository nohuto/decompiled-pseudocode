/*
 * XREFs of VrpDecommissionKeyContext @ 0x1407081A8
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x140708240 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
