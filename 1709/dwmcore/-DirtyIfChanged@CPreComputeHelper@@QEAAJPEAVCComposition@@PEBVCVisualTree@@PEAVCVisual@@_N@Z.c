/*
 * XREFs of ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x1800B0634
 * Callers:
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180055130 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeHelper::DirtyIfChanged(
        CPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        bool a5)
{
  unsigned int v7; // ebx
  struct _LIST_ENTRY *v10; // rsi
  struct _LIST_ENTRY *TreeData; // rax
  signed int v13; // eax
  __int64 v14; // r9
  signed int v15; // eax

  v7 = 0;
  *((_DWORD *)this + 2) = 0;
  v10 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 45);
  TreeData = CVisual::FindTreeData(a4, a3);
  if ( !TreeData || TreeData[7].Blink < v10 )
  {
    v13 = (**(__int64 (__fastcall ***)(CPreComputeHelper *, struct CComposition *, const struct CVisualTree *, struct CVisual *, struct _LIST_ENTRY *))this)(
            this,
            a2,
            a3,
            a4,
            v10);
    v7 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x20u);
    }
    else
    {
      LOBYTE(v14) = a5;
      v15 = (*(__int64 (__fastcall **)(CPreComputeHelper *, const struct CVisualTree *, struct _LIST_ENTRY *, __int64))(*(_QWORD *)this + 8LL))(
              this,
              a3,
              v10,
              v14);
      v7 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x22u);
    }
  }
  return v7;
}
