/*
 * XREFs of ?blueloop@@YAHH@Z @ 0x1C00D3C00
 * Callers:
 *     ?greenloop@@YAHH@Z @ 0x1C00D36D0 (-greenloop@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall blueloop(int a1)
{
  unsigned int v1; // r14d
  int v2; // r10d
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // r11d
  __int64 v7; // r13
  int v8; // edx
  __int64 v9; // r12
  unsigned int *v10; // rax
  int v11; // ebx
  _BYTE *v12; // r9
  char v13; // r15
  unsigned int v14; // ecx
  int v15; // r8d
  int v16; // eax
  int v17; // r11d
  int v18; // ecx
  unsigned int v19; // ebx
  unsigned int *v20; // rdx
  _BYTE *v21; // r8
  int v22; // ecx
  bool v23; // cc
  int v25; // [rsp+40h] [rbp+10h]

  v1 = 0;
  v2 = 2 * dword_1C032C78C;
  if ( a1 )
  {
    v3 = dword_1C032C72C;
    v5 = 31;
    v6 = dword_1C032C744;
    v4 = 0;
    dword_1C032CAD8 = 31;
    dword_1C032CAD0 = dword_1C032C72C;
    dword_1C032CAD4 = 0;
    dword_1C032CADC = dword_1C032C744;
    dword_1C032CAE0 = 32;
    dword_1C032CAE4 = 0;
  }
  else
  {
    v3 = dword_1C032CAD0;
    v4 = dword_1C032CAD4;
    v5 = dword_1C032CAD8;
    v6 = dword_1C032CADC;
  }
  v7 = qword_1C032C750;
  v8 = v3;
  v9 = qword_1C032C768;
  v10 = (unsigned int *)qword_1C032C750;
  v11 = dword_1C032C738;
  v12 = (_BYTE *)qword_1C032C768;
  v13 = dword_1C032C794;
  v14 = dword_1C032C738;
  v25 = v4;
  v15 = v6;
  if ( v3 > v5 )
    goto LABEL_6;
  while ( *v10 <= v14 )
  {
    v14 += v15;
    ++v8;
    v15 += v2;
    ++v10;
    ++v12;
    if ( v8 > v5 )
      goto LABEL_6;
  }
  if ( v8 > v3 )
  {
    v3 = v8;
    dword_1C032CAD0 = v8;
    v7 = (__int64)v10;
    qword_1C032C750 = (__int64)v10;
    v9 = (__int64)v12;
    qword_1C032C768 = (__int64)v12;
    v11 = v14;
    dword_1C032C738 = v14;
    v6 = v15;
    dword_1C032CADC = v15;
    v25 = v8;
  }
  v1 = 1;
  if ( v8 > v5 )
  {
LABEL_6:
    v16 = v5;
  }
  else
  {
    while ( *v10 > v14 )
    {
      *v10 = v14;
      ++v8;
      v14 += v15;
      *v12++ = v13;
      v15 += v2;
      ++v10;
      if ( v8 > v5 )
        goto LABEL_6;
    }
    v16 = v8 - 1;
  }
  v17 = v6 - v2;
  v18 = v3 - 1;
  v19 = v11 - v17;
  v20 = (unsigned int *)(v7 - 4);
  v21 = (_BYTE *)(v9 - 1);
  if ( !v1 )
  {
    if ( v18 < v4 )
      return v1;
    while ( *v20 <= v19 )
    {
      v17 -= v2;
      --v18;
      v19 -= v17;
      --v20;
      --v21;
      if ( v18 < v4 )
        return v1;
    }
    dword_1C032CAD0 = v18;
    v16 = v18;
    qword_1C032C750 = (__int64)v20;
    v1 = 1;
    qword_1C032C768 = (__int64)v21;
    dword_1C032C738 = v19;
    dword_1C032CADC = v17;
  }
  if ( v18 < v4 )
  {
LABEL_23:
    v22 = v25;
  }
  else
  {
    while ( *v20 > v19 )
    {
      *v20 = v19;
      v17 -= v2;
      *v21 = v13;
      v19 -= v17;
      --v21;
      --v18;
      --v20;
      if ( v18 < v4 )
        goto LABEL_23;
    }
    v22 = v18 + 1;
  }
  v23 = v16 < dword_1C032CAE4;
  dword_1C032CAE4 = v16;
  if ( v23 )
    v5 = v16;
  dword_1C032CAD8 = v5;
  if ( v22 > dword_1C032CAE0 )
    v4 = v22;
  dword_1C032CAE0 = v22;
  dword_1C032CAD4 = v4;
  return v1;
}
