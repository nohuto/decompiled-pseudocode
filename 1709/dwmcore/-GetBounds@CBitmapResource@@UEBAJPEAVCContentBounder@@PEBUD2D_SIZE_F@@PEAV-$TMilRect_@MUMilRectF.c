/*
 * XREFs of ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D5D0
 * Callers:
 *     ?GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C66C0 (-GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18008C6E0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CBitmap *v4; // rcx
  __int64 (__fastcall *v6)(CBitmap *, unsigned int *, unsigned int *); // rax
  signed int Size; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  float v10; // xmm1_4
  unsigned int v12[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(CBitmap **)(a1 + 72);
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(CBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 32LL);
    if ( v6 == CBitmap::GetSize )
      Size = CBitmap::GetSize(v4, &v13, v12);
    else
      Size = v6(v4, &v13, v12);
    v8 = Size;
    if ( Size < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Size, 0xAEu);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F0C, 0xB7u);
  }
  return v8;
}
