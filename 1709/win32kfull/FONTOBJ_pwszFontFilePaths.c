/*
 * XREFs of FONTOBJ_pwszFontFilePaths @ 0x1C026FE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 */

LPWSTR __stdcall FONTOBJ_pwszFontFilePaths(FONTOBJ *pfo, ULONG *pcwc)
{
  __int64 v2; // r8
  WCHAR *v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  *pcwc = 0;
  if ( pfo )
  {
    v4 = *(_QWORD *)pfo[1].pvConsumer;
    if ( (*(_DWORD *)(v4 + 52) & 0x30) == 0 )
    {
      v3 = *(WCHAR **)(v4 + 24);
      *pcwc = *(_DWORD *)(v4 + 32);
    }
  }
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6, (__int64)pcwc, v2);
  return v3;
}
