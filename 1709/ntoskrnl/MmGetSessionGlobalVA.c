/*
 * XREFs of MmGetSessionGlobalVA @ 0x140593944
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400B9690 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionGlobalVA(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 1024);
}
