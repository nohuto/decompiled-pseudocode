/*
 * XREFs of EtwpCreateEtwThread @ 0x180052C90
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     RtlCreateUserThread @ 0x180052D00 (RtlCreateUserThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 */

HANDLE __fastcall EtwpCreateEtwThread(NTSTATUS (__cdecl *a1)(PVOID), void *a2)
{
  HANDLE v2; // rbx
  int v3; // eax
  HANDLE ThreadHandle; // [rsp+70h] [rbp+18h] BYREF

  if ( RtlCreateUserThread((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 1u, 0, 0LL, 0LL, a1, a2, &ThreadHandle, 0LL) < 0 )
    return 0LL;
  v2 = ThreadHandle;
  v3 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v3 < 0 )
  {
    ZwTerminateThread(v2, v3);
    ZwClose(v2);
    return 0LL;
  }
  return v2;
}
