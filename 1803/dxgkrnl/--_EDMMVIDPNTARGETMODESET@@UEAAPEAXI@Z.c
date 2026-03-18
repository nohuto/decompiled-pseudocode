/*
 * XREFs of ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C0005600
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z @ 0x1C001CBD0 (--_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z @ 0x1C001CBE0 (--_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z @ 0x1C001CBF0 (--_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z @ 0x1C001CC00 (--_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C000AA80 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

_QWORD *__fastcall DMMVIDPNTARGETMODESET::`vector deleting destructor'(_QWORD *P, char a2)
{
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  *P = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  P[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  P[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  P[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_DWORD *)P + 32) |= 0x6D640000u;
  P[15] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  P[14] = 0LL;
  P[13] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  P[11] = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)P + 24) )
  {
    v8 = WdLogNewEntry5_WdError(P);
    *(_QWORD *)(v8 + 24) = *((int *)P + 24);
    WdLogEvent5_WdError(v8);
  }
  P[3] = &Set<DMMVIDPNTARGETMODE>::`vftable';
  v4 = (_QWORD **)(P + 6);
  P[4] = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    --P[8];
    *v5 = 0LL;
    v5[1] = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(v5 + 7));
  }
  if ( P[8] )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *P = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
