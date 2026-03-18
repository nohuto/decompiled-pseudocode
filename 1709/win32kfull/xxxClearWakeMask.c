/*
 * XREFs of xxxClearWakeMask @ 0x1C01B5790
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateInputHangInfo @ 0x1C00A8200 (xxxUpdateInputHangInfo.c)
 */

__int64 xxxClearWakeMask()
{
  __int64 result; // rax

  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(gptiCurrent + 1128LL) )
    xxxUpdateInputHangInfo(0LL, 1);
  result = 1LL;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = 0;
  *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x400u;
  return result;
}
