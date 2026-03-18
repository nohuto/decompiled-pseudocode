/*
 * XREFs of ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CEC0
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5BE0 (-GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180056030 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CBitmap *v4; // rcx
  __int64 (__fastcall *v6)(CBitmap *, unsigned int *, unsigned int *); // rax
  int Size; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  float v10; // xmm1_4
  unsigned int v12[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(CBitmap **)(a1 + 72);
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(CBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 48LL);
    if ( v6 == CBitmap::GetSize )
      Size = CBitmap::GetSize(v4, &v13, v12);
    else
      Size = v6(v4, &v13, v12);
    v8 = Size;
    if ( Size < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x101u);
    }
    else
    {
      v9 = v13;
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      v10 = (float)(int)v12[0];
      *(float *)(a4 + 8) = (float)v9;
      *(float *)(a4 + 12) = v10;
    }
  }
  else
  {
    v8 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x10Au);
  }
  return v8;
}
