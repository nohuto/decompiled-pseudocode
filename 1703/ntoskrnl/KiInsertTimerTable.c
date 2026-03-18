/*
 * XREFs of KiInsertTimerTable @ 0x1400EC830
 * Callers:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x140143C38 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x140036264 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

bool __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  char v5; // bl
  unsigned __int64 v6; // r13
  unsigned __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rsi
  _QWORD *v12; // rbp
  _QWORD *v13; // r14
  unsigned __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  char *v17; // r14
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  volatile signed __int32 *v21; // rcx
  char v22; // r11
  unsigned __int16 v24; // ax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a4;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v24 = *(_WORD *)(a3 + 2), v24 >= 0x280u) )
    {
      v10 = v24 - 640;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL);
        if ( v27 )
        {
          v28 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v29, __ROR8__(v27, v28));
          v10 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                   + (((unsigned __int8)v29 + v28) & 0x3F)];
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v10;
  v32 = 0;
  v11 = KiProcessorBlock[v10] + 13952 + 32 * (a4 + 16LL);
  v31 = KiProcessorBlock[v10] + 13952;
  v12 = (_QWORD *)(v11 + 8);
  v13 = (_QWORD *)(v11 + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( *(_QWORD *)v11 );
  }
  if ( (_QWORD *)*v12 == v12 )
  {
    v5 = 6;
  }
  else
  {
    v14 = *(_QWORD *)(*v12 - 8LL);
    if ( v9 > v14 )
    {
      if ( v9 - v14 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v25 = *(_QWORD **)(v11 + 16);
        v13 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 != v25 )
        {
          do
          {
            v26 = (_QWORD *)*v13;
            if ( v9 <= *(_QWORD *)(*v13 - 8LL) )
              break;
            v13 = (_QWORD *)*v13;
          }
          while ( v26 != v25 );
        }
      }
      else
      {
        v13 = *(_QWORD **)(v11 + 16);
        do
        {
          if ( v9 >= *(v13 - 1) )
            break;
          v13 = (_QWORD *)v13[1];
        }
        while ( v13 != v12 );
      }
    }
    else
    {
      v5 = 2 * (v9 < v14);
    }
  }
  v15 = (_QWORD *)*v13;
  v16 = (_QWORD *)(a2 + 32);
  if ( *(_QWORD **)(*v13 + 8LL) != v13 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v13;
  *v16 = v15;
  v15[1] = v16;
  *v13 = v16;
  v17 = a5;
  if ( (v5 & 2) == 0 )
    goto LABEL_17;
  *(_QWORD *)(v11 + 24) = v9;
  _InterlockedOr(v30, 0);
  v18 = v31;
  if ( (v5 & 4) != 0 )
  {
    v19 = qword_1403E4FD8[2 * *(unsigned __int8 *)(v31 - 13744)];
    if ( KiSerializeTimerExpiration )
    {
      v20 = v6 & 0x3F;
      v21 = (volatile signed __int32 *)(v19 + 8 * (v6 >> 6));
    }
    else
    {
      v20 = *(unsigned __int8 *)(v31 - 13743);
      v21 = (volatile signed __int32 *)((v6 << 6) + v19);
    }
    _interlockedbittestandset64(v21, v20);
  }
  if ( v9 > MEMORY[0xFFFFF78000000008] )
    goto LABEL_17;
  if ( !v17 )
  {
    v5 |= 1u;
    KiRemoveEntryTimer(v18, a2, v6);
LABEL_17:
    v22 = 0;
    goto LABEL_18;
  }
  v22 = 1;
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
  if ( v17 )
    *v17 = v22;
  return (v5 & 1) == 0;
}
