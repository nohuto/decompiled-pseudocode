/*
 * XREFs of RIMTransformCoordinates @ 0x1C01062D0
 * Callers:
 *     RIMApplyTransforms @ 0x1C0105998 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0106590 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     ApiSetAdjustLinearity @ 0x1C013901C (ApiSetAdjustLinearity.c)
 */

__int64 RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, ...)
{
  unsigned int v4; // eax
  signed int *v5; // r12
  _DWORD *v6; // r13
  int *v8; // rsi
  signed int v9; // ecx
  __int64 *v10; // rdx
  int v11; // eax
  signed int v12; // r11d
  int v13; // r15d
  int v14; // ebx
  signed int v15; // edi
  __int64 v16; // rdx
  int v17; // edx
  unsigned int v18; // r10d
  signed int v19; // r8d
  signed int v20; // ecx
  int v21; // eax
  unsigned int v22; // r9d
  signed int v23; // eax
  signed int v24; // eax
  __int64 result; // rax
  int v26; // ebx
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  int v29; // [rsp+20h] [rbp-28h]
  int v30; // [rsp+24h] [rbp-24h]
  unsigned int v31; // [rsp+28h] [rbp-20h]
  unsigned int v32; // [rsp+2Ch] [rbp-1Ch]
  int v33; // [rsp+30h] [rbp-18h]
  unsigned int v34; // [rsp+34h] [rbp-14h]
  unsigned int v35; // [rsp+90h] [rbp+48h] BYREF
  int v36; // [rsp+98h] [rbp+50h]
  int v37; // [rsp+A0h] [rbp+58h]
  _QWORD *v38; // [rsp+A8h] [rbp+60h]
  _DWORD *v39; // [rsp+B0h] [rbp+68h] BYREF
  va_list va; // [rsp+B0h] [rbp+68h]
  va_list va1; // [rsp+B8h] [rbp+70h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v39 = va_arg(va1, _DWORD *);
  v38 = a4;
  v36 = a2;
  v4 = *(_DWORD *)(a1 + 224);
  v5 = a3 + 1;
  v6 = v39;
  v30 = 0;
  v8 = a3;
  v9 = a3[1];
  v34 = v4;
  *v39 = 0;
  v10 = *(__int64 **)(a1 + 304);
  v11 = *a3;
  v12 = *(_DWORD *)(a1 + 128);
  v13 = *(_DWORD *)(a1 + 124);
  v14 = *(_DWORD *)(a1 + 132);
  v15 = *(_DWORD *)(a1 + 136);
  LODWORD(v39) = *a3;
  v35 = v9;
  v29 = v12;
  if ( v10 )
  {
    v16 = *v10;
    if ( v16 )
    {
      v30 = 1;
      ApiSetAdjustLinearity(v16 + 16, (_DWORD **)va, &v35);
      v11 = (int)v39;
      v9 = v35;
      v12 = v29;
      *v8 = (int)v39;
      *v5 = v9;
    }
  }
  if ( v11 <= v14 )
  {
    if ( v11 < v13 )
      *v8 = v13;
  }
  else
  {
    *v8 = v14;
  }
  if ( v9 <= v15 )
  {
    if ( v9 < v12 )
      *v5 = v12;
  }
  else
  {
    *v5 = v15;
  }
  v17 = *(_DWORD *)(a1 + 212);
  v18 = *(_DWORD *)(a1 + 148);
  v19 = *v8;
  v20 = *v5;
  v33 = *(_DWORD *)(a1 + 136);
  v32 = *(_DWORD *)(a1 + 152);
  v21 = *(_DWORD *)(a1 + 208);
  v22 = *(_DWORD *)(a1 + 216) - v21;
  v31 = *(_DWORD *)(a1 + 220) - v17;
  LODWORD(v39) = *v8;
  v35 = v20;
  v37 = v17;
  if ( v18 > v22 )
  {
    v23 = *(_DWORD *)(a1 + 132) * v21 / v18;
    if ( v19 < v23 )
      *v6 = 1;
    if ( v19 <= v23 )
    {
      v19 = -1;
      LODWORD(v39) = -1;
    }
    else
    {
      v19 = v18 * (v19 - v23) / v22;
      LODWORD(v39) = v19;
    }
    v17 = v37;
    if ( v19 > v14 )
    {
      v19 = v14 + 1;
      *v6 = 1;
      LODWORD(v39) = v14 + 1;
    }
  }
  if ( v32 > v31 )
  {
    v37 = v33 * v17;
    v24 = v33 * v17 / v32;
    if ( v20 < v24 )
      *v6 = 1;
    if ( v20 <= v24 )
    {
      v20 = -1;
      v35 = -1;
    }
    else
    {
      v20 = v32 * (v20 - v24) / v31;
      v35 = v20;
    }
    if ( v20 > v15 )
    {
      v20 = v15 + 1;
      *v6 = 1;
      v35 = v15 + 1;
    }
  }
  result = v34;
  switch ( v34 )
  {
    case 2u:
      result = (unsigned int)v19;
      v35 = result;
      v19 = v29 + v15 - v20;
      v20 = result;
      LODWORD(v39) = v19;
LABEL_34:
      v26 = v15 ^ v14;
      v15 ^= v26;
      v14 = v15 ^ v26;
      break;
    case 3u:
      v19 = v13 + v14 - v19;
      result = (unsigned int)(v15 - v20);
      LODWORD(v39) = v19;
      v20 = v29 + result;
      v35 = v29 + result;
      break;
    case 4u:
      result = (unsigned int)v20;
      LODWORD(v39) = result;
      v20 = v13 + v14 - v19;
      v19 = result;
      v35 = v20;
      goto LABEL_34;
  }
  *v8 = v19;
  *v5 = v20;
  if ( v30 )
  {
    result = *(_QWORD *)(a1 + 304);
    v27 = *(_QWORD *)(result + 80);
    if ( v27 )
    {
      ApiSetAdjustLinearity(v27 + 16, (_DWORD **)va, &v35);
      *v8 = (int)v39;
      result = v35;
      *v5 = v35;
    }
  }
  v28 = v38;
  if ( *v6 )
  {
    result = *(_QWORD *)v8;
    *v38 = *(_QWORD *)v8;
  }
  if ( v36 )
  {
    if ( (int)*v28 <= v14 && (unsigned int)*v28 != -1 )
    {
      v13 = v29;
      v14 = v15;
      v8 = v5;
    }
    result = (unsigned int)*v8;
    if ( (int)result - v13 < v14 - (int)result )
      v14 = v13;
    *v8 = v14;
  }
  return result;
}
