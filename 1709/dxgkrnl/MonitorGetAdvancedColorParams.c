/*
 * XREFs of MonitorGetAdvancedColorParams @ 0x1C00D8B18
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000BB68 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _BYTE *a9,
        _BYTE *a10,
        bool *a11,
        bool *a12)
{
  __int64 result; // rax
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rdi
  __m128i v18; // xmm3
  unsigned __int64 v19; // xmm2_8
  char v20; // dl
  bool v21; // zf
  bool *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  struct DXGMONITOR *v26; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v26 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v26);
  if ( (int)result >= 0 )
  {
    v17 = v26;
    if ( !v26 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v23);
      v25 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 280), 1u);
    v18 = *(__m128i *)((char *)v17 + 612);
    v19 = _mm_srli_si128(*(__m128i *)((char *)v17 + 596), 8).m128i_u64[0];
    *a2 = *(_QWORD *)((char *)v17 + 596);
    *a3 = v19;
    *a4 = v18.m128i_i32[0];
    a4[1] = v18.m128i_i32[1];
    *a5 = _mm_srli_si128(v18, 8).m128i_u64[0];
    *a6 = *((_DWORD *)v17 + 158);
    *a7 = *((_DWORD *)v17 + 159);
    *a8 = *((_DWORD *)v17 + 160);
    v20 = *((_BYTE *)v17 + 649);
    *a9 = *((_BYTE *)v17 + 648);
    *a10 = v20;
    v21 = HIBYTE(*(_QWORD *)((char *)v17 + 588)) == 0;
    v22 = a12;
    *a11 = (unsigned __int8)BYTE6(*(_QWORD *)((char *)v17 + 588)) != 0;
    *v22 = !v21;
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 280));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
