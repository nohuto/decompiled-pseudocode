/*
 * XREFs of ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00A916C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall GetCurrentContentResolution(
        DXGADAPTER *a1,
        unsigned int a2,
        const struct tagRECT **a3,
        struct tagRECT *a4,
        unsigned int *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  struct tagRECT v15; // xmm0
  const struct tagRECT *v16; // rax
  unsigned int v17; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v19 + 24) = 1108LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 285) + 112LL) + 3208 * v6;
  if ( !v13 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v20 + 24) = 1111LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v14 = *(_QWORD *)(v13 + 48);
  if ( v14 )
  {
    v15 = *(struct tagRECT *)(v13 + 652);
    v16 = (const struct tagRECT *)(v14 + 24);
    v17 = *(_DWORD *)(v14 + 40);
    *a3 = v16;
    *a4 = v15;
    *a5 = v17;
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v21 + 24) = v13;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
}
