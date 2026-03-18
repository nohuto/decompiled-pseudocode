/*
 * XREFs of ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x1801CB364
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CShape::CreateEmptyPathGeometry(struct ID2D1PathGeometry **a1)
{
  struct CD2DFactory *v2; // rsi
  enum D2D1_FACTORY_TYPE v3; // ecx
  struct CD2DFactory *v4; // rax
  signed int v5; // ebx
  signed int v6; // eax
  signed int v7; // eax
  int v8; // eax
  struct ID2D1PathGeometry *v9; // rax
  DWORD v10; // r9d
  unsigned int v12; // [rsp+20h] [rbp-28h]
  struct ID2D1PathGeometry *v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v2 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v4 = qword_18026EF28;
  v5 = 0;
  if ( qword_18026EF28 )
    goto LABEL_8;
  v6 = CD2DFactory::Create(v3, 0, &qword_18026EF28);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x10Fu);
    goto LABEL_15;
  }
  v7 = CMesh2DEffect::Register(qword_18026EF28);
  v5 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x13Fu);
  if ( v5 >= 0 )
  {
    v4 = qword_18026EF28;
LABEL_8:
    v2 = v4;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x111u);
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x3FFu);
LABEL_9:
  LeaveCriticalSection(&CriticalSection);
  if ( v5 < 0 )
  {
    v12 = 431;
    v10 = v5;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v2 + 3) + 80LL))(
           *((_QWORD *)v2 + 3),
           &v13);
    v5 = v8;
    if ( v8 < 0 )
    {
      v12 = 432;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v13 + 136LL))(v13, &v14);
      v5 = v8;
      if ( v8 < 0 )
      {
        v12 = 435;
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v9 = v13;
          v13 = 0LL;
          *a1 = v9;
          goto LABEL_23;
        }
        v12 = 436;
      }
    }
    v10 = v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v12);
  if ( v13 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_23:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v5;
}
