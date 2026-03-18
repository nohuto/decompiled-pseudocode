/*
 * XREFs of ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18020A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1802093A4 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  CPathData *v3; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r9d
  int v10; // eax
  __int64 v11; // r8
  struct ID2D1SimplifiedGeometrySink *v12; // rdi
  struct CPathData *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-30h]
  CPathData *v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  struct ID2D1SimplifiedGeometrySink *v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v5 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(*(_QWORD *)this + 24LL))(this, 0LL, &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    v15 = 1116;
LABEL_14:
    v9 = v5;
    goto LABEL_15;
  }
  v7 = v18;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL))(v7, &v20);
  v8 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
  if ( v8 )
  {
    v17 = 0LL;
    v8 = CPathData::CPathData(v8, v20, &v17);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v16, v8);
  v3 = v16;
  if ( v16 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    v10 = CPathData::Open(v3, &v19);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x462u);
      goto LABEL_16;
    }
    v12 = v19;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v18 + 96LL))(
           v18,
           0LL,
           v11,
           v19);
    v6 = v5;
    if ( v5 < 0 )
    {
      v15 = 1125;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v12 + 72LL))(v12);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v13 = v3;
        v3 = 0LL;
        *a2 = v13;
        goto LABEL_16;
      }
      v15 = 1126;
    }
    goto LABEL_14;
  }
  v6 = -2147024882;
  v15 = 1120;
  v9 = -2147024882;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v15);
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  if ( v3 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v3 + 16LL))(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return v6;
}
