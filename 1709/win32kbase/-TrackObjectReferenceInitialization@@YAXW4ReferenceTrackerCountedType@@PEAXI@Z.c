/*
 * XREFs of ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0053FEC
 * Callers:
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003E0A0 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceInitialization(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned int a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rdi
  __int64 v5; // rbx

  if ( a2 )
  {
    v4 = *(&qword_1C018DF68 + 2 * a1);
    if ( v4 )
    {
      if ( a3 )
      {
        v5 = a3;
        do
        {
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v4, a2, 1);
          --v5;
        }
        while ( v5 );
      }
    }
  }
}
