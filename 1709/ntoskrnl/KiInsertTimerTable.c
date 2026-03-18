/*
 * XREFs of KiInsertTimerTable @ 0x14006FA60
 * Callers:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1400E2140 (KeSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140149D6C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiRemoveEntryTimer @ 0x140129C3C (KiRemoveEntryTimer.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r12
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r15
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD *v14; // rbp
  _QWORD *v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rbp
  char *v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // r13
  char v22; // r9
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // ax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r8
  char v29; // cl
  unsigned __int64 v30; // rax
  int v31; // edx
  signed __int32 v32[8]; // [rsp+0h] [rbp-68h] BYREF
  int v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+28h] [rbp-40h]
  int v36; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a4;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0x140000000uLL;
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v25 = *(_WORD *)(a3 + 2), v25 >= 0x500u) )
    {
      v11 = v25 - 1280;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL);
        if ( v28 )
        {
          v29 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v30, __ROR8__(v28, v29));
          v31 = *(unsigned __int8 *)(a1 + 208) << 6;
          v33 = ((_BYTE)v30 + v29) & 0x3F;
          v11 = KiProcessorNumberToIndexMappingTable[v33 + v31];
        }
      }
    }
  }
  *(_DWORD *)(a2 + 56) = v11;
  v12 = 32 * (v6 + 16);
  v36 = 0;
  v13 = KiProcessorBlock[v11] + 13952;
  v14 = (_QWORD *)(v13 + v12 + 8);
  v34 = v13;
  v15 = v14;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + v13), 0LL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *(_QWORD *)(v12 + v13) );
  }
  if ( (_QWORD *)*v14 == v14 )
  {
    v5 = 6;
  }
  else
  {
    v24 = *(_QWORD *)(*v14 - 8LL);
    if ( v10 > v24 )
    {
      if ( v10 - v24 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v26 = (_QWORD *)v14[1];
        v15 = (_QWORD *)*v14;
        if ( (_QWORD *)*v14 != v26 )
        {
          do
          {
            v27 = (_QWORD *)*v15;
            if ( v10 <= *(_QWORD *)(*v15 - 8LL) )
              break;
            v15 = (_QWORD *)*v15;
          }
          while ( v27 != v26 );
        }
      }
      else
      {
        v15 = (_QWORD *)v14[1];
        do
        {
          if ( v10 >= *(v15 - 1) )
            break;
          v15 = (_QWORD *)v15[1];
        }
        while ( v15 != v14 );
      }
    }
    else
    {
      v5 = v10 < v24 ? 2 : 0;
    }
  }
  v16 = (_QWORD *)*v15;
  v17 = (_QWORD *)(a2 + 32);
  if ( *(_QWORD **)(*v15 + 8LL) != v15 )
    __fastfail(3u);
  v18 = v34;
  *(_QWORD *)(a2 + 40) = v15;
  *v17 = v16;
  v16[1] = v17;
  *v15 = v17;
  v19 = a5;
  if ( (v5 & 2) == 0 )
    goto LABEL_17;
  *(_QWORD *)(v12 + v18 + 24) = v10;
  _InterlockedOr(v32, 0);
  if ( v5 >= 4 )
  {
    if ( KiSerializeTimerExpiration )
    {
      v20 = v6 & 0x3F;
      v21 = 8 * (v6 >> 6);
    }
    else
    {
      v20 = *(unsigned __int8 *)(v18 - 13743);
      v21 = v6 << 6;
    }
    _interlockedbittestandset64(
      (volatile signed __int32 *)(qword_140402288[2 * *(unsigned __int8 *)(v18 - 13744)] + v21),
      v20);
  }
  if ( v10 > MEMORY[0xFFFFF78000000008] )
    goto LABEL_17;
  if ( !v19 )
  {
    LOBYTE(v5) = 1;
    KiRemoveEntryTimer(v18, a2, (unsigned int)v6, v9, v33);
LABEL_17:
    v22 = 0;
    goto LABEL_18;
  }
  v22 = 1;
LABEL_18:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + v18), 0LL);
  if ( v19 )
    *v19 = v22;
  return (v5 & 1) == 0;
}
