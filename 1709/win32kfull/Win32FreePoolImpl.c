/*
 * XREFs of Win32FreePoolImpl @ 0x1C00D4890
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C003FC3C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02B2A30 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02B31CC (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall Win32FreePoolImpl(char *P)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v1; // rbx
  NSInstrumentation::CPointerHashTable *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = WPP_MAIN_CB.DeviceQueue.1;
  v7 = P;
  v6 = 0LL;
  v3 = *(NSInstrumentation::CPointerHashTable **)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 48LL);
  if ( v3
    && ((unsigned __int16)P & 0xFFFu) >= 0x10uLL
    && NSInstrumentation::CPointerHashTable::Remove(v3, (unsigned __int64)(P - 16), (void **)&v6) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)&v1 + 64LL),
      v6);
    v5 = P - 16;
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)&v1 + 56LL);
    if ( v4 && (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v4, &v7, &v6) )
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)&v1 + 64LL),
        v6);
    v5 = P;
  }
  ExFreePoolWithTag(v5, 0);
}
