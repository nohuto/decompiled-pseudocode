/*
 * XREFs of CmpFreezeHive @ 0x14046ED40
 * Callers:
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x14046EDD4 (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, __int64 a2)
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
