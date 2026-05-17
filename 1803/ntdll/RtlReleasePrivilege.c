/*
 * XREFs of RtlReleasePrivilege @ 0x180080630
 * Callers:
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(_QWORD *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  unsigned __int64 v4; // r8

  v2 = *((_DWORD *)a1 + 8);
  if ( (v2 & 3) != 1 )
  {
    ZwAdjustPrivilegesToken(*a1, 0LL, a1[2]);
    v2 = *((_DWORD *)a1 + 8);
  }
  if ( (v2 & 1) != 0 )
  {
    ZwSetInformationThread(-2LL, 5LL, a1 + 1);
    v3 = a1[1];
    if ( v3 )
      ZwClose(v3);
  }
  v4 = a1[2];
  if ( (_QWORD *)v4 != (_QWORD *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  ZwClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
