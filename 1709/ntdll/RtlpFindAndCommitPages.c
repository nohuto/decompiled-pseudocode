/*
 * XREFs of RtlpFindAndCommitPages @ 0x180047558
 * Callers:
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     RtlpCreateUCREntry @ 0x180047904 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x180047B34 (RtlpFindUCREntry.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 */

__int64 *__fastcall RtlpFindAndCommitPages(__int64 a1, unsigned __int64 *a2)
{
  __int64 UCREntry; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // r15
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rsi
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rsi
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v35; // rdx
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // [rsp+60h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = (__int64 *)UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v6 = v5 - 2;
  v7 = *((_BYTE *)v5 - 2);
  if ( v7 )
    v8 = ((unsigned __int64)v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
  else
    v8 = a1;
  v40 = v5[4];
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v9 = ((__int64 (__fastcall *)(__int64, __int64 *, unsigned __int64 *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
           a1,
           &v40,
           a2);
  }
  else
  {
    v35 = v5[5];
    if ( v35 - *a2 <= 16LL * *(_QWORD *)(a1 + 176) && v35 < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
      *a2 = v35;
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v36 = RtlpHpHeapValidateProtection(a1, (*(_DWORD *)(a1 + 112) & 0x40000) != 0 ? 64 : 4);
    v9 = ZwAllocateVirtualMemory(-1LL, &v40, 0LL, a2, 4096, v36);
    ++*(_DWORD *)(a1 + 592);
  }
  if ( v9 < 0 )
  {
    ++*(_DWORD *)(a1 + 600);
    return 0LL;
  }
  v10 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, v40, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *((_DWORD *)v6 + 2) ^= *(_DWORD *)(a1 + 136);
    if ( *((_BYTE *)v6 + 11) != (*((_BYTE *)v6 + 8) ^ (unsigned __int8)(*((_BYTE *)v6 + 9) ^ *((_BYTE *)v6 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v5 - 2);
  }
  *((_BYTE *)v6 + 10) = 0;
  v13 = v5 + 2;
  *((_BYTE *)v6 + 15) = 0;
  v14 = v5[2];
  v15 = (__int64 *)v5[3];
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *v15;
  if ( *v15 == v16 && (__int64 *)v17 == v13 )
  {
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v13, v16, v17, 0LL);
  }
  v18 = v5[5];
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 320);
    if ( v19 )
    {
      v37 = *(unsigned int *)(v19 + 8);
      v38 = v18 >> 12;
      while ( v38 >= v37 )
      {
        v39 = *(_QWORD *)v19;
        if ( !*(_QWORD *)v19 )
        {
          LODWORD(v38) = *(_DWORD *)(v19 + 8) - 1;
          break;
        }
        v19 = *(_QWORD *)v19;
        v37 = *(unsigned int *)(v39 + 8);
      }
      RtlpHeapRemoveListEntry(a1, v19, 0, v5, v38, v5[5]);
    }
    v20 = *v5;
    v21 = (__int64 *)v5[1];
    v22 = *(_QWORD *)(*v5 + 8);
    v23 = *v21;
    if ( *v21 == v22 && (__int64 *)v23 == v5 )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v5, v22, v23, 0LL);
    }
  }
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= (unsigned __int64)v5[5] >> 12;
  *(_QWORD *)(a1 + 544) += v5[5];
  ++*(_DWORD *)(a1 + 576);
  --*(_DWORD *)(a1 + 572);
  v24 = v5[5];
  if ( v24 >= 0xFF000 )
    *(_QWORD *)(a1 + 552) -= v24;
  v25 = v5[5];
  v26 = *a2;
  if ( v25 > *a2 || v25 + v5[4] == *(_QWORD *)(v8 + 72) )
  {
    RtlpCreateUCREntry(a1, v8, v26 - 48 + v5[4], v25 - v26, (__int64)(v5 - 2), (__int64)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v26 + 16LL * *((unsigned __int16 *)v6 + 4);
  }
  *((_BYTE *)v6 + 11) = 0;
  v27 = *(_QWORD *)(v8 + 40);
  if ( v27 == v8 )
  {
    LOBYTE(v28) = 0;
  }
  else
  {
    v28 = (((unsigned __int64)v6 - v8) >> 16) + 1;
    if ( ((unsigned __int64)v6 - v8) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, v27, (_DWORD)v6, v8, 0LL, 0LL);
  }
  *((_BYTE *)v6 + 14) = v28;
  v29 = NtCurrentPeb()->SharedData;
  if ( v29 && *v29 )
    v30 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v30 = 2147353472LL;
  if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, (_DWORD)v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v10);
  }
  v31 = 2147353482LL;
  v32 = NtCurrentPeb()->SharedData;
  if ( v32 && *v32 )
    v33 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v33 = 2147353482LL;
  if ( *(_BYTE *)v33 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, (_DWORD)v6, *a2, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v31);
  }
  return v6;
}
