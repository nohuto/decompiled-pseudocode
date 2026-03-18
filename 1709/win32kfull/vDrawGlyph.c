/*
 * XREFs of vDrawGlyph @ 0x1C0144B48
 * Callers:
 *     vStringBitmapTextOut @ 0x1C0144D08 (vStringBitmapTextOut.c)
 * Callees:
 *     <none>
 */

char __fastcall vDrawGlyph(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r14
  int v6; // r9d
  int v7; // r10d
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  __int64 v15; // r10
  char v16; // r15
  __int64 v17; // r15
  unsigned int v18; // r8d
  _BYTE *v19; // r9
  _BYTE *v20; // rcx
  unsigned int i; // edx
  unsigned int v22; // ebp
  __int64 v23; // r13
  unsigned __int8 *v24; // r8
  _BYTE *v25; // r9
  unsigned int v26; // edi
  unsigned __int16 v27; // dx
  unsigned __int8 *v28; // r8
  __int64 v30; // [rsp+40h] [rbp+18h]

  v3 = *(_QWORD *)(a3 + 8);
  v5 = a2;
  v6 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 12LL);
  if ( v6 && v7 )
  {
    v8 = *(_DWORD *)(a3 + 16);
    v9 = *(_DWORD *)(a3 + 20);
    v10 = *(_QWORD *)v3 + 16LL;
    v11 = (unsigned int)(v6 + 7) >> 3;
    if ( v8 < 0 )
    {
      LODWORD(v3) = -v8;
      if ( v6 <= -v8 )
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
    if ( (unsigned int)v8 < *a1 )
    {
      v12 = a1[1];
      if ( v9 < v12 )
      {
        v13 = *a1 - v8;
        if ( v13 >= v6 )
          v13 = v6;
        v14 = v12 - v9;
        if ( v14 >= v7 )
          v14 = v7;
        v15 = (__int64)a1 + (unsigned int)(v5 * v9) + ((__int64)v8 >> 3) + 8;
        v16 = v8 & 7;
        if ( (v8 & 7) != 0 )
        {
          v3 = (unsigned int)v11;
          v22 = ((v13 + v8) >> 3) - (v8 >> 3);
          v30 = (unsigned int)v11;
          v23 = ((_BYTE)v13 + (_BYTE)v8) & 7;
          do
          {
            v24 = (unsigned __int8 *)v10;
            v25 = (_BYTE *)v15;
            v10 += v3;
            v15 += v5;
            v26 = v22;
            v27 = *v24;
            v28 = v24 + 1;
            if ( v22 )
            {
              do
              {
                --v26;
                *v25++ |= v27 >> v16;
                v27 <<= 8;
                if ( v28 != (unsigned __int8 *)v10 )
                  v27 |= *v28++;
              }
              while ( v26 );
              v3 = v30;
            }
            if ( (_DWORD)v23 )
              *v25 |= byte_1C02E6B70[v23] & (unsigned __int8)(v27 >> v16);
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v17 = v13 & 7;
          v18 = v13 >> 3;
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
              LOBYTE(v3) = byte_1C02E6B70[v17] & *v19;
              *v20 |= v3;
            }
            --v14;
          }
          while ( v14 );
        }
      }
    }
  }
  return v3;
}
