/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C01F0320
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00A99F8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorQueryDmmSourceModeSetInterface @ 0x1C01FE8A8 (MonitorQueryDmmSourceModeSetInterface.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v6; // r12
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  __int64 v15; // r8
  VIDPN_MGR *v16; // rsi
  __int64 v17; // rax
  int DmmSourceModeSetInterface; // eax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rax
  struct HDXGMONITOR__ *v36; // [rsp+70h] [rbp+18h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v37; // [rsp+78h] [rbp+20h]

  v6 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  v8 = 0;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 4559LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 4560LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v8 = -1071774973;
    goto LABEL_35;
  }
  v16 = *(VIDPN_MGR **)(v11 + 48);
  if ( !*((_QWORD *)v16 + 1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v17);
  }
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(*((_QWORD *)v16 + 1) + 16LL));
  v20 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v19);
    if ( !*((_QWORD *)v16 + 1) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v23);
    }
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(*((_QWORD *)v16 + 1) + 16LL);
    *(_QWORD *)(v22 + 32) = v20;
    WdLogEvent5_WdError(v22);
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v16 + 10) + 72LL), 1u);
  v24 = *((_QWORD *)v16 + 10);
  v25 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v24, v6);
  if ( !v25 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = v6;
    WdLogEvent5_WdError(v27);
    v28 = -1071774971;
LABEL_28:
    if ( v24 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(v24 + 64);
      v33 = _InterlockedDecrement((volatile signed __int32 *)(v24 + 72));
      if ( v33 )
      {
        if ( v33 < 0 )
        {
          v34 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v34 + 24) = v33;
          WdLogEvent5_WdError(v34);
        }
      }
      else if ( v14 )
      {
        (**v14)(v14, 1LL);
      }
    }
    v8 = v28;
    goto LABEL_35;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v16, *(_DWORD *)(v25 + 24), &v36) < 0 || !v36 )
  {
    v32 = WdLogNewEntry5_WdWarning(v14, v29, v15);
    *(_QWORD *)(v32 + 24) = v6;
    WdLogEvent5_WdWarning(v32);
    v28 = -1071774920;
    goto LABEL_28;
  }
  if ( v24 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(v24 + 64);
    v30 = _InterlockedDecrement((volatile signed __int32 *)(v24 + 72));
    if ( v30 )
    {
      if ( v30 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v31 + 24) = v30;
        WdLogEvent5_WdError(v31);
      }
    }
    else if ( v14 )
    {
      (**v14)(v14, 1LL);
    }
  }
  *a3 = v36;
  *a4 = v37;
LABEL_35:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v14, &EventProfilerExit, v15, 6038);
  return v8;
}
