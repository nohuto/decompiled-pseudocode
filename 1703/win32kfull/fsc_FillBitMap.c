/*
 * XREFs of fsc_FillBitMap @ 0x1C02CD5D4
 * Callers:
 *     fsc_FillGlyph @ 0x1C02C0850 (fsc_FillGlyph.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     LookForDropouts @ 0x1C02CD128 (LookForDropouts.c)
 *     fsc_BLTHoriz @ 0x1C02DB3F8 (fsc_BLTHoriz.c)
 */

__int64 __fastcall fsc_FillBitMap(char *a1, int a2, int a3, int a4, int a5, __int16 a6)
{
  int v6; // ebp
  int v8; // esi
  __int64 v9; // r14
  char *v10; // rdi
  int v11; // r15d
  __int16 v12; // r8
  __int64 v13; // rcx
  __int16 **v14; // r13
  __int16 **v15; // rdx
  unsigned __int64 *v16; // rax
  __int16 v17; // cx
  unsigned __int64 v18; // r12
  __int16 *v19; // rbx
  __int16 *v20; // r14
  int v21; // edx
  __int64 v22; // rbp
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 result; // rax
  _DWORD *v28; // rcx
  char *v29; // rdi
  char *v30; // rdi
  int v31; // [rsp+20h] [rbp-68h]
  __int16 **v32; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v33; // [rsp+30h] [rbp-58h]
  __int16 v35; // [rsp+98h] [rbp+10h]
  __int16 v36; // [rsp+A0h] [rbp+18h]
  int v37; // [rsp+A8h] [rbp+20h]

  dword_1C0338B48 = a3;
  v6 = a2 - a3;
  dword_1C0338B44 = a2;
  v31 = a2 - a3;
  v8 = a4 >> 2;
  dword_1C0338B38 = a4;
  v9 = (__int64)a1;
  v10 = a1;
  memset(a1, 0, 4LL * (unsigned int)((a2 - a3) * (a4 >> 2)));
  v11 = 0;
  v12 = dword_1C0338B28;
  v13 = a2 - dword_1C0338B40 - 1;
  v36 = dword_1C0338B28;
  v14 = (__int16 **)(qword_1C0338B58 + 8 * v13);
  v15 = (__int16 **)(qword_1C0338B60 + 8 * v13);
  v16 = (unsigned __int64 *)(qword_1C0338B68 + 8 * v13);
  if ( v6 <= 0 )
    goto LABEL_16;
  v17 = dword_1C0338C32;
  v35 = dword_1C0338C32;
  while ( 2 )
  {
    v18 = *v16;
    v19 = *v14--;
    v20 = *v15--;
    v32 = v15;
    v33 = v16 - 1;
    if ( (unsigned __int64)v19 >= *v16 )
      goto LABEL_13;
    v21 = v12;
    v37 = v12;
    v22 = 2LL * v17;
    do
    {
      v23 = *v19;
      v19 = (__int16 *)((char *)v19 + v22);
      v24 = v23 - v21;
      v25 = (unsigned int)(*v20 - v21);
      v20 = (__int16 *)((char *)v20 + v22);
      if ( v24 >= (int)v25 )
      {
        if ( v24 <= (int)v25 )
          continue;
        v26 = (unsigned int)(v24 - 1);
      }
      else
      {
        v26 = (unsigned int)(v25 - 1);
        v25 = (unsigned int)v24;
      }
      result = fsc_BLTHoriz(v25, v26, v10);
      if ( (_DWORD)result )
        return result;
      v21 = v37;
    }
    while ( (unsigned __int64)v19 < v18 );
    v15 = v32;
    v17 = v35;
    v6 = v31;
    v12 = v36;
LABEL_13:
    ++v11;
    v10 += 4 * v8;
    if ( v11 < v6 )
    {
      v16 = v33;
      continue;
    }
    break;
  }
  v9 = (__int64)a1;
LABEL_16:
  if ( (a6 & 2) != 0 )
    return 0LL;
  result = LookForDropouts(v9, a6);
  if ( !(_DWORD)result )
  {
    if ( a5 != dword_1C0338B40 )
    {
      v28 = (_DWORD *)qword_1C0338B50;
      v29 = &v10[-8 * v8];
      if ( v8 )
      {
        v30 = &v29[-qword_1C0338B50];
        do
        {
          *v28 = *(_DWORD *)((char *)v28 + (_QWORD)v30);
          ++v28;
          --v8;
        }
        while ( v8 );
      }
      dword_1C0338B4C = dword_1C0338B48 + 1;
    }
    return 0LL;
  }
  return result;
}
