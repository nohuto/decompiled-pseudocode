/*
 * XREFs of RtlULongLongAdd @ 0x1400E3380
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x1404DB6C4 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1405341D4 (LdrpResSearchResourceInsideDirectory.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  if ( ullAugend + ullAddend < ullAugend )
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  else
  {
    *pullResult = ullAugend + ullAddend;
    return 0;
  }
}
