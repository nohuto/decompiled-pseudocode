/*
 * XREFs of NtLoadKey2 @ 0x1405863D0
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 */

NTSTATUS __stdcall NtLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  int v4; // [rsp+38h] [rbp-30h]

  return CmLoadDifferencingKey(
           (__int64)KeyObjectAttributes,
           (__int64)FileObjectAttributes,
           Flags,
           0LL,
           0LL,
           0,
           0LL,
           v4,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
