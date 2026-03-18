/*
 * XREFs of ?SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0147230
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C002B2D0 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetBufferProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        float *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  float v7; // xmm0_4

  v6 = 0;
  if ( a3 == 45 )
  {
    if ( a4 && a5 == 4 && *a4 >= 0.0 && *a4 <= 1.0 )
    {
      *((_DWORD *)this + 39) = 1;
      *((float *)this + 40) = *a4;
      goto LABEL_15;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 46 )
  {
    if ( a4 )
    {
      if ( a5 == 8 )
      {
        v7 = a4[1];
        if ( v7 >= 0.0 && v7 <= 1.0 && *a4 >= 0.0 )
        {
          *((_DWORD *)this + 39) = 2;
          *((_QWORD *)this + 20) = *(_QWORD *)a4;
LABEL_15:
          *((_DWORD *)this + 4) |= 0x10000u;
          *a6 = 1;
          return v6;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
                         this,
                         a2,
                         a3,
                         (const unsigned __int16 *)a4,
                         a5,
                         a6);
}
