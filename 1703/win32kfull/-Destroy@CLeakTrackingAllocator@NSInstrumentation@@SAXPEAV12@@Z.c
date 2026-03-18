/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C010C8F4
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C010C890 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0119E74 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02B87FC (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C02B94FC (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *a1)
{
  _QWORD *v1; // rbx
  struct NSInstrumentation::CPointerHashTable *v2; // rcx
  void *v3; // rdi

  v1 = gpLeakTrackingAllocator;
  if ( *((_BYTE *)gpLeakTrackingAllocator + 72) )
  {
    v2 = (struct NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    if ( v2 )
      NSInstrumentation::CPointerHashTable::Destroy(v2);
    if ( v1[7] )
      NSInstrumentation::CSortedVector<void *,void *>::Destroy();
    v3 = (void *)v1[8];
    if ( v3 )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(v1[8]);
      ExFreePoolWithTag(v3, 0);
    }
    ExFreePoolWithTag(v1, 0);
  }
}
