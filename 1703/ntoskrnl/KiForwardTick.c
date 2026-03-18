/*
 * XREFs of KiForwardTick @ 0x1400F2D20
 * Callers:
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 * Callees:
 *     KeOrAffinityEx @ 0x140080BD0 (KeOrAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5)
{
  unsigned int v7; // ebp
  int v8; // r15d
  unsigned int v10; // r14d
  __int64 *v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // cx
  __int64 v14; // rdi
  unsigned __int16 v15; // cx
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  char v20; // cl
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // r9d
  unsigned __int16 v24; // dx
  __int16 v25; // r8
  _BYTE *v26; // rdi
  unsigned __int16 i; // dx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // bp
  unsigned __int16 v31; // di
  unsigned __int16 v32; // r10
  unsigned int v33; // edx
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // di
  int *v38; // r8
  unsigned __int16 v39; // dx
  unsigned int v40; // edi
  __int64 *v41; // rdx
  unsigned __int16 v42; // cx
  int v44; // [rsp+30h] [rbp-198h] BYREF
  _DWORD v45[43]; // [rsp+34h] [rbp-194h] BYREF
  _BYTE v46[176]; // [rsp+E0h] [rbp-E8h] BYREF

  v7 = a2;
  v8 = PoSkipTickMode;
  v10 = 1;
  if ( PoSkipTickMode == 2 )
    goto LABEL_10;
  v44 = 1310721;
  memset(v45, 0, 0xA4uLL);
  if ( KeNumberNodes )
  {
    v11 = KeNodeBlock;
    v12 = (unsigned __int16)KeNumberNodes;
    do
    {
      v13 = *(_WORD *)(*v11 + 144);
      v14 = *(_QWORD *)(*v11 + 64);
      if ( (unsigned __int16)v44 <= v13 )
        LOWORD(v44) = v13 + 1;
      ++v11;
      *(_QWORD *)&v45[2 * v13 + 1] |= v14;
      --v12;
    }
    while ( v12 );
  }
  v15 = 0;
  if ( !(_WORD)v44 )
    goto LABEL_10;
  while ( !*(_QWORD *)&v45[2 * v15 + 1] )
  {
    if ( ++v15 >= (unsigned __int16)v44 )
      goto LABEL_10;
  }
  v21 = &v45[1];
  v22 = (unsigned __int16)v44;
  v23 = (unsigned __int16)v44;
  do
  {
    *(_QWORD *)((char *)v21 + a5 - (_QWORD)&v45[1] + 8) = ~*v21;
    ++v21;
    --v22;
  }
  while ( v22 );
  v24 = HIWORD(v44);
  v25 = HIWORD(v44);
  if ( v23 < HIWORD(v44) )
    memset((void *)(a5 + 8 * (v23 + 1LL)), 0xFFu, 8LL * (HIWORD(v44) - v23));
  *(_DWORD *)(a5 + 4) = 0;
  *(_WORD *)a5 = v24;
  v26 = v46;
  *(_WORD *)(a5 + 2) = v24;
  if ( a5 )
    v26 = (_BYTE *)a5;
  if ( v24 >= LOWORD(KeActiveProcessors[0]) )
    v25 = KeActiveProcessors[0];
  *(_WORD *)v26 = v25;
  for ( i = 0;
        i < *(_WORD *)v26;
        *(_QWORD *)&v26[8 * v28 + 8] = *(_QWORD *)&KeActiveProcessors[2 * v28 + 2] & *(_QWORD *)(8 * v28 + a5 + 8) )
  {
    v28 = i++;
  }
  if ( v26 != v46 )
  {
    *((_DWORD *)v26 + 1) = 0;
    *((_WORD *)v26 + 1) = 20;
    if ( i < 0x14u )
    {
      do
      {
        v29 = i++;
        *(_QWORD *)&v26[8 * v29 + 8] = 0LL;
      }
      while ( i < *((_WORD *)v26 + 1) );
    }
  }
  if ( a4 )
    KeOrAffinityEx((unsigned __int16 *)a5, KiGroupSchedulingOverQuotaMask, (_BYTE *)a5);
  if ( !KiSerializeTimerExpiration )
  {
    v30 = KiLastForwardedHand;
    v44 = 1310721;
    v31 = 0;
    memset(v45, 0, 0xA4uLL);
    v32 = KiActiveGroups;
    do
    {
      LOBYTE(v33) = v30 - 1;
      v34 = qword_1403E4FD8[2 * v31];
      do
      {
        v33 = (unsigned __int8)(v33 + 1);
        v35 = *(_QWORD *)(((unsigned __int64)v33 << 6) + v34);
        if ( (unsigned __int16)v44 <= v31 )
          LOWORD(v44) = v31 + 1;
        *(_QWORD *)&v45[2 * v31 + 1] |= v35;
      }
      while ( v33 != (unsigned __int8)a3 );
      ++v31;
    }
    while ( v31 < v32 );
    KeOrAffinityEx((unsigned __int16 *)a5, (unsigned __int16 *)&v44, (_BYTE *)a5);
    v7 = a2;
  }
  v36 = *(_WORD *)a5;
  v37 = KeActiveProcessors[0];
  if ( *(_WORD *)a5 >= LOWORD(KeActiveProcessors[0]) )
  {
    v38 = (int *)a5;
  }
  else
  {
    v38 = KeActiveProcessors;
    v37 = *(_WORD *)a5;
  }
  v39 = 0;
  if ( v37 )
  {
    while ( *(_QWORD *)(8LL * v39 + a5 + 8) == *(_QWORD *)&KeActiveProcessors[2 * v39 + 2] )
    {
      if ( ++v39 >= v37 )
        goto LABEL_48;
    }
  }
  else
  {
LABEL_48:
    if ( v39 >= *(_WORD *)v38 )
    {
LABEL_10:
      v16 = 0LL;
      KeCopyAffinityEx(a5, (unsigned __int16 *)KeActiveProcessors);
LABEL_11:
      result = HalRequestClockInterrupt(v10, v16);
      KiLastForwardedHand = a3;
      goto LABEL_12;
    }
    while ( !*(_QWORD *)&v38[2 * v39 + 2] )
    {
      if ( ++v39 >= *(_WORD *)v38 )
        goto LABEL_10;
    }
  }
  v40 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  result = v36;
  if ( v36 > v40 >> 6 )
  {
    v41 = (__int64 *)(a5 + 8 * ((v40 >> 6) + 1LL));
    result = *v41 & ~(1LL << (v40 & 0x3F));
    *v41 = result;
  }
  if ( v8 )
  {
    result = KeCountSetBitsAffinityEx(a5);
    if ( (unsigned int)result > 3 )
      goto LABEL_10;
  }
  v10 = 0;
  v16 = a5;
  v42 = 0;
  if ( *(_WORD *)a5 )
  {
    do
    {
      result = v42;
      if ( *(_QWORD *)(a5 + 8LL * v42 + 8) )
        goto LABEL_11;
    }
    while ( ++v42 < *(_WORD *)a5 );
  }
LABEL_12:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v18 = (unsigned int)KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlot = KiPollSlotNext;
    KiPollSlotNext = result;
    if ( (unsigned int)result >= v7 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v18 != *(_DWORD *)(a1 + 36) )
    {
      v19 = (unsigned int)KiProcessorIndexToNumberMappingTable[v18];
      v20 = v19 & 0x3F;
      result = v19 >> 6;
      if ( ((*(_QWORD *)(a5 + 8 * result + 8) >> v20) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(a1 + 36);
    }
  }
  return result;
}
