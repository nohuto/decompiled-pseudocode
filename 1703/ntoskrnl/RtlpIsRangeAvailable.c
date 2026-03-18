/*
 * XREFs of RtlpIsRangeAvailable @ 0x1405B4FE8
 * Callers:
 *     RtlIsRangeAvailable @ 0x1405B4DF0 (RtlIsRangeAvailable.c)
 *     RtlFindRange @ 0x1405B4EA0 (RtlFindRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlGetNextRange @ 0x1405B50D0 (RtlGetNextRange.c)
 */

char __fastcall RtlpIsRangeAvailable(
        PRTL_RANGE_LIST_ITERATOR Iterator,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        BOOLEAN MoveForwards,
        __int64 a8,
        unsigned __int8 (__fastcall *a9)(__int64))
{
  struct _RTL_RANGE *Current; // rdx
  unsigned __int64 Start; // rax
  bool v15; // cf
  PRTL_RANGE Range; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _RTL_RANGE *)Iterator->Current;
  Range = Current;
  while ( Current )
  {
    if ( MoveForwards )
    {
      if ( !Iterator->MergedHead && a3 < Current->Start )
        return 1;
    }
    else if ( !Iterator->MergedHead && a2 > Current->End )
    {
      return 1;
    }
    Start = Current->Start;
    v15 = Current->Start < a2;
    if ( Current->Start > a2 )
    {
      if ( a3 < Start )
        goto LABEL_3;
      v15 = Start < a2;
    }
    if ( (!v15 || Current->End >= a2)
      && (!a5 || (Current->Flags & 1) == 0)
      && (Current->Attributes & a4) == 0
      && (!a6 || Current->Owner)
      && (!a9 || !a9(a8)) )
    {
      return 0;
    }
LABEL_3:
    RtlGetNextRange(Iterator, &Range, MoveForwards);
    Current = Range;
  }
  return 1;
}
