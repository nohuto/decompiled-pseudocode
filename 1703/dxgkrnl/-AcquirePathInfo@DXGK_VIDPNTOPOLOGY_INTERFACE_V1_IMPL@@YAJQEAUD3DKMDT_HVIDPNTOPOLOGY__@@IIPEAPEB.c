/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01DAC30
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0009154 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00097C0 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E0A98 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 Container; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DMMVIDPNSOURCE *v24; // rbx
  __int64 v25; // r11
  __int64 v26; // rax
  struct DMMVIDPNTARGET *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r12
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v53)(__int64, __int64); // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+48h] [rbp-B8h]
  _BYTE *v55; // [rsp+50h] [rbp-B0h]
  _BYTE *v56; // [rsp+70h] [rbp-90h]
  _BYTE v57[80]; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7035);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11 = v7;
  v8[3] = v7;
  v8[4] = v5;
  v8[5] = this;
  v8[6] = a4;
  if ( !a4 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = 0LL;
    v12[4] = v7;
    v12[5] = v5;
    v12[6] = this;
    WdLogEvent5_WdError(v12);
    v15 = -1073741811;
    goto LABEL_23;
  }
  *a4 = 0LL;
  v16 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v19 = v16;
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v15 = -1071774976;
    goto LABEL_23;
  }
  v52 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v16 + 160);
  v24 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v7);
  if ( !v24 )
  {
    v26 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v26 + 24) = v7;
    WdLogEvent5_WdError(v26);
    v15 = -1071774972;
    goto LABEL_23;
  }
  v27 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v25 + 312), v5);
  if ( !v27 )
  {
    v30 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v30 + 24) = v5;
    WdLogEvent5_WdError(v30);
    v15 = -1071774971;
    goto LABEL_23;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v57, v24, v27, 255LL, 0xFFFFu);
  if ( v58 != 2 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
    WdLogEvent5_WdAssertion(v35);
  }
  v54 = 0;
  v53 = DMMVIDPNTOPOLOGY::FindByValue;
  v56 = v57;
  v55 = v57;
  v36 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v19,
          (__int64)&v53,
          &v52,
          1LL);
  v41 = v36;
  v15 = -1071774937;
  if ( v36 == -1071774937 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
    v42[3] = v11;
    v42[4] = v5;
    v42[5] = v19;
    WdLogEvent5_WdWarning(v42);
    if ( v52 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      WdLogEvent5_WdAssertion(v47);
    }
    goto LABEL_19;
  }
  if ( v36 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
    v48[3] = v11;
    v48[4] = v5;
    v48[5] = v19;
    v48[6] = v41;
    WdLogEvent5_WdError(v48);
    v15 = v41;
LABEL_19:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v57);
    goto LABEL_23;
  }
  v49 = v52;
  if ( !v52 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
    WdLogEvent5_WdAssertion(v50);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v57);
  *a4 = v49;
  v15 = 0;
LABEL_23:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 7035);
  return v15;
}
