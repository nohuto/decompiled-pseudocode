/*
 * XREFs of ExpPrepareToWaitForResourceExclusive @ 0x1400271B4
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x14014D420 (ExAcquireFastResourceExclusive.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall ExpPrepareToWaitForResourceExclusive(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v5; // rcx

  ++*(_DWORD *)(a1 + 76);
  memset(a2, 0, 0x28uLL);
  *((_DWORD *)a2 + 5) = 0;
  *((_WORD *)a2 + 8) = 1;
  *((_BYTE *)a2 + 18) = 6;
  a2[4] = a2 + 3;
  a2[3] = a2 + 3;
  result = *(_QWORD *)(a1 + 40);
  if ( result )
  {
    v5 = *(_QWORD **)(result + 8);
    if ( *v5 != result )
      __fastfail(3u);
    *a2 = result;
    a2[1] = v5;
    *v5 = a2;
    *(_QWORD *)(result + 8) = a2;
  }
  else
  {
    a2[1] = a2;
    *a2 = a2;
    *(_QWORD *)(a1 + 40) = a2;
  }
  return result;
}
