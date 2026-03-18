/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x140114C6C
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiGroupSchedulingMoveThread @ 0x140114B7C (KiGroupSchedulingMoveThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140114C1C (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140120D30 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140114D8C (KiResortScbQueue.c)
 */

int __fastcall KiRemoveThreadFromScbQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  _QWORD *v6; // r8
  _QWORD *v8; // rax
  char v9; // cl

  v4 = a3 + 216;
  v6 = *(_QWORD **)(a3 + 216);
  v8 = *(_QWORD **)(v4 + 8);
  if ( v6[1] != v4 || *v8 != v4 )
    __fastfail(3u);
  *v8 = v6;
  v6[1] = v8;
  if ( v8 == v6 )
  {
    v9 = *(_BYTE *)(a2 + 112);
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 114) ^ (1 << a4);
    *(_WORD *)(a2 + 114) = (_WORD)v8;
    if ( (v9 & 2) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (v9 & 1) != 0 )
      {
        if ( (_WORD)v8 || *(_QWORD *)(a2 + 392) )
          LODWORD(v8) = KiResortScbQueue(a1, a2, v6, a4);
        else
          LODWORD(v8) = KiRemoveSchedulingGroupQueue(a1, a2, v6, a4);
      }
    }
  }
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  *(_QWORD *)(a3 + 1496) = 0LL;
  return (int)v8;
}
