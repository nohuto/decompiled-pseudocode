/*
 * XREFs of ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801AD370
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800203A8 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801360E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  signed int v10; // eax
  DWORD v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF
  struct IBitmapDest *v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v15 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) == 0LL;
  v14[2] = *(_DWORD *)(a1 - 200);
  v14[3] = *(_DWORD *)(a1 - 196);
  if ( v6 )
  {
    v7 = -2003292412;
    v13 = 793;
LABEL_13:
    v11 = v7;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v14, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v7 = -2147024809;
    v13 = 800;
    goto LABEL_13;
  }
  v9 = HrCreateDestBitmap(a2[2] - *a2, *(_DWORD *)(v8 + 12) - a2[1], (const struct PixelFormatInfo *)(a1 + 24), &v15);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 809;
    goto LABEL_9;
  }
  v10 = CD3DDeviceLevel1::CopyTexture(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 80LL),
          *(struct IUnknown **)(*(_QWORD *)(a1 - 24) + 128LL),
          *(unsigned int *)(*(_QWORD *)(a1 - 24) + 136LL),
          a2,
          (__int64)v15);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x331u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 24LL))(
           v15,
           0LL,
           1LL,
           a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      v13 = 824;
LABEL_9:
      v11 = v9;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v13);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v15);
  return v7;
}
