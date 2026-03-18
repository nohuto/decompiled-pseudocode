/*
 * XREFs of RtlCreateRegistryKey @ 0x1405D6120
 * Callers:
 *     WheapCommitPolicy @ 0x140723A84 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
