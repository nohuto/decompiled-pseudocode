/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01110E8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C001A154 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(VIDPN_MGR *this, const struct DMMVIDPN *a2)
{
  char *v2; // rsi
  char *v3; // rdx
  char *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbp
  char *v8; // rax
  __int64 v9; // rax

  v2 = (char *)a2 + 120;
  v3 = (char *)*((_QWORD *)a2 + 15);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 )
  {
    v6 = *((_QWORD *)this + 1);
    v7 = *((_QWORD *)v4 + 12);
    if ( !v6 )
    {
      v9 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v9);
      v6 = *((_QWORD *)this + 1);
    }
    DMMVIDEOPRESENTTARGET::SetPowerState(*(DMMVIDEOPRESENTTARGET **)(v7 + 96), *(struct DXGADAPTER **)(v6 + 16), 1u);
    v8 = (char *)*((_QWORD *)v4 + 1);
    v4 = v8 - 8;
    if ( v8 == v2 )
      v4 = 0LL;
  }
}
