/*
 * XREFs of ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18019BE10
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180017954 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801460D4 (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::LockForRead(__int64 a1, _DWORD *a2, __int64 a3)
{
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF
  struct IBitmapDest *v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v15 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) == 0LL;
  v14[2] = *(_DWORD *)(a1 - 184);
  v14[3] = *(_DWORD *)(a1 - 180);
  if ( v6 )
  {
    v7 = -2003292412;
    v13 = 853;
LABEL_13:
    v11 = v7;
    goto LABEL_14;
  }
  if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v14, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v7 = -2147024809;
    v13 = 860;
    goto LABEL_13;
  }
  v9 = HrCreateDestBitmap(a2[2] - *a2, *(_DWORD *)(v8 + 12) - a2[1], (const struct PixelFormatInfo *)(a1 + 24), &v15);
  v7 = v9;
  if ( v9 < 0 )
  {
    v13 = 869;
    goto LABEL_9;
  }
  v10 = CD3DDeviceLevel1::CopyTexture(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 128LL),
          *(__int64 **)(*(_QWORD *)(a1 - 24) + 136LL),
          *(_DWORD *)(*(_QWORD *)(a1 - 24) + 144LL),
          a2,
          (__int64)v15);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x36Du);
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
      v13 = 884;
LABEL_9:
      v11 = v9;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v13);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v15);
  return v7;
}
