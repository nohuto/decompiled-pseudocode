/*
 * XREFs of InitCommonPerfStateContext @ 0x1C001D008
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000C27C (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00309E0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitCommonPerfStateContext(__int64 a1, _QWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  int v5; // eax
  __int64 result; // rax

  *a2 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  if ( *(_BYTE *)(a1 + 78) )
  {
    v5 = *(_DWORD *)(a1 + 80);
    *(_BYTE *)(a3 + 28) = 1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)a3 = v5;
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 704);
  result = a5;
  *(_DWORD *)(a3 + 24) = a5;
  *(_DWORD *)(a3 + 16) = a4;
  return result;
}
