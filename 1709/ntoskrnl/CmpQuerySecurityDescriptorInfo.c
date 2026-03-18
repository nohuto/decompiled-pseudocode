/*
 * XREFs of CmpQuerySecurityDescriptorInfo @ 0x1404834DC
 * Callers:
 *     CmpQueryKeySecurity @ 0x1400188C0 (CmpQueryKeySecurity.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140483530 (SeQuerySecurityDescriptorInfo.c)
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
