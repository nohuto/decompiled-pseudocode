/*
 * XREFs of ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1801E875C
 * Callers:
 *     ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801E88D4 (-TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@C.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1801E7FB0 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 *     ?GetSingleContributorToFloatRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E9194 (-GetSingleContributorToFloatRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV-$TMilRect_@M.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801E9340 (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV-$TMilRect@IUMilRe.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1801EE71C (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUCacheContextParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE9D8 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV-$CDelayComput.c)
 */

_DWORD *__fastcall CHwBitmapCache::TryForDeviceBitmapColorSource(
        __int64 a1,
        _DWORD *a2,
        struct MilRectF *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _DWORD *result; // rax
  _QWORD *v12; // [rsp+30h] [rbp-78h] BYREF
  char v13[8]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v15; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a4 + 192);
  v7 = *(_QWORD **)(a1 + 488);
  v8 = 0LL;
  v12 = 0LL;
  result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  if ( (_DWORD)result == 3 )
  {
    result = (_DWORD *)CHwBitmapColorSource::ComputeMinimumRealizationBounds(v5 & -(__int64)(v5 != 16), a3, a2, v14);
    if ( (_BYTE)result )
    {
      CDelayComputedBounds<CoordinateSpace::RealizationSampling>::GetBounds(a3, &v15);
      result = (_DWORD *)CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v5 - 16, v14, &v12);
      if ( (_BYTE)result
        || (result = (_DWORD *)CBitmapOfDeviceBitmaps::GetSingleContributorToFloatRealizationAreaNoRef(
                                 v5 - 16,
                                 &v15,
                                 &v12),
            (_BYTE)result) )
      {
        v7 = *(_QWORD **)(a1 + 488);
        v8 = v12;
        goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    while ( v7 )
    {
      result = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v7 + 64LL))(v7, v13);
      if ( *result == DisplayId::None
        || (result = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(*v7 + 64LL))(v7, &v12), a2[7] == *result) )
      {
        if ( v8 )
        {
          if ( v7 == v8 )
            goto LABEL_10;
        }
        else
        {
          result = (_DWORD *)CHwBitmapColorSource::CheckRequiredRealizationBounds(
                               (_DWORD)v7,
                               (_DWORD)a3,
                               a2[2],
                               a2[10],
                               1);
          if ( (_BYTE)result )
          {
LABEL_10:
            *a5 = v7;
            return (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))*v7)(v7);
          }
        }
      }
      v7 = (_QWORD *)v7[43];
    }
  }
  return result;
}
