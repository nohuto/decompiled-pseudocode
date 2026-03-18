/*
 * XREFs of DxgkGetRuntimeData @ 0x1C01847E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkGetRuntimeData(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (qword_1C005F010 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2014);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerExit, a3, 2014);
  }
  return 3221225474LL;
}
