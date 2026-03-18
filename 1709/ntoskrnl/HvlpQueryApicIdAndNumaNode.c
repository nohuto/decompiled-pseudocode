/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x1401EABE0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x1401EAC40 (HvlpSelectLpSet.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
    result = off_140353508[0]();
  if ( *a3 == 0xFFFF )
    *a3 = 0;
  return result;
}
