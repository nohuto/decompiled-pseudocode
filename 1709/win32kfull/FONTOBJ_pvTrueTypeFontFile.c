/*
 * XREFs of FONTOBJ_pvTrueTypeFontFile @ 0x1C026FE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C0283BA0 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 */

PVOID __stdcall FONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile)
{
  __int64 v2; // r8
  void *v3; // rbx
  FONTOBJ *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = pfo;
  *pcjFile = 0;
  if ( pfo )
    v3 = RFONTOBJ::pvFile((RFONTOBJ *)&v5, pcjFile);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5, (__int64)pcjFile, v2);
  return v3;
}
