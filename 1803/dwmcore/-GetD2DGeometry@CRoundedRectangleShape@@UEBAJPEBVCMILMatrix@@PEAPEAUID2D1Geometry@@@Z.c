/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x18020C928 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020C9D0 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  int v8; // eax
  signed __int64 v9; // rax
  struct ID2D1Geometry *v10; // rax
  struct ID2D1Geometry *v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( !a2 )
  {
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  v8 = CRoundedRectangleShape::BuildRoundedRectangleShape(this, a2, &v12);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x36u);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, (signed __int64)v12, 0LL);
    v7 = *((_QWORD *)this + 9);
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 9));
      goto LABEL_8;
    }
LABEL_7:
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=((__int64 *)&v12, v7);
  }
LABEL_8:
  v10 = v12;
  v12 = 0LL;
  *a3 = v10;
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return v3;
}
