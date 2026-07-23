/*
 * XREFs of sub_180022300 @ 0x180022300
 * Callers:
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 */

__int64 __fastcall sub_180022300(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  __int64 result; // rax

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)a2);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)(*(_DWORD *)(a2 + 28) >> 8);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(_QWORD *)(a1 + 72);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 16), -v5);
  if ( (byte_18015D028 & 8) != 0 )
    return sub_180102360(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 72));
  return result;
}
