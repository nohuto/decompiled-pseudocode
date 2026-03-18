/*
 * XREFs of fsc_FillBitMap @ 0x1C02C73BC
 * Callers:
 *     fsc_FillGlyph @ 0x1C02BA658 (fsc_FillGlyph.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     LookForDropouts @ 0x1C02C6F20 (LookForDropouts.c)
 *     fsc_BLTHoriz @ 0x1C02D50C8 (fsc_BLTHoriz.c)
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
  unsigned __int64 v17; // r12
  __int16 *v18; // rbx
  __int16 *v19; // r14
  int v20; // edx
  __int64 v21; // rbp
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 result; // rax
  _DWORD *v27; // rcx
  char *v28; // rdi
  char *v29; // rdi
  __int16 **v30; // [rsp+20h] [rbp-58h]
  unsigned __int64 *v31; // [rsp+28h] [rbp-50h]
  __int16 v33; // [rsp+88h] [rbp+10h]
  int v34; // [rsp+90h] [rbp+18h]
  int v35; // [rsp+98h] [rbp+20h]

  dword_1C0334268 = a3;
  v6 = a2 - a3;
  dword_1C0334264 = a2;
  v35 = a2 - a3;
  v8 = a4 >> 2;
  dword_1C0334258 = a4;
  v9 = (__int64)a1;
  v10 = a1;
  memset(a1, 0, 4LL * (unsigned int)((a2 - a3) * (a4 >> 2)));
  v11 = 0;
  v12 = dword_1C0334248;
  v13 = a2 - dword_1C0334260 - 1;
  v33 = dword_1C0334248;
  v14 = (__int16 **)(qword_1C0334278 + 8 * v13);
  v15 = (__int16 **)(qword_1C0334280 + 8 * v13);
  v16 = (unsigned __int64 *)(qword_1C0334288 + 8 * v13);
  if ( v6 <= 0 )
    goto LABEL_15;
  while ( 2 )
  {
    v17 = *v16;
    v18 = *v14--;
    v19 = *v15--;
    v30 = v15;
    v31 = v16 - 1;
    if ( (unsigned __int64)v18 >= *v16 )
      goto LABEL_12;
    v20 = v12;
    v21 = 2LL * (__int16)dword_1C0334352;
    v34 = v12;
    do
    {
      v22 = *v18;
      v18 = (__int16 *)((char *)v18 + v21);
      v23 = v22 - v20;
      v24 = (unsigned int)(*v19 - v20);
      v19 = (__int16 *)((char *)v19 + v21);
      if ( v23 >= (int)v24 )
      {
        if ( v23 <= (int)v24 )
          continue;
        v25 = (unsigned int)(v23 - 1);
      }
      else
      {
        v25 = (unsigned int)(v24 - 1);
        v24 = (unsigned int)v23;
      }
      result = fsc_BLTHoriz(v24, v25, v10);
      if ( (_DWORD)result )
        return result;
      v20 = v34;
    }
    while ( (unsigned __int64)v18 < v17 );
    v15 = v30;
    v6 = v35;
    v12 = v33;
LABEL_12:
    ++v11;
    v10 += 4 * v8;
    if ( v11 < v6 )
    {
      v16 = v31;
      continue;
    }
    break;
  }
  v9 = (__int64)a1;
LABEL_15:
  if ( (a6 & 2) != 0 )
    return 0LL;
  result = LookForDropouts(v9, a6);
  if ( !(_DWORD)result )
  {
    if ( a5 != dword_1C0334260 )
    {
      v27 = (_DWORD *)qword_1C0334270;
      v28 = &v10[-8 * v8];
      if ( v8 )
      {
        v29 = &v28[-qword_1C0334270];
        do
        {
          *v27 = *(_DWORD *)((char *)v27 + (_QWORD)v29);
          ++v27;
          --v8;
        }
        while ( v8 );
      }
      dword_1C033426C = dword_1C0334268 + 1;
    }
    return 0LL;
  }
  return result;
}
