/*
 * XREFs of MagpDecomposeDesktop @ 0x1C01230F0
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C0123170 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x1C024CA50 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C024CAFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C024CC88 (DwmAsyncMagnSetDesktopTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *i; // rsi
  void *v7; // rax
  void *v8; // rax
  __int64 *j; // rdi
  void *v10; // rax

  result = MagpRevokeInputTransfrom();
  if ( *(_QWORD *)(a2 + 232) )
  {
    v7 = (void *)ReferenceDwmApiPort(v5);
    result = DwmAsyncMagnSetDesktopColorTransform(v7);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    v8 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
    result = DwmAsyncMagnSetDesktopTransform(v8, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      result = j[3];
      if ( result != -1 )
      {
        v10 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
        result = DwmAsyncMagnDestroy(v10);
      }
    }
  }
  return result;
}
