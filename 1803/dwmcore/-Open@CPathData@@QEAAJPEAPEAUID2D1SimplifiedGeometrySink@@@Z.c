/*
 * XREFs of ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1802093A4
 * Callers:
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180198BF0 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802095E0 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18020A6A0 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x1801CE64C (-Attach@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z.c)
 */

__int64 __fastcall CPathData::Open(CPathData *this, struct ID2D1SimplifiedGeometrySink **a2)
{
  volatile __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(&v6, _InterlockedExchange64((volatile __int64 *)this + 9, 0LL));
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 80) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  v4 = *(_QWORD *)this;
  *((_WORD *)this + 28) = 0;
  (*(void (__fastcall **)(CPathData *))(v4 + 8))(this);
  *((_BYTE *)this + 80) = 1;
  *a2 = (CPathData *)((char *)this + 16);
  return 0LL;
}
