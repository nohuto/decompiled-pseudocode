/*
 * XREFs of ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x1801CC130
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CBD90 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateFullRectD2DGeometry(
        const struct MilPoint2F *a1,
        struct ID2D1PathGeometry **a2)
{
  unsigned int v2; // xmm0_4
  struct CD2DFactory *v3; // rsi
  unsigned int v4; // xmm1_4
  enum D2D1_FACTORY_TYPE v6; // ecx
  struct CD2DFactory *v7; // rax
  signed int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  int v11; // eax
  signed int v12; // eax
  DWORD v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+40h]
  __int64 v20; // [rsp+88h] [rbp+48h]

  v2 = *(_DWORD *)a1;
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 1);
  v18 = 0LL;
  v19 = __PAIR64__(v4, v2);
  v20 = *((_QWORD *)a1 + 3);
  v16 = *((_QWORD *)a1 + 11);
  v17 = *((_QWORD *)a1 + 8);
  EnterCriticalSection(&CriticalSection);
  v7 = qword_18026EF28;
  v8 = 0;
  if ( qword_18026EF28 )
    goto LABEL_8;
  v9 = CD2DFactory::Create(v6, 0, &qword_18026EF28);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x10Fu);
    goto LABEL_16;
  }
  v10 = CMesh2DEffect::Register(qword_18026EF28);
  v8 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x13Fu);
  if ( v8 >= 0 )
  {
    v7 = qword_18026EF28;
LABEL_8:
    v3 = v7;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x111u);
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x3FFu);
LABEL_9:
  LeaveCriticalSection(&CriticalSection);
  if ( v8 < 0 )
  {
    v15 = 243;
    v13 = v8;
    goto LABEL_20;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v3 + 3) + 80LL))(
          *((_QWORD *)v3 + 3),
          a2);
  v8 = v11;
  if ( v11 < 0 )
  {
    v15 = 244;
    goto LABEL_14;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 136LL))(*a2, &v18);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xF6u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, v19, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, v20);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, v16);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 80LL))(v18, v17);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 64LL))(v18, 1LL);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 72LL))(v18);
    v8 = v11;
    if ( v11 < 0 )
    {
      v15 = 254;
LABEL_14:
      v13 = v11;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v15);
    }
  }
  ReleaseInterface<ID2D1PrivateCompositorBuffer>(&v18);
  return (unsigned int)v8;
}
