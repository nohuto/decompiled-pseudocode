/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140437470
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  PHANDLE v4; // rbx
  char PreviousMode; // di
  __int64 v6; // r8
  NTSTATUS inserted; // ecx
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+68h] [rbp-20h]

  v3 = (int)ObjectAttributes;
  v4 = WaitCompletionPacketHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)WaitCompletionPacketHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)WaitCompletionPacketHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  LOBYTE(WaitCompletionPacketHandle) = PreviousMode;
  inserted = ObCreateObjectEx(
               (_DWORD)WaitCompletionPacketHandle,
               (_DWORD)IopWaitCompletionPacketObjectType,
               v3,
               PreviousMode);
  if ( inserted >= 0 )
  {
    v8 = Object;
    *((_QWORD *)Object + 12) = 0LL;
    v8[104] = 0;
    inserted = ObInsertObjectEx(v8, 0LL, 0, 0LL, (__int64)&v10);
    if ( inserted >= 0 )
      *v4 = (HANDLE)v10;
  }
  return inserted;
}
