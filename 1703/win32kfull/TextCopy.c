/*
 * XREFs of TextCopy @ 0x1C0239350
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     _GetAltTabInfo @ 0x1C01CBDC4 (_GetAltTabInfo.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall TextCopy(__int64 a1, void *a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v5; // r9d

  LODWORD(v3) = a3;
  if ( a3 )
  {
    v3 = (unsigned int)(a3 - 1);
    v5 = *(_DWORD *)a1 >> 1;
    if ( v5 < a3 - 1 )
      v3 = v5;
    memmove(a2, *(const void **)(a1 + 8), 2 * v3);
    *((_WORD *)a2 + v3) = 0;
  }
  return (unsigned int)v3;
}
