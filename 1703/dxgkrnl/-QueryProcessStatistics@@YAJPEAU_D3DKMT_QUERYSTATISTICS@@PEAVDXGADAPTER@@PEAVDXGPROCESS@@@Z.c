/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C017B3E4
 * Callers:
 *     DxgkQueryStatistics @ 0x1C017D700 (DxgkQueryStatistics.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C00253D0 (-VidMmQueryProcessStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QU.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00254F8 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C0025578 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x1C00255FC (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x1C002567C (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessStatistics; // r14d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int ProcessNodeStatistics; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx

  v4 = 0LL;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 3643LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 || !*((_QWORD *)a2 + 286) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 3644LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  if ( !a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 3646LL;
    WdLogEvent5_WdAssertion(v14);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)a3 + 10) + 8LL) != CurrentThread
    && a3 != DXGPROCESS::GetCurrent((__int64)CurrentThread) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 3647LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    ProcessStatistics = VIDMM_EXPORT::VidMmQueryProcessStatistics(
                          *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 286) + 432LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 286) + 440LL),
                          a3,
                          (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessStatistics < 0 )
      return (unsigned int)ProcessStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 286) + 408LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 286) + 416LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 4:
        v24 = *((_QWORD *)a2 + 286);
        v25 = *((_QWORD *)a3 + 8);
        v26 = *(_QWORD *)(v24 + 432);
        if ( v25 )
          v4 = *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)v26 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v26 + 8) + 320LL))(
                                  *(_QWORD *)(v24 + 440),
                                  *((unsigned int *)a1 + 200),
                                  v4,
                                  (char *)a1 + 24);
        break;
      case 6:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 286) + 408LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 286) + 416LL),
                                  *((unsigned int *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 8:
        ProcessNodeStatistics = VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                                  *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 286) + 408LL),
                                  *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 286) + 416LL),
                                  *((unsigned int *)a1 + 200),
                                  a3,
                                  (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
        break;
      case 9:
        v20 = *((_QWORD *)a2 + 286);
        v21 = *((_QWORD *)a3 + 8);
        v22 = *(_QWORD *)(v20 + 432);
        if ( v21 )
          v4 = *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)v22 - 1));
        ProcessNodeStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v22 + 8) + 328LL))(
                                  *(_QWORD *)(v20 + 440),
                                  *((unsigned int *)a1 + 200),
                                  v4,
                                  (char *)a1 + 24);
        break;
      default:
        ProcessStatistics = -1073741811;
        v19 = WdLogNewEntry5_WdWarning((unsigned int)(*(_DWORD *)a1 - 8), v10, v12, v13);
        *(_QWORD *)(v19 + 24) = *(int *)a1;
        WdLogEvent5_WdWarning(v19);
        return (unsigned int)ProcessStatistics;
    }
    return ProcessNodeStatistics;
  }
  v27 = *((_QWORD *)a2 + 286);
  v28 = *((_QWORD *)a3 + 8);
  v29 = *(_QWORD *)(v27 + 432);
  if ( v28 )
    v30 = *(_QWORD *)(v28 + 8LL * (unsigned int)(*(_DWORD *)v29 - 1));
  else
    v30 = 0LL;
  ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v29 + 8) + 304LL))(
                        *(_QWORD *)(v27 + 440),
                        v30,
                        (char *)a1 + 24);
  if ( ProcessStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 286) + 408LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 286) + 416LL),
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  return (unsigned int)ProcessStatistics;
}
