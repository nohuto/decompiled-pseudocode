/*
 * XREFs of ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x18020A0CC
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180063DA0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::CreateEmptyPathGeometry(struct ID2D1PathGeometry **a1)
{
  int D2DFactoryNoRef; // ebx
  struct ID2D1PathGeometry *v3; // rax
  unsigned int v4; // eax
  struct ID2D1PathGeometry *v6; // [rsp+58h] [rbp+28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  struct CD2DFactory *v8; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)a1, &v8);
  if ( D2DFactoryNoRef < 0 )
  {
    v4 = 443;
  }
  else
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v8 + 3) + 80LL))(
                        *((_QWORD *)v8 + 3),
                        &v6);
    if ( D2DFactoryNoRef < 0 )
    {
      v4 = 444;
    }
    else
    {
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)v6 + 136LL))(
                          v6,
                          &v7);
      if ( D2DFactoryNoRef < 0 )
      {
        v4 = 447;
      }
      else
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
        if ( D2DFactoryNoRef >= 0 )
        {
          v3 = v6;
          v6 = 0LL;
          *a1 = v3;
          goto LABEL_12;
        }
        v4 = 448;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, v4);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_12:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)D2DFactoryNoRef;
}
