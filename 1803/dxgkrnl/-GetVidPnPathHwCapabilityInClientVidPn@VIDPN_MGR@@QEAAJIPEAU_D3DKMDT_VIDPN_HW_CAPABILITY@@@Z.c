/*
 * XREFs of ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C0215808
 * Callers:
 *     ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0212318 (-DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C0160B64 (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_HW_CAPABILITY *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  D3DKMDT_HVIDPN v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID PathSourceFromTarget; // eax
  __int64 v22; // r8
  __int64 v23; // rbx
  ADAPTER_DISPLAY *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v30; // rax
  _DXGKARG_QUERYVIDPNHWCAPABILITY v31; // [rsp+20h] [rbp-20h] BYREF
  D3DKMDT_HVIDPN v32; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 1);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)this + 1);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v8 + 16)) >= 1105 )
  {
    v11 = *((_QWORD *)this + 11);
    v32 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *((_QWORD *)this + 11);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v32, v12);
    v14 = v32;
    if ( v32 )
    {
      if ( v32 == (D3DKMDT_HVIDPN)-96LL )
      {
        v20 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v20);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v14 + 24), v4);
      if ( PathSourceFromTarget != -1 )
      {
        memset(&v31, 0, sizeof(v31));
        if ( v14 == (D3DKMDT_HVIDPN)-88LL )
          v31.hFunctionalVidPn = 0LL;
        else
          v31.hFunctionalVidPn = v14;
        v31.SourceId = PathSourceFromTarget;
        v24 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
        v31.TargetId = v4;
        if ( !v24 )
        {
          v25 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v25);
          v24 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
        }
        v26 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(v24, &v31, v22);
        v23 = v26;
        if ( v26 >= 0 )
        {
          *a3 = v31.VidPnHWCaps;
LABEL_27:
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v32, 0LL);
          return v3;
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v28[3] = v31.TargetId;
        v28[4] = v31.SourceId;
        v28[5] = v31.hFunctionalVidPn;
        v28[6] = v23;
        WdLogEvent5_WdError(v28);
LABEL_26:
        v3 = v23;
        goto LABEL_27;
      }
      v19 = WdLogNewEntry5_WdDmmEvent(0xFFFFFFFFLL);
      *(_QWORD *)(v19 + 24) = v4;
    }
    else
    {
      v15 = WdLogNewEntry5_WdDmmEvent(v13);
      v16 = *((_QWORD *)this + 1);
      v17 = v15;
      if ( !v16 )
      {
        v18 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v18);
        v16 = *((_QWORD *)this + 1);
      }
      *(_QWORD *)(v17 + 24) = *(_QWORD *)(v16 + 16);
      v19 = v17;
    }
    WdLogEvent5_WdDmmEvent(v19);
    LODWORD(v23) = -1071774937;
    goto LABEL_26;
  }
  v30 = WdLogNewEntry5_WdDmmEvent(v10);
  *(_QWORD *)(v30 + 24) = this;
  WdLogEvent5_WdDmmEvent(v30);
  return 3221225659LL;
}
