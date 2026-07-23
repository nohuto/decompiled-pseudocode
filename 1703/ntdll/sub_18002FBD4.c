/*
 * XREFs of sub_18002FBD4 @ 0x18002FBD4
 * Callers:
 *     sub_18002F924 @ 0x18002F924 (sub_18002F924.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     sub_180076144 @ 0x180076144 (sub_180076144.c)
 *     LdrAddLoadAsDataTable @ 0x180078680 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 */

NTSTATUS __fastcall sub_18002FBD4(volatile signed __int32 *a1, _RTL_CRITICAL_SECTION *a2)
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(a1, 1, 0);
    if ( !result )
      break;
    if ( *a1 == 1 )
      result = ZwDelayExecution(0, &DelayInterval);
    if ( *a1 == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(a2, 0, 0);
  *a1 = 2;
  return result;
}
