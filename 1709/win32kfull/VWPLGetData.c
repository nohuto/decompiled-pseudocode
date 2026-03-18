/*
 * XREFs of VWPLGetData @ 0x1C00CD08C
 * Callers:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00CD04C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C011A04C (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C011A170 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLGetData(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ecx
  _QWORD *v7; // rdx
  __int64 v8; // rcx

  result = 0LL;
  if ( a1 )
  {
    v6 = *a1;
    if ( v6 )
    {
      v7 = a1 + 6;
      do
      {
        if ( a2 == *v7 )
          break;
        LODWORD(result) = result + 1;
        v7 += 2;
      }
      while ( (unsigned int)result < v6 );
    }
    if ( (unsigned int)result >= v6 )
    {
      return 0LL;
    }
    else
    {
      v8 = (unsigned int)result;
      result = 1LL;
      *a3 = *(_QWORD *)&a1[4 * v8 + 4];
    }
  }
  return result;
}
