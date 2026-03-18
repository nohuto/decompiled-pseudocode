/*
 * XREFs of ?NeedsIntermediateSurfaceRealization@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEBVCMILMatrix@@1PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAH4@Z @ 0x18007B600
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18007D36C (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImageLegacyMilBrush::NeedsIntermediateSurfaceRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rax
  _DWORD *v9; // rsi
  _DWORD *v11; // r14
  struct CImageSource *v12; // rcx
  int BitmapCurrentValue; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+3Ch] [rbp-1Ch]
  __int64 v22; // [rsp+48h] [rbp-10h]
  struct IBitmapSource *v23; // [rsp+60h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a2 + 244);
  v9 = a7;
  v11 = a8;
  v23 = 0LL;
  v19 = v8;
  LODWORD(v8) = *(_DWORD *)(a2 + 252);
  v21 = 0;
  v20 = v8;
  *a7 = 0;
  *v11 = 0;
  v12 = *(struct CImageSource **)(a1 + 528);
  v22 = 0LL;
  BitmapCurrentValue = GetBitmapCurrentValue(v12, (const struct BitmapSourceInfo *)&v19, &v23);
  v14 = BitmapCurrentValue;
  if ( BitmapCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapCurrentValue, 0x16Au);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 528);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 8) + 32LL))(v15 + 8);
      v17 = *(_QWORD *)(a1 + 528);
      *(_BYTE *)(a1 + 380) = v16;
      *(_BYTE *)(a1 + 381) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 24LL))(v17 + 8);
    }
    else
    {
      *(_WORD *)(a1 + 380) = 0;
    }
    if ( !v23 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL) + 104LL))(*(_QWORD *)(a1 + 528) + 8LL) )
        *v9 = 1;
      else
        *v11 = 1;
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v23);
  return v14;
}
