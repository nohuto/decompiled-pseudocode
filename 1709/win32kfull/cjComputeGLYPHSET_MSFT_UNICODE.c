/*
 * XREFs of cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C022AB00
 * Callers:
 *     bLoadGlyphSet @ 0x1C0228FB8 (bLoadGlyphSet.c)
 * Callees:
 *     Fixup5cRun @ 0x1C0227380 (Fixup5cRun.c)
 *     fs_WinNTGetGlyphIDs @ 0x1C02B6064 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_UNICODE(__int64 a1, int a2, unsigned int *a3, _DWORD *a4)
{
  _DWORD *v4; // r11
  unsigned int v5; // r9d
  int v7; // r15d
  unsigned int v8; // r8d
  char *v9; // r10
  unsigned __int16 v10; // r13
  unsigned int v11; // r15d
  int v12; // r9d
  unsigned __int16 v13; // r14
  char *v14; // rbx
  __int64 v15; // rdi
  unsigned __int16 v16; // ax
  bool i; // cf
  unsigned __int16 v18; // cx
  int v19; // r8d
  __int64 v20; // rax
  unsigned __int16 v22[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v23; // [rsp+34h] [rbp-44h]
  int v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+3Ch] [rbp-3Ch]
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  char *v27; // [rsp+48h] [rbp-30h] BYREF
  char *v28; // [rsp+50h] [rbp-28h]
  char *v29; // [rsp+58h] [rbp-20h]
  __int64 v30; // [rsp+60h] [rbp-18h]
  unsigned __int16 v33; // [rsp+D0h] [rbp+58h] BYREF
  _DWORD *v34; // [rsp+D8h] [rbp+60h]

  v34 = a4;
  v4 = a4;
  v5 = *a4;
  v29 = 0LL;
  v7 = v4[3] + 4;
  v8 = ((v5 >> 2) & 1) + v4[1];
  v28 = 0LL;
  v9 = 0LL;
  v24 = (v5 >> 2) & 1;
  v10 = 0;
  v11 = 4 * (v7 + 4 * v8);
  if ( a3 )
  {
    v12 = v5 & 3;
    v13 = __ROR2__(*(_WORD *)(a1 + 6), 8) >> 1;
    v25 = v12;
    v30 = a1 + 2 * ((unsigned int)v13 + 1 + 7LL);
    if ( *(_WORD *)(v30 + 2LL * v13 - 2) == 0xFFFF && v13 > 1u )
      --v13;
    v27 = (char *)(a3 + 4);
    v14 = (char *)(a3 + 4);
    v15 = (__int64)&a3[4 * v8 + 4];
    v16 = 0;
    v26 = v15;
    for ( i = v13 != 0; ; i = (unsigned __int16)(v23 + 1) < v13 )
    {
      v23 = v16;
      if ( !i )
      {
        if ( v12 == 3 && v29 && v9 )
          *(_DWORD *)(*((_QWORD *)v29 + 1) + 4LL * (183 - *(unsigned __int16 *)v29)) = *(_DWORD *)(*((_QWORD *)v9 + 1)
                                                                                                 + 4LL
                                                                                                 * (8729
                                                                                                  - *(unsigned __int16 *)v9));
        *a3 = v11;
        a3[1] = 4;
        a3[2] = v4[3];
        a3[3] = (v14 - (char *)(a3 + 4)) >> 4;
        return v11;
      }
      v18 = v10;
      v19 = *(unsigned __int16 *)(v30 + 2LL * v16);
      LOWORD(v19) = __ROR2__(v19, 8);
      v10 = __ROR2__(*(_WORD *)(a1 + 2LL * v16 + 14), 8);
      v22[0] = v19;
      v33 = v10;
      if ( v12 == 3 && v18 < 0xB7u && (unsigned __int16)v19 > 0xB7u )
      {
        *(_DWORD *)v14 = 65719;
        *((_QWORD *)v14 + 1) = v15;
        v29 = v14;
        v14 += 16;
        v15 += 4LL;
        v27 = v14;
        v26 = v15;
      }
      if ( v12 == 3 && (unsigned __int16)v19 <= 0x2219u )
      {
        if ( v10 >= 0x2219u )
          v9 = v14;
        v28 = v9;
      }
      *((_WORD *)v14 + 1) = v10 - v19 + 1;
      *(_WORD *)v14 = v19;
      *((_QWORD *)v14 + 1) = v15;
      if ( (_WORD)v24 && (unsigned __int16)v19 <= 0x5Cu && v10 >= 0x5Cu )
      {
        if ( !(unsigned int)Fixup5cRun(a2, v22, &v33, (__int64)&v27, &v26) )
          return 0LL;
        v4 = v34;
        v14 = v27;
        v10 = v33;
        v15 = v26;
        --v34[3];
        LOWORD(v24) = 0;
        if ( !*((_WORD *)v14 + 1) )
          goto LABEL_25;
        v19 = v22[0];
      }
      if ( (_WORD)v19 != 0xFFFF
        && (unsigned int)fs_WinNTGetGlyphIDs(a2, *((unsigned __int16 *)v14 + 1), v19, 0, 0LL, v15) )
      {
        return 0LL;
      }
      v20 = *((unsigned __int16 *)v14 + 1);
      v14 += 16;
      v4 = v34;
      v27 = v14;
      v15 += 4 * v20;
      v26 = v15;
LABEL_25:
      v9 = v28;
      v16 = v23 + 1;
      v12 = v25;
    }
  }
  return v11;
}
