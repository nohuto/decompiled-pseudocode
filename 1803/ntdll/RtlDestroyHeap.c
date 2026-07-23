/*
 * XREFs of RtlDestroyHeap @ 0x18005D440
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18005D664 @ 0x18005D664 (sub_18005D664.c)
 *     sub_18005D6F8 @ 0x18005D6F8 (sub_18005D6F8.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 *     sub_180061ED0 @ 0x180061ED0 (sub_180061ED0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 *     sub_1800FC498 @ 0x1800FC498 (sub_1800FC498.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 *     sub_1800FFF44 @ 0x1800FFF44 (sub_1800FFF44.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  void *v6; // rax
  PVOID v7; // rbx
  __int64 v8; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // ecx
  unsigned __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  ULONG_PTR v17; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR v19; // [rsp+48h] [rbp-29h] BYREF
  PVOID v20; // [rsp+50h] [rbp-21h] BYREF
  ULONG_PTR v21; // [rsp+58h] [rbp-19h] BYREF
  char Fields[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v23; // [rsp+66h] [rbp-Bh]
  PVOID v24; // [rsp+80h] [rbp+Fh]
  char v25[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v26; // [rsp+8Eh] [rbp+1Dh]
  PVOID v27; // [rsp+A8h] [rbp+37h]

  if ( !HeapHandle )
  {
    if ( dword_18015D450 >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      sub_1800FC3E4(2LL);
    }
    return 0LL;
  }
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *((_DWORD *)HeapHandle + 14);
      if ( v13 )
        sub_1800EBFF8(v13, (_DWORD)HeapHandle, 0, 8, 0LL);
      sub_18005D6F8(HeapHandle);
      sub_180061ED0(HeapHandle);
      sub_18002A46C((__int64)HeapHandle, 1, 0, 0);
      sub_18005F8D0(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      sub_1800EBFF8(v2, (_DWORD)HeapHandle, 0, 8, 0LL);
    sub_18005D6F8(HeapHandle);
    if ( ((*((_DWORD *)HeapHandle + 28) & 0x61000000) == 0
       || (*((_DWORD *)HeapHandle + 28) & 0x10000000) != 0
       || (unsigned __int8)sub_1800FFF44(HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      sub_18002A46C((__int64)HeapHandle, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v5 )
      {
        v14 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v14 & 0xFFFFFFFFFFFF0000uLL;
        sub_18005CD8C(v3, (PVOID *)&v18, &v17, 0x8000u);
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          sub_1800FC524(HeapHandle, v18, v17);
      }
      if ( *((_BYTE *)HeapHandle + 386) == 2 )
        v6 = (void *)*((_QWORD *)HeapHandle + 47);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v20 = v6;
        v19 = 0LL;
        sub_18005CD8C(v3, &v20, &v19, 0x8000u);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v21 = 0LL;
        sub_18005CD8C(v3, (PVOID *)HeapHandle + 29, &v21, 0x8000u);
        *((_QWORD *)HeapHandle + 29) = 0LL;
      }
      if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
      {
        if ( *((int *)HeapHandle + 28) >= 0 )
          RtlDeleteCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        sub_18005D664(v7);
      }
      while ( v7 != HeapHandle );
      v8 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        v15 = (void *)*(unsigned __int8 *)v8;
        v24 = HeapHandle;
        v23 = 4131;
        ZwTraceEvent(v15, 0x402u, 8u, Fields);
      }
      v10 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      else
        v11 = 2147353482LL;
      if ( *(_BYTE *)v11 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        v16 = (void *)*(unsigned __int8 *)v10;
        v27 = HeapHandle;
        v26 = 4131;
        ZwTraceEvent(v16, 0x402u, 8u, v25);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      if ( *(_BYTE *)v4 )
        sub_1800FC498(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  return (PVOID)((__int64 (*)(void))qword_180156420)();
}
