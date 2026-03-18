/*
 * XREFs of KiVerifyXcpt2 @ 0x1408B9D48
 * Callers:
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 * Callees:
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x1408BA40C (KiVerifyXcptFilter.c)
 *     KiVerifyXcptFinally @ 0x1408BA42C (KiVerifyXcptFinally.c)
 */

__int64 __fastcall KiVerifyXcpt2(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  v2[4] = v2;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *(int *)(a1 + 12);
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
