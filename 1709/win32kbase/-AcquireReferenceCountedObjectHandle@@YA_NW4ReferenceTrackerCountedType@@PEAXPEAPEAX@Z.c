/*
 * XREFs of ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C0042544
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001E50C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0042494 (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@_KH@Z @ 0x1C0070438 (-Allocate@PDEV@@SAPEAV1@_KH@Z.c)
 * Callees:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C00FE258 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

char __fastcall AcquireReferenceCountedObjectHandle(unsigned int a1, void *a2, _QWORD *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx
  void *v5; // rax

  v4 = *(&qword_1C018DF68 + 2 * a1);
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
