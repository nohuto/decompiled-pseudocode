/*
 * XREFs of strtoxq @ 0x140169DB8
 * Callers:
 *     _strtoi64 @ 0x140169FD4 (_strtoi64.c)
 *     _strtoui64 @ 0x14016A000 (_strtoui64.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     __pctype_func @ 0x14016E018 (__pctype_func.c)
 */

unsigned __int64 __fastcall strtoxq(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5)
{
  int v5; // r14d
  unsigned __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // di
  int v12; // edi
  unsigned __int64 v13; // r12
  unsigned int v14; // edx
  int v15; // edx
  unsigned __int8 *v16; // rbx

  v5 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v8 = *a2;
  v9 = a2 + 1;
  v10 = 0LL;
  if ( (_pctype_func()[v8] & 8) != 0 )
  {
    do
    {
      do
        v11 = *v9++;
      while ( v11 == (_BYTE)v8 );
      LOBYTE(v8) = v11;
    }
    while ( (_pctype_func()[v11] & 8) != 0 );
  }
  v12 = a5;
  if ( (_BYTE)v8 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( (_BYTE)v8 != 43 )
  {
    goto LABEL_14;
  }
  LOBYTE(v8) = *v9++;
LABEL_14:
  if ( v5 )
    goto LABEL_20;
  if ( (_BYTE)v8 == 48 )
  {
    if ( ((*v9 - 88) & 0xDF) != 0 )
    {
      v5 = 8;
      goto LABEL_24;
    }
    v5 = 16;
LABEL_20:
    if ( v5 == 16 && (_BYTE)v8 == 48 && ((*v9 - 88) & 0xDF) == 0 )
    {
      LOBYTE(v8) = v9[1];
      v9 += 2;
    }
    goto LABEL_24;
  }
  v5 = 10;
LABEL_24:
  v13 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( (_pctype_func()[(unsigned __int8)v8] & 4) != 0 )
    {
      v14 = (char)v8 - 48;
    }
    else
    {
      if ( (_pctype_func()[(unsigned __int8)v8] & 0x103) == 0 )
        break;
      v15 = (char)v8;
      if ( (unsigned __int8)(v8 - 97) <= 0x19u )
        v15 = (char)v8 - 32;
      v14 = v15 - 55;
    }
    if ( v14 >= v5 )
      break;
    v12 |= 8u;
    if ( v10 < v13 || v10 == v13 && v14 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
    {
      v10 = v10 * v5 + v14;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v8) = *v9++;
  }
  v16 = v9 - 1;
  if ( (v12 & 8) == 0 )
  {
    if ( a3 )
      v16 = a2;
    v10 = 0LL;
    goto LABEL_51;
  }
  if ( (v12 & 4) != 0 )
    goto LABEL_48;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      if ( v10 <= 0x8000000000000000uLL )
        goto LABEL_51;
LABEL_48:
      gbl_errno = 34;
      if ( (v12 & 1) != 0 )
        v10 = -1LL;
      else
        v10 = ((v12 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_51;
    }
    if ( v10 > 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_48;
  }
LABEL_51:
  if ( a3 )
    *a3 = v16;
  result = -(__int64)v10;
  if ( (v12 & 2) == 0 )
    return v10;
  return result;
}
