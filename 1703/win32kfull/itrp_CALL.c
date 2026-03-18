/*
 * XREFs of itrp_CALL @ 0x1C02D0400
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C02CF5AC (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_CALL(__int64 a1)
{
  __int64 v1; // r8
  int v3; // r13d
  int v4; // r12d
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r9
  bool v20; // zf
  int v21; // eax
  unsigned __int64 v23; // [rsp+20h] [rbp-38h] BYREF
  __int16 v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+68h] [rbp+10h]

  v1 = qword_1C032CA00;
  v25 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v6 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v7 = *(int *)(v6 - 4);
  if ( (int)v7 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C032CA00 + 344) + 20LL) || (int)v7 < 0 )
  {
    dword_1C032CA50 = 4372;
    return qword_1C032CA58;
  }
  v8 = *(_QWORD *)(qword_1C032CA00 + 160);
  v9 = *(_WORD *)(v8 + 8 * v7 + 6);
  if ( v9 >= 2u )
  {
    dword_1C032CA50 = 4373;
    return qword_1C032CA58;
  }
  v10 = *(_QWORD *)(qword_1C032CA00 + 16LL * v9 + 200);
  v11 = v10 + *(int *)(v8 + 8 * v7);
  if ( v11 < v10
    || (v12 = v11 + *(unsigned __int16 *)(v8 + 8 * v7 + 4),
        v12 > v10 + *(unsigned int *)(qword_1C032CA00 + 16 * (v9 + 13LL)))
    || v12 < v11 )
  {
    dword_1C032CA50 = 4363;
    return qword_1C032CA58;
  }
  v13 = qword_1C032CA58;
  v14 = qword_1C032CA60;
  if ( (unsigned int)(v7 - 64) <= 2
    && (*(_BYTE *)(qword_1C032CA00 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C032CA00 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C032CA00 + 454) & 0x100) != 0 )
  {
    v15 = *(_QWORD *)(qword_1C032CA00 + 8);
    v5 = 1;
    v3 = *(_DWORD *)(v15 + 88);
    *(_DWORD *)(v15 + 88) = 0;
    v1 = qword_1C032CA00;
  }
  if ( ((unsigned int)v7 <= 2 || (_DWORD)v7 == 4 || (unsigned int)(v7 - 7) <= 1)
    && (*(_BYTE *)(v1 + 452) & 1) != 0
    && (*(_BYTE *)(v1 + 120) & 4) == 0
    && (*(_WORD *)(v1 + 454) & 0x200) != 0 )
  {
    v16 = *(_QWORD *)(v1 + 8);
    v5 |= 2u;
    v17 = *(_DWORD *)(v16 + 96);
    *(_DWORD *)(v16 + 96) = 0;
    v1 = qword_1C032CA00;
    v25 = v17;
  }
  if ( (_DWORD)v7 == 58
    && (*(_BYTE *)(v1 + 452) & 1) != 0
    && (*(_BYTE *)(v1 + 120) & 4) == 0
    && (*(_WORD *)(v1 + 454) & 0x800) != 0 )
  {
    v4 = *(_DWORD *)(v1 + 104);
    v5 |= 4u;
    *(_DWORD *)(v1 + 104) = 0x7FFFFFFF;
    v1 = qword_1C032CA00;
  }
  v18 = 0;
  v19 = *(_WORD *)(v1 + 456);
  if ( v19 )
  {
    do
    {
      if ( *(_WORD *)(v1 + 2LL * v18 + 458) == (_WORD)v7 )
        break;
      ++v18;
    }
    while ( v18 < v19 );
  }
  if ( v18 < v19 && (*(_BYTE *)(v1 + 452) & 1) != 0 && (*(_BYTE *)(v1 + 120) & 4) == 0 )
  {
    *(_WORD *)(v1 + 454) |= 0x10u;
    v5 |= 8u;
  }
  v20 = dword_1C032CA6C == 1;
  v21 = --dword_1C032CA6C;
  if ( v20 )
  {
LABEL_35:
    dword_1C032CA50 = 4358;
    return qword_1C032CA58;
  }
  if ( v21 == 50 )
  {
    v24 = *(_WORD *)(v8 + 8 * v7 + 4);
    v23 = v11;
    if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v23, 24576LL) )
      goto LABEL_35;
  }
  else
  {
    InvokeInterpreter(dword_1C032CA38, v11, v11 + *(unsigned __int16 *)(v8 + 8 * v7 + 4));
  }
  ++dword_1C032CA6C;
  if ( (unsigned __int8)v5 >= 8u )
    *(_WORD *)(qword_1C032CA00 + 454) &= ~0x10u;
  if ( (v5 & 4) != 0 )
    *(_DWORD *)(qword_1C032CA00 + 104) = v4;
  if ( (v5 & 2) != 0 )
    *(_DWORD *)(*(_QWORD *)(qword_1C032CA00 + 8) + 96LL) = v25;
  if ( (v5 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(qword_1C032CA00 + 8) + 88LL) = v3;
  qword_1C032CA58 = v13;
  if ( dword_1C032CA50 )
    a1 = v13;
  qword_1C032CA60 = v14;
  return a1;
}
