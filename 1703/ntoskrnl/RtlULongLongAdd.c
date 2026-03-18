/*
 * XREFs of RtlULongLongAdd @ 0x14006B3A0
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x14042997C (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1404A8974 (LdrpResSearchResourceInsideDirectory.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
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
