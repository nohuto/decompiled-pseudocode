/*
 * XREFs of RtlCheckRegistryKey @ 0x140590C30
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14012AD80 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405F2670 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x140763548 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 0, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
