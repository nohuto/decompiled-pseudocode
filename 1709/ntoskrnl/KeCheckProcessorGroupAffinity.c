/*
 * XREFs of KeCheckProcessorGroupAffinity @ 0x1400A94D0
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCheckProcessorGroupAffinity(__int64 a1, int a2)
{
  return (unsigned int)(*(_QWORD *)a1 >> (KiProcessorIndexToNumberMappingTable[a2] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6 == *(unsigned __int16 *)(a1 + 8));
}
