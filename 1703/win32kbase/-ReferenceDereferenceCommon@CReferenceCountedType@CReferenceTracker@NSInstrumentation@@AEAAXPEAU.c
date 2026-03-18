/*
 * XREFs of ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE014
 * Callers:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C007BC14 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C00FE5FC (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C00FE7C4 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        char a3)
{
  signed __int64 v4; // r14
  __int16 v5; // bp
  char v6; // r13
  __int64 v7; // rsi
  signed __int64 v8; // rdi
  bool v9; // r15
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *PoolWithTag; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm1
  volatile signed __int64 v18; // rax
  __int64 v19; // r14
  NSInstrumentation::CPrioritizedWriterLock *v20; // rdi
  __int64 v21; // rax
  int v22; // ecx
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  HIBYTE(v5) = 0;
  v6 = 0;
  v7 = v4 / 1011;
  if ( v4 && v4 == 1011 * (v4 / 1011) )
  {
    --v7;
    v6 = 1;
  }
  while ( 1 )
  {
    v8 = *((_QWORD *)a2 + 4);
    v9 = v8 < 0;
    if ( v8 < 0 )
      v8 = -v8;
    if ( v8 == v7 )
      break;
    KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
  }
  if ( v6 )
  {
    KeWaitForSingleObject(*((PVOID *)a2 + 3), UserRequest, 0, 0, 0LL);
    KeClearEvent(*((PRKEVENT *)a2 + 3));
    if ( !v9 )
    {
      PoolWithTag = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x62497355u);
      if ( PoolWithTag )
      {
        v11 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)*((_QWORD *)a2 + 1);
        if ( *v11 != a2 )
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = a2;
        *((_QWORD *)PoolWithTag + 1) = v11;
        *v11 = PoolWithTag;
        *((_QWORD *)a2 + 1) = PoolWithTag;
      }
      else
      {
        *((_QWORD *)a2 + 4) = -v7;
      }
    }
    if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 != a2 )
    {
      v12 = *((_QWORD *)a2 + 1);
      v13 = *(_QWORD **)(v12 + 8);
      if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v12 != a2
        || *v13 != v12 )
      {
        __fastfail(3u);
      }
      *((_QWORD *)a2 + 1) = v13;
      v14 = v12 + 52;
      *v13 = a2;
      v15 = (char *)a2 + 52;
      v16 = 31LL;
      do
      {
        *(_OWORD *)v14 = *(_OWORD *)v15;
        *(_OWORD *)(v14 + 16) = *((_OWORD *)v15 + 1);
        *(_OWORD *)(v14 + 32) = *((_OWORD *)v15 + 2);
        *(_OWORD *)(v14 + 48) = *((_OWORD *)v15 + 3);
        *(_OWORD *)(v14 + 64) = *((_OWORD *)v15 + 4);
        *(_OWORD *)(v14 + 80) = *((_OWORD *)v15 + 5);
        *(_OWORD *)(v14 + 96) = *((_OWORD *)v15 + 6);
        v14 += 128LL;
        v17 = *((_OWORD *)v15 + 7);
        v15 += 128;
        *(_OWORD *)(v14 - 16) = v17;
        --v16;
      }
      while ( v16 );
      *(_OWORD *)v14 = *(_OWORD *)v15;
      *(_OWORD *)(v14 + 16) = *((_OWORD *)v15 + 1);
      *(_OWORD *)(v14 + 32) = *((_OWORD *)v15 + 2);
      *(_OWORD *)(v14 + 48) = *((_OWORD *)v15 + 3);
      *(_QWORD *)(v14 + 64) = *((_QWORD *)v15 + 8);
      *(_DWORD *)(v14 + 72) = *((_DWORD *)v15 + 18);
      v18 = *(_QWORD *)a2;
      if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(*(_QWORD *)a2 + 8LL) != a2 )
        __fastfail(3u);
      *(_QWORD *)v12 = v18;
      *(_QWORD *)(v12 + 8) = a2;
      *(_QWORD *)(v18 + 8) = v12;
      *(_QWORD *)a2 = v12;
    }
    _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v7, v8) )
      _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v7, -v8);
    KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
  }
  v19 = v4 % 1011;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v20 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)this + 4);
  v21 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
          v20,
          (struct NSInstrumentation::CBackTrace *)BackTrace);
  if ( v21
    || (v21 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                v20,
                (struct NSInstrumentation::CBackTrace *)BackTrace)) != 0 )
  {
    v22 = *(_DWORD *)(v21 + 180);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v7);
    LOWORD(v22) = -1;
  }
  *((_WORD *)a2 + 2 * v19 + 26) = (2 * v22) | *((_WORD *)a2 + 2 * v19 + 26) & 1;
  *((_WORD *)a2 + 2 * v19 + 27) = (unsigned __int16)PsGetCurrentThreadId();
  LOBYTE(v5) = a3 != 0;
  *((_WORD *)a2 + 2 * v19 + 26) ^= (v5 ^ *((_WORD *)a2 + 2 * v19 + 26)) & 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)a2 + 12) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
