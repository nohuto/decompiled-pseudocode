/*
 * XREFs of x64toa_s @ 0x14016ECCC
 * Callers:
 *     _i64toa_s @ 0x14016EC00 (_i64toa_s.c)
 *     _ui64toa_s @ 0x14016EC90 (_ui64toa_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 */

__int64 __fastcall x64toa_s(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rsi
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  char *v11; // rcx
  char *v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // dl
  char *v17; // rdx
  char v18; // cl

  v5 = a4;
  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v9 = 22;
LABEL_16:
    xHalTimerWatchdogStop();
    return v9;
  }
  *a2 = 0;
  v9 = 34;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
    goto LABEL_16;
  if ( a4 - 2 <= 0x22 )
  {
    v10 = 0LL;
    v11 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
      a1 = -(__int64)a1;
    }
    v12 = v11;
    do
    {
      v13 = a1 / v5;
      v14 = a1 % v5;
      a1 /= v5;
      if ( (unsigned int)v14 <= 9 )
        v15 = v14 + 48;
      else
        v15 = v14 + 87;
      *v11 = v15;
      ++v10;
      ++v11;
    }
    while ( v13 && v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v11 = 0;
    v17 = v11 - 1;
    do
    {
      v18 = *v17;
      *v17-- = *v12;
      *v12++ = v18;
    }
    while ( v12 < v17 );
    return 0LL;
  }
  else
  {
LABEL_20:
    xHalTimerWatchdogStop();
    return 22LL;
  }
}
