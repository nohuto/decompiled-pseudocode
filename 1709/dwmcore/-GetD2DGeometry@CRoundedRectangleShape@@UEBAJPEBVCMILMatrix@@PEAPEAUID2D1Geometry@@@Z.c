/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CC410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x1801CBD00 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CBD90 (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  signed int v8; // eax
  struct ID2D1Geometry *v9; // rax
  struct ID2D1Geometry *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( !a2 )
  {
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  v8 = CRoundedRectangleShape::BuildRoundedRectangleShape(this, a2, &v11);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x36u);
    goto LABEL_11;
  }
  if ( !a2 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 7, (signed __int64)v11, 0LL) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
      goto LABEL_9;
    }
    v7 = *((_QWORD *)this + 7);
LABEL_8:
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=((__int64 *)&v11, v7);
  }
LABEL_9:
  v9 = v11;
  v11 = 0LL;
  *a3 = v9;
LABEL_11:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return v3;
}
