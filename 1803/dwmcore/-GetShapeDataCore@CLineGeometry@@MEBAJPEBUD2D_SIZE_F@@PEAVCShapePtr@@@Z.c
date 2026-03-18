/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180198BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1802093A4 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18020C784 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  CPathData *v3; // rdi
  int D2DFactoryNoRef; // eax
  unsigned int v7; // ebx
  LPVOID v8; // rax
  struct ID2D1SimplifiedGeometrySink *v9; // rbx
  CPathSegmentsShape *v10; // rax
  CPathSegmentsShape *v11; // rsi
  unsigned int v13; // [rsp+20h] [rbp-30h]
  CPathData *v14; // [rsp+30h] [rbp-20h] BYREF
  struct CD2DFactory *v15; // [rsp+38h] [rbp-18h] BYREF
  __int128 v16; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v17; // [rsp+88h] [rbp+38h] BYREF

  v3 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v15);
  v7 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v13 = 85;
  }
  else
  {
    v8 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v8 )
    {
      v16 = 0LL;
      v8 = (LPVOID)CPathData::CPathData(v8, *((_QWORD *)v15 + 3), &v16);
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v14, (__int64)v8);
    v3 = v14;
    if ( !v14 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x58u);
      goto LABEL_18;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    D2DFactoryNoRef = CPathData::Open(v3, &v17);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v13 = 90;
    }
    else
    {
      v9 = v17;
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD, __int64))(*(_QWORD *)v17 + 40LL))(
        v17,
        *((_QWORD *)this + 17),
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v9 + 48LL))(
        v9,
        (char *)this + 144,
        1LL);
      (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, 0LL);
      D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v9 + 72LL))(v9);
      v7 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        v10 = (CPathSegmentsShape *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
        if ( v10 )
          v11 = CPathSegmentsShape::CPathSegmentsShape(v10, v3);
        else
          v11 = 0LL;
        if ( v11 )
        {
          CShapePtr::Release(a3);
          *a3 = v11;
          *((_BYTE *)a3 + 8) = 1;
        }
        else
        {
          v7 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x63u);
        }
        goto LABEL_18;
      }
      v13 = 96;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, v13);
LABEL_18:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  if ( v3 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v3 + 16LL))(v3);
  return v7;
}
