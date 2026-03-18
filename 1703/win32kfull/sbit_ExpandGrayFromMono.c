/*
 * XREFs of sbit_ExpandGrayFromMono @ 0x1C02C3F2C
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sbit_ExpandGrayFromMono(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5)
{
  char v6; // bp
  int v9; // ebx
  char v10; // r11
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // r10
  int v17; // ebx
  __int16 v18; // bp
  int v19; // r9d
  __int16 v20; // si
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // r13
  _BYTE *i; // r8
  _BYTE *v27; // r10
  __int16 v28; // r9

  if ( a3 )
  {
    v6 = a3;
    if ( a4 )
    {
      if ( a1 && a2 )
      {
        v9 = a3;
        v10 = 0;
        v11 = (((unsigned int)a3 + 31) >> 3) & 0xFFFC;
        v12 = ((8 * (unsigned int)a3 + 24) >> 3) & 0xFFFC;
        if ( a5 != 1 )
        {
          switch ( a5 )
          {
            case 2:
              v10 = 2;
              break;
            case 4:
              v10 = 4;
              break;
            case 8:
              v10 = 6;
              break;
          }
        }
        v13 = a4 - 1;
        v14 = a1 + v13 * v11;
        result = 1LL;
        v16 = a2 + v13 * v12;
        v17 = v9 - 1;
        v18 = (v6 - 1) & 7;
        v19 = v17 >> 3;
        v20 = a4 - 1;
        if ( v20 >= 0 )
        {
          v21 = v12 - 1 - (__int64)v17;
          v22 = v11;
          result = 0LL;
          v23 = v12;
          v24 = v17 + v16;
          v25 = (unsigned __int16)v19;
          do
          {
            for ( i = (_BYTE *)(v21 + v24); (unsigned __int64)i > v24; --i )
              *i = 0;
            v27 = (_BYTE *)(v14 + v25);
            v28 = v18;
            if ( v14 + v25 >= v14 )
            {
              do
              {
                do
                  *i-- = ((*v27 >> (7 - v28--)) & 1) << v10;
                while ( v28 >= 0 );
                --v27;
                v28 = 7;
              }
              while ( (unsigned __int64)v27 >= v14 );
              v22 = v11;
              result = 0LL;
            }
            v14 -= v22;
            v24 -= v23;
            --v20;
          }
          while ( v20 >= 0 );
        }
      }
    }
  }
  return result;
}
