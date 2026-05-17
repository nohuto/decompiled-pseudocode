/*
 * XREFs of WerReportSQMEvent @ 0x18008F630
 * Callers:
 *     ShipAssert @ 0x18008F530 (ShipAssert.c)
 * Callees:
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall WerReportSQMEvent(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  char v9; // [rsp+64h] [rbp-84h] BYREF

  v3 = a3;
  result = WerEscalationLazyInit();
  if ( (int)result >= 0 )
  {
    if ( g_disableEscalation )
      return 0LL;
    if ( a1 )
    {
      if ( a1 == 1 && (_DWORD)v3 == 3 )
        goto LABEL_6;
    }
    else if ( (_DWORD)v3 == 6 )
    {
LABEL_6:
      v7 = &v9;
      v8 = v3;
      do
      {
        *((_DWORD *)v7 - 1) = 16;
        a2 += 4LL;
        *(_DWORD *)v7 = 1;
        v7 += 16;
        --v8;
      }
      while ( v8 );
      return 0LL;
    }
    return 3221225485LL;
  }
  return result;
}
