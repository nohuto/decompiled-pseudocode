/*
 * XREFs of VrpFreeKeyContext @ 0x1406795DC
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     VrpDecommissionKeyContext @ 0x140679560 (VrpDecommissionKeyContext.c)
 */

void __fastcall VrpFreeKeyContext(UNICODE_STRING *a1)
{
  VrpDecommissionKeyContext(a1);
  ObDereferenceObjectDeferDeleteWithTag(a1[2].Buffer, 0x67655256u);
  ExFreePoolWithTag(a1, 0x67655256u);
}
