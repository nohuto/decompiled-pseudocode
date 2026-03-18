/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x14056F2FC
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateWaitCompletionPacket(__int64 *a1, ACCESS_MASK a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v7; // r8
  int inserted; // ecx
  _BYTE *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               IopWaitCompletionPacketObjectType,
               a3,
               PreviousMode,
               v11,
               112,
               0,
               0,
               Object,
               0LL);
  if ( inserted >= 0 )
  {
    v9 = Object[0];
    *((_QWORD *)Object[0] + 12) = 0LL;
    v9[104] = 0;
    *((_QWORD *)v9 + 11) = 0LL;
    inserted = ObInsertObjectEx(v9, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v12);
    if ( inserted >= 0 )
      *a1 = v12;
  }
  return (unsigned int)inserted;
}
