/*
 * XREFs of KeCheckStackAndTargetAddress @ 0x140024760
 * Callers:
 *     __C_specific_handler @ 0x1401692D0 (__C_specific_handler.c)
 *     longjmp @ 0x1401694A0 (longjmp.c)
 *     RtlRestoreContext @ 0x1401896D0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140189990 (RcFrameConsolidation.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     _guard_icall_bugcheck @ 0x140189D10 (_guard_icall_bugcheck.c)
 */

__int64 __fastcall KeCheckStackAndTargetAddress(signed __int64 BugCheckParameter4, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  if ( BugCheckParameter4 >= 0
    || (result = KeQueryCurrentStackInformation(&v5, &v6, &v7), !(_BYTE)result)
    || a2 < v6
    || a2 >= v7 )
  {
    __debugbreak();
    guard_icall_bugcheck(BugCheckParameter4);
  }
  return result;
}
