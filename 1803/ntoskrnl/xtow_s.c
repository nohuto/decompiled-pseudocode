/*
 * XREFs of xtow_s @ 0x14018D798
 * Callers:
 *     _itow_s @ 0x14018D5F0 (_itow_s.c)
 *     _ultow_s @ 0x14018D640 (_ultow_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

__int64 __fastcall xtow_s(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  __int16 *v11; // rdi
  __int16 *v12; // r8
  unsigned int v13; // edx
  __int16 *v14; // r9
  _WORD *v15; // rax
  __int16 v16; // dx
  __int16 v18; // cx

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
      a1 = -a1;
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
    }
    v12 = v11;
    do
    {
      v13 = a1 % a4;
      v14 = v11;
      a1 /= a4;
      v15 = v11 + 1;
      if ( v13 <= 9 )
        v16 = v13 + 48;
      else
        v16 = v13 + 87;
      ++v10;
      *v11 = v16;
      if ( !a1 )
        break;
      ++v11;
    }
    while ( v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v15 = 0;
    do
    {
      v18 = *v14;
      *v14-- = *v12;
      *v12++ = v18;
    }
    while ( v12 < v14 );
    return 0LL;
  }
  else
  {
LABEL_20:
    xHalTimerWatchdogStop();
    return 22LL;
  }
}
