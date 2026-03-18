/*
 * XREFs of CcComputeNextScanTime @ 0x14000CA80
 * Callers:
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcComputeNextScanTime(_DWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  signed __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  *a3 = 0LL;
  result = (unsigned int)a1[50];
  if ( a1[224] < (unsigned int)result )
  {
    v5 = MEMORY[0xFFFFF78000000320];
    v6 = KeMaximumIncrement;
    ++a1[34];
    v7 = 0x9896800 / v6;
    v8 = *a2;
    if ( *a2 != 0x7FFFFFFFFFFFFFFFLL && (__int64)(v8 + v7) > v5 )
    {
      a1[34] = 0;
      *a3 = v7 + v8 - v5;
    }
    result = (unsigned int)CcMaxWorklessLazywriteScans;
    if ( a1[34] >= (unsigned int)CcMaxWorklessLazywriteScans )
    {
      a1[34] = 0;
      *a3 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  return result;
}
