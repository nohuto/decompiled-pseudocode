/*
 * XREFs of ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x180021CB8
 * Callers:
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180097AA8 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeHelper::DirtyIfChanged(
        CPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        bool a5)
{
  unsigned int v7; // ebx
  unsigned __int64 v10; // rsi
  struct CTreeData *TreeData; // rax
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax

  v7 = 0;
  *((_DWORD *)this + 2) = 0;
  v10 = *((_QWORD *)a2 + 50);
  TreeData = CVisual::FindTreeData(a4, a3);
  if ( !TreeData || *((_QWORD *)TreeData + 15) < v10 )
  {
    v12 = (**(__int64 (__fastcall ***)(CPreComputeHelper *, struct CComposition *, const struct CVisualTree *, struct CVisual *, unsigned __int64))this)(
            this,
            a2,
            a3,
            a4,
            v10);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x20u);
    }
    else
    {
      LOBYTE(v13) = a5;
      v14 = (*(__int64 (__fastcall **)(CPreComputeHelper *, const struct CVisualTree *, unsigned __int64, __int64))(*(_QWORD *)this + 8LL))(
              this,
              a3,
              v10,
              v13);
      v7 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x22u);
    }
  }
  return v7;
}
