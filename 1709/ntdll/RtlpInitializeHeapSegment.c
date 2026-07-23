/*
 * XREFs of RtlpInitializeHeapSegment @ 0x1800098E8
 * Callers:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x180047904 (RtlpCreateUCREntry.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // rsi
  __int64 v11; // r12
  char *v12; // r8
  __int64 v13; // r14
  __int64 v14; // r12
  signed __int64 v15; // rsi
  __int64 v16; // r15
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  _QWORD *v22; // rbx
  __int64 *v23; // rax
  ULONG Protect; // eax
  __int64 v26; // rcx
  __int16 v27; // ax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int NtGlobalFlag; // [rsp+88h] [rbp+48h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v11 = a3 + 15;
  v12 = BaseAddress;
  v11 &= 0xFFFFFFFFFFFFFFF0uLL;
  a8 = (__int64)(a8 - a6) / 4096;
  v13 = v11 + a2;
  v14 = v11 >> 4;
  if ( v13 + 80 >= (unsigned __int64)BaseAddress )
  {
    if ( v13 + 80 < v9 )
    {
      RegionSize[0] = (v13 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      Protect = RtlpGetHeapProtection(a1, 1LL);
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)&BaseAddress,
             0LL,
             RegionSize,
             0x1000u,
             Protect) >= 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v26 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v26 = 2147353472LL;
        if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(a1, BaseAddress, RegionSize[0], 3LL);
        v12 = &BaseAddress[RegionSize[0]];
        BaseAddress += RegionSize[0];
        goto LABEL_3;
      }
      ++*(_DWORD *)(a1 + 600);
    }
    return 0;
  }
LABEL_3:
  v15 = v9 - (_QWORD)v12;
  *(_WORD *)(a2 + 8) = v14;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v16 = v15 / 4096;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v27 = RtlLogStackBackTraceEx(1LL, v15 % 4096);
    LODWORD(v12) = (_DWORD)BaseAddress;
    *(_WORD *)(a2 + 88) = v27;
  }
  v17 = a8;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 56) = v17;
  v18 = (unsigned int)(v17 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v13;
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a1 + 544) += v18;
  *(_QWORD *)(a1 + 536) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v13 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((unsigned __int64)(v13 - a2) >> 16) + 1;
    if ( (unsigned __int64)(v13 - a2) >> 16 > 0xFC )
    {
      RtlpLogHeapFailure(3, v19, v13, a2, 0LL, 0LL);
      LODWORD(v12) = (_DWORD)BaseAddress;
    }
  }
  *(_BYTE *)(v13 + 14) = v20;
  RtlpCreateUCREntry(a1, a2, (_DWORD)v12 - 48, (_DWORD)v16 << 12, v13, (__int64)RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock(a1, v13, RegionSize[0]);
  v21 = a1 + 288;
  v22 = (_QWORD *)(a2 + 24);
  v23 = *(__int64 **)(a1 + 296);
  if ( *v23 == a1 + 288 )
  {
    *v22 = v21;
    v22[1] = v23;
    *v23 = (__int64)v22;
    *(_QWORD *)(a1 + 296) = v22;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, v21, 0, *v23, 0LL);
  }
  ++*(_DWORD *)(a1 + 568);
  return 1;
}
