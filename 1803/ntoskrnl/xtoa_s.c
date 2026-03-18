/*
 * XREFs of xtoa_s @ 0x14018D480
 * Callers:
 *     _itoa_s @ 0x14018D2F0 (_itoa_s.c)
 *     _ultoa_s @ 0x14018D340 (_ultoa_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

__int64 __fastcall xtoa_s(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v7; // r11d
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  char *v11; // r8
  char *v12; // r9
  unsigned int v13; // ecx
  _BYTE *v14; // rax
  char v15; // cl
  char v17; // cl

  v7 = a1;
  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v8 = 22;
LABEL_16:
    xHalTimerWatchdogStop();
    return v8;
  }
  *a2 = 0;
  v8 = 34;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
    goto LABEL_16;
  if ( a4 - 2 <= 0x22 )
  {
    v9 = 0LL;
    v10 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v10 = a2 + 1;
      v9 = 1LL;
      v7 = -a1;
    }
    v11 = v10;
    do
    {
      v12 = v10;
      v13 = v7 % a4;
      v7 /= a4;
      v14 = v10 + 1;
      if ( v13 <= 9 )
        v15 = v13 + 48;
      else
        v15 = v13 + 87;
      ++v9;
      *v10 = v15;
      if ( !v7 )
        break;
      ++v10;
    }
    while ( v9 < a3 );
    if ( v9 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v14 = 0;
    do
    {
      v17 = *v12;
      *v12-- = *v11;
      *v11++ = v17;
    }
    while ( v11 < v12 );
    return 0LL;
  }
  else
  {
LABEL_20:
    xHalTimerWatchdogStop();
    return 22LL;
  }
}
