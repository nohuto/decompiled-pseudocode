/*
 * XREFs of ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C018D614
 * Callers:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C018D4F4 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C018D9AC (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax

  v5 = a4;
  v6 = a3;
  v7 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64, __int16, int))a2 + 5))(
         a1,
         a3,
         a4,
         255LL,
         -1,
         2);
  v12 = v7;
  switch ( v7 )
  {
    case -1071774975:
      v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
      v13[3] = v6;
      v13[4] = v5;
      v13[5] = a1;
      WdLogEvent5_WdDmmEvent(v13);
      return (unsigned int)v12;
    case -1071774920:
      v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
      v15[3] = v6;
      v15[4] = v5;
      v15[5] = a1;
      WdLogEvent5_WdDmmEvent(v15);
      return 3223192376LL;
    case -1071774976:
      v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
      v16[3] = v6;
      v16[4] = v5;
      v16[5] = a1;
      WdLogEvent5_WdDmmEvent(v16);
      return 3223192320LL;
    default:
      if ( v7 >= 0 )
      {
        return 0LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v17 + 24) = v12;
        WdLogEvent5_WdError(v17);
        return (unsigned int)v12;
      }
  }
}
