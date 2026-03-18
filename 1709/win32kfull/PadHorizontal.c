/*
 * XREFs of PadHorizontal @ 0x1C02BC25C
 * Callers:
 *     sbit_GetBitmap @ 0x1C02BDF14 (sbit_GetBitmap.c)
 * Callees:
 *     <none>
 */

void __fastcall PadHorizontal(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int16 a4)
{
  __int16 v4; // r11
  unsigned __int16 v5; // di
  int v6; // r10d
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( a3 > a2 )
  {
    v4 = a4;
    v5 = a3 - a2;
    v6 = (unsigned __int16)(a4 - 1);
    v7 = a1 + v6 * a2;
    v8 = a1 + v6 * a3;
    if ( v4 )
    {
      v9 = a2;
      do
      {
        v10 = (_BYTE *)(v8 + a3 - 1LL);
        if ( v5 )
        {
          v11 = v5;
          do
          {
            *v10-- = 0;
            --v11;
          }
          while ( v11 );
        }
        if ( (unsigned __int64)v10 >= v8 )
        {
          v12 = v7 + v9 - (_QWORD)v10;
          do
          {
            *v10 = v10[v12 - 1];
            --v10;
          }
          while ( (unsigned __int64)v10 >= v8 );
        }
        v7 -= v9;
        v8 -= a3;
        --v4;
      }
      while ( v4 );
    }
  }
}
