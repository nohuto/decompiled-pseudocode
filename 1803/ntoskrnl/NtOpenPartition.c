/*
 * XREFs of NtOpenPartition @ 0x140653090
 * Callers:
 *     <none>
 * Callees:
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenPartition(HANDLE *a1, int a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  __int64 result; // rax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, PsPartitionType, PreviousMode, 0LL, a2, 0LL, (__int64)Handle);
  if ( (int)result >= 0 )
  {
    *a1 = Handle[0];
    return (unsigned int)result;
  }
  return result;
}
