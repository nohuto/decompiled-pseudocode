/*
 * XREFs of MonitorGetAdvancedColorParams @ 0x1C00AA124
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ABB70 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
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
        bool *a10,
        _BYTE *a11,
        bool *a12,
        bool *a13)
{
  __int64 result; // rax
  __int64 v17; // rcx
  struct DXGMONITOR *v18; // rdi
  __m128i v19; // xmm3
  unsigned __int64 v20; // xmm2_8
  char v21; // dl
  __int64 v22; // r8
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
    v18 = v26;
    if ( !v26 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v23);
      v25 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
    v19 = *(__m128i *)((char *)v18 + 632);
    v20 = _mm_srli_si128(*(__m128i *)((char *)v18 + 616), 8).m128i_u64[0];
    *a2 = *((_QWORD *)v18 + 77);
    *a3 = v20;
    *a4 = v19.m128i_i32[0];
    a4[1] = v19.m128i_i32[1];
    *a5 = _mm_srli_si128(v19, 8).m128i_u64[0];
    *a6 = *((_DWORD *)v18 + 163);
    *a7 = *((_DWORD *)v18 + 164);
    *a8 = *((_DWORD *)v18 + 165);
    v21 = *((_BYTE *)v18 + 676);
    v22 = *((_QWORD *)v18 + 76);
    *a9 = *((_BYTE *)v18 + 668);
    *a10 = (unsigned int)(*((_DWORD *)v18 + 168) - 3) <= 2;
    *a11 = v21;
    *a12 = BYTE6(v22) != 0;
    *a13 = HIBYTE(v22) != 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
