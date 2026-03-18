/*
 * XREFs of TouchTargetingCreateContact @ 0x1C023C7AC
 * Callers:
 *     xxxPerformTargetingWithinPwnd @ 0x1C01D6548 (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C023BF28 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 */

__int64 __fastcall TouchTargetingCreateContact(__int64 a1, int *a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int *v8; // r12
  int *v9; // r13
  int *v10; // rdi
  int *v11; // r8
  int v12; // edx
  int v13; // eax
  __int64 result; // rax
  int v15; // eax
  int v16; // esi
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // edi
  int v20; // ebx
  int v21; // r11d
  int v22; // eax
  int v23; // r9d
  int v24; // r8d
  int v25; // r8d
  int v26; // edx
  int v27; // eax
  int v28; // r10d
  int v29; // r11d
  int v30; // r9d
  int v31; // eax
  int v32; // edx
  int v33; // ecx

  v4 = a4 + 4;
  a4[8] = *(_DWORD *)(a1 + 4);
  a4[9] = *(_DWORD *)(a1 + 8);
  a4[45] = 1;
  a4[10] = *(_DWORD *)(a1 + 44);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 28);
  if ( !a4[46] )
  {
    a4[47] = 26458;
    a4[46] = 26458;
  }
  v8 = a4 + 6;
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), v4, a4 + 6, a4[46]);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), a4, a4 + 2, a4[46]);
  v9 = a4 + 7;
  v10 = a4 + 5;
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 5, a4 + 7, a4[47]);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 1, a4 + 3, a4[47]);
  if ( a2 )
  {
    if ( (unsigned int)IntersectRect(v4, v4, a2) )
      IntersectRect(a4, a4, v11);
    else
      a4[45] = 0;
  }
  a4[44] = PtInRect(a4, *(_QWORD *)(a1 + 4));
  if ( !a4[46] )
  {
    a4[47] = 26458;
    a4[46] = 26458;
  }
  v12 = *v4;
  v13 = *v8 - *v4;
  a4[11] = 12;
  if ( v13 < 4 || *v9 - *v10 < 4 )
    a4[11] = 4;
  result = (unsigned int)a4[11];
  switch ( (_DWORD)result )
  {
    case 4:
      a4[12] = v12;
      a4[13] = *v10;
      a4[14] = *v4;
      a4[15] = *v9;
      a4[16] = *v8;
      a4[17] = *v9;
      a4[18] = *v8;
      result = (unsigned int)*v10;
      a4[19] = result;
      break;
    case 8:
      a4[12] = v12;
      v27 = (*v10 + *v9) / 2;
      a4[13] = v27;
      v28 = v27;
      v29 = *v4 + 15 * (*v8 - *v4) / 100;
      a4[14] = v29;
      v30 = *v9 + 15 * (*v10 - *v9) / 100;
      a4[15] = v30;
      v31 = (*v4 + *v8) / 2;
      a4[16] = v31;
      a4[17] = *v9;
      v32 = *v4 + *v8 - v29;
      a4[18] = v32;
      a4[19] = v30;
      a4[20] = *v8;
      a4[21] = v28;
      a4[22] = v32;
      v33 = *v10 + *v9 - v30;
      a4[23] = v33;
      a4[24] = v31;
      result = (unsigned int)*v10;
      a4[25] = result;
      a4[26] = v29;
      a4[27] = v33;
      break;
    case 0xC:
      a4[12] = v12;
      v15 = (*v10 + *v9) / 2;
      a4[13] = v15;
      v16 = v15;
      v17 = *v4 + 7 * (*v8 - *v4) / 100;
      a4[14] = v17;
      v18 = (int)((unsigned __int64)(34359738375LL * (*v10 - *v9)) >> 32) >> 5;
      v19 = *v9 + (v18 >> 31) + v18;
      a4[15] = v19;
      v20 = *v4 + 25 * (*v8 - *v4) / 100;
      a4[16] = v20;
      v21 = *v9 + 7 * (a4[5] - *v9) / 100;
      a4[17] = v21;
      v22 = (*v4 + *v8) / 2;
      a4[18] = v22;
      a4[19] = *v9;
      v23 = *v4 + *v8 - v20;
      a4[20] = v23;
      a4[21] = v21;
      v24 = *v4 + *v8 - v17;
      a4[22] = v24;
      a4[23] = v19;
      a4[24] = *v8;
      a4[26] = v24;
      a4[25] = v16;
      v25 = a4[5] + *v9 - v19;
      a4[27] = v25;
      a4[28] = v23;
      v26 = a4[5] + *v9 - v21;
      a4[29] = v26;
      a4[30] = v22;
      result = (unsigned int)a4[5];
      a4[31] = result;
      a4[32] = v20;
      a4[33] = v26;
      a4[34] = v17;
      a4[35] = v25;
      break;
  }
  return result;
}
