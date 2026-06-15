/*
 * XREFs of privateCreateSpatialCrossProcessEndpoint @ 0x140058E54
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x140058F8C (CreateSpatialCrossProcessEndpointRT.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400575B0 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005765C (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall privateCreateSpatialCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rax
  CSpatialCrossProcessServerInputEndpoint *v9; // rax
  CSpatialCrossProcessClientOutputEndpoint *v10; // rdi
  __int64 v11; // rax
  void *v12; // rax
  CSpatialCrossProcessClientOutputEndpoint *v13; // rax

  v6 = *(_QWORD *)&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data1 - *a1;
  if ( *(_QWORD *)&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v11 = *(_QWORD *)&GUID_9371e7ff_df2d_4962_9585_40424d054550.Data1 - *a1;
    if ( *(_QWORD *)&GUID_9371e7ff_df2d_4962_9585_40424d054550.Data1 == *a1 )
      v11 = *(_QWORD *)GUID_9371e7ff_df2d_4962_9585_40424d054550.Data4 - a1[1];
    if ( v11 )
    {
      v7 = -2147024846;
      goto LABEL_17;
    }
    v12 = (void *)AERTGetDLLRTHeap();
    v13 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate(0x430uLL, v12);
    if ( v13 )
      v10 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v13);
    else
      v10 = 0LL;
  }
  else
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v9 = (CSpatialCrossProcessServerInputEndpoint *)AERTAllocate(0x490uLL, v8);
    if ( v9 )
      v10 = ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::CComObject<CSpatialCrossProcessServerInputEndpoint>(v9);
    else
      v10 = 0LL;
  }
  if ( !v10 )
  {
    v7 = -2147024882;
LABEL_17:
    SpatialCPTraceLoggingErrorHelper("privateCreateSpatialCrossProcessEndpoint", 0x66u, v7);
    return v7;
  }
  (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *))(*(_QWORD *)v10 + 8LL))(v10);
  *(_OWORD *)((char *)v10 + 392) = *a2;
  *a4 = (char *)v10 + 8;
  return v7;
}
