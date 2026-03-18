/*
 * XREFs of ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C003F39C
 * Callers:
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C003F348 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0059578 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0076DBC (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 * Callees:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C00FDE9C (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

char __fastcall AcquireReferenceCountedObjectHandle(unsigned int a1, void *a2, _QWORD *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx
  void *v5; // rax

  v4 = *(&qword_1C0189408 + 2 * a1);
  if ( v4 )
  {
    v5 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v4, a2);
    if ( !v5 )
      return (char)v5;
    *a3 = v5;
  }
  else
  {
    *a3 = 0LL;
  }
  LOBYTE(v5) = 1;
  return (char)v5;
}
