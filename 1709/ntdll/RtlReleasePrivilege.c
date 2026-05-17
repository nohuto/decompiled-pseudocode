/*
 * XREFs of RtlReleasePrivilege @ 0x180085270
 * Callers:
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x1800A08E0 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  unsigned __int64 v2; // r8
  HANDLE v4; // rcx

  if ( ((_DWORD)a1[4] & 3) != 1 )
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2], 0LL, 0LL, 0LL);
  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1);
    v4 = a1[1];
    if ( v4 )
      NtClose(v4);
  }
  v2 = (unsigned __int64)a1[2];
  if ( (HANDLE *)v2 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
