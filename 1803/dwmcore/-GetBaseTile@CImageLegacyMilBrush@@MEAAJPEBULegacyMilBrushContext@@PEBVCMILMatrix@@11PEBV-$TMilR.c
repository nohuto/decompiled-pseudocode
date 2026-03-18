/*
 * XREFs of ?GetBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@11PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV3@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801B2A40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x1801C2488 (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
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
  int v11; // ebx
  int v14; // eax
  struct CImageSource *v15; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+3Ch] [rbp-2Ch]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v11 = 0;
  v20 = *(_QWORD *)(a2 + 228);
  v14 = *(_DWORD *)(a2 + 236);
  *a8 = 0LL;
  v21 = v14;
  *a10 = 1;
  v15 = *(struct CImageSource **)(a1 + 528);
  v22 = 0;
  v23 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v15, (const struct BitmapSourceInfo *)&v20, a8);
  v17 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapCurrentValue, 0x1BAu);
  }
  else
  {
    if ( *a8 )
      *a10 = 0;
    *a11 = 1;
    CMILMatrix::Multiply(a4, a5, a9);
    v18 = *(_QWORD *)(a1 + 528);
    if ( v18 )
      v11 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v18 + 8) + 136LL))(v18 + 8);
    *(_DWORD *)(a1 + 376) = v11;
  }
  return v17;
}
