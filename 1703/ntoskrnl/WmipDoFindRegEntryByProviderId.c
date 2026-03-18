/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x14006E818
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x14006E798 (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x140148670 (IoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WmipDoFindRegEntryByProviderId(int a1)
{
  _DWORD *result; // rax

  for ( result = WmipInUseRegEntryHead; result != (_DWORD *)&WmipInUseRegEntryHead; result = *(_DWORD **)result )
  {
    if ( result[14] == a1 && result[12] < 0x80000000 )
      return result;
  }
  return 0LL;
}
