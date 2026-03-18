/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x140012E20
 * Callers:
 *     RtlAddressInSectionTable @ 0x140012DC0 (RtlAddressInSectionTable.c)
 *     KiShadowProcessorAllocation @ 0x140403934 (KiShadowProcessorAllocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14042A100 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSectionTableFromVirtualAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  int v4; // r10d
  unsigned int v5; // eax
  unsigned __int64 v7; // rax

  v3 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( v3 > 0x7FFFFFFEFFFFLL )
      return 0LL;
    v7 = v3 + 40LL * *(unsigned __int16 *)(a1 + 6);
    if ( v7 < v3 || v7 >= 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  v4 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v3 + 12);
    if ( a3 >= v5 && a3 < v5 + *(_DWORD *)(v3 + 16) )
      break;
    v3 += 40LL;
    if ( ++v4 >= (unsigned int)*(unsigned __int16 *)(a1 + 6) )
      return 0LL;
  }
  return v3;
}
