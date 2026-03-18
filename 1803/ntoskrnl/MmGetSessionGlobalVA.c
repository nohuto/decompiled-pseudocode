/*
 * XREFs of MmGetSessionGlobalVA @ 0x14057AAE0
 * Callers:
 *     PfpLogApplicationEvent @ 0x14006EDFC (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
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
