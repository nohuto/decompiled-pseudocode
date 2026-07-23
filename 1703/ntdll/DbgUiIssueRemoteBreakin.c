/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x1800D5120
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D5090 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

NTSTATUS __cdecl DbgUiIssueRemoteBreakin(HANDLE Process)
{
  int v1; // ebx
  int v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF

  v1 = sub_180052D68(
         Process,
         0LL,
         2,
         0,
         0LL,
         0x4000uLL,
         v3,
         (PUSER_THREAD_START_ROUTINE)DbgUiRemoteBreakin,
         0LL,
         &Handle,
         &v4);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return v1;
}
