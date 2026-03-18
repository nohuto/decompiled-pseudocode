/*
 * XREFs of KdpReportExceptionStateChange @ 0x1408047DC
 * Callers:
 *     KdpReport @ 0x14023EFEC (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x1402475A0 (KiFreezeTargetExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KdpSetCommonState @ 0x14023EB1C (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x14080645C (KdpSetContextState.c)
 *     KdpQuickMoveMemory @ 0x1408068D4 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // [rsp+20h] [rbp-138h] BYREF
  _BYTE *v8; // [rsp+28h] [rbp-130h]
  _WORD v9[8]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v11[152]; // [rsp+60h] [rbp-F8h] BYREF
  BOOL v12; // [rsp+F8h] [rbp-60h]

  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(v11, a1, 152LL);
    v12 = a3 == 0;
    KdpSetContextState(v10, a2);
    v9[0] = 0;
    v8 = v10;
    v7 = 240;
    result = KdpSendWaitContinue(240LL, &v7, v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
