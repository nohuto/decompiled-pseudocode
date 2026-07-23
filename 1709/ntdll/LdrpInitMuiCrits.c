/*
 * XREFs of LdrpInitMuiCrits @ 0x180049210
 * Callers:
 *     LdrpGetLoadAsEntry @ 0x180019068 (LdrpGetLoadAsEntry.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180049188 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180079E20 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x1800A0740 (ZwDelayExecution.c)
 */

NTSTATUS __fastcall LdrpInitMuiCrits(volatile signed __int32 *a1, _RTL_CRITICAL_SECTION *a2)
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
