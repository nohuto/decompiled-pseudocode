/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00178B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0016E80 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0016F84 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
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
  unsigned int v11; // ecx
  bool v13; // dl
  char v14; // al
  char v15; // r9
  __int64 v16; // r8
  __int128 v17; // xmm0

  v8 = a3 - 11;
  if ( !v8 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 3 )
      return (unsigned int)-1073741811;
    v11 = 0;
    v13 = 0;
    if ( a5 )
    {
      if ( a5 != 16 )
      {
        v11 = -1073741811;
        goto LABEL_9;
      }
      v15 = *((_BYTE *)this + 232);
      if ( (v15 & 2) != 0 )
      {
        v16 = *((_QWORD *)this + 27) - *a4;
        if ( !v16 )
          v16 = *((_QWORD *)this + 28) - a4[1];
        if ( !v16 )
          goto LABEL_9;
      }
      *((_DWORD *)this + 4) |= 0x20000u;
      v17 = *(_OWORD *)a4;
      *((_BYTE *)this + 232) = v15 | 2;
      *(_OWORD *)((char *)this + 216) = v17;
    }
    else
    {
      v14 = *((_BYTE *)this + 232);
      if ( (v14 & 2) == 0 )
      {
LABEL_9:
        *a6 = v13;
        return v11;
      }
      *((_DWORD *)this + 4) |= 0x20000u;
      *((_BYTE *)this + 232) = v14 & 0xFD;
    }
    v13 = 1;
    goto LABEL_9;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(this, a2, a4, a5, a6);
}
