/*
 * XREFs of ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C0090300
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0090160 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMinimizedSausageWindow(struct tagWND *const a1)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( (*((_BYTE *)a1 + 71) & 0x20) != 0
    && *((_DWORD *)a1 + 32) == -32000
    && *((_DWORD *)a1 + 33) == -32000
    && *((_DWORD *)a1 + 38) == *((_DWORD *)a1 + 36) )
  {
    return *((_DWORD *)a1 + 39) == *((_DWORD *)a1 + 37);
  }
  return v1;
}
