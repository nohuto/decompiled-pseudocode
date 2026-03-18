/*
 * XREFs of ArbOverrideConflict @ 0x1C00A67E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ArbOverrideConflict(__int64 a1, __int64 a2)
{
  char v2; // di
  ULONGLONG Start; // rax
  ULONGLONG v6; // r8
  bool v7; // cf
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
    return 0;
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    Start = Range->Start;
    v6 = *(_QWORD *)(a2 + 16);
    v7 = v6 < Range->Start;
    if ( v6 > Range->Start )
    {
      if ( Range->End < v6 )
        goto LABEL_13;
      v7 = v6 < Start;
    }
    if ( (!v7 || *(_QWORD *)(a2 + 24) >= Start) && (Range->Attributes & *(_BYTE *)(a2 + 67)) == 0 )
    {
      if ( Range->Owner != *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL)
        || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
      {
        return 0;
      }
      v2 = 1;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
      *(_QWORD *)a2 = v6;
    }
LABEL_13:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return v2;
}
