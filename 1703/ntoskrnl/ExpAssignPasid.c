/*
 * XREFs of ExpAssignPasid @ 0x14071F11C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExpFreeAsid @ 0x14025E214 (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 436, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
