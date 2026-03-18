/*
 * XREFs of EtwpLogFileNameRundown @ 0x1407AEBBC
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x14058D1F4 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1406463C0 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpLogFileNameRundown(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = EtwpCheckGuidAccess((__int64)&FileProvGuid, 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
    result = WmiTraceRundownNotify(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
