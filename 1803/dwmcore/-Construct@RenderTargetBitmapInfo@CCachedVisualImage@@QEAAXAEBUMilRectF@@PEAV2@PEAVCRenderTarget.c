/*
 * XREFs of ?Construct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXAEBUMilRectF@@PEAV2@PEAVCRenderTargetBitmap@@W4Enum@MilStretch@@@Z @ 0x1800B686C
 * Callers:
 *     ?CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAURenderTargetBitmapInfo@1@@Z @ 0x1800B4578 (-CreateRenderTargetInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Construct(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rdi
  __int128 v8; // xmm0
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]

  v5 = 0LL;
  *(_QWORD *)a1 = a3;
  v10 = 0LL;
  *(_QWORD *)(a1 + 8) = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    a4 = *(_QWORD *)(a1 + 8);
  }
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a4)(a4, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v10) < 0
    || (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(
         v10,
         (*(_QWORD *)a1 + 128LL) & -(__int64)(*(_QWORD *)a1 != 0LL)) < 0 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    v5 = v10;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v10;
    v10 = 0LL;
  }
  *(_BYTE *)(a1 + 44) = 1;
  v8 = *a2;
  *(_DWORD *)(a1 + 40) = a5;
  v11 = v8;
  *(_OWORD *)(a1 + 24) = v8;
  return ReleaseInterfaceNoNULL<IWICBitmap>(v5);
}
