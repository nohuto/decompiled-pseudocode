/*
 * XREFs of wcstoxq @ 0x14018B02C
 * Callers:
 *     _wcstoi64 @ 0x14018AFFC (_wcstoi64.c)
 *     LocalpConvertStringSidToSid @ 0x14064184C (LocalpConvertStringSidToSid.c)
 *     RtlUnicodeStringToInt64 @ 0x1407865D0 (RtlUnicodeStringToInt64.c)
 *     GetOperandValue @ 0x140798348 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x140799EA8 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     _iswctype_l @ 0x14018B290 (_iswctype_l.c)
 *     _wchartodigit @ 0x14018CB48 (_wchartodigit.c)
 */

unsigned __int64 __fastcall wcstoxq(__int64 a1, wint_t *a2, wint_t **a3, int a4, int a5, _DWORD *a6)
{
  int v6; // r14d
  unsigned __int64 result; // rax
  wint_t v10; // bp
  wint_t *v11; // rbx
  unsigned __int64 v12; // rsi
  wint_t i; // cx
  int v14; // edi
  unsigned __int64 v15; // r13
  unsigned int v16; // ecx
  int v17; // ecx
  __int64 v18; // rdx
  wint_t *v19; // rbx

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 1;
  v12 = 0LL;
  for ( i = *a2; iswctype_l(i, 8u, 0LL); v10 = i )
  {
    do
      i = *v11++;
    while ( i == v10 );
  }
  v14 = a5;
  if ( v10 == 45 )
  {
    v14 = a5 | 2;
LABEL_15:
    v10 = *v11++;
    goto LABEL_16;
  }
  if ( v10 == 43 )
    goto LABEL_15;
LABEL_16:
  if ( v6 && (unsigned int)(v6 - 2) > 0x22 )
  {
    if ( a3 )
      *a3 = a2;
    return 0LL;
  }
  if ( v6 )
    goto LABEL_26;
  if ( !(unsigned int)wchartodigit(v10) )
  {
    if ( ((*v11 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_30;
    }
    v6 = 16;
LABEL_26:
    if ( v6 == 16 && !(unsigned int)wchartodigit(v10) && ((*v11 - 88) & 0xFFDF) == 0 )
    {
      v10 = v11[1];
      v11 += 2;
    }
    goto LABEL_30;
  }
  v6 = 10;
LABEL_30:
  v15 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  while ( 1 )
  {
    v16 = wchartodigit(v10);
    if ( v16 != -1 )
      goto LABEL_37;
    if ( (unsigned __int16)(v10 - 65) > 0x19u && (unsigned __int16)(v10 - 97) > 0x19u )
      break;
    v17 = v10 - 32;
    if ( (unsigned __int16)(v10 - 97) > 0x19u )
      v17 = v10;
    v16 = v17 - 55;
LABEL_37:
    if ( v16 >= v6 )
      break;
    v14 |= 8u;
    if ( v12 < v15 )
    {
      v18 = v16;
LABEL_47:
      v12 = v18 + v6 * v12;
      goto LABEL_48;
    }
    if ( v12 == v15 )
    {
      v18 = v16;
      if ( v16 <= 0xFFFFFFFFFFFFFFFFuLL % v6 )
        goto LABEL_47;
    }
    v14 |= 4u;
    if ( !a3 )
      break;
LABEL_48:
    v10 = *v11++;
  }
  v19 = v11 - 1;
  if ( (v14 & 8) != 0 )
  {
    if ( (v14 & 4) == 0 )
    {
      if ( (v14 & 1) != 0 )
        goto LABEL_61;
      if ( (v14 & 2) != 0 )
      {
        if ( v12 <= 0x8000000000000000uLL )
          goto LABEL_61;
      }
      else if ( v12 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_61;
      }
    }
    if ( a6 )
      *a6 = 34;
    else
      gbl_errno = 34;
    if ( (v14 & 1) != 0 )
      v12 = -1LL;
    else
      v12 = ((v14 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v19 = a2;
    v12 = 0LL;
  }
LABEL_61:
  if ( a3 )
    *a3 = v19;
  result = -(__int64)v12;
  if ( (v14 & 2) == 0 )
    return v12;
  return result;
}
