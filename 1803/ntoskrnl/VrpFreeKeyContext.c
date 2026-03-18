/*
 * XREFs of VrpFreeKeyContext @ 0x140708240
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14070AD00 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VrpDecommissionKeyContext @ 0x1407081A8 (VrpDecommissionKeyContext.c)
 */

void __fastcall VrpFreeKeyContext(UNICODE_STRING *P)
{
  VrpDecommissionKeyContext(P);
  ObDereferenceObjectDeferDeleteWithTag(P[2].Buffer, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
