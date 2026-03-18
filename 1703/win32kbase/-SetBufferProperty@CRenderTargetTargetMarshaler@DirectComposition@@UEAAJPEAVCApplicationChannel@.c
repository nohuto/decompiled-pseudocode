/*
 * XREFs of ?SetBufferProperty@CRenderTargetTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0089A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetBufferProperty(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d

  v6 = -1073741811;
  *a6 = 0;
  v7 = a3 - 6;
  if ( !v7 )
  {
    v6 = a5 != 16 ? 0xC000000D : 0;
    if ( a5 != 16 )
      return v6;
    *(_OWORD *)((char *)this + 84) = *a4;
    goto LABEL_5;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v6 = a5 != 8 ? 0xC000000D : 0;
      if ( a5 == 8 )
      {
        *((_QWORD *)this + 7) = *(_QWORD *)a4;
        *((_DWORD *)this + 4) |= 0x20u;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v6 = a5 != 16 ? 0xC000000D : 0;
    if ( a5 == 16 )
    {
      *(_OWORD *)((char *)this + 100) = *a4;
LABEL_5:
      *((_DWORD *)this + 4) |= 0x40u;
LABEL_6:
      *a6 = 1;
    }
  }
  return v6;
}
