/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180209AE0
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18020A1C0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x180209860 (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int D2DFactoryNoRef; // eax
  int v9; // eax
  int v10; // eax
  unsigned int i; // ebx
  __int64 v12; // rax
  int v13; // xmm2_4
  int v14; // xmm0_4
  int v15; // eax
  struct ID2D1Geometry *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-29h] BYREF
  struct ID2D1Geometry *v19; // [rsp+38h] [rbp-21h] BYREF
  struct CD2DFactory *v20; // [rsp+40h] [rbp-19h] BYREF
  int v21; // [rsp+48h] [rbp-11h] BYREF
  int v22; // [rsp+4Ch] [rbp-Dh]
  int v23; // [rsp+50h] [rbp-9h]
  int v24; // [rsp+54h] [rbp-5h]
  int v25; // [rsp+58h] [rbp-1h]
  int v26; // [rsp+5Ch] [rbp+3h]
  int v27; // [rsp+60h] [rbp+7h]
  int v28; // [rsp+64h] [rbp+Bh]
  _QWORD v29[4]; // [rsp+68h] [rbp+Fh] BYREF

  v19 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v20);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x3Cu);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v20 + 3) + 80LL))(
             *((_QWORD *)v20 + 3),
             &v19);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3Eu);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v19 + 136LL))(v19, &v18);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x40u);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 10); ++i )
          {
            v12 = *((_QWORD *)this + 2);
            v13 = *(_DWORD *)(v12 + 16LL * i);
            v14 = *(_DWORD *)(v12 + 16LL * i + 8);
            v22 = *(_DWORD *)(v12 + 16LL * i + 4);
            v24 = v22;
            v26 = *(_DWORD *)(v12 + 16LL * i + 12);
            v28 = v26;
            v21 = v13;
            v23 = v14;
            v25 = v14;
            v27 = v13;
            CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v21, (struct MilPoint2F *)v29, 4);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, v29[0], 0LL);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 80LL))(v18, v29[1]);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 80LL))(v18, v29[2]);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 80LL))(v18, v29[3]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 1LL);
          }
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL))(v18);
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x62u);
          }
          else
          {
            v16 = v19;
            v19 = 0LL;
            *a3 = v16;
          }
        }
      }
    }
  }
  else
  {
    v6 = CRectanglesShape::EnsureD2DGeometry(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x33u);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v19);
  ReleaseInterface<IBitmapLock>(&v18);
  return v7;
}
