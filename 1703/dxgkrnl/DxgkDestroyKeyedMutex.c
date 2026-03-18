/*
 * XREFs of DxgkDestroyKeyedMutex @ 0x1C01A7570
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01A5A94 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkDestroyKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // r8

  v3 = (unsigned int *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2053);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = DXGKEYEDMUTEX::DestroyLocal(*v3);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v5, 2053);
  return v4;
}
