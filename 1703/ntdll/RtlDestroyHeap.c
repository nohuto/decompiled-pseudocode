/*
 * XREFs of RtlDestroyHeap @ 0x18000ABF0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180070460 (RtlDetectHeapLeaks.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     sub_18000ABAC @ 0x18000ABAC (sub_18000ABAC.c)
 *     sub_18000AE60 @ 0x18000AE60 (sub_18000AE60.c)
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 *     sub_1800FDE5C @ 0x1800FDE5C (sub_1800FDE5C.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 *     sub_180101390 @ 0x180101390 (sub_180101390.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-31h] BYREF
  __int64 v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 v34; // [rsp+50h] [rbp-21h] BYREF
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  char v36[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v37; // [rsp+66h] [rbp-Bh]
  __int64 v38; // [rsp+80h] [rbp+Fh]
  char v39[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v40; // [rsp+8Eh] [rbp+1Dh]
  __int64 v41; // [rsp+A8h] [rbp+37h]

  if ( !a1 )
  {
    if ( dword_18015BFD8 >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      sub_1800FDDA8(2LL);
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v23 = *(_DWORD *)(a1 + 32);
      if ( v23 )
        sub_180095A28(v23, a1, 0, 8, 0LL);
      sub_18000ABAC(a1);
      sub_18000D844(a1, 1LL, 0LL);
      sub_1800080CC(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      sub_180095A28(v2, a1, 0, 8, 0LL);
    sub_18000ABAC(a1);
    if ( ((((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) == 0
       || (unsigned __int8)sub_180101390(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      sub_18000D844(a1, 1LL, 0LL);
      v4 = 2147353480LL;
      v5 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v5 )
      {
        v24 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v31 = 0LL;
        v32 = v24 & 0xFFFFFFFFFFFF0000uLL;
        sub_18001E5E0(v3, &v32, &v31, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v26, v25, v27, v28) )
          v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          sub_1800FDEE8(a1, v32, v31);
      }
      if ( *(_BYTE *)(a1 + 386) == 2 )
        v6 = *(_QWORD *)(a1 + 376);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v34 = v6;
        v33 = 0LL;
        sub_18001E5E0(v3, &v34, &v33, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v35 = 0LL;
        sub_18001E5E0(v3, a1 + 232, &v35, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(__int64 **)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v7 = *(_QWORD *)(a1 + 296) - 24LL;
        sub_18000AE60(v7);
      }
      while ( v7 != a1 );
      v15 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8, v10, v11) )
        v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v16 = 2147353472LL;
      if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v12, v13, v14) )
          v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        v29 = *(unsigned __int8 *)v15;
        v38 = a1;
        v37 = 4131;
        ZwTraceEvent(v29, 1026LL, 8LL, v36);
      }
      v20 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v12, v13, v14) )
        v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      else
        v21 = 2147353482LL;
      if ( *(_BYTE *)v21 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v17, v18, v19) )
          v20 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        v30 = *(unsigned __int8 *)v20;
        v41 = a1;
        v40 = 4131;
        ZwTraceEvent(v30, 1026LL, 8LL, v39);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v17, v18, v19) )
        v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      if ( *(_BYTE *)v4 )
        sub_1800FDE5C(a1);
      return 0LL;
    }
    return a1;
  }
  return ((__int64 (*)(void))qword_180155430)();
}
