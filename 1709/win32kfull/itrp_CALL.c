/*
 * XREFs of itrp_CALL @ 0x1C02CA140
 * Callers:
 *     <none>
 * Callees:
 *     InvokeInterpreter @ 0x1C02C9348 (InvokeInterpreter.c)
 */

__int64 __fastcall itrp_CALL(__int64 a1)
{
  int v2; // r13d
  int v3; // r12d
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // r9
  bool v18; // zf
  int v19; // eax
  unsigned __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  __int16 v22; // [rsp+28h] [rbp-30h]
  int v23; // [rsp+68h] [rbp+10h]

  v23 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v5 = qword_1C0327C78, !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2)) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v6 = *(int *)(v5 - 4);
  if ( (int)v6 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C0327C90 + 344) + 20LL) || (int)v6 < 0 )
  {
    dword_1C0327CE0 = 4372;
    return qword_1C0327CE8;
  }
  v7 = *(_QWORD *)(qword_1C0327C90 + 160);
  v8 = *(_WORD *)(v7 + 8 * v6 + 6);
  if ( v8 >= 2u )
  {
    dword_1C0327CE0 = 4373;
    return qword_1C0327CE8;
  }
  v9 = *(_QWORD *)(qword_1C0327C90 + 16LL * v8 + 200);
  v10 = v9 + *(int *)(v7 + 8 * v6);
  if ( v10 < v9
    || (v11 = v10 + *(unsigned __int16 *)(v7 + 8 * v6 + 4),
        v11 > v9 + *(unsigned int *)(qword_1C0327C90 + 16 * (v8 + 13LL)))
    || v11 < v10 )
  {
    dword_1C0327CE0 = 4363;
    return qword_1C0327CE8;
  }
  v12 = qword_1C0327CE8;
  v13 = qword_1C0327CF0;
  if ( (unsigned int)(v6 - 64) <= 2
    && (*(_BYTE *)(qword_1C0327C90 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0327C90 + 454) & 0x100) != 0 )
  {
    v14 = *(_QWORD *)(qword_1C0327C90 + 8);
    v4 = 1;
    v2 = *(_DWORD *)(v14 + 88);
    *(_DWORD *)(v14 + 88) = 0;
  }
  if ( ((unsigned int)v6 <= 2 || (_DWORD)v6 == 4 || (unsigned int)(v6 - 7) <= 1)
    && (*(_BYTE *)(qword_1C0327C90 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0327C90 + 454) & 0x200) != 0 )
  {
    v15 = *(_QWORD *)(qword_1C0327C90 + 8);
    v4 |= 2u;
    v23 = *(_DWORD *)(v15 + 96);
    *(_DWORD *)(v15 + 96) = 0;
  }
  if ( (_DWORD)v6 == 58
    && (*(_BYTE *)(qword_1C0327C90 + 452) & 1) != 0
    && (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0
    && (*(_WORD *)(qword_1C0327C90 + 454) & 0x800) != 0 )
  {
    v3 = *(_DWORD *)(qword_1C0327C90 + 104);
    v4 |= 4u;
    *(_DWORD *)(qword_1C0327C90 + 104) = 0x7FFFFFFF;
  }
  v16 = 0;
  v17 = *(_WORD *)(qword_1C0327C90 + 456);
  if ( v17 )
  {
    do
    {
      if ( *(_WORD *)(qword_1C0327C90 + 2LL * v16 + 458) == (_WORD)v6 )
        break;
      ++v16;
    }
    while ( v16 < v17 );
  }
  if ( v16 < v17 && (*(_BYTE *)(qword_1C0327C90 + 452) & 1) != 0 && (*(_BYTE *)(qword_1C0327C90 + 120) & 4) == 0 )
  {
    *(_WORD *)(qword_1C0327C90 + 454) |= 0x10u;
    v4 |= 8u;
  }
  v18 = dword_1C0327CFC == 1;
  v19 = --dword_1C0327CFC;
  if ( v18 )
  {
LABEL_35:
    dword_1C0327CE0 = 4358;
    return qword_1C0327CE8;
  }
  if ( v19 == 50 )
  {
    v22 = *(_WORD *)(v7 + 8 * v6 + 4);
    v21 = v10;
    if ( !(unsigned __int8)EngExpandStackAndCallout(itrp_CALL_helper, &v21, 24576LL) )
      goto LABEL_35;
  }
  else
  {
    InvokeInterpreter(dword_1C0327CC8, v10, v10 + *(unsigned __int16 *)(v7 + 8 * v6 + 4));
  }
  ++dword_1C0327CFC;
  if ( (unsigned __int8)v4 >= 8u )
    *(_WORD *)(qword_1C0327C90 + 454) &= ~0x10u;
  if ( (v4 & 4) != 0 )
    *(_DWORD *)(qword_1C0327C90 + 104) = v3;
  if ( (v4 & 2) != 0 )
    *(_DWORD *)(*(_QWORD *)(qword_1C0327C90 + 8) + 96LL) = v23;
  if ( (v4 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(qword_1C0327C90 + 8) + 88LL) = v2;
  qword_1C0327CE8 = v12;
  if ( dword_1C0327CE0 )
    a1 = v12;
  qword_1C0327CF0 = v13;
  return a1;
}
