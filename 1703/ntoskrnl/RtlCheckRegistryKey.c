/*
 * XREFs of RtlCheckRegistryKey @ 0x140556210
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140122760 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405D5FF0 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x140723A84 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
