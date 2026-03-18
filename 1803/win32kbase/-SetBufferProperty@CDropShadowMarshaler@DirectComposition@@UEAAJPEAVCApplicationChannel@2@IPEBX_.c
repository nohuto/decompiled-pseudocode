/*
 * XREFs of ?SetBufferProperty@CDropShadowMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014F140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetBufferProperty(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v9; // eax
  __int128 v10; // xmm0

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    v10 = *(_OWORD *)a4;
    *((_DWORD *)this + 4) |= 0x100u;
    *((_OWORD *)this + 4) = v10;
    goto LABEL_10;
  }
  if ( v7 != 2 )
    return 3221225485LL;
  if ( a4 && a5 == 12 )
  {
    *((_DWORD *)this + 21) = *a4;
    *((_DWORD *)this + 22) = a4[1];
    v9 = a4[2];
    *((_DWORD *)this + 4) |= 0x400u;
    *((_DWORD *)this + 23) = v9;
LABEL_10:
    *a6 = 1;
  }
  return v6;
}
