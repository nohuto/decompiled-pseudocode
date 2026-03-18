/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C028B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003ED08 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    v6 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v3 = *(_DWORD **)(v2 + 72);
    if ( v3 )
      *v3 = 0;
    v4 = *(_DWORD **)(v2 + 80);
    if ( v4 )
      *v4 = 0;
    v1 = 1;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
    DEC_SHARE_REF_CNT(v2);
  }
  return v1;
}
