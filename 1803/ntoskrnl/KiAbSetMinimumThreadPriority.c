/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x140064924
 * Callers:
 *     KiAbIoBoostOwners @ 0x140063C78 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140063E30 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1400640E0 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbEntryGetCpuPriorityKey @ 0x140064BFC (KiAbEntryGetCpuPriorityKey.c)
 *     KiSetPriorityFloor @ 0x140064D80 (KiSetPriorityFloor.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 *     KiAbThreadBoostIoPriority @ 0x1400CE508 (KiAbThreadBoostIoPriority.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1402AE8DC (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  ULONG_PTR v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r14
  char v11; // r12
  char v12; // si
  int v13; // r13d
  char CpuPriorityKey; // al
  int v15; // r8d
  _DWORD *v16; // r9
  char *v17; // r11
  char v18; // r15
  int v19; // edx
  unsigned __int8 v21; // al
  int v22; // [rsp+50h] [rbp-58h]
  char v23; // [rsp+54h] [rbp-54h]
  char v24; // [rsp+B0h] [rbp+8h]

  v7 = a1 - (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 24));
  v24 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1800) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1808) || (v23 = 0, *(_DWORD *)(v7 + 1804)) )
    v23 = 1;
  v22 = 0;
  v13 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v18 = *v17;
  if ( CpuPriorityKey < *v17 )
  {
    LOBYTE(v22) = *v17;
    *(_WORD *)(a1 + 88) ^= (*(_WORD *)(a1 + 88) ^ (*(_WORD *)(a1 + 88) & 0x7FFF | (1 << (v18 - 1)))) & 0x7FFF;
    v21 = KiSetPriorityFloor(v7);
    v16 = a6;
    v17 = a2;
    v13 = v21;
  }
  else
  {
    v18 = 0;
  }
  v19 = (*(_DWORD *)(v7 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 772LL) & 0x100000) != 0 )
    v19 = 0;
  if ( v19 < v17[1] && *(__int16 *)(a1 + 88) >= 0 && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL, v16) )
  {
    BYTE1(v22) = 2;
    *(_WORD *)(a1 + 88) |= 0x8000u;
    v13 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(v7 + 1808) == 0) >= a2[2]
    || (*(_BYTE *)(a1 + 90) & 1) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL, a6) )
  {
    v12 = 0;
  }
  else
  {
    *(_WORD *)(a1 + 90) |= 1u;
    v13 = 1;
    BYTE2(v22) = 1;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, v7 + 1376);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v22 )
  {
    LOBYTE(v16) = v11;
    LOBYTE(v15) = v18;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v15, (_DWORD)v16, v12, v24, v10, v23, 0, *a6);
  }
  LOBYTE(v9) = v18 != 0;
  return v9;
}
