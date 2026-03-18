/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18003562C
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180035430 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  int v1; // ebx
  struct CD2DFactory *v3; // r14
  enum D2D1_FACTORY_TYPE v4; // ecx
  struct CD2DFactory *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  unsigned int i; // r14d
  unsigned int v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( *((_QWORD *)this + 7) )
    return (unsigned int)v1;
  v3 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v5 = qword_18026EF28;
  if ( qword_18026EF28 )
    goto LABEL_3;
  v11 = CD2DFactory::Create(v4, 0, &qword_18026EF28);
  v1 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x10Fu);
  }
  else
  {
    v12 = CMesh2DEffect::Register(qword_18026EF28);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x13Fu);
    if ( v1 >= 0 )
    {
      v5 = qword_18026EF28;
LABEL_3:
      v3 = v5;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x111u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x3FFu);
LABEL_4:
  LeaveCriticalSection(&CriticalSection);
  if ( v1 < 0 )
  {
    v15 = 254;
    v13 = v1;
  }
  else
  {
    v6 = (__int64 *)*((_QWORD *)v3 + 3);
    if ( *((_DWORD *)this + 8) == 1 )
    {
      v20 = *(_OWORD *)*((_QWORD *)this + 1);
      v7 = *v6;
      v19 = v20;
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v7 + 40))(v6, &v20, &v18);
      v1 = v8;
      if ( v8 >= 0 )
      {
        v9 = v18;
        v18 = 0LL;
        goto LABEL_8;
      }
      v15 = 259;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v6 + 80))(v6, &v17);
      v1 = v8;
      if ( v8 < 0 )
      {
        v15 = 266;
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 136LL))(v17, &v16);
        v1 = v8;
        if ( v8 < 0 )
        {
          v15 = 268;
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 8); ++i )
          {
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v16 + 40LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 4)).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 4)).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 12)).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
              v16,
              _mm_unpacklo_ps(
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i),
                (__m128)*(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 12)).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 1LL);
          }
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
          v1 = v8;
          if ( v8 >= 0 )
          {
            v9 = v17;
            v17 = 0LL;
LABEL_8:
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v9, 0LL) )
              ReleaseInterfaceNoNULL<CManipulationManager>(v9);
            goto LABEL_10;
          }
          v15 = 282;
        }
      }
    }
    v13 = v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v15);
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v1;
}
