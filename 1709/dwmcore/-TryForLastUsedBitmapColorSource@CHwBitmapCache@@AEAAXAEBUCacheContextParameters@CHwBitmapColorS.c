/*
 * XREFs of ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801AF410
 * Callers:
 *     ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18007EBA8 (-TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@C.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089F6C (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18009D000 (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1801AE968 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1801B46D8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 */

void CHwBitmapCache::TryForLastUsedBitmapColorSource(CHwBitmapCache *this, __int64 a2, int a3, ...)
{
  __int64 v3; // r9
  char v7; // al
  DisplayId *v8; // rax
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // esi
  void (__fastcall ***v13)(_QWORD); // rcx
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  _QWORD *v16; // [rsp+60h] [rbp+28h]
  struct CHwBitmapColorSource **v17; // [rsp+68h] [rbp+30h]
  va_list va1; // [rsp+70h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD *);
  v17 = va_arg(va1, struct CHwBitmapColorSource **);
  v3 = *((_QWORD *)this + 62);
  if ( v3 )
  {
    if ( *(_DWORD *)(a2 + 36) == *((_DWORD *)this + 135)
      && *((_BYTE *)this + 516) == *(_BYTE *)(a2 + 12)
      && (unsigned int)(*(_DWORD *)(a2 + 8) - 4) <= 1 == (unsigned int)(*((_DWORD *)this + 128) - 4) <= 1
      && *((_QWORD *)this + 63) == *(_QWORD *)a2
      && *((_DWORD *)this + 130) == *(_DWORD *)(a2 + 16)
      && *((_BYTE *)this + 524) == *(_BYTE *)(a2 + 20)
      && *((_DWORD *)this + 132) == *(_DWORD *)(a2 + 24)
      && *((_DWORD *)this + 136) == *(_DWORD *)(a2 + 40) )
    {
      v7 = *((_BYTE *)this + 548);
      if ( v7 == *(_BYTE *)(a2 + 44) && (v7 != 1 || CColorKey::operator==((float *)this + 138, (float *)(a2 + 48))) )
      {
        v8 = (DisplayId *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, (__int64 *)va);
        if ( !DisplayId::IsSpecific(v8)
          || *(_DWORD *)(a2 + 28) == *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 62)
                                                                                             + 64LL))(
                                                  *((_QWORD *)this + 62),
                                                  (__int64 *)va) )
        {
          v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 17);
          v14 = 0LL;
          (**v9)(v9, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, (__int64 *)va);
          v10 = v14;
          if ( v14 && (v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14), v10 = v14, v11 == 3) )
            v12 = 2;
          else
            v12 = 0;
          ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v10);
          if ( (unsigned __int8)CHwBitmapColorSource::CheckRequiredRealizationBounds(
                                  *((_QWORD *)this + 62),
                                  a3,
                                  *(_DWORD *)(a2 + 8),
                                  *(_DWORD *)(a2 + 40),
                                  v12) )
          {
            v13 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 62);
            *v16 = v13;
            (**v13)(v13);
            if ( *((_QWORD *)this + 61) )
              CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(this, v17);
          }
        }
      }
    }
  }
}
