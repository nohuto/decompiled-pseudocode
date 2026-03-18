/*
 * XREFs of ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0190B40
 * Callers:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C0190A18 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C0190ED8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddPresentPath(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  v5 = a4;
  v6 = a3;
  v7 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64, __int16, int))a2 + 5))(
         a1,
         a3,
         a4,
         255LL,
         -1,
         2);
  v9 = v7;
  switch ( v7 )
  {
    case -1071774975:
      v10 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
      v10[3] = v6;
      v10[4] = v5;
      v10[5] = a1;
      WdLogEvent5_WdDmmEvent(v10);
      return (unsigned int)v9;
    case -1071774920:
      v12 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
      v12[3] = v6;
      v12[4] = v5;
      v12[5] = a1;
      WdLogEvent5_WdDmmEvent(v12);
      return 3223192376LL;
    case -1071774976:
      v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
      v13[3] = v6;
      v13[4] = v5;
      v13[5] = a1;
      WdLogEvent5_WdDmmEvent(v13);
      return 3223192320LL;
    default:
      if ( v7 >= 0 )
      {
        return 0LL;
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v14 + 24) = v9;
        WdLogEvent5_WdError(v14);
        return (unsigned int)v9;
      }
  }
}
