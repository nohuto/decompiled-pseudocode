/*
 * XREFs of itrp_RC @ 0x1C02D7700
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeProject @ 0x1C02CF6B4 (InvokeProject.c)
 */

__int64 __fastcall itrp_RC(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  _WORD *v6; // r8
  __int64 v7; // rbx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  int v11; // ebp
  int v12; // esi
  __int16 v13; // ax
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx
  __int64 result; // rax

  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v4 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  v5 = qword_1C032C9D0;
  qword_1C032C9E8 -= 4LL;
  v6 = *(_WORD **)(qword_1C032CA00 + 344);
  v7 = *(int *)(v4 - 4);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v9;
  if ( v8 > v9 )
    v10 = v6[4];
  if ( v10 <= 1u )
  {
    v11 = 1;
  }
  else
  {
    if ( v8 > v9 )
      v9 = v6[4];
    v11 = v9;
  }
  if ( qword_1C032C9F8 == qword_1C032C9D0 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_14;
    v12 = 0;
  }
  else
  {
    if ( (int)v7 >= *(_DWORD *)(qword_1C032CA00 + 440) || (int)v7 < 0 )
      goto LABEL_14;
    v12 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C032C9D0)
    || (v13 = *(_WORD *)(v5 + 80), v13 >= 1)
    && v13 <= v11
    && (int)v7 >= v12 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v13 - 1)) + 1 )
  {
LABEL_14:
    dword_1C032CA50 = 4370;
    return qword_1C032CA58;
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = *(_QWORD *)(v5 + 24);
    v15 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v7);
    v16 = dword_1C032CA34;
  }
  else
  {
    v14 = *(_QWORD *)(v5 + 8);
    v15 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v7);
    v16 = dword_1C032CA30;
  }
  *(_DWORD *)qword_1C032C9E8 = InvokeProject(v16, v15, *(_DWORD *)(v14 + 4 * v7));
  result = a1;
  qword_1C032C9E8 += 4LL;
  return result;
}
