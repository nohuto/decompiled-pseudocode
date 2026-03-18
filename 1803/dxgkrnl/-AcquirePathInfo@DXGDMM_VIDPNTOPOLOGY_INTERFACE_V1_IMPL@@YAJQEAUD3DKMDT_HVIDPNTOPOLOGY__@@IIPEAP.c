/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00C5800
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

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 Container; // rax
  __int64 v13; // rcx
  struct DMMVIDPNSOURCE *v14; // rbx
  __int64 v15; // r11
  struct DMMVIDPNTARGET *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r15
  unsigned int v24; // ebx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v42)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+58h] [rbp-A8h]
  _BYTE *v44; // [rsp+60h] [rbp-A0h]
  _BYTE *v45; // [rsp+80h] [rbp-80h]
  _BYTE v46[80]; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+E0h] [rbp-20h]

  v41 = 0LL;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v40 = 6021;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6021);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 6021);
  if ( !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v29[3] = 0LL;
    v29[4] = v7;
    v29[5] = v5;
    v29[6] = this;
    WdLogEvent5_WdError(v29);
    v24 = -1073741811;
    goto LABEL_13;
  }
  *a4 = 0LL;
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v11 = v9;
  if ( !v9 )
  {
    v30 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    v24 = -1071774976;
    goto LABEL_13;
  }
  v39 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v9 + 160);
  v14 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7);
  if ( !v14 )
  {
    v31 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v31 + 24) = v7;
    WdLogEvent5_WdError(v31);
    v24 = -1071774972;
    goto LABEL_13;
  }
  v16 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v15 + 312), v5);
  if ( !v16 )
  {
    v32 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v32 + 24) = v5;
    WdLogEvent5_WdError(v32);
    v24 = -1071774971;
    goto LABEL_13;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v46,
    v14,
    v16,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v47 != 2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v33);
  }
  v43 = 0;
  v42 = DMMVIDPNTOPOLOGY::FindByValue;
  v45 = v46;
  v44 = v46;
  v19 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v11,
          (__int64)&v42,
          &v39,
          0);
  v23 = v19;
  v24 = -1071774937;
  if ( v19 == -1071774937 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v34[3] = v7;
    v34[4] = v5;
    v34[5] = v11;
    WdLogEvent5_WdWarning(v34);
    if ( v39 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v36);
    }
    goto LABEL_24;
  }
  if ( v19 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
    v37[3] = v7;
    v37[4] = v5;
    v37[5] = v11;
    v37[6] = v23;
    WdLogEvent5_WdDmmEvent(v37);
    v24 = v23;
LABEL_24:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
    goto LABEL_13;
  }
  v25 = v39;
  if ( !v39 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v38);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
  *a4 = v25;
  v24 = 0;
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v40);
  return v24;
}
