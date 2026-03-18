/*
 * XREFs of BiZwQueryValueKey @ 0x140134A90
 * Callers:
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall BiZwQueryValueKey(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
