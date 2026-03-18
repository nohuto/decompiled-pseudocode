/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x1401E5D38
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140155358 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x1401E5E1C (HvlpSelectLpSet.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpQueryApicIdAndNumaNode(__int64 a1, _DWORD *a2, _WORD *a3)
{
  __int64 (*v3)(void); // rax
  __int64 result; // rax

  *a2 = -1;
  v3 = (__int64 (*)(void))HvlpQueryProcessorNode;
  *a3 = -1;
  if ( v3 )
    result = v3();
  else
    result = off_14033B4D8[0]();
  if ( *a3 == 0xFFFF )
    *a3 = 0;
  return result;
}
