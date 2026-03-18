/*
 * XREFs of ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C009E694
 * Callers:
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 */

void __fastcall AdjustForCoalescing(struct tagMLIST *a1, HWND a2, int a3)
{
  __int64 v4; // rdx

  if ( (unsigned int)(a3 - 912) <= 0xF || a3 == 30 )
  {
    v4 = *((_QWORD *)a1 + 1);
    if ( v4 && *(_DWORD *)(v4 + 24) == a3 && *(HWND *)(v4 + 16) == a2 )
      DelQEntry(a1, v4, 1LL);
  }
}
