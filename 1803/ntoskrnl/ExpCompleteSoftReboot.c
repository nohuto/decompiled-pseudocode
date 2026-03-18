/*
 * XREFs of ExpCompleteSoftReboot @ 0x1402B8248
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpCompleteSoftReboot()
{
  signed __int32 v0; // r8d
  bool i; // zf
  __int64 result; // rax

  v0 = ExSoftRebootFlags;
  for ( i = (ExSoftRebootFlags & 2) == 0; ; i = (ExSoftRebootFlags & 2) == 0 )
  {
    _m_prefetchw(&ExSoftRebootFlags);
    if ( i )
      return 0LL;
    if ( v0 == _InterlockedCompareExchange(&ExSoftRebootFlags, v0 & 0xFFFFFFF8 | 1, v0) )
      break;
    v0 = ExSoftRebootFlags;
  }
  result = KsrCleanupPageDatabase();
  if ( (int)result < 0 )
  {
    _m_prefetchw(&ExSoftRebootFlags);
    _InterlockedExchange(&ExSoftRebootFlags, ExSoftRebootFlags & 0xFFFFFFF8 | 6);
  }
  return result;
}
