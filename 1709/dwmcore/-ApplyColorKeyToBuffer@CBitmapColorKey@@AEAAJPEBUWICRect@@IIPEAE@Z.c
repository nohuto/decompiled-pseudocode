/*
 * XREFs of ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801BADF4
 * Callers:
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAC30 (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 *     ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801BAF20 (-CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x1801BA6DC (--$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x1801BA780 (--$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x1801BA828 (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXPEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x1801BA990 (--$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXPEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBuffer(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        __int64 a3,
        int a4,
        unsigned __int8 *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  int *v8; // rdx
  int *v9; // rdx
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  switch ( v5 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>((__int64)a2, a3, a3, (__int64)a5, (float *)this + 18, (float *)this + 26);
      break;
    case 10:
      ApplyRangeColorKey<GpCCRf16>(
        (__int64)a2,
        (unsigned int)a3,
        a3,
        (__int64)a5,
        (__int64)this + 64,
        (__int64)this + 96);
      break;
    case 28:
      v9 = &v11;
      if ( *((_BYTE *)this + 52) )
        v9 = 0LL;
      v11 = -16777216;
      ApplyRangeColorKey<GpCCR>(
        (__int64)a2,
        a3,
        a3,
        (__int64)a5,
        (unsigned __int8 *)this + 60,
        (unsigned __int8 *)this + 92,
        (__int64)v9);
      break;
    default:
      if ( (unsigned int)(v5 - 87) > 1 )
      {
        v6 = -2003292288;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F80, 0x315u);
      }
      else
      {
        v8 = &v11;
        if ( *((_BYTE *)this + 52) )
          v8 = 0LL;
        v11 = -16777216;
        ApplyRangeColorKey<GpCC>(
          (__int64)a2,
          a3,
          a3,
          (__int64)a5,
          (unsigned __int8 *)this + 56,
          (unsigned __int8 *)this + 88,
          (__int64)v8);
      }
      break;
  }
  return v6;
}
