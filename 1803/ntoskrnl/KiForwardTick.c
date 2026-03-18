/*
 * XREFs of KiForwardTick @ 0x1401094D0
 * Callers:
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400A4080 (KeCountSetBitsAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400D3780 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, __int64 a3, char a4, char *a5)
{
  __int64 v5; // r14
  unsigned int v7; // r13d
  __int64 *v8; // rcx
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  __int64 v11; // r8
  unsigned __int16 v12; // dx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  __int16 v18; // dx
  unsigned __int16 i; // ax
  __int64 v20; // rcx
  __int16 *v21; // rdx
  __int64 v22; // rcx
  char v23; // r14
  unsigned __int16 v24; // di
  unsigned int v25; // edx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdi
  int *v29; // r9
  unsigned __int16 v30; // dx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  unsigned __int16 v33; // di
  unsigned __int16 v34; // dx
  int *v35; // r9
  unsigned __int16 v36; // r8
  unsigned int v37; // r8d
  __int64 result; // rax
  __int64 *v39; // rdx
  __int64 v40; // rdi
  unsigned __int16 v41; // cx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  char v45; // cl
  int v49; // [rsp+40h] [rbp-248h] BYREF
  _DWORD v50[43]; // [rsp+44h] [rbp-244h] BYREF
  char v51; // [rsp+F0h] [rbp-198h] BYREF
  char v52; // [rsp+1A0h] [rbp-E8h] BYREF

  v5 = a1;
  v7 = 1;
  if ( PoSkipTickMode == 2 )
    goto LABEL_54;
  v49 = 1310721;
  memset(v50, 0, 0xA4uLL);
  if ( KeNumberNodes )
  {
    v8 = KeNodeBlock;
    v9 = (unsigned __int16)KeNumberNodes;
    do
    {
      v10 = *(_WORD *)(*v8 + 144);
      v11 = *(_QWORD *)(*v8 + 64);
      if ( (unsigned __int16)v49 <= v10 )
        LOWORD(v49) = v10 + 1;
      ++v8;
      *(_QWORD *)&v50[2 * v10 + 1] |= v11;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  if ( !(_WORD)v49 )
    goto LABEL_54;
  while ( !*(_QWORD *)&v50[2 * v12 + 1] )
  {
    if ( ++v12 >= (unsigned __int16)v49 )
      goto LABEL_54;
  }
  v13 = (unsigned __int16)v49;
  v14 = (__int64 *)&v50[1];
  v15 = (unsigned __int16)v49;
  do
  {
    v16 = *v14++;
    *(__int64 *)((char *)v14 + a5 - (char *)&v50[1]) = ~v16;
    --v13;
  }
  while ( v13 );
  v17 = HIWORD(v49);
  v18 = HIWORD(v49);
  if ( v15 < HIWORD(v49) )
    memset(&a5[8 * v15 + 8], 0xFFu, 8LL * (HIWORD(v49) - v15));
  *((_DWORD *)a5 + 1) = 0;
  *(_WORD *)a5 = v17;
  *((_WORD *)a5 + 1) = v17;
  if ( v17 >= LOWORD(KeActiveProcessors[0]) )
    v18 = KeActiveProcessors[0];
  *(_WORD *)a5 = v18;
  for ( i = 0; i < *(_WORD *)a5; *(_QWORD *)v21 &= *(_QWORD *)&KeActiveProcessors[2 * v20 + 2] )
  {
    v20 = i;
    v21 = (__int16 *)&a5[8 * i++ + 8];
  }
  if ( a5 != &v51 )
  {
    *((_WORD *)a5 + 1) = 20;
    *((_DWORD *)a5 + 1) = 0;
    if ( i < 0x14u )
    {
      do
      {
        v22 = i++;
        *(_QWORD *)&a5[8 * v22 + 8] = 0LL;
      }
      while ( i < *((_WORD *)a5 + 1) );
    }
  }
  if ( a4 )
    KeOrAffinityEx((unsigned __int16 *)a5, KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v23 = KiLastForwardedHand;
    v49 = 1310721;
    v24 = 0;
    memset(v50, 0, 0xA4uLL);
    do
    {
      LOBYTE(v25) = v23 - 1;
      v26 = qword_14044D448[2 * v24];
      do
      {
        v25 = (unsigned __int8)(v25 + 1);
        v27 = *(_QWORD *)(((unsigned __int64)v25 << 6) + v26);
        if ( (unsigned __int16)v49 <= v24 )
          LOWORD(v49) = v24 + 1;
        *(_QWORD *)&v50[2 * v24 + 1] |= v27;
      }
      while ( v25 != (unsigned __int8)a3 );
      ++v24;
    }
    while ( v24 < (unsigned __int16)KiActiveGroups );
    LOWORD(v28) = *(_WORD *)a5;
    if ( *(_WORD *)a5 < (unsigned __int16)v49 )
    {
      v29 = &v49;
    }
    else
    {
      v29 = (int *)a5;
      LOWORD(v28) = v49;
    }
    v30 = 0;
    *((_WORD *)a5 + 1) = 20;
    *(_WORD *)a5 = *(_WORD *)v29;
    if ( (_WORD)v28 )
    {
      v30 = v28;
      v31 = a5 + 8;
      v28 = (unsigned __int16)v28;
      do
      {
        *v31 |= *(_QWORD *)((char *)v31 + (char *)&v49 - a5);
        ++v31;
        --v28;
      }
      while ( v28 );
    }
    for ( ; v30 < *(_WORD *)v29; *(_QWORD *)&a5[8 * v42 + 8] = *(_QWORD *)&v29[2 * v42 + 2] )
      v42 = v30++;
    if ( a5 != &v52 )
    {
      for ( *((_DWORD *)a5 + 1) = 0; v30 < *((_WORD *)a5 + 1); *(_QWORD *)&a5[8 * v32 + 8] = 0LL )
        v32 = v30++;
    }
    v5 = a1;
  }
  v33 = *(_WORD *)a5;
  v34 = KeActiveProcessors[0];
  if ( *(_WORD *)a5 < LOWORD(KeActiveProcessors[0]) )
  {
    v35 = KeActiveProcessors;
    v34 = *(_WORD *)a5;
  }
  else
  {
    v35 = (int *)a5;
  }
  v36 = 0;
  if ( v34 )
  {
    while ( *(_QWORD *)&a5[8 * v36 + 8] == *(_QWORD *)&KeActiveProcessors[2 * v36 + 2] )
    {
      if ( ++v36 >= v34 )
        goto LABEL_56;
    }
  }
  else
  {
LABEL_56:
    if ( v36 >= *(_WORD *)v35 )
    {
LABEL_54:
      v40 = 0LL;
      KeCopyAffinityEx((__int64)a5, (unsigned __int16 *)KeActiveProcessors);
      goto LABEL_48;
    }
    while ( !*(_QWORD *)&v35[2 * v36 + 2] )
    {
      if ( ++v36 >= *(_WORD *)v35 )
        goto LABEL_54;
    }
  }
  v37 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v5 + 36)];
  result = v33;
  if ( v33 > v37 >> 6 )
  {
    v39 = (__int64 *)&a5[8 * (v37 >> 6) + 8];
    result = *v39 & ~(1LL << (v37 & 0x3F));
    *v39 = result;
  }
  if ( PoSkipTickMode )
  {
    result = KeCountSetBitsAffinityEx(a5);
    if ( (unsigned int)result > 3 )
      goto LABEL_54;
  }
  v7 = 0;
  v40 = (__int64)a5;
  v41 = 0;
  if ( !*(_WORD *)a5 )
    goto LABEL_49;
  while ( 1 )
  {
    result = v41;
    if ( *(_QWORD *)&a5[8 * v41 + 8] )
      break;
    if ( ++v41 >= *(_WORD *)a5 )
      goto LABEL_49;
  }
LABEL_48:
  HalRequestClockInterrupt(v7, v40);
  result = a3;
  KiLastForwardedHand = a3;
LABEL_49:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v43 = (unsigned int)KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlot = KiPollSlotNext;
    KiPollSlotNext = result;
    if ( (unsigned int)result >= a2 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v43 != *(_DWORD *)(v5 + 36) )
    {
      v44 = (unsigned int)KiProcessorIndexToNumberMappingTable[v43];
      v45 = v44 & 0x3F;
      result = v44 >> 6;
      if ( ((*(_QWORD *)&a5[8 * result + 8] >> v45) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(v5 + 36);
    }
  }
  return result;
}
