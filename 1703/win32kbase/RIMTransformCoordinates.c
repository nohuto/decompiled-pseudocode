/*
 * XREFs of RIMTransformCoordinates @ 0x1C01080DC
 * Callers:
 *     RIMApplyTransforms @ 0x1C01073A8 (RIMApplyTransforms.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0108360 (RIMTransformCoordinatesFromDigitizer.c)
 * Callees:
 *     ApiSetAdjustLinearity @ 0x1C0139CBC (ApiSetAdjustLinearity.c)
 */

__int64 __fastcall RIMTransformCoordinates(__int64 a1, int a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  int *v5; // r14
  int v7; // r13d
  int *v8; // rdi
  signed int v9; // ecx
  __int64 *v10; // rdx
  __int64 result; // rax
  signed int v12; // r10d
  int v13; // r12d
  int v14; // ebx
  int v15; // esi
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // ecx
  int v19; // ebx
  unsigned int v20; // edx
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  _DWORD *v24; // r13
  _DWORD *v25; // r13
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  int v28; // [rsp+20h] [rbp-18h]
  int v29; // [rsp+24h] [rbp-14h]
  unsigned int v30; // [rsp+80h] [rbp+48h] BYREF
  int v31; // [rsp+88h] [rbp+50h]
  unsigned int v32; // [rsp+90h] [rbp+58h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp+60h]

  v33 = a4;
  v31 = a2;
  v5 = a3 + 1;
  v28 = 0;
  v7 = *(_DWORD *)(a1 + 740);
  v8 = a3;
  v9 = a3[1];
  *a5 = 0;
  v10 = *(__int64 **)(a1 + 320);
  result = (unsigned int)*a3;
  v12 = *(_DWORD *)(a1 + 192);
  v13 = *(_DWORD *)(a1 + 188);
  v14 = *(_DWORD *)(a1 + 196);
  v15 = *(_DWORD *)(a1 + 200);
  v30 = *a3;
  v32 = v9;
  v29 = v12;
  if ( v10 )
  {
    v16 = *v10;
    if ( v16 )
    {
      v28 = 1;
      ApiSetAdjustLinearity(v16 + 16, &v30, &v32);
      result = v30;
      v9 = v32;
      v12 = v29;
      *v8 = v30;
      *v5 = v9;
    }
  }
  if ( (int)result <= v14 )
  {
    if ( (int)result < v13 )
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
  v17 = *v8;
  v18 = *v5;
  v30 = *v8;
  v32 = v18;
  switch ( v7 )
  {
    case 2:
      result = (unsigned int)v17;
      v32 = result;
      v17 = v12 + v15 - v18;
      *v5 = result;
      v30 = v17;
      v18 = result;
      *v8 = v17;
LABEL_18:
      v19 = v15 ^ v14;
      v15 ^= v19;
      v14 = v15 ^ v19;
      break;
    case 3:
      v17 = v13 + v14 - v17;
      result = (unsigned int)(v15 - v18);
      v30 = v17;
      *v8 = v17;
      v18 = v12 + result;
      v32 = v12 + result;
      *v5 = v12 + result;
      break;
    case 4:
      result = (unsigned int)v18;
      v30 = result;
      v18 = v13 + v14 - v17;
      *v8 = result;
      v32 = v18;
      v17 = result;
      *v5 = v18;
      goto LABEL_18;
  }
  v20 = *(_DWORD *)(a1 + 832);
  v21 = *(_DWORD *)(a1 + 840);
  v22 = *(_DWORD *)(a1 + 836);
  v23 = *(_DWORD *)(a1 + 844);
  v24 = a5;
  if ( v20 > v21 )
  {
    result = *(unsigned int *)(a1 + 848);
    if ( v17 < (int)result )
      *a5 = 1;
    if ( v17 <= (int)result )
    {
      v17 = 0;
      v30 = 0;
    }
    else
    {
      result = v20 * (v17 - (_DWORD)result) / v21;
      v17 = result;
      v30 = result;
    }
  }
  if ( v22 > v23 )
  {
    result = *(unsigned int *)(a1 + 852);
    if ( v18 < (int)result )
      *v24 = 1;
    if ( v18 <= (int)result )
    {
      v18 = 0;
      v32 = 0;
    }
    else
    {
      result = v22 * (v18 - (_DWORD)result) / v23;
      v18 = result;
      v32 = result;
    }
  }
  *v8 = v17;
  *v5 = v18;
  if ( v17 <= v14 && v18 <= v15 )
  {
    v25 = a5;
  }
  else
  {
    v25 = a5;
    *a5 = 1;
  }
  if ( v28 )
  {
    result = *(_QWORD *)(a1 + 320);
    v26 = *(_QWORD *)(result + 80);
    if ( v26 )
    {
      ApiSetAdjustLinearity(v26 + 16, &v30, &v32);
      *v8 = v30;
      result = v32;
      *v5 = v32;
    }
  }
  v27 = v33;
  if ( *v25 )
  {
    result = *(_QWORD *)v8;
    *v33 = *(_QWORD *)v8;
  }
  if ( v31 )
  {
    if ( (int)*v27 <= v14 && (unsigned int)*v27 )
    {
      v13 = v29;
      v14 = v15;
      v8 = v5;
    }
    result = (unsigned int)(v14 - *v8);
    if ( *v8 - v13 < (int)result )
      v14 = v13;
    *v8 = v14;
  }
  return result;
}
