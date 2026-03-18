/*
 * XREFs of ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x18007EA84
 * Callers:
 *     ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18007EBA8 (-TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@C.c)
 * Callees:
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18007DDF0 (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV-$TMilRect@IUMilRe.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUCacheContextParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEB78 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@SA_NPEAVIBitmapSource@@AEBV-$CDelayComput.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800BEDE0 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801AC4E0 (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1801B46D8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 */

char __fastcall CHwBitmapCache::TryForDeviceBitmapColorSource(
        __int64 a1,
        _DWORD *a2,
        struct MilRectF *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _DWORD *v11; // rax
  _QWORD *v13; // [rsp+30h] [rbp-78h] BYREF
  char v14[8]; // [rsp+38h] [rbp-70h] BYREF
  RECT v15; // [rsp+40h] [rbp-68h] BYREF
  char v16[16]; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a4 + 192);
  v7 = *(_QWORD **)(a1 + 488);
  v8 = 0LL;
  v13 = 0LL;
  LODWORD(v11) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  if ( (_DWORD)v11 == 3 )
  {
    LOBYTE(v11) = CHwBitmapColorSource::ComputeMinimumRealizationBounds(v5 & -(__int64)(v5 != 16), a3, a2, &v15);
    if ( (_BYTE)v11 )
    {
      CDelayComputedBounds<CoordinateSpace::RealizationSampling>::GetBounds(a3);
      LOBYTE(v11) = CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v5 - 16, &v15, &v13);
      if ( (_BYTE)v11
        || (LOBYTE(v11) = CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v5 - 16, v16, &v13),
            (_BYTE)v11) )
      {
        v7 = *(_QWORD **)(a1 + 488);
        v8 = v13;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    while ( v7 )
    {
      v11 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v7 + 64LL))(v7, v14);
      if ( *v11 == DisplayId::None
        || (v11 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(*v7 + 64LL))(v7, &v13), a2[7] == *v11) )
      {
        if ( v8 )
        {
          if ( v7 == v8 )
            goto LABEL_9;
        }
        else
        {
          LOBYTE(v11) = CHwBitmapColorSource::CheckRequiredRealizationBounds((_DWORD)v7, (_DWORD)a3, a2[2], a2[10], 1);
          if ( (_BYTE)v11 )
          {
LABEL_9:
            *a5 = v7;
            LOBYTE(v11) = (*(__int64 (__fastcall **)(_QWORD *))*v7)(v7);
            return (char)v11;
          }
        }
      }
      v7 = (_QWORD *)v7[43];
    }
  }
  return (char)v11;
}
