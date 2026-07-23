/*
 * XREFs of sub_18001E250 @ 0x18001E250
 * Callers:
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18001E4DC @ 0x18001E4DC (sub_18001E4DC.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     sub_1800217D0 @ 0x1800217D0 (sub_1800217D0.c)
 *     sub_1800218EC @ 0x1800218EC (sub_1800218EC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 */

__int64 __fastcall sub_18001E250(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  char *v7; // rdx
  int v8; // r10d
  unsigned int v9; // r12d
  unsigned int v11; // edi
  _RTL_SRWLOCK *v12; // rbp
  unsigned int v13; // r8d
  __int64 v14; // r11
  unsigned __int64 v15; // r9
  int v16; // r8d
  __int16 v17; // ax
  unsigned __int64 v18; // r8
  int v19; // eax
  int v20; // r14d
  int v21; // esi
  int v22; // ecx
  char v24; // cl
  __int64 v25; // rbx
  unsigned __int16 v26; // [rsp+68h] [rbp+10h]

  v6 = qword_18015BFE8 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = byte_1801196F0;
  v26 = v6;
  v8 = a3;
  v9 = 2;
  v11 = 1;
  v12 = 0LL;
  if ( !a3 )
  {
LABEL_11:
    v20 = *(unsigned __int16 *)(a2 + 34);
    LOWORD(v21) = *(_WORD *)(a2 + 32);
    do
    {
      if ( !v12 && (!(_WORD)v21 || (unsigned __int16)v21 == v20 - 1) )
      {
        v12 = (_RTL_SRWLOCK *)sub_1800218EC(a2, v7);
        if ( !v12 )
          return v11;
      }
      v22 = (unsigned __int16)(v21 + 1) - 1;
      v21 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 32), v21 + 1, v21);
    }
    while ( v21 != v22 );
    if ( (_WORD)v21 )
    {
      if ( (unsigned __int16)v21 != v20 - 1 )
      {
LABEL_18:
        if ( v12 )
          RtlReleaseSRWLockExclusive(v12 + 2);
        return v11;
      }
    }
    else
    {
      v9 = 0;
    }
    v25 = sub_1800217D0(v12, a2, v9);
    RtlReleaseSRWLockExclusive(v12 + 2);
    v12 = 0LL;
    if ( v25 )
      sub_18001F6A8(a1, a1[(unsigned __int8)byte_1801196F0[((unsigned __int64)v26 + 15) >> 4] + 24], v25, a4);
    goto LABEL_18;
  }
  v13 = a3 - HIWORD(v6) - a2;
  v14 = a1[(unsigned __int8)byte_1801196F0[((unsigned __int64)(unsigned __int16)v6 + 15) >> 4] + 24];
  if ( *(_DWORD *)(v14 + 72) )
  {
    v15 = (v13 * (unsigned __int64)*(unsigned int *)(v14 + 72)) >> *(_BYTE *)(v14 + 76);
    v16 = v13 - v15 * (unsigned __int16)v6;
  }
  else
  {
    v24 = *(_BYTE *)(v14 + 76);
    LODWORD(v15) = v13 >> v24;
    v16 = ((1 << v24) - 1) & v13;
  }
  if ( !v16 )
  {
    if ( *(_WORD *)(a2 + 36) < (unsigned __int16)v15 )
      v17 = *(_WORD *)(a2 + 36);
    else
      v17 = v15;
    *(_WORD *)(a2 + 36) = v17;
    v18 = (unsigned __int64)(unsigned int)(2 * v15) >> 6;
    _m_prefetchw((const void *)(a2 + 8 * v18 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64(
                               (volatile signed __int64 *)(a2 + 8 * v18 + 48),
                               ~(3LL << ((2 * v15) & 0x3F))) >> ((2 * v15) & 0x3F)) & 1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 45) > 1u )
      {
        v19 = sub_18001E4DC(a2, (unsigned int)(v8 - a2), v26);
        if ( v19 != -1 )
          sub_1800215C8((_DWORD)a1, a2, v19, 2, a4);
      }
      goto LABEL_11;
    }
    sub_1800A4DFC(16, *a1, v8, a2, (unsigned int)v15, 0LL);
  }
  return 0;
}
