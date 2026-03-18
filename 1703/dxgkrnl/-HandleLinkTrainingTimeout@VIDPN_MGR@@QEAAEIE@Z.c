/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01D97D4
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01DC770 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00A4494 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        DMMVIDEOPRESENTTARGETSET **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r15
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-49h]
  struct _DXGK_CONNECTION_CHANGE v20; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v21[8]; // [rsp+50h] [rbp-19h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  if ( !this[1] )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this[1] + 2);
  memset(v21, 0, sizeof(v21));
  EtwActivityIdControl(3u, (LPGUID)&v21[1]);
  v21[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v21[3]) = 61;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v8) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v13);
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this[10], (unsigned int)v5, v11, v12);
  if ( TargetById )
  {
    v19 = *(_QWORD *)(v8 + 268);
    if ( v4 )
    {
      DxgkLogCodePointPacket(0x58u, v5, 0xFFFFFFEu, 0, v19);
      return 1;
    }
    DxgkLogCodePointPacket(0x58u, v5, 0xFFFFFFFu, 0, v19);
    memset(&v20, 0, sizeof(v20));
    DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v20);
    *((_DWORD *)&v20 + 2) = v5 & 0xFFFFFF | *((_DWORD *)&v20 + 2) & 0xFD000000 | 0xD000000;
    VIDPN_MGR::UpdateTargetLinkTrainingStatus((VIDPN_MGR *)this, &v20, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v21);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = v5;
    WdLogEvent5_WdError(v17);
  }
  return 0;
}
