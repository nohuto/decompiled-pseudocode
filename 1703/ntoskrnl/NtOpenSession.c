/*
 * XREFs of NtOpenSession @ 0x14058334C
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x140578C50 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, int a2, int a3)
{
  char PreviousMode; // cl
  __int64 result; // rax
  __int64 v7; // r8
  _QWORD v8[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, (int)MmSessionObjectType, PreviousMode, 0, a2, 0LL, (__int64)v8);
  *a1 = v8[0];
  return result;
}
