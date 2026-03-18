/*
 * XREFs of ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C01EE780
 * Callers:
 *     ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01EBAEC (-DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C017AF04 (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_HW_CAPABILITY *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  D3DKMDT_HVIDPN v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID PathSourceFromTarget; // eax
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v27; // rax
  _DXGKARG_QUERYVIDPNHWCAPABILITY v28; // [rsp+20h] [rbp-20h] BYREF
  D3DKMDT_HVIDPN v29; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) >= 1105 )
  {
    v10 = *((_QWORD *)this + 11);
    v29 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *((_QWORD *)this + 11);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v29, v11);
    v13 = v29;
    if ( v29 )
    {
      if ( v29 == (D3DKMDT_HVIDPN)-96LL )
      {
        v18 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v18);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v13 + 24), (unsigned int)v4);
      if ( PathSourceFromTarget != -1 )
      {
        memset(&v28, 0, sizeof(v28));
        if ( v13 == (D3DKMDT_HVIDPN)-88LL )
          v28.hFunctionalVidPn = 0LL;
        else
          v28.hFunctionalVidPn = v13;
        v28.SourceId = PathSourceFromTarget;
        v28.TargetId = v4;
        if ( !*((_QWORD *)this + 1) )
        {
          v22 = WdLogNewEntry5_WdAssertion(PathSourceFromTarget);
          WdLogEvent5_WdAssertion(v22);
        }
        v23 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(*((DXGADAPTER ***)this + 1), &v28, v20);
        v21 = v23;
        if ( v23 >= 0 )
        {
          *a3 = v28.VidPnHWCaps;
LABEL_27:
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v29, 0LL);
          return v3;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v25[3] = v28.TargetId;
        v25[4] = v28.SourceId;
        v25[5] = v28.hFunctionalVidPn;
        v25[6] = v21;
        WdLogEvent5_WdError(v25);
LABEL_26:
        v3 = v21;
        goto LABEL_27;
      }
      v17 = WdLogNewEntry5_WdDmmEvent(0xFFFFFFFFLL);
      *(_QWORD *)(v17 + 24) = v4;
    }
    else
    {
      v15 = WdLogNewEntry5_WdDmmEvent(v12);
      if ( !*((_QWORD *)this + 1) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = v15;
      *(_QWORD *)(v15 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    }
    WdLogEvent5_WdDmmEvent(v17);
    LODWORD(v21) = -1071774937;
    goto LABEL_26;
  }
  v27 = WdLogNewEntry5_WdDmmEvent(v9);
  *(_QWORD *)(v27 + 24) = this;
  WdLogEvent5_WdDmmEvent(v27);
  return 3221225659LL;
}
