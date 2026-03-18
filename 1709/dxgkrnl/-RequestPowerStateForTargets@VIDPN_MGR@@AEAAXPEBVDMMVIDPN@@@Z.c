/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C00A7880
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0007E4C (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(VIDPN_MGR *this, const struct DMMVIDPN *a2)
{
  const struct DMMVIDPN *v3; // rbx
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // rsi
  char *v7; // rax
  __int64 v8; // rax

  v3 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
  if ( v3 != (const struct DMMVIDPN *)((char *)a2 + 120) )
  {
    v4 = (char *)v3 - 8;
    if ( v4 )
    {
      v5 = (char *)a2 + 120;
      do
      {
        v6 = *((_QWORD *)v4 + 12);
        if ( !*((_QWORD *)this + 1) )
        {
          v8 = WdLogNewEntry5_WdAssertion(this);
          WdLogEvent5_WdAssertion(v8);
        }
        DMMVIDEOPRESENTTARGET::SetPowerState(
          *(DMMVIDEOPRESENTTARGET **)(v6 + 96),
          *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
          1u);
        v7 = (char *)*((_QWORD *)v4 + 1);
        v4 = v7 - 8;
        if ( v7 == v5 )
          v4 = 0LL;
      }
      while ( v4 );
    }
  }
}
