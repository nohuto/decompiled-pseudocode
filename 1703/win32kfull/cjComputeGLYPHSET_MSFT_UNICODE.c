/*
 * XREFs of cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C0229588
 * Callers:
 *     bLoadGlyphSet @ 0x1C0227A40 (bLoadGlyphSet.c)
 * Callees:
 *     Fixup5cRun @ 0x1C0225E00 (Fixup5cRun.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C02BC250 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_UNICODE(__int64 a1, int a2, unsigned int *a3, _DWORD *a4)
{
  int v4; // r15d
  int v6; // r8d
  int v8; // ecx
  _DWORD *v9; // r11
  unsigned __int16 *v10; // r10
  unsigned __int16 v11; // r13
  int v12; // r8d
  unsigned int v13; // r15d
  __int16 v14; // r14
  unsigned __int16 v15; // r14
  unsigned __int16 *v16; // rbx
  unsigned __int16 v17; // ax
  __int64 v18; // rdi
  _BOOL8 v19; // r9
  unsigned __int16 v20; // cx
  int v21; // r8d
  __int64 v22; // rax
  _WORD v24[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v25; // [rsp+3Ch] [rbp-35h]
  int v26; // [rsp+40h] [rbp-31h]
  __int64 v27; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int16 *v28; // [rsp+50h] [rbp-21h] BYREF
  int v29; // [rsp+58h] [rbp-19h]
  unsigned __int16 *v30; // [rsp+60h] [rbp-11h]
  unsigned __int16 *v31; // [rsp+68h] [rbp-9h]
  __int64 v32; // [rsp+70h] [rbp-1h]
  _BOOL8 i; // [rsp+78h] [rbp+7h]
  unsigned __int16 v36; // [rsp+E8h] [rbp+77h] BYREF
  _DWORD *v37; // [rsp+F0h] [rbp+7Fh]

  v37 = a4;
  v4 = a4[3];
  v31 = 0LL;
  v6 = a4[1];
  v30 = 0LL;
  v8 = *a4;
  v9 = a4;
  v10 = 0LL;
  v11 = 0;
  v12 = ((*a4 >> 2) & 1) + v6;
  v26 = (*a4 >> 2) & 1;
  v13 = 4 * (v4 + 4 + 4 * v12);
  if ( a3 )
  {
    v14 = *(_WORD *)(a1 + 6);
    v29 = v8 & 3;
    v15 = __ROR2__(v14, 8) >> 1;
    v32 = a1 + 2LL * ((unsigned int)v15 + 1) + 14;
    if ( *(_WORD *)(v32 + 2LL * (v15 - 1)) == 0xFFFF && v15 > 1u )
      --v15;
    v28 = (unsigned __int16 *)(a3 + 4);
    v16 = (unsigned __int16 *)(a3 + 4);
    v17 = 0;
    v18 = (__int64)&a3[4 * v12 + 4];
    v25 = 0;
    v27 = v18;
    if ( v15 )
    {
      v19 = (v8 & 3) == 3;
      for ( i = v19; ; v19 = i )
      {
        v20 = v11;
        v21 = *(unsigned __int16 *)(v32 + 2LL * v17);
        LOWORD(v21) = __ROR2__(v21, 8);
        v11 = __ROR2__(*(_WORD *)(a1 + 2LL * v17 + 14), 8);
        v24[0] = v21;
        v36 = v11;
        if ( v19 && v20 < 0xB7u && (unsigned __int16)v21 > 0xB7u )
        {
          *(_DWORD *)v16 = 65719;
          *((_QWORD *)v16 + 1) = v18;
          v31 = v16;
          v16 += 8;
          v18 += 4LL;
          v28 = v16;
          v27 = v18;
        }
        if ( v19 && (unsigned __int16)v21 <= 0x2219u )
        {
          if ( v11 >= 0x2219u )
            v10 = v16;
          v30 = v10;
        }
        v16[1] = v11 - v21 + 1;
        *v16 = v21;
        *((_QWORD *)v16 + 1) = v18;
        if ( (_WORD)v26 && (unsigned __int16)v21 <= 0x5Cu && v11 >= 0x5Cu )
        {
          if ( !(unsigned int)Fixup5cRun(a2, v24, &v36, (__int64)&v28, &v27) )
            return 0LL;
          v9 = v37;
          v16 = v28;
          v11 = v36;
          v18 = v27;
          --v37[3];
          LOWORD(v26) = 0;
          if ( !v16[1] )
            goto LABEL_25;
          v21 = v24[0];
        }
        if ( (_WORD)v21 != 0xFFFF && (unsigned int)fs_WinNTGetGlyphIDs(a2, v16[1], v21, 0, 0LL, v18) )
          return 0LL;
        v22 = v16[1];
        v16 += 8;
        v9 = v37;
        v28 = v16;
        v18 += 4 * v22;
        v27 = v18;
LABEL_25:
        v10 = v30;
        v17 = v25 + 1;
        v25 = v17;
        if ( v17 >= v15 )
          break;
      }
    }
    if ( v29 == 3 && v31 )
    {
      if ( v10 )
        *(_DWORD *)(*((_QWORD *)v31 + 1) + 4LL * (183 - *v31)) = *(_DWORD *)(*((_QWORD *)v10 + 1) + 4LL * (8729 - *v10));
    }
    *a3 = v13;
    a3[1] = 4;
    a3[2] = v9[3];
    a3[3] = ((char *)v16 - (char *)(a3 + 4)) >> 4;
  }
  return v13;
}
