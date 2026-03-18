/*
 * XREFs of ?SetBufferProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C015A960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetBufferProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax

  v6 = 0;
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( (*((_DWORD *)this + 11) & 0x10) == 0 )
    {
      if ( a5 == 8 )
      {
        *(_QWORD *)((char *)this + 92) = *(_QWORD *)a4;
        *((_DWORD *)this + 11) |= 0x10u;
        *a6 = 1;
        return v6;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    if ( (*((_DWORD *)this + 11) & 8) == 0 )
    {
      if ( a5 == 16 )
      {
        *(_OWORD *)((char *)this + 56) = *(_OWORD *)a4;
        *((_DWORD *)this + 11) |= 8u;
        goto LABEL_10;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741790;
  }
  if ( v8 != 1 || a5 != 8 )
    return (unsigned int)-1073741811;
  v9 = a4[1];
  v10 = *a4;
  if ( *(_QWORD *)a4 != __PAIR64__(*((_DWORD *)this + 18), *((_DWORD *)this + 19)) )
  {
    *((_DWORD *)this + 10) |= 0x20u;
    *((_DWORD *)this + 18) = v9;
    *((_DWORD *)this + 19) = v10;
LABEL_10:
    *a6 = 1;
  }
  return v6;
}
