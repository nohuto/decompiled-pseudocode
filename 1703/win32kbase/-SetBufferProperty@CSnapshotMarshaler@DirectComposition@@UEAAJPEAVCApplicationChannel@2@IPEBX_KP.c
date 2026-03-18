/*
 * XREFs of ?SetBufferProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014EEC0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C00A1480 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetBufferProperty(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v8; // ebx
  __int128 v9; // xmm1

  *a6 = 0;
  if ( a3 == 4 )
  {
    v8 = a5 != 64 ? 0xC000000D : 0;
    if ( a5 == 64 && memcmp((char *)this + 60, a4, 0x40uLL) )
    {
      *(_OWORD *)((char *)this + 60) = *a4;
      *(_OWORD *)((char *)this + 76) = a4[1];
      *(_OWORD *)((char *)this + 92) = a4[2];
      v9 = a4[3];
      *((_DWORD *)this + 4) |= 0x20u;
      *(_OWORD *)((char *)this + 108) = v9;
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
