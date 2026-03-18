/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021FE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00032EC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003318 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BBC14 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BC008 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C021EA2C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DMMVIDPNTOPOLOGY *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v34; // [rsp+20h] [rbp-10h] BYREF
  __int64 v35; // [rsp+28h] [rbp-8h]
  struct DMMVIDPNPRESENTPATH *v36; // [rsp+68h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v37; // [rsp+70h] [rbp+40h] BYREF

  v4 = (__int64)this;
  v35 = 0LL;
  v34 = 7041;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7041);
  if ( a2 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = *(_DWORD *)a2;
    v10[4] = *((unsigned int *)a2 + 1);
    v10[5] = a2;
    v10[6] = v4;
    v14 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
    if ( v14 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v16 + 24) = a2;
        WdLogEvent5_WdWarning(v16);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v17[3] = *(_DWORD *)a2;
        v17[4] = *((unsigned int *)a2 + 1);
        v17[5] = v4;
        WdLogEvent5_WdWarning(v17);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v18[3] = *((int *)a2 + 84);
        v18[4] = *(_DWORD *)a2;
        v18[5] = *((unsigned int *)a2 + 1);
        v18[6] = v4;
        WdLogEvent5_WdWarning(v18);
        *((_DWORD *)a2 + 84) = 1;
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
      }
      v36 = 0LL;
      v37 = 0LL;
      v19 = DMMVIDPNTOPOLOGY::CreateNewPath(v14, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v37);
      v24 = v19;
      LODWORD(v4) = -1071774970;
      if ( v19 == -1071774970 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v25[3] = *(_DWORD *)a2;
        v25[4] = *((unsigned int *)a2 + 1);
        v25[5] = -1071774970LL;
        WdLogEvent5_WdError(v25);
      }
      else if ( v19 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v36,
          (__int64 (__fastcall ***)(_QWORD, __int64))v37);
        v28 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v14, v36, 2LL, v27);
        v4 = v28;
        if ( v28 >= 0 )
        {
          v36 = 0LL;
          LODWORD(v4) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v14, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
          v30[3] = *(_DWORD *)a2;
          v30[4] = *((unsigned int *)a2 + 1);
          v30[5] = v14;
          v30[6] = v4;
          WdLogEvent5_WdDmmEvent(v30);
        }
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        LODWORD(v4) = v24;
        v26[3] = *(_DWORD *)a2;
        v26[4] = *((unsigned int *)a2 + 1);
        v26[5] = v24;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v36);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v15 + 24) = v4;
      WdLogEvent5_WdError(v15);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = v4;
    WdLogEvent5_WdError(v9);
    LODWORD(v4) = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v34);
  return (unsigned int)v4;
}
