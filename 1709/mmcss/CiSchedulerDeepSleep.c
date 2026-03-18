/*
 * XREFs of CiSchedulerDeepSleep @ 0x1C0002AF8
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C00035A0 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiLogSchedulerSleep @ 0x1C00018A8 (CiLogSchedulerSleep.c)
 *     WPP_SF_ @ 0x1C0001EF4 (WPP_SF_.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C70 (CiSchedulerProcessDeadlines.c)
 */

__int64 __fastcall CiSchedulerDeepSleep(__int32 *a1)
{
  __int32 v2; // eax
  __int64 result; // rax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xEu,
      (__int64)&WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
  if ( byte_1C00062A8 )
    CiLogSchedulerSleep(5, -1);
  v2 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
  *a1 = v2;
  if ( !v2 )
    KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  result = CiSchedulerProcessDeadlines(&v4);
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return result;
}
