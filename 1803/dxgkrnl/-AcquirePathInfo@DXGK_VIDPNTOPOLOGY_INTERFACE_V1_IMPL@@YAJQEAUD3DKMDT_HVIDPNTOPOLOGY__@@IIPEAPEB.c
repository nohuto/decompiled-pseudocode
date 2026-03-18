/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021FB80
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00035B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0006508 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00069DC (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00BBC7C (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 Container; // rax
  __int64 v22; // rcx
  struct DMMVIDPNSOURCE *v23; // rbx
  __int64 v24; // r11
  __int64 v25; // rax
  struct DMMVIDPNTARGET *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r15
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v48)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  _BYTE *v50; // [rsp+60h] [rbp-A0h]
  _BYTE *v51; // [rsp+80h] [rbp-80h]
  _BYTE v52[80]; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+E0h] [rbp-20h]

  v4 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v47 = 0LL;
  v46 = 7035;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7035);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 7035);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v14 = v4;
  v12[3] = v6;
  v12[4] = v4;
  v12[5] = this;
  v12[6] = a4;
  if ( !a4 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = 0LL;
    v15[4] = v6;
    v15[5] = v4;
    v15[6] = this;
    WdLogEvent5_WdError(v15);
    v16 = -1073741811;
    goto LABEL_23;
  }
  *a4 = 0LL;
  v17 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v19 = v17;
  if ( !v17 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v16 = -1071774976;
    goto LABEL_23;
  }
  v45 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v17 + 160);
  v23 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v6);
  if ( !v23 )
  {
    v25 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v25 + 24) = v6;
    WdLogEvent5_WdError(v25);
    v16 = -1071774972;
    goto LABEL_23;
  }
  v26 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v24 + 312), v4);
  if ( !v26 )
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v28 + 24) = v4;
    WdLogEvent5_WdError(v28);
    v16 = -1071774971;
    goto LABEL_23;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v52,
    v23,
    v26,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v53 != 2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v29);
    WdLogEvent5_WdAssertion(v30);
  }
  v49 = 0;
  v48 = DMMVIDPNTOPOLOGY::FindByValue;
  v51 = v52;
  v50 = v52;
  v31 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v19,
          (__int64)&v48,
          &v45,
          1);
  v35 = v31;
  v16 = -1071774937;
  if ( v31 == -1071774937 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
    v36[3] = v6;
    v36[4] = v14;
    v36[5] = v19;
    WdLogEvent5_WdWarning(v36);
    if ( v45 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v38);
    }
    goto LABEL_19;
  }
  if ( v31 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v39[3] = v6;
    v39[4] = v14;
    v39[5] = v19;
    v39[6] = v35;
    WdLogEvent5_WdError(v39);
    v16 = v35;
LABEL_19:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v52);
    goto LABEL_23;
  }
  v40 = v45;
  if ( !v45 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v33);
    WdLogEvent5_WdAssertion(v41);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v52);
  *a4 = v40;
  v16 = 0;
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v42, &EventProfilerExit, v43, v46);
  return v16;
}
