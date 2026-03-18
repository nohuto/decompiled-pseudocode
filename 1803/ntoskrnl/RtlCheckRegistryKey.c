/*
 * XREFs of RtlCheckRegistryKey @ 0x14057ED00
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400CE5D0 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x140655780 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x1407CB22C (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
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
