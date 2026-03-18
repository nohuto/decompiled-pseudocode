/*
 * XREFs of ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001EB20
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C00A1480 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 17 && a4 && a5 == 64 )
  {
    if ( memcmp((char *)this + 120, a4, 0x40uLL) )
    {
      *(_OWORD *)((char *)this + 120) = *a4;
      *(_OWORD *)((char *)this + 136) = a4[1];
      *(_OWORD *)((char *)this + 152) = a4[2];
      *(_OWORD *)((char *)this + 168) = a4[3];
    }
    *((_DWORD *)this + 4) &= ~0x2000u;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
