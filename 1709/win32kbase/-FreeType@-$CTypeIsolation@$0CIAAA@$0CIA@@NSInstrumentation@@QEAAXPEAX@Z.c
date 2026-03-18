/*
 * XREFs of ?FreeType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0042578
 * Callers:
 *     IsolatedSurfaceLookasideListFreeEx @ 0x1C00AA110 (IsolatedSurfaceLookasideListFreeEx.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00428B4 (-Free@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C0042978 (-ContainsAllocation@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<163840,640>::FreeType(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  __int64 v6; // r14

  if ( a2 )
  {
    v2 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
    {
      v6 = i[4];
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<163840,640>::ContainsAllocation(v6, a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<163840,640>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
