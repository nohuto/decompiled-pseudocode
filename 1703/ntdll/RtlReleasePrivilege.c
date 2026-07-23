/*
 * XREFs of RtlReleasePrivilege @ 0x180087710
 * Callers:
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x1800A5B20 (ZwAdjustPrivilegesToken.c)
 */

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  void *v2; // rcx
  char *v3; // r8

  if ( (*((_DWORD *)StatePointer + 8) & 3) != 1 )
    ZwAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
  if ( (*((_BYTE *)StatePointer + 32) & 1) != 0 )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v2 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v3 != (char *)StatePointer + 36 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  ZwClose(*(HANDLE *)StatePointer);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, StatePointer);
}
