/*
 * XREFs of sub_1800211B0 @ 0x1800211B0
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 * Callees:
 *     sub_1800074BC @ 0x1800074BC (sub_1800074BC.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_180020A2C @ 0x180020A2C (sub_180020A2C.c)
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_180020FD8 @ 0x180020FD8 (sub_180020FD8.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

unsigned __int64 __fastcall sub_1800211B0(
        _DWORD *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  unsigned int v7; // ebp
  int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // r15
  int v24; // r12d
  unsigned int v25; // esi
  int v26; // eax
  __int64 v27; // rax
  _WORD *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // eax
  unsigned __int64 v32; // r15
  int v33; // r8d
  int v34; // eax
  _QWORD v36[13]; // [rsp+30h] [rbp-68h] BYREF

  v7 = (a2 | a1[5]) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  memset(v36, 0, 0x28uLL);
  v36[3] = a4;
  if ( (_WORD)a3 )
    v10 = 0;
  else
    v10 = sub_1800588D4(&qword_180159600, a3 >> 16, 1LL);
  v11 = -1LL;
  if ( v10 )
  {
    v14 = sub_180008F9C((__int64)a1, a3, v7, (__int64)&v36[2]);
  }
  else
  {
    v12 = sub_180020EF0((__int64)a1, a3);
    if ( !v12 )
      return v11;
    v14 = sub_180020FD8((__int64)a1, v12, a3, v13, (int *)&v36[2]);
  }
  v36[0] = v14;
  v15 = v14;
  if ( v14 != -1LL )
  {
    v16 = v7 & 0x10000000 | 8;
    if ( !LODWORD(v36[2]) )
      v16 = v7 & 0x10000000;
    v17 = v16 & 0x10000000;
    if ( (v16 & 0x10000000) != 0 )
      v14 += 16LL;
    if ( (v16 & 0x20000F08) != 0 )
      v14 = ((v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v18 = 1LL;
    if ( v14 )
      v18 = v14;
    if ( LODWORD(v36[2]) )
    {
      v19 = v15 + a3 + 16;
      if ( !v17 )
        v19 = v15 + a3;
      v20 = 16 * *(unsigned __int8 *)(((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v18 += v20;
    }
    else
    {
      v20 = 0;
    }
    v36[1] = v18;
    v21 = v36[3];
    if ( (v7 & 0x10000000) != 0 )
      v21 = v36[3] + 16LL;
    if ( (LODWORD(v36[2]) != 0 ? 8 : 0) != 0 )
      v21 = ((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v21 )
      v22 = v21;
    v36[4] = v20 + v22;
    if ( v36[4] >= a4 )
    {
      v23 = 0LL;
      if ( a6 )
      {
        v29 = (_WORD *)sub_18001F5E8((__int64)a1, a3, v7, a5);
        v23 = (unsigned __int64)v29;
        if ( v29 )
          *a6 = *v29;
        else
          *a6 = 0;
      }
      else if ( a5 )
      {
        *a5 = v15;
      }
      if ( v15 == a4 )
      {
        return a3;
      }
      else
      {
        v24 = 0;
        if ( (v7 & 0x1000000) != 0 )
          goto LABEL_33;
        if ( !a1[8] )
          goto LABEL_33;
        if ( !v23 )
        {
          v23 = sub_18001F5E8((__int64)a1, a3, v7, 0LL);
          if ( !v23 )
            goto LABEL_33;
        }
        v24 = *(_BYTE *)(v23 + 2) & 0xF;
        if ( (*(_BYTE *)(v23 + 2) & 0xF) == 0 )
          goto LABEL_33;
        if ( (dword_180158684 & 2) != 0 )
        {
          if ( (_WORD)a3 )
            v34 = 0;
          else
            v34 = sub_1800588D4(&qword_180159600, a3 >> 16, 1LL);
          v33 = a3;
          if ( !v34 )
            v33 = a3 + 16;
        }
        else
        {
          v33 = a3;
        }
        if ( (int)sub_180095A28(v24, (_DWORD)a1, v33, 5, v23 + 16) >= 0 )
        {
LABEL_33:
          v25 = v7 & 0x12000003 | 0x1000000;
          if ( (_WORD)a3 )
            v26 = 0;
          else
            v26 = sub_1800588D4(&qword_180159600, a3 >> 16, 1LL);
          if ( v26 )
          {
            v30 = sub_1800074BC((__int64)a1, v25, a3, (__int64)v36);
            v11 = v30;
            if ( (_WORD)v30 )
              v31 = 0;
            else
              v31 = sub_1800588D4(&qword_180159600, v30 >> 16, 1LL);
            if ( v31 && (dword_180158684 & 2) != 0 )
              v15 -= 16LL;
          }
          else
          {
            v11 = sub_180020A2C(a1, v25, a3, (__int64)v36);
          }
          if ( v24 )
          {
            if ( v11 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
              a3 = v11;
            v32 = sub_18001F5E8((__int64)a1, a3, v7, 0LL);
            if ( (dword_180158684 & 2) != 0 && !((_WORD)a3 ? 0 : sub_1800588D4(&qword_180159600, a3 >> 16, 1LL)) )
              LODWORD(a3) = a3 + 16;
            sub_180095A28(v24, (_DWORD)a1, a3, 6, v32 + 16);
          }
          if ( v11 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v27 = v36[3];
            if ( (v7 & 2) != 0 && v36[3] > v15 )
            {
              memset((void *)(v15 + v11), 0, v36[3] - v15);
              v27 = v36[3];
            }
            if ( (v7 & 0x10000000) != 0 )
            {
              *(_QWORD *)(v27 + v11) = 0xABABABABABABABABuLL;
              *(_QWORD *)(v27 + v11 + 8) = 0xABABABABABABABABuLL;
            }
          }
        }
      }
    }
  }
  return v11;
}
