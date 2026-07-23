/*
 * XREFs of sub_18001F8B0 @ 0x18001F8B0
 * Callers:
 *     sub_18001F834 @ 0x18001F834 (sub_18001F834.c)
 *     sub_180054338 @ 0x180054338 (sub_180054338.c)
 *     LdrAddLoadAsDataTable @ 0x180072E40 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 */

NTSTATUS sub_18001F8B0()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_18015B2A8, 1, 0) )
  {
    result = dword_18015B2A8;
    if ( dword_18015B2A8 == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = dword_18015B2A8;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&stru_18015B260, 0, 0);
  dword_18015B2A8 = 2;
  return result;
}
