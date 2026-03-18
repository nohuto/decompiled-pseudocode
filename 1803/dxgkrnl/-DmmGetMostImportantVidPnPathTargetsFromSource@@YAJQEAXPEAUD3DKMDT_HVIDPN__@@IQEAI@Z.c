/*
 * XREFs of ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1C0212E3C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C019200C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00AA594 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantVidPnPathTargetsFromSource(
        DXGADAPTER *this,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        unsigned int *const a4)
{
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  if ( !a4 || (v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a2)) == 0 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_6:
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 307);
  if ( !v13 )
  {
    v10 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v10 + 24) = this;
    goto LABEL_6;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, v14);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                (const struct DMMVIDPNTOPOLOGY *)(v9 + 96),
                                                a3,
                                                a4);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
