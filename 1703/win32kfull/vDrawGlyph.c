/*
 * XREFs of vDrawGlyph @ 0x1C013EB68
 * Callers:
 *     vStringBitmapTextOut @ 0x1C013ED24 (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  unsigned int v6; // r9d
  int v7; // r10d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r11
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rdi
  char v16; // r12
  __int64 v17; // rbp
  unsigned int v18; // r9d
  _BYTE *v19; // r8
  _BYTE *v20; // rcx
  unsigned int i; // edx
  char v22; // r15
  __int64 v23; // rcx
  unsigned int v24; // ebp
  unsigned __int8 *v25; // r8
  _BYTE *v26; // r9
  unsigned int v27; // ebx
  unsigned __int16 v28; // dx
  unsigned __int8 *v29; // r8
  __int64 v31; // [rsp+48h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 8);
  v5 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 12LL);
  if ( v6 && v7 )
  {
    v8 = *(_DWORD *)(a3 + 16);
    v9 = *(_DWORD *)(a3 + 20);
    v10 = *(_QWORD *)v3 + 16LL;
    v11 = (v6 + 7) >> 3;
    if ( v8 < 0 )
    {
      LODWORD(v3) = -v8;
      if ( (int)v6 <= -v8 )
        return v3;
      v6 -= v8;
      v8 = 0;
    }
    if ( v9 < 0 )
    {
      LODWORD(v3) = -v9;
      if ( v7 <= -v9 )
        return v3;
      v7 -= v9;
      v9 = 0;
    }
    LODWORD(v3) = *a1;
    if ( (unsigned int)v8 < *a1 )
    {
      v12 = a1[1];
      if ( v9 < v12 )
      {
        v13 = v3 - v8;
        if ( v13 < v6 )
          v6 = v13;
        v14 = v12 - v9;
        if ( v14 < v7 )
          v7 = v14;
        v3 = (unsigned int)(v5 * v9);
        v15 = (__int64)a1 + v3 + ((__int64)v8 >> 3) + 8;
        v16 = v8 & 7;
        if ( (v8 & 7) != 0 )
        {
          v22 = v8 + v6;
          v3 = (unsigned int)v11;
          v23 = v5;
          v31 = (unsigned int)v11;
          v24 = ((v8 + v6) >> 3) - (v8 >> 3);
          do
          {
            v25 = (unsigned __int8 *)v10;
            v26 = (_BYTE *)v15;
            v10 += v3;
            v15 += v23;
            v27 = v24;
            v28 = *v25;
            v29 = v25 + 1;
            if ( v24 )
            {
              do
              {
                --v27;
                *v26++ |= v28 >> v16;
                v28 <<= 8;
                if ( v29 != (unsigned __int8 *)v10 )
                  v28 |= *v29++;
              }
              while ( v27 );
              v3 = v31;
            }
            if ( (v22 & 7) != 0 )
              *v26 |= byte_1C02EA070[v22 & 7] & (unsigned __int8)(v28 >> v16);
            v23 = v5;
            --v7;
          }
          while ( v7 );
        }
        else
        {
          v17 = v6 & 7;
          v18 = v6 >> 3;
          do
          {
            v19 = (_BYTE *)v10;
            v20 = (_BYTE *)v15;
            v10 += v11;
            v15 += v5;
            for ( i = v18; i; --i )
            {
              LOBYTE(v3) = *v19++;
              *v20++ |= v3;
            }
            if ( (_DWORD)v17 )
            {
              LOBYTE(v3) = byte_1C02EA070[v17] & *v19;
              *v20 |= v3;
            }
            --v7;
          }
          while ( v7 );
        }
      }
    }
  }
  return v3;
}
