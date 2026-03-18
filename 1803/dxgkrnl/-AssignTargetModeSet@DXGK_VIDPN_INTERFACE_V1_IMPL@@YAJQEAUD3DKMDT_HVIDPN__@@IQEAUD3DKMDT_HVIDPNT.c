/*
 * XREFs of ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00D8990
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00051BC (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct DMMVIDPNTARGETMODESET **v15; // rdi
  __int64 v16; // r8
  DMMVIDPNTARGET *v17; // rax
  __int64 v18; // rcx
  DMMVIDPNTARGET *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // [rsp+20h] [rbp-18h] BYREF
  __int64 v31; // [rsp+28h] [rbp-10h]

  v31 = 0LL;
  v4 = a3;
  v5 = (unsigned int)a2;
  v30 = 7051;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7051);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 7051);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12 = v5;
  v11[3] = v4;
  v11[4] = v5;
  v11[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v15 = (struct DMMVIDPNTARGETMODESET **)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      v17 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v16 + 312), v5);
      v19 = v17;
      if ( v17 )
      {
        v20 = DMMVIDPNTARGET::SetCofuncModeSet(v17, v15);
        v4 = v20;
        if ( v20 < 0 )
        {
          if ( v20 != -1071774958 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v28);
          }
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v29[3] = v15;
          v29[4] = *((unsigned int *)v19 + 6);
          v29[5] = v4;
          WdLogEvent5_WdError(v29);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v27 + 24) = v12;
        WdLogEvent5_WdError(v27);
        LODWORD(v4) = -1071774971;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v26 + 24) = v4;
      WdLogEvent5_WdError(v26);
      LODWORD(v4) = -1071774967;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v30);
  return (unsigned int)v4;
}
