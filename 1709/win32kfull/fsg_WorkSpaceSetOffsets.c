/*
 * XREFs of fsg_WorkSpaceSetOffsets @ 0x1C02C28F4
 * Callers:
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 * Callees:
 *     fsg_GetOutlineSizeAndOffsets @ 0x1C02C18A8 (fsg_GetOutlineSizeAndOffsets.c)
 */

__int64 __fastcall fsg_WorkSpaceSetOffsets(_WORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v5; // ax
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // ecx
  unsigned int v10; // ebp
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  __int16 v18; // ax
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  int v21; // r8d
  unsigned int v22; // edx
  unsigned __int16 v23; // ax
  unsigned int v24; // ecx
  unsigned __int16 v25; // cx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned __int16 v30; // ax
  __int64 result; // rax
  unsigned int v32; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 8) = 0;
  v5 = a1[15];
  v7 = v5;
  if ( v5 <= 1u )
    v7 = 1;
  v8 = 20;
  if ( v7 >= 0x14 )
  {
    v9 = 20;
  }
  else if ( v5 <= 1u )
  {
    v9 = 1;
  }
  else
  {
    v9 = v5;
  }
  v10 = (112 * v9 + 113) & 0xFFFFFFFE;
  *(_DWORD *)(a2 + 4) = v10;
  v11 = a1[4];
  v12 = a1[6];
  v13 = v12;
  if ( v11 > v12 )
    v13 = a1[4];
  if ( v13 <= 1u )
  {
    v14 = 1;
  }
  else
  {
    if ( v11 > v12 )
      v12 = a1[4];
    v14 = v12;
  }
  v15 = a1[3];
  v16 = a1[5];
  v17 = v16;
  if ( v15 > v16 )
    v17 = a1[3];
  if ( v17 <= 1u )
  {
    v18 = 1;
  }
  else
  {
    if ( v15 > v16 )
      v16 = a1[3];
    v18 = v16;
  }
  fsg_GetOutlineSizeAndOffsets(v18 + 8, v14, (unsigned int *)(a2 + 20), &v32, (unsigned int *)(a2 + 68));
  v19 = v32;
  v20 = 32 * (unsigned __int16)a1[3];
  if ( v32 - *(_DWORD *)(a2 + 68) < v20 )
    v19 = v20 + *(_DWORD *)(a2 + 68);
  v21 = *(_DWORD *)(a2 + 68) + *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 68) = v21;
  v22 = (v19 + v10 + 3) & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 12) = v22;
  v23 = a1[15];
  v24 = v23;
  if ( v23 <= 1u )
    v24 = 1;
  if ( v24 < 0x14 )
  {
    v8 = v23;
    if ( v23 <= 1u )
      v8 = 1;
  }
  v25 = a1[14];
  v26 = 3;
  if ( v25 > 3u )
    v26 = v25;
  v27 = v8 + v26 + 1;
  v28 = (v22 + 7 + 4 * v27) & 0xFFFFFFF8;
  *(_DWORD *)(a2 + 16) = v28;
  v29 = (224 * v27 + v28 + 3) & 0xFFFFFFFC;
  *(_DWORD *)a2 = v29;
  v30 = a1[12];
  if ( !v30 )
    v30 = 1;
  result = v29 + 4 * v30;
  *a3 = result - v21;
  *(_QWORD *)(a2 + 72) = 0LL;
  return result;
}
