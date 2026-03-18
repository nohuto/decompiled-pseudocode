/*
 * XREFs of DxgkCreateClose @ 0x1C00F76C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkCreateClose(__int64 a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 1);
  v4 = -(a2->RequestorMode != 0);
  a2->IoStatus.Information = 0LL;
  v5 = v4 & 0xC0000022;
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, 1);
  return v5;
}
