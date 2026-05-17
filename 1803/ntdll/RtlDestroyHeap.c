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

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp-19h] BYREF
  char v25[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v26; // [rsp+66h] [rbp-Bh]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  char v28[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v29; // [rsp+8Eh] [rbp+1Dh]
  __int64 v30; // [rsp+A8h] [rbp+37h]

  if ( !a1 )
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
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v16 = *(_DWORD *)(a1 + 56);
      if ( v16 )
        sub_1800EBFF8(v16, a1, 0, 8, 0LL);
      sub_18005D6F8(a1);
      sub_180061ED0(a1);
      sub_18002A46C(a1, 1, 0, 0);
      sub_18005F8D0(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      sub_1800EBFF8(v2, a1, 0, 8, 0LL);
    sub_18005D6F8(a1);
    if ( ((*(_DWORD *)(a1 + 112) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 112) & 0x10000000) != 0
       || (unsigned __int8)sub_1800FFF44(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      sub_18002A46C(a1, 1, 0, 0);
      v7 = 2147353480LL;
      v8 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v8 )
      {
        v17 = (unsigned __int64)v8;
        v8 = (_QWORD *)*v8;
        v20 = 0LL;
        v21 = v17 & 0xFFFFFFFFFFFF0000uLL;
        sub_18005CD8C(v4, &v21, &v20, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
        else
          v4 = 2147353480LL;
        if ( *(_BYTE *)v4 )
          sub_1800FC524(a1, v21, v20);
      }
      if ( *(_BYTE *)(a1 + 386) == 2 )
        v9 = *(_QWORD *)(a1 + 376);
      else
        v9 = 0LL;
      if ( v9 )
      {
        v23 = v9;
        v22 = 0LL;
        sub_18005CD8C(v4, &v23, &v22, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v24 = 0LL;
        sub_18005CD8C(v4, (_QWORD *)(a1 + 232), &v24, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(__int64 **)(a1 + 352), v3, v5, v6);
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v10 = *(_QWORD *)(a1 + 296) - 24LL;
        sub_18005D664(v10);
      }
      while ( v10 != a1 );
      v11 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        v18 = *(unsigned __int8 *)v11;
        v27 = a1;
        v26 = 4131;
        ZwTraceEvent(v18, 1026LL, 8LL, v25);
      }
      v13 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      else
        v14 = 2147353482LL;
      if ( *(_BYTE *)v14 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        v19 = *(unsigned __int8 *)v13;
        v30 = a1;
        v29 = 4131;
        ZwTraceEvent(v19, 1026LL, 8LL, v28);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      if ( *(_BYTE *)v7 )
        sub_1800FC498(a1);
      return 0LL;
    }
    return a1;
  }
  return ((__int64 (*)(void))qword_180156420)();
}
