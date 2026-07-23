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

char *__fastcall sub_1800211B0(
        _RTL_SRWLOCK *BaseAddress,
        int a2,
        char *a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  unsigned int v7; // ebp
  int v10; // eax
  __int64 v11; // rsi
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
  int v25; // esi
  int v26; // eax
  __int64 v27; // rax
  _WORD *v29; // rax
  int v30; // eax
  unsigned __int64 v31; // r15
  int v32; // r8d
  int v33; // eax
  _QWORD v35[13]; // [rsp+30h] [rbp-68h] BYREF

  v7 = (a2 | HIDWORD(BaseAddress[2].Ptr)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  memset(v35, 0, 0x28uLL);
  v35[3] = a4;
  if ( (_WORD)a3 )
    v10 = 0;
  else
    v10 = sub_1800588D4(&stru_180159600);
  v11 = -1LL;
  if ( v10 )
  {
    v14 = sub_180008F9C(BaseAddress, (__int64)a3, v7, (__int64)&v35[2]);
  }
  else
  {
    v12 = sub_180020EF0((__int64)BaseAddress, (__int64)a3);
    if ( !v12 )
      return (char *)v11;
    v14 = sub_180020FD8((__int64)BaseAddress, v12, (unsigned __int64)a3, v13, (int *)&v35[2]);
  }
  v35[0] = v14;
  v15 = v14;
  if ( v14 != -1LL )
  {
    v16 = v7 & 0x10000000 | 8;
    if ( !LODWORD(v35[2]) )
      v16 = v7 & 0x10000000;
    v17 = v16 & 0x10000000;
    if ( (v16 & 0x10000000) != 0 )
      v14 += 16LL;
    if ( (v16 & 0x20000F08) != 0 )
      v14 = ((v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v18 = 1LL;
    if ( v14 )
      v18 = v14;
    if ( LODWORD(v35[2]) )
    {
      v19 = (__int64)&a3[v15 + 16];
      if ( !v17 )
        v19 = (__int64)&a3[v15];
      v20 = 16 * *(unsigned __int8 *)(((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v18 += v20;
    }
    else
    {
      v20 = 0;
    }
    v35[1] = v18;
    v21 = v35[3];
    if ( (v7 & 0x10000000) != 0 )
      v21 = v35[3] + 16LL;
    if ( (LODWORD(v35[2]) != 0 ? 8 : 0) != 0 )
      v21 = ((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v21 )
      v22 = v21;
    v35[4] = v20 + v22;
    if ( v35[4] >= a4 )
    {
      v23 = 0LL;
      if ( a6 )
      {
        v29 = (_WORD *)sub_18001F5E8(BaseAddress, (__int64)a3, v7, a5);
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
        if ( !LODWORD(BaseAddress[4].Ptr) )
          goto LABEL_33;
        if ( !v23 )
        {
          v23 = sub_18001F5E8(BaseAddress, (__int64)a3, v7, 0LL);
          if ( !v23 )
            goto LABEL_33;
        }
        v24 = *(_BYTE *)(v23 + 2) & 0xF;
        if ( (*(_BYTE *)(v23 + 2) & 0xF) == 0 )
          goto LABEL_33;
        if ( (dword_180158684 & 2) != 0 )
        {
          if ( (_WORD)a3 )
            v33 = 0;
          else
            v33 = sub_1800588D4(&stru_180159600);
          v32 = (int)a3;
          if ( !v33 )
            v32 = (_DWORD)a3 + 16;
        }
        else
        {
          v32 = (int)a3;
        }
        if ( (int)sub_180095A28(v24, (_DWORD)BaseAddress, v32, 5, v23 + 16) >= 0 )
        {
LABEL_33:
          v25 = v7 & 0x12000003 | 0x1000000;
          if ( (_WORD)a3 )
            v26 = 0;
          else
            v26 = sub_1800588D4(&stru_180159600);
          if ( v26 )
          {
            v11 = sub_1800074BC(BaseAddress, v25, a3, (__int64)v35);
            if ( (_WORD)v11 )
              v30 = 0;
            else
              v30 = sub_1800588D4(&stru_180159600);
            if ( v30 && (dword_180158684 & 2) != 0 )
              v15 -= 16LL;
          }
          else
          {
            v11 = sub_180020A2C(BaseAddress, v25, a3, (__int64)v35);
          }
          if ( v24 )
          {
            if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              a3 = (char *)v11;
            v31 = sub_18001F5E8(BaseAddress, (__int64)a3, v7, 0LL);
            if ( (dword_180158684 & 2) != 0 && !((_WORD)a3 ? 0 : sub_1800588D4(&stru_180159600)) )
              LODWORD(a3) = (_DWORD)a3 + 16;
            sub_180095A28(v24, (_DWORD)BaseAddress, (_DWORD)a3, 6, v31 + 16);
          }
          if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v27 = v35[3];
            if ( (v7 & 2) != 0 && v35[3] > v15 )
            {
              memset((void *)(v15 + v11), 0, v35[3] - v15);
              v27 = v35[3];
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
  return (char *)v11;
}
