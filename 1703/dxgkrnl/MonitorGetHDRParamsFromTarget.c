/*
 * XREFs of MonitorGetHDRParamsFromTarget @ 0x1C00F84E4
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetHDRParamsFromTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _BYTE *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _FAST_MUTEX *v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGMONITOR *v24; // rdi
  __m128i v25; // xmm3
  unsigned __int64 v26; // xmm2_8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  struct DXGMONITOR *v35; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( !*((_QWORD *)a1 + 285) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v27);
  }
  v18 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 285) + 96LL);
  if ( !v18 )
  {
    v28 = WdLogNewEntry5_WdError(0LL, v14);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
  v35 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v18, a2, 0LL, (ULONG **)&v35);
  if ( (int)result >= 0 )
  {
    v24 = v35;
    if ( !v35 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
      WdLogEvent5_WdAssertion(v29);
      v34 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
      WdLogEvent5_WdAssertion(v34);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 240), 1u);
    v25 = *(__m128i *)((char *)v24 + 572);
    v26 = _mm_srli_si128(*(__m128i *)((char *)v24 + 556), 8).m128i_u64[0];
    *a3 = *(_QWORD *)((char *)v24 + 556);
    *a4 = v26;
    *a5 = v25.m128i_i64[0];
    *a6 = _mm_srli_si128(v25, 8).m128i_u64[0];
    *a7 = *((_DWORD *)v24 + 148);
    *a8 = *((_DWORD *)v24 + 149);
    *a9 = *((_DWORD *)v24 + 150);
    *a10 = *((_BYTE *)v24 + 604);
    ExReleaseResourceLite((PERESOURCE)((char *)v24 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
