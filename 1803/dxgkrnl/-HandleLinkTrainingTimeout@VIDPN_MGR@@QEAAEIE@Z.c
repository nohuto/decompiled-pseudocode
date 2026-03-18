/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C021E420
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0221D80 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00BA5A8 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E594 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(VIDPN_MGR *this, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-59h]
  struct _DXGK_CONNECTION_CHANGE v16; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v17[10]; // [rsp+50h] [rbp-29h] BYREF

  v3 = *((_QWORD *)this + 1);
  v5 = a2;
  if ( !v3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v3 = *((_QWORD *)this + 1);
  }
  v8 = *(_QWORD *)(v3 + 16);
  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 61;
  LOBYTE(v17[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v8) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v5);
  if ( TargetById )
  {
    v15 = *(_QWORD *)(v8 + 268);
    if ( a3 )
    {
      DxgkLogCodePointPacket(0x58u, v5, 0xFFFFFFEu, 0, v15);
      return 1;
    }
    DxgkLogCodePointPacket(0x58u, v5, 0xFFFFFFFu, 0, v15);
    memset(&v16, 0, sizeof(v16));
    DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v16);
    *((_DWORD *)&v16 + 2) = v5 & 0xFFFFFF | *((_DWORD *)&v16 + 2) & 0xFD000000 | 0xD000000;
    VIDPN_MGR::UpdateTargetLinkTrainingStatus(this, &v16, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v5;
    WdLogEvent5_WdError(v13);
  }
  return 0;
}
