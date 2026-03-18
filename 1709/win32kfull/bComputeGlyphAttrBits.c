/*
 * XREFs of bComputeGlyphAttrBits @ 0x1C0233618
 * Callers:
 *     bLoadFontFile @ 0x1C0228AE4 (bLoadFontFile.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall bComputeGlyphAttrBits(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  ULONG v4; // ebx
  __int64 result; // rax
  _DWORD *v6; // rdi
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int16 *v14; // rsi
  __int64 v15; // rax
  unsigned __int16 *v16; // r12
  __int64 v17; // rcx
  unsigned int *v18; // rbp
  unsigned int **v19; // r13
  unsigned int v20; // ebx
  _DWORD *v21; // r15
  unsigned int v22; // ecx
  unsigned int v23; // edx
  _WORD *v24; // rax
  unsigned int v25; // eax
  int v26; // [rsp+30h] [rbp-78h]
  unsigned int v27; // [rsp+34h] [rbp-74h]
  unsigned int *v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  unsigned __int16 *v30; // [rsp+48h] [rbp-60h]
  unsigned __int16 *v31; // [rsp+50h] [rbp-58h]
  WCHAR v34; // [rsp+C0h] [rbp+18h] BYREF
  CHAR v35; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a1;
  v4 = ((unsigned int)(*(_DWORD *)(v2 + 552) + 7) >> 3) + 12;
  result = (__int64)EngAllocMem(0, v4, 0x64667454u);
  v6 = (_DWORD *)result;
  if ( result )
  {
    memset((void *)result, 0, v4);
    *v6 = v4;
    v7 = 0LL;
    v8 = *(_DWORD *)(v2 + 552);
    v6[2] = 1;
    v6[1] = v8;
    v26 = 0;
    while ( (unsigned int)v7 < *(_DWORD *)(v3 + 12) )
    {
      if ( *(_DWORD *)(v3 + 16LL * (unsigned int)v7 + 44) == 1 )
      {
        v9 = 0;
        v28 = 0LL;
        v10 = 0LL;
        v11 = *(_QWORD *)(v3 + 16 * (v7 + 3));
        v12 = *(_QWORD *)(v11 + 88);
        v13 = *(unsigned int *)(v12 + 12);
        v14 = (unsigned __int16 *)(v12 + 16);
        v15 = *(_QWORD *)(v11 + 96);
        v16 = &v14[8 * v13];
        v30 = v14;
        v31 = v16;
        if ( v15 )
        {
          v10 = v15 + 16;
          v9 = 1;
        }
        v17 = v9;
        v29 = v9;
        if ( v14 < v16 )
        {
          v18 = 0LL;
          v19 = (unsigned int **)(v10 + 8);
          do
          {
            v20 = *v14;
            v21 = (_DWORD *)*((_QWORD *)v14 + 1);
            v27 = v20 + v14[1] - 1;
            if ( v17 )
            {
              v18 = *v19;
              v28 = *v19;
            }
            if ( *v14 != 0xFFFF && v20 <= v20 + v14[1] - 1 )
            {
              while ( 1 )
              {
                v22 = *(_DWORD *)(a2 + 288);
                v34 = v20;
                if ( (unsigned __int16)v20 >= (unsigned __int16)VerticalUnicodes
                  && (unsigned __int16)v20 <= (unsigned __int16)word_1C0324346 )
                {
                  break;
                }
LABEL_18:
                if ( (int)ConvertToAndFromWideChar(v22, &v34, 2u, &v35, 2u, 0) > 1 )
                  goto LABEL_19;
LABEL_24:
                ++v28;
                ++v21;
                v18 = v28;
                if ( ++v20 > v27 )
                {
                  v14 = v30;
                  v16 = v31;
                  v17 = v29;
                  goto LABEL_26;
                }
              }
              v23 = 0;
              v24 = &unk_1C0324312;
              while ( (unsigned __int16)v20 < *(v24 - 1) || (unsigned __int16)v20 > *v24 )
              {
                ++v23;
                v24 += 2;
                if ( v23 >= 0xE )
                  goto LABEL_18;
              }
LABEL_19:
              if ( *v21 < v6[1] )
              {
                *((_BYTE *)v6 + ((unsigned __int64)(unsigned int)*v21 >> 3) + 12) |= *((_BYTE *)&glyphBits + (*v21 & 7));
                if ( v29 )
                {
                  v25 = *v18;
                  if ( *v21 != *v18 && v25 < v6[1] )
                    *((_BYTE *)v6 + ((unsigned __int64)v25 >> 3) + 12) |= *((_BYTE *)&glyphBits + (v25 & 7));
                }
              }
              goto LABEL_24;
            }
LABEL_26:
            v14 += 8;
            v19 += 2;
            v30 = v14;
          }
          while ( v14 < v16 );
          v3 = a1;
          LODWORD(v7) = v26;
        }
      }
      v7 = (unsigned int)(v7 + 1);
      v26 = v7;
    }
    *(_QWORD *)(v3 + 32) = v6;
    return 1LL;
  }
  return result;
}
