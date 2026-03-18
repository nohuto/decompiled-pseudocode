/*
 * XREFs of ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0020D88
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVidSchSuspendResume::SetSuspendSourceMask(CVidSchSuspendResume *this, int a2)
{
  __int64 v2; // rax
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (a2 & *(_DWORD *)(v2 + 524)) != a2 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v5 + 24) = 6658LL;
      WdLogEvent5_WdAssertion(v5);
    }
    *(_DWORD *)this = a2;
  }
}
