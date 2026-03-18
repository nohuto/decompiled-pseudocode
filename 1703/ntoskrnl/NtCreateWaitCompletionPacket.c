/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x140437470
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(unsigned __int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rbx
  char PreviousMode; // di
  __int64 v6; // r8
  int inserted; // ecx
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+68h] [rbp-20h]

  v4 = (_QWORD *)a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v6 = a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  LOBYTE(a1) = PreviousMode;
  inserted = ObCreateObjectEx(a1, (_DWORD)IopWaitCompletionPacketObjectType, a3, PreviousMode);
  if ( inserted >= 0 )
  {
    v8 = Object;
    *((_QWORD *)Object + 12) = 0LL;
    v8[104] = 0;
    inserted = ObInsertObjectEx(v8, 0LL, 0, 0LL, (__int64)&v10);
    if ( inserted >= 0 )
      *v4 = v10;
  }
  return (unsigned int)inserted;
}
