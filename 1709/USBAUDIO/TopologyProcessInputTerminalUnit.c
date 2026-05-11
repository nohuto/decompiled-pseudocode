/*
 * XREFs of TopologyProcessInputTerminalUnit @ 0x1C0015E50
 * Callers:
 *     <none>
 * Callees:
 *     TopologyConvertTermTypeToNodeType @ 0x1C0015D40 (TopologyConvertTermTypeToNodeType.c)
 */

__int64 __fastcall TopologyProcessInputTerminalUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // rbp
  _DWORD *v9; // rbx
  GUID *v10; // r8
  int v11; // eax
  GUID *v12; // rdx
  int v13; // eax
  __int16 v14; // ax

  v8 = a3 + 152LL * (unsigned int)*a5;
  v9 = (_DWORD *)(a4 + 16LL * (unsigned int)*a6);
  v10 = *(GUID **)(v8 + 16);
  *(_DWORD *)(v8 + 80) = *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 64);
  v12 = *(GUID **)(v8 + 8);
  *(_DWORD *)(v8 + 84) = v11;
  *(_DWORD *)(v8 + 76) = TopologyConvertTermTypeToNodeType((_DWORD *)a2, v12, v10);
  v13 = *(_DWORD *)(a2 + 64);
  *v9 = -1;
  v9[1] = v13;
  v9[2] = (*a5)++;
  v9[3] = 1;
  ++*a6;
  v14 = *(_WORD *)(a2 + 40);
  if ( v14 )
  {
    *(_WORD *)(v8 + 112) = v14;
    *(_WORD *)(v8 + 114) = *(_WORD *)(a2 + 40);
    *(_QWORD *)(v8 + 120) = *(_QWORD *)(a2 + 48);
  }
  *(_QWORD *)(v8 + 128) = *(_QWORD *)(a2 + 80);
  return 0LL;
}
