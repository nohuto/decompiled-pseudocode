/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00FA600
 * Callers:
 *     <none>
 * Callees:
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C0005CFC (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C00063D0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A3E50 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        char **a4)
{
  __int64 v5; // r13
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 Container; // rax
  __int64 v15; // rcx
  struct DMMVIDPNSOURCE *v16; // rbx
  __int64 v17; // r11
  struct DMMVIDPNTARGET *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r12
  unsigned int v26; // ebx
  char *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  char *v41; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v42)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+48h] [rbp-B8h]
  _BYTE *v44; // [rsp+50h] [rbp-B0h]
  _BYTE *v45; // [rsp+70h] [rbp-90h]
  _BYTE v46[80]; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7035);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v10 = v7;
  v8[3] = v7;
  v8[4] = v5;
  v8[5] = this;
  v8[6] = a4;
  if ( !a4 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v31[3] = 0LL;
    v31[4] = v7;
    v31[5] = v5;
    v31[6] = this;
    WdLogEvent5_WdError(v31);
    v26 = -1073741811;
    goto LABEL_13;
  }
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v13 = v11;
  if ( !v11 )
  {
    v32 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    v26 = -1071774976;
    goto LABEL_13;
  }
  v41 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v11 + 160);
  v16 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7);
  if ( !v16 )
  {
    v33 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v33 + 24) = v7;
    WdLogEvent5_WdError(v33);
    v26 = -1071774972;
    goto LABEL_13;
  }
  v18 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v17 + 312), v5);
  if ( !v18 )
  {
    v34 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v34 + 24) = v5;
    WdLogEvent5_WdError(v34);
    v26 = -1071774971;
    goto LABEL_13;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v46,
    v16,
    v18,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v47 != 2 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v35);
  }
  v43 = 0;
  v42 = DMMVIDPNTOPOLOGY::FindByValue;
  v45 = v46;
  v44 = v46;
  v21 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v13,
          (__int64)&v42,
          &v41,
          1);
  v25 = v21;
  v26 = -1071774937;
  if ( v21 == -1071774937 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v36[3] = v10;
    v36[4] = v5;
    v36[5] = v13;
    WdLogEvent5_WdWarning(v36);
    if ( v41 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37);
      WdLogEvent5_WdAssertion(v38);
    }
    goto LABEL_24;
  }
  if ( v21 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v39[3] = v10;
    v39[4] = v5;
    v39[5] = v13;
    v39[6] = v25;
    WdLogEvent5_WdError(v39);
    v26 = v25;
LABEL_24:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
    goto LABEL_13;
  }
  v27 = v41;
  if ( !v41 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v23);
    WdLogEvent5_WdAssertion(v40);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
  *a4 = v27;
  v26 = 0;
LABEL_13:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, 7035);
  return v26;
}
