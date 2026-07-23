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

unsigned __int64 __fastcall RtlpFindAndCommitPages(_QWORD *BaseAddress, PSIZE_T RegionSize)
{
  _QWORD *UCREntry; // rax
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // al
  _QWORD *v8; // rbp
  NTSTATUS v9; // eax
  __int64 v10; // r15
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r8
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
  ULONG_PTR v25; // r9
  ULONG_PTR v26; // rdx
  _QWORD *v27; // rdx
  __int64 v28; // rsi
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rsi
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v35; // rdx
  ULONG Protect; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  PVOID BaseAddressa; // [rsp+60h] [rbp+8h] BYREF

  UCREntry = (_QWORD *)RtlpFindUCREntry(BaseAddress, *RegionSize);
  v5 = UCREntry;
  if ( UCREntry == BaseAddress + 30 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && UCREntry[5] < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v6 = (unsigned __int64)(v5 - 2);
  v7 = *((_BYTE *)v5 - 2);
  if ( v7 )
    v8 = (_QWORD *)((v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000);
  else
    v8 = BaseAddress;
  BaseAddressa = (PVOID)v5[4];
  if ( RtlpHeapKey != BaseAddress[45] )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD *, PVOID *, PSIZE_T))(RtlpHeapKey ^ BaseAddress[45]))(
           BaseAddress,
           &BaseAddressa,
           RegionSize);
  }
  else
  {
    v35 = v5[5];
    if ( v35 - *RegionSize <= 16LL * BaseAddress[22] && v35 < 16 * (unsigned __int64)*((unsigned int *)BaseAddress + 37) )
      *RegionSize = v35;
    *RegionSize = (*RegionSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpHpHeapValidateProtection(BaseAddress);
    v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, RegionSize, 0x1000u, Protect);
    ++*((_DWORD *)BaseAddress + 148);
  }
  if ( v9 < 0 )
  {
    ++*((_DWORD *)BaseAddress + 150);
    return 0LL;
  }
  v10 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v12 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v12 = 2147353472LL;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, *RegionSize, 2LL);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v6 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v5 - 2);
  }
  *(_BYTE *)(v6 + 10) = 0;
  v13 = v5 + 2;
  *(_BYTE *)(v6 + 15) = 0;
  v14 = v5[2];
  v15 = (__int64 *)v5[3];
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *v15;
  if ( *v15 == v16 && (_QWORD *)v17 == v13 )
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
    v19 = BaseAddress[40];
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
      RtlpHeapRemoveListEntry((__int64)BaseAddress, v19, 0, v5, v38, v5[5]);
    }
    v20 = *v5;
    v21 = (__int64 *)v5[1];
    v22 = *(_QWORD *)(*v5 + 8LL);
    v23 = *v21;
    if ( *v21 == v22 && (_QWORD *)v23 == v5 )
    {
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v5, v22, v23, 0LL);
    }
  }
  --*((_DWORD *)v8 + 21);
  *((_DWORD *)v8 + 20) -= v5[5] >> 12;
  BaseAddress[68] += v5[5];
  ++*((_DWORD *)BaseAddress + 144);
  --*((_DWORD *)BaseAddress + 143);
  v24 = v5[5];
  if ( v24 >= 0xFF000 )
    BaseAddress[69] -= v24;
  v25 = v5[5];
  v26 = *RegionSize;
  if ( v25 > *RegionSize || v25 + v5[4] == v8[9] )
  {
    RtlpCreateUCREntry(
      (_DWORD)BaseAddress,
      (_DWORD)v8,
      v26 - 48 + v5[4],
      v25 - v26,
      (__int64)(v5 - 2),
      (__int64)RegionSize);
    *RegionSize *= 16LL;
  }
  else
  {
    *RegionSize = v26 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v27 = (_QWORD *)v8[5];
  if ( v27 == v8 )
  {
    LOBYTE(v28) = 0;
  }
  else
  {
    v28 = ((v6 - (unsigned __int64)v8) >> 16) + 1;
    if ( (v6 - (unsigned __int64)v8) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, (_DWORD)v27, v6, (_DWORD)v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v28;
  v29 = NtCurrentPeb()->SharedData;
  if ( v29 && *v29 )
    v30 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v30 = 2147353472LL;
  if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent((int)BaseAddress, v6, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v10);
  }
  v31 = 2147353482LL;
  v32 = NtCurrentPeb()->SharedData;
  if ( v32 && *v32 )
    v33 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v33 = 2147353482LL;
  if ( *(_BYTE *)v33 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent((int)BaseAddress, v6, *RegionSize, 16 * BaseAddress[24], (HANDLE)*(unsigned __int8 *)v31);
  }
  return v6;
}
