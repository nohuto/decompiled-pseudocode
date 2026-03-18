/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01F29A4
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F50A0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00B07F4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2B14 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        DMMVIDEOPRESENTTARGETSET **this,
        unsigned int a2,
        char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-59h]
  struct _DXGK_CONNECTION_CHANGE v15; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v16[10]; // [rsp+50h] [rbp-29h] BYREF

  v4 = a2;
  if ( !this[1] )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this[1] + 2);
  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 61;
  LOBYTE(v16[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v7) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this[10], v4);
  if ( TargetById )
  {
    v14 = *(_QWORD *)(v7 + 268);
    if ( a3 )
    {
      DxgkLogCodePointPacket(0x58u, v4, 0xFFFFFFEu, 0, v14);
      return 1;
    }
    DxgkLogCodePointPacket(0x58u, v4, 0xFFFFFFFu, 0, v14);
    memset(&v15, 0, sizeof(v15));
    DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v15);
    *((_DWORD *)&v15 + 2) = v4 & 0xFFFFFF | *((_DWORD *)&v15 + 2) & 0xFD000000 | 0xD000000;
    VIDPN_MGR::UpdateTargetLinkTrainingStatus((VIDPN_MGR *)this, &v15, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v4;
    WdLogEvent5_WdError(v12);
  }
  return 0;
}
