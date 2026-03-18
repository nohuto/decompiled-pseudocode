/*
 * XREFs of ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C018809C
 * Callers:
 *     DXGDEVICE_IsDisplayingOnVidPnSource @ 0x1C00344F0 (DXGDEVICE_IsDisplayingOnVidPnSource.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C00CA428 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  bool result; // al
  __int64 v6; // rcx
  ADAPTER_DISPLAY *v7; // rcx

  result = 1;
  if ( !DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
    if ( !v6 )
      return 0;
    v7 = *(ADAPTER_DISPLAY **)(v6 + 2280);
    if ( !v7 || !ADAPTER_DISPLAY::IsVidPnSourceVisible(v7, (unsigned int)v3, v3, v4) )
      return 0;
  }
  return result;
}
