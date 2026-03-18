/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x1400A91B0
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A7488 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiGroupSchedulingMoveThread @ 0x1400A9020 (KiGroupSchedulingMoveThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400A9160 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400A9530 (KiResortScbQueue.c)
 */

char __fastcall KiRemoveThreadFromScbQueue(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  _QWORD *v6; // r8
  _QWORD *v8; // rax
  char v9; // cl
  __int64 v10; // rax

  v4 = a3 + 216;
  v6 = *(_QWORD **)(a3 + 216);
  v8 = *(_QWORD **)(v4 + 8);
  if ( v6[1] != v4 || *v8 != v4 )
    __fastfail(3u);
  *v8 = v6;
  v6[1] = v8;
  LOBYTE(v8) = v8 == v6;
  if ( (_BYTE)v8 )
  {
    v9 = *(_BYTE *)(a2 + 112);
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 114) ^ (1 << a4);
    *(_WORD *)(a2 + 114) = (_WORD)v8;
    if ( (v9 & 2) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (v9 & 1) != 0 )
      {
        if ( !(_WORD)v8 )
        {
          v10 = *(_QWORD *)(a2 + 392);
          if ( (*(_BYTE *)(a2 + 400) & 1) != 0 )
          {
            if ( !v10 )
            {
LABEL_11:
              LOBYTE(v8) = KiRemoveSchedulingGroupQueue(a1, a2, v6);
              goto LABEL_14;
            }
            v10 ^= a2 + 392;
          }
          if ( !v10 )
            goto LABEL_11;
        }
        LOBYTE(v8) = KiResortScbQueue(a1, a2, v6);
      }
    }
  }
LABEL_14:
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  *(_QWORD *)(a3 + 1496) = 0LL;
  return (char)v8;
}
