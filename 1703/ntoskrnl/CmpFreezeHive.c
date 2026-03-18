/*
 * XREFs of CmpFreezeHive @ 0x1404CA998
 * Callers:
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpRecordUnloadEventForHive @ 0x1404CA910 (CmpRecordUnloadEventForHive.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, void *a2)
{
  __int64 v2; // rbp
  char v5; // si
  int v6; // edi

  v2 = *(_QWORD *)(a1 + 24);
  v5 = CmpReferenceKeyControlBlockUnsafe(a1);
  if ( v5 )
  {
    if ( !a2 || (v6 = CmpRecordUnloadEventForHive(v2, a2), v6 >= 0) )
    {
      CmpSearchForOpenSubKeys(a1, 4LL, 0LL);
      *(_WORD *)(a1 + 4) |= 0x20u;
      v5 = 0;
      v6 = 0;
      *(_BYTE *)(v2 + 4112) = 1;
      *(_QWORD *)(v2 + 4104) = a1;
    }
    if ( v5 )
      CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
