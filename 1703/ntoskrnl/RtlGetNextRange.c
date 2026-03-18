/*
 * XREFs of RtlGetNextRange @ 0x1405B50D0
 * Callers:
 *     RtlpIsRangeAvailable @ 0x1405B4FE8 (RtlpIsRangeAvailable.c)
 *     ArbShareDriverExclusive @ 0x1405D8DB8 (ArbShareDriverExclusive.c)
 *     ArbOverrideConflict @ 0x1405D9090 (ArbOverrideConflict.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetNextRange(PRTL_RANGE_LIST_ITERATOR Iterator, PRTL_RANGE *Range, BOOLEAN MoveForwards)
{
  PLIST_ENTRY RangeListHead; // r9
  _QWORD *Current; // rax
  __int64 v6; // rdx
  PLIST_ENTRY MergedHead; // r11
  struct _LIST_ENTRY **p_Blink; // rdx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v11; // rax
  struct _RTL_RANGE *v12; // rax

  RangeListHead = Iterator->RangeListHead;
  if ( LODWORD(Iterator->RangeListHead[1].Blink) != Iterator->Stamp )
    return -1073741811;
  Current = Iterator->Current;
  if ( Current )
  {
    if ( MoveForwards )
      v6 = Current[5];
    else
      v6 = Current[6];
    MergedHead = Iterator->MergedHead;
    p_Blink = (struct _LIST_ENTRY **)(v6 - 40);
    if ( MergedHead )
    {
      if ( p_Blink + 5 != (struct _LIST_ENTRY **)MergedHead )
      {
        result = 0;
        Iterator->Current = p_Blink;
        *Range = (PRTL_RANGE)p_Blink;
        return result;
      }
      if ( MoveForwards )
        Blink = MergedHead[1].Blink;
      else
        Blink = MergedHead[2].Flink;
      p_Blink = &Blink[-3].Blink;
      Iterator->MergedHead = 0LL;
    }
    if ( p_Blink + 5 == (struct _LIST_ENTRY **)RangeListHead )
    {
      Iterator->Current = 0LL;
      result = -2147483622;
      *Range = 0LL;
    }
    else if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
    {
      Iterator->MergedHead = (PLIST_ENTRY)(p_Blink + 2);
      if ( MoveForwards )
        v11 = p_Blink[2];
      else
        v11 = p_Blink[3];
      v12 = (struct _RTL_RANGE *)&v11[-3].Blink;
      Iterator->Current = v12;
      *Range = v12;
      return 0;
    }
    else
    {
      Iterator->Current = p_Blink;
      result = 0;
      *Range = (PRTL_RANGE)p_Blink;
    }
  }
  else
  {
    result = -2147483622;
    *Range = 0LL;
  }
  return result;
}
