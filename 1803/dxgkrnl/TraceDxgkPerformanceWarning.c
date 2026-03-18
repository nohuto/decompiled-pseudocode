/*
 * XREFs of TraceDxgkPerformanceWarning @ 0x1C0027D10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

NTSTATUS __fastcall TraceDxgkPerformanceWarning(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  result = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    return McTemplateK0q(a1, &EventPerformanceWarning, a3, a1);
  return result;
}
