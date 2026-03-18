/*
 * XREFs of bComputeGlyphAttrBits @ 0x1C02320B8
 * Callers:
 *     bLoadFontFile @ 0x1C0227558 (bLoadFontFile.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00DE870 (ConvertToAndFromWideChar.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall bComputeGlyphAttrBits(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  ULONG v4; // ebx
  __int64 result; // rax
  _DWORD *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int16 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int16 *v15; // r12
  unsigned int *v16; // rbp
  unsigned int **v17; // r13
  unsigned int v18; // ebx
  _DWORD *v19; // r15
  unsigned int v20; // ecx
  unsigned int v21; // edx
  _WORD *v22; // rax
  unsigned int v23; // eax
  int v24; // [rsp+30h] [rbp-78h]
  unsigned int v25; // [rsp+34h] [rbp-74h]
  unsigned int *v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  unsigned __int16 *v28; // [rsp+48h] [rbp-60h]
  unsigned __int16 *v29; // [rsp+50h] [rbp-58h]
  WCHAR v32; // [rsp+C0h] [rbp+18h] BYREF
  CHAR v33; // [rsp+C8h] [rbp+20h] BYREF

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
    v6[1] = *(_DWORD *)(v2 + 552);
    v6[2] = 1;
    v24 = 0;
    while ( (unsigned int)v7 < *(_DWORD *)(v3 + 12) )
    {
      if ( *(_DWORD *)(v3 + 16LL * (unsigned int)v7 + 44) == 1 )
      {
        v8 = 0LL;
        v26 = 0LL;
        v9 = *(_QWORD *)(v3 + 16 * (v7 + 3));
        v10 = *(_QWORD *)(v9 + 88);
        v11 = *(unsigned int *)(v10 + 12);
        v12 = (unsigned __int16 *)(v10 + 16);
        v13 = *(_QWORD *)(v9 + 96);
        v14 = 0LL;
        v15 = &v12[8 * v11];
        v28 = v12;
        v29 = v15;
        v27 = 0LL;
        if ( v13 )
        {
          v14 = 1LL;
          v8 = v13 + 16;
          v27 = 1LL;
        }
        if ( v12 < v15 )
        {
          v16 = 0LL;
          v17 = (unsigned int **)(v8 + 8);
          do
          {
            v18 = *v12;
            v19 = (_DWORD *)*((_QWORD *)v12 + 1);
            v25 = v18 + v12[1] - 1;
            if ( v14 )
            {
              v16 = *v17;
              v26 = *v17;
            }
            if ( *v12 != 0xFFFF && v18 <= v18 + v12[1] - 1 )
            {
              while ( 1 )
              {
                v20 = *(_DWORD *)(a2 + 288);
                v32 = v18;
                if ( (unsigned __int16)v18 >= (unsigned __int16)VerticalUnicodes
                  && (unsigned __int16)v18 <= (unsigned __int16)word_1C032957E )
                {
                  break;
                }
LABEL_18:
                if ( (int)ConvertToAndFromWideChar(v20, &v32, 2u, &v33, 2u, 0) > 1 )
                  goto LABEL_19;
LABEL_24:
                ++v26;
                ++v19;
                v16 = v26;
                if ( ++v18 > v25 )
                {
                  v12 = v28;
                  v15 = v29;
                  v14 = v27;
                  goto LABEL_26;
                }
              }
              v21 = 0;
              v22 = &unk_1C032954A;
              while ( (unsigned __int16)v18 < *(v22 - 1) || (unsigned __int16)v18 > *v22 )
              {
                ++v21;
                v22 += 2;
                if ( v21 >= 0xE )
                  goto LABEL_18;
              }
LABEL_19:
              if ( *v19 < v6[1] )
              {
                *((_BYTE *)v6 + ((unsigned __int64)(unsigned int)*v19 >> 3) + 12) |= glyphBits[*v19 & 7];
                if ( v27 )
                {
                  v23 = *v16;
                  if ( *v19 != *v16 && v23 < v6[1] )
                    *((_BYTE *)v6 + ((unsigned __int64)v23 >> 3) + 12) |= glyphBits[v23 & 7];
                }
              }
              goto LABEL_24;
            }
LABEL_26:
            v12 += 8;
            v17 += 2;
            v28 = v12;
          }
          while ( v12 < v15 );
          v3 = a1;
          LODWORD(v7) = v24;
        }
      }
      v7 = (unsigned int)(v7 + 1);
      v24 = v7;
    }
    *(_QWORD *)(v3 + 32) = v6;
    return 1LL;
  }
  return result;
}
