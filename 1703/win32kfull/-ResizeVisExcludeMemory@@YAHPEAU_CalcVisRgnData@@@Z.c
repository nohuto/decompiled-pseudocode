/*
 * XREFs of ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0130698
 * Callers:
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C0062CD0 (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066340 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall ResizeVisExcludeMemory(struct _CalcVisRgnData *a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rsi
  const void *v5; // rbp

  v2 = *((_DWORD *)a1 + 2) + 30;
  result = Win32AllocPool(8LL * v2, 1769370453LL);
  v4 = result;
  if ( result )
  {
    v5 = (const void *)*((_QWORD *)a1 + 2);
    memmove((void *)result, v5, 8LL * *((int *)a1 + 2));
    if ( *(_DWORD *)a1 )
      Win32FreePool(v5);
    else
      *(_DWORD *)a1 = 1;
    *((_DWORD *)a1 + 2) = v2;
    result = 1LL;
    *((_QWORD *)a1 + 2) = v4;
  }
  return result;
}
