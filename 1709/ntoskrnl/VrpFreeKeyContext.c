/*
 * XREFs of VrpFreeKeyContext @ 0x1406A3BD0
 * Callers:
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VrpDecommissionKeyContext @ 0x1406A3B38 (VrpDecommissionKeyContext.c)
 */

void __fastcall VrpFreeKeyContext(UNICODE_STRING *P)
{
  VrpDecommissionKeyContext(P);
  ObDereferenceObjectDeferDeleteWithTag(P[2].Buffer, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
