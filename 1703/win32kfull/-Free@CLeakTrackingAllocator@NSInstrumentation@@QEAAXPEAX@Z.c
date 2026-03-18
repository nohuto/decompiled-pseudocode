/*
 * XREFs of ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C010C994
 * Callers:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C010CB60 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C01E9100 (Win32UAFMFreePagedLookasideListImpl.c)
 *     Win32UAFMFreePoolImpl @ 0x1C01E9150 (Win32UAFMFreePoolImpl.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00D5490 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02B8C34 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02B93D0 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Free(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation::CPointerHashTable *v3; // rcx
  __int64 v5; // rcx
  char *v6; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v7; // [rsp+30h] [rbp+8h] BYREF
  char *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v7 = 0LL;
  v3 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 6);
  if ( v3
    && ((unsigned __int16)a2 & 0xFFFu) >= 0x10uLL
    && NSInstrumentation::CPointerHashTable::Remove(v3, (unsigned __int64)(a2 - 16), (void **)&v7) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *((NSInstrumentation::CPrioritizedWriterLock **)this + 8),
      v7);
    v6 = a2 - 16;
  }
  else
  {
    v5 = *((_QWORD *)this + 7);
    if ( v5 && (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v5, &v8, &v7) )
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *((NSInstrumentation::CPrioritizedWriterLock **)this + 8),
        v7);
    v6 = a2;
  }
  ExFreePoolWithTag(v6, 0);
}
