/*
 * XREFs of DxgkCreateClose @ 0x1C00A4210
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DxgkCreateClose(__int64 a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 1);
  v4 = -(a2->RequestorMode != 0);
  a2->IoStatus.Information = 0LL;
  v5 = v4 & 0xC0000022;
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v7, 1);
  return v5;
}
