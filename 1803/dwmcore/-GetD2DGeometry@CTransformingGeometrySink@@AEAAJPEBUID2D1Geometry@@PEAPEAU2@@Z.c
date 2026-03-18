/*
 * XREFs of ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18020ACD8
 * Callers:
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x18020AEA4 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformingGeometrySink::GetD2DGeometry(
        CTransformingGeometrySink *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  int D2DFactoryNoRef; // eax
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v12; // [rsp+20h] [rbp-28h]
  struct CD2DFactory *v13; // [rsp+50h] [rbp+8h] BYREF

  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v13);
  v7 = (_QWORD *)((char *)this + 32);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 93;
    goto LABEL_12;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v13 + 3) + 80LL))(
                      *((_QWORD *)v13 + 3),
                      (char *)this + 32);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 95;
    goto LABEL_12;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v7 + 136LL))(*v7, (char *)this + 40);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x60u);
    goto LABEL_13;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, _QWORD, __int64, char *))(*(_QWORD *)a2 + 96LL))(
                      a2,
                      0LL,
                      v10,
                      (char *)this + 16);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 98;
    goto LABEL_12;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v12 = 100;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, v12);
    goto LABEL_13;
  }
  *a3 = (struct ID2D1Geometry *)*v7;
  *v7 = 0LL;
LABEL_13:
  ReleaseInterface<IBitmapLock>((__int64 *)this + 4);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 5);
  return v8;
}
