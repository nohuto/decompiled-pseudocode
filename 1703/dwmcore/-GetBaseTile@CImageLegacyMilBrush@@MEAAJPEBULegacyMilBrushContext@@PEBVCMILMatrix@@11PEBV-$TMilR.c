/*
 * XREFs of ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18007B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18007D36C (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetBaseTile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        struct CMILMatrix *a5,
        __int64 a6,
        __int64 a7,
        struct IBitmapSource **a8,
        struct CMILMatrix *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v13; // eax
  struct CImageSource *v14; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+3Ch] [rbp-1Ch]
  __int64 v22; // [rsp+48h] [rbp-10h]

  v19 = *(_QWORD *)(a2 + 244);
  v13 = *(_DWORD *)(a2 + 252);
  v21 = 0;
  v20 = v13;
  *a8 = 0LL;
  *a10 = 1;
  v14 = *(struct CImageSource **)(a1 + 528);
  v22 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v14, (const struct BitmapSourceInfo *)&v19, a8);
  v16 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapCurrentValue, 0x1BCu);
  }
  else
  {
    if ( *a8 )
      *a10 = 0;
    *a11 = 1;
    CMILMatrix::Multiply(a4, a5, a9);
    v17 = *(_QWORD *)(a1 + 528);
    if ( v17 )
      *(_DWORD *)(a1 + 376) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 128LL))(v17 + 8);
    else
      *(_DWORD *)(a1 + 376) = 0;
  }
  return v16;
}
