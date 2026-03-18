/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x180209860
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180209AE0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v1; // ebx
  int D2DFactoryNoRef; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned int i; // esi
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  struct CD2DFactory *v15; // [rsp+48h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF

  v1 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 8) )
    return v1;
  v15 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v15);
  v1 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0xFEu);
  }
  else if ( *((_DWORD *)this + 10) == 1 )
  {
    v17 = *(_OWORD *)*((_QWORD *)this + 2);
    v4 = *((_QWORD *)v15 + 3);
    v16 = v17;
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, &v17, &v14);
    v1 = v5;
    if ( v5 >= 0 )
    {
      v6 = v14;
      v14 = 0LL;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x103u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v15 + 3) + 80LL))(*((_QWORD *)v15 + 3), &v13);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x10Au);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 136LL))(v13, &v12);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x10Cu);
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)this + 10); ++i )
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 40LL))(
            v12,
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL * i),
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v12 + 80LL))(
            v12,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 80LL))(
            v12,
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL * i + 8));
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v12 + 80LL))(
            v12,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 1LL);
        }
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
        v1 = v10;
        if ( v10 >= 0 )
        {
          v6 = v13;
          v13 = 0LL;
LABEL_13:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v6, 0LL) )
            ReleaseInterfaceNoNULL<IWICBitmap>(v6);
          goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x11Au);
      }
    }
  }
LABEL_19:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v1;
}
