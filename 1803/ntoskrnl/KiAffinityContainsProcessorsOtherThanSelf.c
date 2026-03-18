/*
 * XREFs of KiAffinityContainsProcessorsOtherThanSelf @ 0x140037D50
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     KiPreprocessFlushTb @ 0x140034B20 (KiPreprocessFlushTb.c)
 *     KxFlushMultipleTb @ 0x140037C30 (KxFlushMultipleTb.c)
 *     KiIpiSendRequestEx @ 0x140038D54 (KiIpiSendRequestEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAffinityContainsProcessorsOtherThanSelf(__int64 a1, _WORD *a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // r9

  v2 = 0;
  if ( !*a2 )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)&a2[4 * v2 + 4];
    if ( v3 )
    {
      if ( v2 != *(unsigned __int8 *)(a1 + 208) || v3 != *(_QWORD *)(a1 + 200) )
        break;
    }
    if ( ++v2 >= *a2 )
      return 0LL;
  }
  return 1LL;
}
