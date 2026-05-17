/*
 * XREFs of RtlDestroyHeap @ 0x1800610F0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180076800 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1800F6B90 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x18004C75C (RtlpMoveHeapBetweenLists.c)
 *     RtlpDestroyHeapSegment @ 0x180061354 (RtlpDestroyHeapSegment.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x1800613E8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 *     RtlpHpTagDestroyHeap @ 0x180061908 (RtlpHpTagDestroyHeap.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800FFA0C (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x1800FFA98 (RtlpHeapLogRangeRelease.c)
 *     RtlDebugDestroyHeap @ 0x1801039B0 (RtlDebugDestroyHeap.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  char v22[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v23; // [rsp+66h] [rbp-Bh]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  char v25[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v26; // [rsp+8Eh] [rbp+1Dh]
  __int64 v27; // [rsp+A8h] [rbp+37h]

  if ( !a1 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *(_DWORD *)(a1 + 56);
      if ( v13 )
        RtlpCallInterceptRoutine(v13, a1, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpMoveHeapBetweenLists(a1, 1, 0, 0);
      RtlpHpHeapDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, a1, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy(a1);
    if ( ((*(_DWORD *)(a1 + 112) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 112) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists(a1, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v5 )
      {
        v14 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v14 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v18, &v17, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(a1, v18, v17);
      }
      if ( *(_BYTE *)(a1 + 386) == 2 )
        v6 = *(_QWORD *)(a1 + 376);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v20 = v6;
        v19 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v20, &v19, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v21 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (_QWORD *)(a1 + 232), &v21, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(void **)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v7 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v7);
      }
      while ( v7 != a1 );
      v8 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v9 = 2147353472LL;
      if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 550;
        v15 = *(unsigned __int8 *)v8;
        v24 = a1;
        v23 = 4131;
        NtTraceEvent(v15, 1026LL, 8LL, v22);
      }
      v10 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v11 = 2147353482LL;
      if ( *(_BYTE *)v11 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 560;
        v16 = *(unsigned __int8 *)v10;
        v27 = a1;
        v26 = 4131;
        NtTraceEvent(v16, 1026LL, 8LL, v25);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  return ((__int64 (*)(void))qword_180159420)();
}
