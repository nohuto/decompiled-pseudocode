/*
 * XREFs of DxgkGetRuntimeData @ 0x1C01806F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DxgkGetRuntimeData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = qword_1C006E790;
  if ( (qword_1C006E790 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      Template_q(qword_1C006E790, &EventProfilerEnter, a3, 2014);
      v3 = qword_1C006E790;
    }
    if ( (v3 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v3, &EventProfilerExit, a3, 2014);
  }
  return 3221225474LL;
}
