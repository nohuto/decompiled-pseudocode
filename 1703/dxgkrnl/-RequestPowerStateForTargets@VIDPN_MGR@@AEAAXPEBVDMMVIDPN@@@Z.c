/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C00E3910
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0002D2C (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  const struct DMMVIDPN *v5; // rbx
  char *v6; // rbx
  char *v7; // rbp
  __int64 v8; // rsi
  char *v9; // rax
  __int64 v10; // rax

  v5 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
  if ( v5 != (const struct DMMVIDPN *)((char *)a2 + 120) )
  {
    v6 = (char *)v5 - 8;
    if ( v6 )
    {
      v7 = (char *)a2 + 120;
      do
      {
        v8 = *((_QWORD *)v6 + 12);
        if ( !*((_QWORD *)this + 1) )
        {
          v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
          WdLogEvent5_WdAssertion(v10);
        }
        DMMVIDEOPRESENTTARGET::SetPowerState(
          *(DMMVIDEOPRESENTTARGET **)(v8 + 96),
          *(struct DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL),
          1u);
        v9 = (char *)*((_QWORD *)v6 + 1);
        v6 = v9 - 8;
        if ( v9 == v7 )
          v6 = 0LL;
      }
      while ( v6 );
    }
  }
}
