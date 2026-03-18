/*
 * XREFs of ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C001F2FC
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C001F3BC (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 */

struct tagWND *__fastcall TrackZorder(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        HWND *a5,
        HWND *a6)
{
  __int64 v7; // rsi
  struct tagWND *v8; // rax

  v7 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)a1);
  if ( !v7 )
    return 0LL;
  if ( *a6 )
    v8 = *(struct tagWND **)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)a6);
  else
    v8 = 0LL;
  if ( TrackBackground(a1, (struct tagWND *)v7, a2, a3, a4, v8) )
  {
    *a6 = *(HWND *)a1;
  }
  else
  {
    if ( (*(_BYTE *)(v7 + 59) & 4) == ((*(_BYTE *)(v7 + 64) >> 1) & 4) )
      a5 = a6;
    if ( *a5 )
      *((_QWORD *)a1 + 1) = *a5;
    *a5 = *(HWND *)a1;
  }
  return (struct tagWND *)v7;
}
