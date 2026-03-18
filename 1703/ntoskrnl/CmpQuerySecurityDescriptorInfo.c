/*
 * XREFs of CmpQuerySecurityDescriptorInfo @ 0x1404FC558
 * Callers:
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x1404FC5B0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

NTSTATUS __fastcall CmpQuerySecurityDescriptorInfo(
        __int64 a1,
        DWORD *a2,
        void *a3,
        ULONG *a4,
        PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor,
        __int64 a6)
{
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, a6) + 32);
  return SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
}
