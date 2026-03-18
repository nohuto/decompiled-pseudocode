/*
 * XREFs of KiVerifyXcpt14 @ 0x1408BA3B0
 * Callers:
 *     <none>
 * Callees:
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x1408BA40C (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt14(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  v2[4] = v2;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    LODWORD(result) = *(_DWORD *)(a1 + 12);
  }
  else
  {
    LODWORD(result) = -1;
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = (int)result;
  *(_QWORD *)(a1 + 24) += (int)result;
  return result;
}
