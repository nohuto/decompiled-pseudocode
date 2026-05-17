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

__int64 __fastcall RtlReleasePrivilege(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r8

  if ( (a1[4] & 3) != 1 )
    ZwAdjustPrivilegesToken(*a1, 0LL, a1[2], 0LL, 0LL, 0LL);
  if ( (a1[4] & 1) != 0 )
  {
    ZwSetInformationThread(-2LL, 5LL, a1 + 1);
    v2 = a1[1];
    if ( v2 )
      ZwClose(v2);
  }
  v3 = a1[2];
  if ( (_QWORD *)v3 != (_QWORD *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  ZwClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
