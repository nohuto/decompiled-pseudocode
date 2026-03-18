/*
 * XREFs of RtlpGetBootStatusPath @ 0x1401845AC
 * Callers:
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x1401845EC (RtlpGetBootStatusPathFromRegistry.c)
 */

const wchar_t *__fastcall RtlpGetBootStatusPath(_QWORD *a1, char *a2)
{
  const wchar_t *result; // rax
  char v5; // r8

  result = (const wchar_t *)RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v5 = 1;
  }
  else
  {
    result = L"\\SystemRoot\\bootstat.dat";
    *a1 = L"\\SystemRoot\\bootstat.dat";
  }
  *a2 = v5;
  return result;
}
