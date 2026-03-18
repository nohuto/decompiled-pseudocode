/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111CF0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C008A02C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  int v4; // edi
  __int64 v6; // rax

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v4 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 103), this, 1);
  if ( v4 >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 66) + 8LL) + 848LL))(*((_QWORD *)this + 67));
  v6 = WdLogNewEntry5_WdError(v3);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdError(v6);
  return (unsigned int)v4;
}
