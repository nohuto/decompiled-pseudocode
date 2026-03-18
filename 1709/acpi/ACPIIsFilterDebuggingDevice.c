/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1C00923EC
 * Callers:
 *     ACPIBuildFilter @ 0x1C0022B0C (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 736) + 48LL) & 0x2000000) != 0;
}
