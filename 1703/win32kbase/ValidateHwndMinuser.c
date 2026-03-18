/*
 * XREFs of ValidateHwndMinuser @ 0x1C00D5710
 * Callers:
 *     <none>
 * Callees:
 *     HMFindEntry @ 0x1C00DE7D0 (HMFindEntry.c)
 */

__int64 __fastcall ValidateHwndMinuser(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  v2[0] = a1;
  v2[2] = 0LL;
  v2[1] = PsGetCurrentProcessWin32Process(a1);
  result = HMFindEntry(v2, lookForMatchingMinuserHwnd);
  if ( result )
    return *((_QWORD *)gpKernelHandleTable + 2 * (unsigned int)((result - (__int64)qword_1C0189E38) >> 5));
  return result;
}
