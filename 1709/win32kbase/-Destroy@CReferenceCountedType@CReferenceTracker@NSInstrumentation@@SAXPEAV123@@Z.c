/*
 * XREFs of ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1C00FE3C8
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C00FE174 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *P)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(P);
  ExFreePoolWithTag(P, 0);
}
