/*
 * XREFs of RtlpLookupLowBox @ 0x1400A1320
 * Callers:
 *     RtlPinAtomInAtomTable @ 0x1405478A0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140547970 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140547C00 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140784BE8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140061174 (RtlpQueryLowBoxId.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400A14E0 (RtlpAllowsLowBoxAccess.c)
 */

_QWORD *__fastcall RtlpLookupLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // eax
  _QWORD *v6; // rbx
  _QWORD *v8; // rcx

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  v6 = (_QWORD *)(a2 + 16);
  if ( !LowBoxId )
    return (_QWORD *)(a2 + 16);
  v8 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
  {
LABEL_9:
    if ( (unsigned __int8)RtlpAllowsLowBoxAccess(a2) && !a3 )
      return (_QWORD *)(a2 + 16);
    return 0LL;
  }
  else
  {
    while ( *((_DWORD *)v8 + 4) != LowBoxId )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == v6 )
        goto LABEL_9;
    }
    return v8;
  }
}
