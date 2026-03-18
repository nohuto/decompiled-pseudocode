/*
 * XREFs of NtOpenPartition @ 0x1405D3F94
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenPartition(_QWORD *a1, int a2, int a3)
{
  char PreviousMode; // cl
  __int64 v6; // r8
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+50h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(a3, (int)MmPartitionObjectType, PreviousMode, 0, a2, 0LL, (__int64)v8);
  if ( (int)result >= 0 )
    *a1 = v8[0];
  return result;
}
