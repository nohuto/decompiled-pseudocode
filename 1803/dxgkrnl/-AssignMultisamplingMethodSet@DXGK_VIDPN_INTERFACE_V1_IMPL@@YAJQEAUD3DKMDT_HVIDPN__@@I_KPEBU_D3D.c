/*
 * XREFs of ?AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C0220100
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C02239CC (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignMultisamplingMethodSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        unsigned __int64 a3,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a4)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  DMMVIDPNSOURCE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+20h] [rbp-18h] BYREF
  __int64 v30; // [rsp+28h] [rbp-10h]

  v30 = 0LL;
  v6 = (unsigned int)a2;
  v29 = 7047;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7047);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 7047);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v13 = v6;
  v12[3] = a4;
  v12[4] = a3;
  v12[5] = v6;
  v12[6] = this;
  v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( v14 )
  {
    v17 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v14 + 304), v6);
    if ( v17 )
    {
      v20 = DMMVIDPNSOURCE::SetMultisamplingMethodSet(v17, a3, a4);
      v6 = v20;
      if ( v20 >= 0 )
      {
        LODWORD(v6) = 0;
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        v25[3] = v13;
        v25[4] = this;
        v25[5] = v6;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = v6;
      WdLogEvent5_WdError(v19);
      LODWORD(v6) = -1071774972;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    LODWORD(v6) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return (unsigned int)v6;
}
