/*
 * XREFs of ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00C6D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00052E8 (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DMMVIDPNTARGETMODESET *v11; // r14
  DMMVIDPNTARGET *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rbp
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  __int64 v29; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v28 = 0LL;
  v27 = 6037;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6037);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6037);
  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v8 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 48) + 88LL) == v6 )
    {
      v19 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v19 + 24) = v8;
      WdLogEvent5_WdError(v19);
      v3 = -1071774909;
    }
    else
    {
      v9 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
      v11 = (struct DMMVIDPNTARGETMODESET *)v9;
      if ( v9 )
      {
        v12 = *(DMMVIDPNTARGET **)(v9 + 112);
        if ( !v12 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v21);
        }
        v13 = *((_QWORD *)v12 + 5);
        if ( !v13 )
        {
          v22 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v22);
          v13 = *((_QWORD *)v12 + 5);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(v13 + 64) == v8 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, *(_QWORD *)(v8 + 48));
          DMMVIDPNTARGET::ReleaseModeSet(v12, v11);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v14);
          v24 = *((_QWORD *)v12 + 5);
          v25 = (_QWORD *)v23;
          if ( !v24 )
          {
            v26 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v26);
            v24 = *((_QWORD *)v12 + 5);
          }
          v25[3] = ContainedBy<DMMVIDPN>::GetContainer(v24 + 64);
          v25[4] = v11;
          v25[5] = v8;
          WdLogEvent5_WdError(v25);
          v3 = -1071774928;
        }
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v20 + 24) = a2;
        WdLogEvent5_WdError(v20);
        v3 = -1071774967;
      }
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    v3 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v27);
  return v3;
}
