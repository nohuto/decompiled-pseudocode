/*
 * XREFs of sub_1800CCA4C @ 0x1800CCA4C
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

NTSTATUS sub_1800CCA4C()
{
  NTSTATUS result; // eax
  char ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger, &ThreadInformation, 1u, 0LL);
  if ( result >= 0 && !ThreadInformation )
    __debugbreak();
  return result;
}
