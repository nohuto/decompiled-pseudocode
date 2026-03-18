/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002BD10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C002D3B4 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C002D4C4 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v8; // r8d
  int v9; // r8d
  unsigned int v10; // ecx
  bool v11; // dl
  char v12; // al
  char v15; // r9
  __int64 v16; // r8
  __int128 v17; // xmm0

  v8 = a3 - 11;
  if ( !v8 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  v9 = v8 - 1;
  if ( !v9 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(this, a2, a4, a5, a6);
  if ( v9 != 3 )
    return (unsigned int)-1073741811;
  v10 = 0;
  v11 = 0;
  if ( a5 )
  {
    if ( a5 != 16 )
    {
      v10 = -1073741811;
      goto LABEL_6;
    }
    v15 = *((_BYTE *)this + 236);
    if ( (v15 & 2) != 0 )
    {
      v16 = *(_QWORD *)((char *)this + 220) - *a4;
      if ( !v16 )
        v16 = *(_QWORD *)((char *)this + 228) - a4[1];
      if ( !v16 )
        goto LABEL_6;
    }
    *((_DWORD *)this + 4) |= 0x20000u;
    v17 = *(_OWORD *)a4;
    *((_BYTE *)this + 236) = v15 | 2;
    *(_OWORD *)((char *)this + 220) = v17;
LABEL_20:
    v11 = 1;
    goto LABEL_6;
  }
  v12 = *((_BYTE *)this + 236);
  if ( (v12 & 2) != 0 )
  {
    *((_DWORD *)this + 4) |= 0x20000u;
    *((_BYTE *)this + 236) = v12 & 0xFD;
    goto LABEL_20;
  }
LABEL_6:
  *a6 = v11;
  return v10;
}
