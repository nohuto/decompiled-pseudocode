/*
 * XREFs of ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C00C76C8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall GetCurrentContentResolution(
        DXGADAPTER *a1,
        unsigned int a2,
        const struct tagRECT **a3,
        struct tagRECT *a4,
        unsigned int *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct tagRECT v12; // xmm0
  const struct tagRECT *v13; // rax
  unsigned int v14; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v16 + 24) = 1001LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 307) + 112LL) + 3760 * v6;
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v17 + 24) = 1004LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v11 = *(_QWORD *)(v10 + 48);
  if ( v11 )
  {
    v12 = *(struct tagRECT *)(v10 + 652);
    v13 = (const struct tagRECT *)(v11 + 24);
    v14 = *(_DWORD *)(v11 + 40);
    *a3 = v13;
    *a4 = v12;
    *a5 = v14;
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = v10;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
}
