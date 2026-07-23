/*
 * XREFs of DbgUiIssueRemoteBreakin @ 0x1800C9550
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800C94C0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

NTSTATUS __cdecl DbgUiIssueRemoteBreakin(HANDLE Process)
{
  int v1; // ebx
  int v3; // [rsp+30h] [rbp-48h]
  __int128 v4; // [rsp+60h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF

  v1 = sub_1800060E8(
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
