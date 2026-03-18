/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00D8D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003AA8 (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // r12
  DMMVIDPNSOURCE *v16; // rax
  __int64 v17; // rcx
  DMMVIDPNSOURCE *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-10h] BYREF
  __int64 v31; // [rsp+28h] [rbp-8h]
  __int64 v32; // [rsp+60h] [rbp+30h] BYREF
  struct DMMVIDPNSOURCEMODESET *v33; // [rsp+70h] [rbp+40h] BYREF

  v31 = 0LL;
  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  v30 = 7045;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7045);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 7045);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v7;
  v12[4] = a3;
  v12[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v7);
    if ( v14 )
    {
      v15 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*(_QWORD *)(v14 + 48) + 384LL);
      v16 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v14 + 304), v6);
      v18 = v16;
      if ( v16 )
      {
        v32 = 0LL;
        v33 = 0LL;
        v19 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v16, &v33);
        v7 = v19;
        if ( v19 < 0 )
        {
          v29 = WdLogNewEntry5_WdDmmEvent(v20);
          *(_QWORD *)(v29 + 24) = *((unsigned int *)v18 + 6);
          *(_QWORD *)(v29 + 32) = v7;
          WdLogEvent5_WdDmmEvent(v29);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, (__int64)v33);
          v21 = v32;
          v22 = -(__int64)(v32 != -137);
          v32 = 0LL;
          *a3 = v21 & v22;
          LODWORD(v7) = 0;
          *a4 = v15;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL);
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v28 + 24) = v6;
        WdLogEvent5_WdError(v28);
        LODWORD(v7) = -1071774972;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v27 + 24) = v7;
      WdLogEvent5_WdError(v27);
      LODWORD(v7) = -1071774973;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = v7;
    WdLogEvent5_WdError(v26);
    LODWORD(v7) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v30);
  return (unsigned int)v7;
}
