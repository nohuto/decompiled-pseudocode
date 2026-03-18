/*
 * XREFs of ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C019D784
 * Callers:
 *     DXGDEVICE_IsDisplayingOnVidPnSource @ 0x1C00256D0 (DXGDEVICE_IsDisplayingOnVidPnSource.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C009E074 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  bool result; // al
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx

  result = 1;
  if ( !DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
    if ( !v5 )
      return 0;
    v6 = *(ADAPTER_DISPLAY **)(v5 + 2304);
    if ( !v6 || !ADAPTER_DISPLAY::IsVidPnSourceVisible(v6, v3) )
      return 0;
  }
  return result;
}
