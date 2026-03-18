/*
 * XREFs of ValidateHwndMinuser @ 0x1C00DBAC0
 * Callers:
 *     <none>
 * Callees:
 *     HMFindEntry @ 0x1C00E4D90 (HMFindEntry.c)
 */

__int64 __fastcall ValidateHwndMinuser(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[0] = a1;
  v4[2] = 0LL;
  v4[1] = PsGetCurrentProcessWin32Process(a1, a2, a3);
  result = HMFindEntry(v4, lookForMatchingMinuserHwnd);
  if ( result )
    return *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((result - (__int64)qword_1C018E9B8) >> 5));
  return result;
}
