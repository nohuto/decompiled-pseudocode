/*
 * XREFs of strtoxlX @ 0x14016C27C
 * Callers:
 *     strtol @ 0x14016C49C (strtol.c)
 *     strtolX @ 0x14016C4CC (strtolX.c)
 *     strtoul @ 0x14016C4FC (strtoul.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 *     __pctype_func @ 0x14016E018 (__pctype_func.c)
 */

__int64 __fastcall strtoxlX(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned __int8 *v11; // rbx
  unsigned int i; // edi
  int v13; // esi
  unsigned int v14; // r12d
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int8 *v17; // rbx

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 1;
  for ( i = 0; (_pctype_func()[v10] & 8) != 0; ++v11 )
    v10 = *v11;
  v13 = a5;
  if ( (_BYTE)v10 == 45 )
  {
    v13 = a5 | 2;
  }
  else if ( (_BYTE)v10 != 43 )
  {
    goto LABEL_14;
  }
  LOBYTE(v10) = *v11++;
LABEL_14:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 == 16 && (_BYTE)v10 == 48 )
      goto LABEL_26;
  }
  else if ( (_BYTE)v10 == 48 )
  {
    if ( ((*v11 - 88) & 0xDF) == 0 )
    {
      v6 = 16;
LABEL_26:
      if ( ((*v11 - 88) & 0xDF) == 0 )
      {
        LOBYTE(v10) = v11[1];
        v11 += 2;
      }
      goto LABEL_28;
    }
    v6 = 8;
  }
  else
  {
    v6 = 10;
  }
LABEL_28:
  v14 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    if ( (_pctype_func()[(unsigned __int8)v10] & 4) != 0 )
    {
      v15 = (char)v10 - 48;
    }
    else
    {
      if ( (_pctype_func()[(unsigned __int8)v10] & 0x103) == 0 )
        break;
      v16 = (char)v10;
      if ( (unsigned __int8)(v10 - 97) <= 0x19u )
        v16 = (char)v10 - 32;
      v15 = v16 - 55;
    }
    if ( v15 >= v6 )
      break;
    v13 |= 8u;
    if ( a6 || i < v14 || i == v14 && v15 <= 0xFFFFFFFF % v6 )
    {
      i = v15 + v6 * i;
    }
    else
    {
      v13 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v10) = *v11++;
  }
  v17 = v11 - 1;
  if ( (v13 & 8) == 0 )
  {
    if ( a3 )
      v17 = a2;
    i = 0;
    goto LABEL_57;
  }
  if ( (v13 & 4) != 0 )
    goto LABEL_53;
  if ( (v13 & 1) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      if ( i <= 0x80000000 )
        goto LABEL_57;
LABEL_53:
      if ( !a6 )
      {
        gbl_errno = 34;
        if ( (v13 & 1) != 0 )
          i = -1;
        else
          i = ((v13 & 2) != 0) + 0x7FFFFFFF;
      }
      goto LABEL_57;
    }
    if ( i > 0x7FFFFFFF )
      goto LABEL_53;
  }
LABEL_57:
  if ( a3 )
    *a3 = v17;
  result = -i;
  if ( (v13 & 2) == 0 )
    return i;
  return result;
}
