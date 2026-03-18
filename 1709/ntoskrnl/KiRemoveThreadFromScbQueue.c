/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x1400D29C0
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x14006BE40 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D15AC (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400D2520 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D2970 (KiSelectThreadFromSchedulingGroup.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
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
          LODWORD(v8) = KiRemoveSchedulingGroupQueue(a1, a2, v6);
      }
    }
  }
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  *(_QWORD *)(a3 + 1496) = 0LL;
  return (int)v8;
}
