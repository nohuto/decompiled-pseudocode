/*
 * XREFs of vFill_RotateGLYPHDATA @ 0x1C0234ED8
 * Callers:
 *     BmfdQueryFontData @ 0x1C02345FC (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

unsigned __int64 __fastcall vFill_RotateGLYPHDATA(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  unsigned __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // r14d
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  unsigned __int64 v14; // r10
  unsigned int v15; // ebx
  _BYTE *v16; // r8
  unsigned __int8 v17; // r14
  __int64 v18; // r11
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  _BYTE *i; // r8
  __int64 v25; // r15
  unsigned int v26; // r10d
  unsigned int v27; // r8d
  unsigned int v28; // r15d
  unsigned int v29; // r14d
  unsigned int v30; // ebx
  _BYTE *v31; // r9
  unsigned __int8 v32; // r14
  __int64 v33; // r11
  _QWORD v34[7]; // [rsp+28h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+40h]

  result = (unsigned __int64)memset(v34, 0, sizeof(v34));
  if ( a1 )
  {
    v9 = *(_OWORD *)(a1 + 32);
    v10 = *(_OWORD *)(a1 + 48);
    *(_QWORD *)a1 = a3;
    *(_OWORD *)&v34[3] = v9;
    *(_OWORD *)&v34[5] = v10;
  }
  switch ( a4 )
  {
    case 900:
      if ( a1 )
      {
        *(_QWORD *)(a1 + 48) = v34[6];
        *(_DWORD *)(a1 + 60) = -HIDWORD(v34[5]);
        *(_DWORD *)(a1 + 56) = v34[5];
        *(_DWORD *)(a1 + 36) = -LODWORD(v34[4]);
        *(_DWORD *)(a1 + 44) = -LODWORD(v34[3]);
        *(_DWORD *)(a1 + 40) = HIDWORD(v34[4]);
        result = HIDWORD(v34[3]);
        *(_DWORD *)(a1 + 32) = HIDWORD(v34[3]);
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v26 = a2[2];
          v27 = 0;
          v28 = a2[3];
          *a3 = a2[1];
          a3[1] = -v26;
          v29 = (v28 + 7) >> 3;
          a3[2] = a2[3];
          result = (unsigned int)a2[2];
          for ( a3[3] = result; v27 < v26; ++v27 )
          {
            result = v29 * v27;
            v30 = 0;
            v31 = (char *)a3 + result + 16;
            if ( v28 )
            {
              v32 = *((_BYTE *)&glyphBits + (((_BYTE)v26 - (_BYTE)v27 - 1) & 7));
              do
              {
                v33 = v30 & 7;
                if ( (v32 & *((_BYTE *)a2 + ((unsigned __int64)(v26 - v27 - 1) >> 3) + ((v26 + 7) >> 3) * v30 + 16)) != 0 )
                  *v31 |= *((_BYTE *)&glyphBits + v33);
                else
                  *v31 &= BitOFF[v33];
                ++v30;
                result = (unsigned __int64)(v31 + 1);
                if ( (_DWORD)v33 != 7 )
                  result = (unsigned __int64)v31;
                v31 = (_BYTE *)result;
              }
              while ( v30 < v28 );
              v29 = (v28 + 7) >> 3;
            }
          }
        }
      }
      break;
    case 1800:
      if ( a1 )
      {
        *(_DWORD *)(a1 + 52) = -HIDWORD(v34[5]);
        *(_DWORD *)(a1 + 48) = v34[5];
        *(_DWORD *)(a1 + 60) = -HIDWORD(v34[6]);
        *(_DWORD *)(a1 + 56) = v34[6];
        *(_DWORD *)(a1 + 36) = -HIDWORD(v34[4]);
        *(_DWORD *)(a1 + 44) = -HIDWORD(v34[3]);
        *(_DWORD *)(a1 + 40) = -LODWORD(v34[3]);
        result = (unsigned int)-LODWORD(v34[4]);
        *(_DWORD *)(a1 + 32) = result;
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v19 = a2[2];
          v20 = 0;
          v21 = a2[3];
          *a3 = -v19;
          v22 = (v19 + 7) >> 3;
          a3[1] = -(v21 + a2[1]);
          a3[2] = a2[2];
          result = (unsigned int)a2[3];
          a3[3] = result;
          if ( v21 )
          {
            do
            {
              result = v22 * v20;
              v23 = 0;
              for ( i = (char *)a3 + result + 16; v23 < v19; i = (_BYTE *)result )
              {
                v25 = v23 & 7;
                if ( (*((_BYTE *)a2 + v22 * (v21 - v20 - 1) + ((unsigned __int64)(v19 - v23 - 1) >> 3) + 16) & *((_BYTE *)&glyphBits + (((_BYTE)v19 - (_BYTE)v23 - 1) & 7))) != 0 )
                  *i |= *((_BYTE *)&glyphBits + v25);
                else
                  *i &= BitOFF[v25];
                ++v23;
                result = (unsigned __int64)(i + 1);
                if ( (_DWORD)v25 != 7 )
                  result = (unsigned __int64)i;
              }
              ++v20;
            }
            while ( v20 < v21 );
          }
        }
      }
      break;
    case 2700:
      if ( a1 )
      {
        *(_DWORD *)(a1 + 52) = -HIDWORD(v34[6]);
        *(_DWORD *)(a1 + 48) = v34[6];
        *(_QWORD *)(a1 + 56) = v34[5];
        *(_DWORD *)(a1 + 36) = v34[3];
        *(_DWORD *)(a1 + 44) = v34[4];
        *(_DWORD *)(a1 + 40) = -HIDWORD(v34[4]);
        result = (unsigned int)-HIDWORD(v34[3]);
        *(_DWORD *)(a1 + 32) = result;
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v12 = 0;
          v13 = a2[3];
          v35 = a2[2];
          v11 = v35;
          *a3 = -(v13 + a2[1]);
          a3[1] = *a2;
          a3[2] = a2[3];
          result = (unsigned int)a2[2];
          a3[3] = result;
          if ( v35 )
          {
            v14 = 0LL;
            do
            {
              result = ((v13 + 7) >> 3) * v12;
              v15 = 0;
              v16 = (char *)a3 + result + 16;
              if ( v13 )
              {
                v17 = *((_BYTE *)&glyphBits + (v12 & 7));
                do
                {
                  v18 = v15 & 7;
                  if ( (*((_BYTE *)a2 + (v14 >> 3) + ((v35 + 7) >> 3) * (v13 - v15 - 1) + 16) & v17) != 0 )
                    *v16 |= *((_BYTE *)&glyphBits + v18);
                  else
                    *v16 &= BitOFF[v18];
                  ++v15;
                  result = (unsigned __int64)(v16 + 1);
                  if ( (_DWORD)v18 != 7 )
                    result = (unsigned __int64)v16;
                  v16 = (_BYTE *)result;
                }
                while ( v15 < v13 );
                v11 = v35;
              }
              ++v12;
              ++v14;
            }
            while ( v12 < v11 );
          }
        }
      }
      break;
  }
  return result;
}
