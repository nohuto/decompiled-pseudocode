/*
 * XREFs of ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B5C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00A8B60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     DxgkIsVidPnSourceOwnerDwm @ 0x1C01AC5F0 (DxgkIsVidPnSourceOwnerDwm.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 5144LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 5145LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return *((_DWORD *)this[14] + 940 * v3 + 174) == 1;
}
