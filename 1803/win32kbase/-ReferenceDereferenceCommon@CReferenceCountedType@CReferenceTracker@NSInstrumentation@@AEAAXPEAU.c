/*
 * XREFs of ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C
 * Callers:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0027830 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     EngLockSurface @ 0x1C002D1A0 (EngLockSurface.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002E210 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C002EE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003EA60 (--1SURFMEM@@QEAA@XZ.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C005F110 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C00DCE50 (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C00DD014 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2,
        unsigned __int8 a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // r13
  signed __int64 v5; // r14
  char v6; // r12
  __int64 v7; // rsi
  signed __int64 v8; // rdi
  char v9; // bp
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *PoolWithTag; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm1
  volatile signed __int64 v18; // rax
  volatile signed __int32 *v19; // rbp
  __int64 v20; // r14
  NSInstrumentation::CPrioritizedWriterLock *v21; // rdi
  __int64 v22; // rax
  volatile signed __int32 *v23; // rdx
  int v24; // ecx
  unsigned __int16 CurrentThreadId; // ax
  __int16 v26; // cx
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF

  v4 = this;
  v5 = _InterlockedIncrement64((volatile signed __int64 *)a2 + 5);
  v6 = 0;
  v7 = v5 / 1011;
  if ( v5 && v5 == 1011 * (v5 / 1011) )
  {
    --v7;
    v6 = 1;
  }
  v8 = *((_QWORD *)a2 + 4);
  if ( v8 >= 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v8 = -v8;
  }
  if ( v8 != v7 )
  {
    do
    {
      KeWaitForSingleObject(*((PVOID *)a2 + 2), UserRequest, 0, 0, 0LL);
      v8 = *((_QWORD *)a2 + 4);
      if ( v8 >= 0 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        v8 = -v8;
      }
    }
    while ( v8 != v7 );
    v4 = this;
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
      if ( *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v12 != a2
        || (v13 = *(_QWORD **)(v12 + 8), *v13 != v12) )
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
    v19 = (volatile signed __int32 *)((char *)a2 + 48);
    _InterlockedExchange((volatile __int32 *)a2 + 12, 0);
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, ++v7, v8) )
      _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, -v7, -v8);
    KeSetEvent(*((PRKEVENT *)a2 + 2), 0, 0);
  }
  else
  {
    v19 = (volatile signed __int32 *)((char *)a2 + 48);
  }
  v20 = v5 % 1011;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v21 = (NSInstrumentation::CPrioritizedWriterLock *)*((_QWORD *)v4 + 4);
  v22 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
          v21,
          (struct NSInstrumentation::CBackTrace *)BackTrace);
  v23 = v19;
  if ( v22
    || (v22 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
                v21,
                (struct NSInstrumentation::CBackTrace *)BackTrace),
        v23 = v19,
        v22) )
  {
    v24 = *(_DWORD *)(v22 + 180);
    v19 = v23;
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)a2 + 4, -v7);
    LOWORD(v24) = -1;
  }
  *((_WORD *)a2 + 2 * v20 + 26) = (2 * v24) | *((_WORD *)a2 + 2 * v20 + 26) & 1;
  CurrentThreadId = (unsigned __int16)PsGetCurrentThreadId();
  v26 = *((_WORD *)a2 + 2 * v20 + 26);
  *((_WORD *)a2 + 2 * v20 + 27) = CurrentThreadId;
  *((_WORD *)a2 + 2 * v20 + 26) = a3 | v26 & 0xFFFE;
  if ( _InterlockedIncrement(v19) == 1011 )
    KeSetEvent(*((PRKEVENT *)a2 + 3), 0, 0);
}
