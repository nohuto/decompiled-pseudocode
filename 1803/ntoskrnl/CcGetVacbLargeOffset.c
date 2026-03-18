/*
 * XREFs of CcGetVacbLargeOffset @ 0x1400DD0C0
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x1400DB2F8 (CcGetVirtualAddressIfMapped.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcGetNumberOfMappedPages @ 0x14015BED0 (CcGetNumberOfMappedPages.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetVacbLargeOffset(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  int v4; // r8d
  int v5; // ecx
  int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rdx

  v3 = a2;
  v4 = 0;
  v5 = 25;
  do
  {
    v6 = v5;
    v5 += 7;
    ++v4;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v5 );
  for ( result = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v6)); result; result = *(_QWORD *)(result + 8 * (v3 >> v6)) )
  {
    if ( !v4 )
      break;
    v8 = 1LL << v6;
    v6 -= 7;
    v3 &= v8 - 1;
    --v4;
  }
  return result;
}
