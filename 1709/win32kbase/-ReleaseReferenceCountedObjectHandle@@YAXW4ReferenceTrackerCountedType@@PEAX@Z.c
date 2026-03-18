/*
 * XREFs of ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00FDFA4
 * Callers:
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C004240C (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C006BBCC (-Free@PDEV@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1C00FE754 (-ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAX.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00FF11C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall ReleaseReferenceCountedObjectHandle(unsigned int a1, void *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rbx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(&qword_1C018DF68 + 2 * a1);
  if ( v3 )
  {
    v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v3 + 3);
    v5 = 0LL;
    NSInstrumentation::CPointerHashTable::Remove(v4, a2, &v5);
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReleaseToMostRecentlyFreedList(
      v3,
      v5,
      (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)a2);
  }
}
