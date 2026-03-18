/*
 * XREFs of ?SetBufferProperty@CComponentTransform2DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0028E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v9; // r8d
  int v10; // r8d

  v6 = 0;
  *a6 = 0;
  if ( a3 == 6 && a5 == 24 )
  {
    v7 = *(_QWORD *)((char *)this + 92) - *a4;
    if ( !v7 )
    {
      v7 = *(_QWORD *)((char *)this + 100) - a4[1];
      if ( !v7 )
        v7 = *(_QWORD *)((char *)this + 108) - a4[2];
    }
    if ( v7 )
    {
      *(_OWORD *)((char *)this + 92) = *(_OWORD *)a4;
      *(_QWORD *)((char *)this + 108) = a4[2];
    }
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  else
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    if ( !a3 )
    {
      *((_DWORD *)this + 14) = *(_DWORD *)a4;
      *((_DWORD *)this + 15) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x100u;
      return v6;
    }
    v9 = a3 - 1;
    if ( !v9 )
    {
      *((_DWORD *)this + 16) = *(_DWORD *)a4;
      *((_DWORD *)this + 17) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x80u;
      return v6;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      *((_DWORD *)this + 18) = *(_DWORD *)a4;
      *((_DWORD *)this + 19) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x200u;
      return v6;
    }
    if ( v10 == 3 )
    {
      *((_DWORD *)this + 21) = *(_DWORD *)a4;
      *((_DWORD *)this + 22) = *((_DWORD *)a4 + 1);
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v6;
}
