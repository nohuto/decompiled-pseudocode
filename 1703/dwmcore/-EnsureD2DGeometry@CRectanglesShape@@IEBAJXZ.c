/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18000697C
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180006750 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v1; // ebx
  int D2DFactoryNoRef; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int i; // esi
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  struct CD2DFactory *v15; // [rsp+48h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 7) )
    return v1;
  v15 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v15);
  v1 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0xFEu);
  }
  else if ( *((_DWORD *)this + 8) == 1 )
  {
    v17 = *(_OWORD *)*((_QWORD *)this + 1);
    v4 = *((_QWORD *)v15 + 3);
    v16 = v17;
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v4 + 40LL))(v4, &v17, &v14);
    v1 = v5;
    if ( v5 >= 0 )
    {
      v6 = v14;
      v14 = 0LL;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x103u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v15 + 3) + 80LL))(*((_QWORD *)v15 + 3), &v13);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x10Au);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 136LL))(v13, &v12);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x10Cu);
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)this + 8); ++i )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v12 + 40LL))(
            v12,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 4)).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v12 + 80LL))(
            v12,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 4)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v12 + 80LL))(
            v12,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v12 + 80LL))(
            v12,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 1LL);
        }
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
        v1 = v11;
        if ( v11 >= 0 )
        {
          v6 = v13;
          v13 = 0LL;
LABEL_6:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v6, 0LL) )
            ReleaseInterfaceNoNULL<CD2DPencil>(v6);
          goto LABEL_8;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x11Au);
      }
    }
  }
LABEL_8:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v1;
}
