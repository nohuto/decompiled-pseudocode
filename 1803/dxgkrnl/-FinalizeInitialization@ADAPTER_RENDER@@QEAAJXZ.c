/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0159BBC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00F7E84 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ebx

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v5 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 113), this, 1);
  if ( v5 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 848LL))(*((_QWORD *)this + 69));
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)this + 2);
      v11 = *(_DWORD *)(v10 + 2420);
      if ( (v11 & 1) != 0 && ((*(_DWORD *)(v10 + 1836) & 0x800) != 0 || (v11 & 8) != 0) )
      {
        v8 = ADAPTER_RENDER::EnableIoMmuIsolation(
               this,
               (*(_DWORD *)(v10 + 2420) & 2) != 0,
               (*(_DWORD *)(v10 + 2420) & 4) != 0);
        if ( v8 < 0 && (v11 & 0x10) != 0 )
          return 0;
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = this;
      WdLogEvent5_WdError(v9);
    }
    return (unsigned int)v8;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdError(v6);
    return (unsigned int)v5;
  }
}
