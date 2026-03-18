/*
 * XREFs of bGetFastAdvanceWidth @ 0x1C022C61C
 * Callers:
 *     vFillGLYPHDATA @ 0x1C022F244 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C022FA24 (vFillGLYPHDATA_ErrRecover.c)
 * Callees:
 *     IsFullWidthCharacter @ 0x1C0231D2C (IsFullWidthCharacter.c)
 */

__int64 __fastcall bGetFastAdvanceWidth(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // r11
  unsigned int *v6; // r10
  __int64 v7; // r9
  int v8; // r12d
  __int64 v9; // rcx
  unsigned int *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned __int16 v18; // bx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  _DWORD *v23; // r10

  v3 = 1;
  v4 = *(_QWORD *)(a1 + 136);
  v5 = a2;
  v6 = a3;
  v7 = a1;
  v8 = 1;
  if ( (*(_DWORD *)(a1 + 40) & 0x42000000) != 0x40000000
    || (v9 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v9 + 400) & 0x10000000) != 0)
    && (unsigned int)IsFullWidthCharacter(v9, a2) )
  {
    if ( v4 )
    {
      *v6 = 16 * *(unsigned __int8 *)(v5 + v4 + 2);
    }
    else
    {
      v11 = *(unsigned int **)(v7 + 192);
      v12 = *(_QWORD *)(v7 + 8);
      v13 = *(_QWORD *)(v12 + 64);
      v14 = v11[24];
      v15 = v13 + v11[8];
      if ( (_DWORD)v14 && (unsigned __int64)*(unsigned int *)(v12 + 552) + 4 <= v11[25] )
        v16 = v13 + v14;
      else
        v16 = 0LL;
      v17 = (unsigned __int16)__ROR2__(*(_WORD *)(v11[6] + v13 + 34), 8);
      v18 = __ROR2__(*(_WORD *)(v15 + 4LL * (v17 - 1)), 8);
      if ( (*(_DWORD *)(v7 + 116) & 0x10) == 0
        || (*(_BYTE *)(v11[4] + v13 + 17) & 0x14) == 0
        || (*(_DWORD *)(v12 + 400) & 0x10000000) != 0
        && (unsigned int)IsFullWidthCharacter(*(_QWORD *)(v7 + 8), (unsigned int)v5) )
      {
        v8 = 0;
      }
      if ( !v8 || v16 && *(_DWORD *)(v7 + 124) >= (int)*(unsigned __int8 *)(v5 + v16 + 4) )
      {
        if ( (unsigned int)v5 < v17 )
          v18 = __ROR2__(*(_WORD *)(v15 + 4 * v5), 8);
        v19 = *(_DWORD *)(v7 + 80);
        v20 = v19 * v18;
        if ( v19 <= 0 )
          *v6 = -(((0x8000 - v20) >> 12) & 0xFFFFFFF0);
        else
          *v6 = ((v20 + 0x8000) >> 12) & 0xFFFFFFF0;
        v21 = *(_QWORD *)(v7 + 8);
        if ( (*(_DWORD *)(v21 + 400) & 0x10000000) != 0
          && (unsigned int)IsFullWidthCharacter(v21, (unsigned int)v5)
          && !gbJpn98FixPitch
          && *v23
          && *v23 != 16 * *(_DWORD *)(v22 + 404) )
        {
          *v23 = 32 * *(_DWORD *)(v22 + 404);
        }
      }
      else
      {
        *v6 = -1;
        return 0;
      }
    }
    return v3;
  }
  else
  {
    *v6 = -1;
    return 0LL;
  }
}
