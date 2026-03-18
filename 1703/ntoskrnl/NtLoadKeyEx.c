/*
 * XREFs of NtLoadKeyEx @ 0x1404D4860
 * Callers:
 *     NtLoadKey @ 0x1405D5D18 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 */

NTSTATUS __stdcall NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey)
{
  int v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+90h] [rbp+28h]
  ACCESS_MASK DesiredAccess; // [rsp+98h] [rbp+30h]
  __int64 v8; // [rsp+A0h] [rbp+38h]

  return CmLoadDifferencingKey(
           (int)TargetKey,
           (int)SourceFile,
           Flags,
           (int)TrustClassKey,
           v6,
           DesiredAccess,
           v8,
           v5,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
