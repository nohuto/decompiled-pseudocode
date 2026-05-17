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

__int64 sub_18001F8B0()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&dword_18015B2A8, 1, 0) )
  {
    result = (unsigned int)dword_18015B2A8;
    if ( dword_18015B2A8 == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)dword_18015B2A8;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&unk_18015B260, 0LL, 0LL);
  dword_18015B2A8 = 2;
  return result;
}
