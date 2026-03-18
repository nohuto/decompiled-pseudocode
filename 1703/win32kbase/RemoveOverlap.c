/*
 * XREFs of RemoveOverlap @ 0x1C013E748
 * Callers:
 *     RemoveOverlaps @ 0x1C013E920 (RemoveOverlaps.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 */

_DWORD *__fastcall RemoveOverlap(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r10d
  _DWORD *v4; // rbx
  int v5; // r11d
  int v6; // r9d
  int v8; // r8d
  int v9; // r14d
  int v10; // edi
  int v11; // r12d
  int v12; // esi
  int v13; // ebp
  int v14; // r13d
  int v15; // ecx
  int v16; // eax
  bool v17; // zf
  int v18; // r11d
  int v19; // edx
  _DWORD *v20; // rcx
  int v21; // r8d
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // r8d
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // edx
  int v29; // edx
  int v30; // r8d
  int v31; // r8d
  _DWORD *result; // rax
  unsigned __int64 v33; // [rsp+20h] [rbp-58h]
  int v35; // [rsp+90h] [rbp+18h]
  unsigned __int64 v36; // [rsp+98h] [rbp+20h]

  v3 = a1[2];
  v4 = a2;
  v5 = *a1;
  v6 = a1[1];
  v8 = a1[3];
  v9 = a3[2];
  v10 = v5 + (v3 - v5) / 2;
  LODWORD(v36) = v10;
  v11 = v6 + (v8 - v6) / 2;
  v12 = *a2 + (a2[2] - *a2) / 2;
  LODWORD(v33) = v12;
  v13 = a3[3];
  v14 = a2[1] + (a2[3] - a2[1]) / 2;
  v15 = 0;
  v35 = a3[1];
  HIDWORD(v33) = v14;
  if ( v9 == v3 )
    v15 = 2;
  v16 = 0;
  v17 = *a3 == v5;
  v18 = 1;
  if ( v17 )
    v16 = 2;
  v19 = ((v16 | (a3[1] == v6)) ^ (v15 | (v13 == v8))) - 1;
  if ( (v19 & 2) == 0 )
    goto LABEL_17;
  HIDWORD(v36) = v6 + (v8 - v6) / 2;
  if ( PtInRect(a3, v36) || PtInRect(v20, v33) )
  {
    v22 = v10 - v12;
    if ( v10 - v12 < 0 )
      v22 = v12 - v10;
    v23 = v11 - v14;
    if ( v11 - v14 < 0 )
      v23 = v14 - v11;
    if ( v22 >= v23 )
      goto LABEL_9;
    v19 = 0;
LABEL_17:
    if ( v19 == v18 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( v9 - v21 <= v13 - v35 )
  {
LABEL_9:
    v19 = v18;
    goto LABEL_19;
  }
  v19 = 0;
LABEL_18:
  v10 = v11;
  v12 = v14;
LABEL_19:
  v24 = (unsigned int)v10 >> 31;
  v25 = -v12;
  if ( v12 >= 0 )
    v25 = v12;
  v26 = -v10;
  if ( v10 >= 0 )
    v26 = v10;
  if ( v25 >= v26 )
  {
    v27 = v4;
    v24 = (unsigned int)v12 >> 31;
    v4 = a1;
  }
  else
  {
    v27 = a1;
  }
  if ( v19 == v18 )
  {
    if ( v24 )
      v28 = *v27 + *v4 - v27[2];
    else
      v28 = v4[2];
    v29 = v28 - *v27;
    v30 = 0;
  }
  else
  {
    if ( v24 )
      v31 = v27[1] + v4[1] - v27[3];
    else
      v31 = v4[3];
    v30 = v31 - v27[1];
    v29 = 0;
  }
  *v27 += v29;
  result = v27;
  v27[2] += v29;
  v27[3] += v30;
  v27[1] += v30;
  return result;
}
