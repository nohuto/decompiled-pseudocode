/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x1C0006264
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0007448 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C002BC60 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C0006348 (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C002CA84 (RaidDmaGetScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  unsigned __int8 v5; // cl
  int v6; // esi
  unsigned int v7; // ebx
  int v8; // r14d
  char v9; // cl
  char v10; // si
  int v11; // ecx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 168);
  v4 = a2;
  v5 = *(_BYTE *)(v2 + 2);
  if ( v5 == 40 )
  {
    v6 = *(_DWORD *)(v2 + 24);
    v7 = *(_DWORD *)(v2 + 60);
    v8 = *(_DWORD *)(v2 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 12);
    v7 = *(_DWORD *)(v2 + 16);
    v8 = v5;
  }
  v9 = v6;
  v10 = (v6 & 0x80) != 0;
  v11 = v9 & 0x40;
  if ( (*(_DWORD *)(a1 + 524) & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
  {
    v12 = v11 == 0;
    v13 = *(_QWORD *)(a2 + 104);
    LOBYTE(a2) = !v12;
    KeFlushIoBuffers(v13, a2);
  }
  if ( v8 == 23 && *(_DWORD *)(*(_QWORD *)(v4 + 104) + 40LL) > v7 )
    v7 = *(_DWORD *)(*(_QWORD *)(v4 + 104) + 40LL);
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v4 + 104),
             *(_QWORD *)(v4 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v4,
             v10,
             v4 + 232);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v4 + 104),
             *(_QWORD *)(v4 + 184),
             v7,
             (__int64)RaidpAdapterContinueScatterGather,
             v4,
             v10);
  return result;
}
