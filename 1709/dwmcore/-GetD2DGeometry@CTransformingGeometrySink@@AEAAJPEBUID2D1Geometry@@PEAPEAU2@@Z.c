/*
 * XREFs of ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x1801CB930
 * Callers:
 *     ?TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z @ 0x1801CBBA4 (-TransformGeometry@CTransformingGeometrySink@@SAJPEBVCMILMatrix@@PEBUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CTransformingGeometrySink::GetD2DGeometry(
        CTransformingGeometrySink *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  enum D2D1_FACTORY_TYPE v6; // ecx
  struct CD2DFactory *v7; // rsi
  signed int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  int v13; // eax
  signed int v14; // eax
  __int64 v15; // r8
  DWORD v16; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct CD2DFactory *v19; // [rsp+60h] [rbp+8h]

  EnterCriticalSection(&CriticalSection);
  v7 = qword_18026EF28;
  v8 = 0;
  if ( !qword_18026EF28 )
  {
    v9 = CD2DFactory::Create(v6, 0, &qword_18026EF28);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x10Fu);
    }
    else
    {
      v10 = CMesh2DEffect::Register(qword_18026EF28);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x13Fu);
      if ( v8 >= 0 )
      {
        v7 = qword_18026EF28;
        goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x111u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x3FFu);
    v7 = v19;
  }
LABEL_10:
  LeaveCriticalSection(&CriticalSection);
  if ( v8 < 0 )
  {
    v18 = 93;
    v16 = v8;
    goto LABEL_22;
  }
  v11 = *((_QWORD *)v7 + 3);
  v12 = (_QWORD *)((char *)this + 32);
  v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 80LL))(v11, (char *)this + 32);
  v8 = v13;
  if ( v13 < 0 )
  {
    v18 = 95;
    goto LABEL_17;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 136LL))(*v12, (char *)this + 40);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x60u);
    goto LABEL_23;
  }
  v13 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, _QWORD, __int64, char *))(*(_QWORD *)a2 + 96LL))(
          a2,
          0LL,
          v15,
          (char *)this + 16);
  v8 = v13;
  if ( v13 < 0 )
  {
    v18 = 98;
    goto LABEL_17;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
  v8 = v13;
  if ( v13 < 0 )
  {
    v18 = 100;
LABEL_17:
    v16 = v13;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, v18);
    goto LABEL_23;
  }
  *a3 = (struct ID2D1Geometry *)*v12;
  *v12 = 0LL;
LABEL_23:
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 4);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 5);
  return (unsigned int)v8;
}
