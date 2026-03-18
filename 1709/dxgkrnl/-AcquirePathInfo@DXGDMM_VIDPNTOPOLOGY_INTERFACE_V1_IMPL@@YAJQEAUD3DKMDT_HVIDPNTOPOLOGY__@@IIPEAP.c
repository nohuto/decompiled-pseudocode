/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D6810
 * Callers:
 *     <none>
 * Callees:
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C0005CFC (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C00063D0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A3E50 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        char **a4)
{
  __int64 v5; // rsi
  __int64 v7; // r14
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v8; // rdi
  __int64 v9; // rcx
  struct DMMVIDPNSOURCE *v10; // rbx
  __int64 v11; // r11
  struct DMMVIDPNTARGET *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned int v20; // ebx
  char *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  char *v36; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v37)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h]
  _BYTE *v39; // [rsp+50h] [rbp-B0h]
  _BYTE *v40; // [rsp+70h] [rbp-90h]
  _BYTE v41[80]; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6021);
  if ( !a4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v25[3] = 0LL;
    v25[4] = v7;
    v25[5] = v5;
    v25[6] = this;
    WdLogEvent5_WdError(v25);
    v20 = -1073741811;
    goto LABEL_18;
  }
  *a4 = 0LL;
  if ( this && *((_DWORD *)this + 46) == 1833173002 )
    v8 = this;
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v26 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    v20 = -1071774976;
    goto LABEL_18;
  }
  v36 = 0LL;
  if ( !*((_QWORD *)v8 + 21) )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  v10 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(*((_QWORD *)v8 + 21) + 304LL), v7);
  if ( !v10 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v7;
    WdLogEvent5_WdError(v28);
    v20 = -1071774972;
    goto LABEL_18;
  }
  v12 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v11 + 312), v5);
  if ( !v12 )
  {
    v29 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v29 + 24) = v5;
    WdLogEvent5_WdError(v29);
    v20 = -1071774971;
    goto LABEL_18;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v41,
    v10,
    v12,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v42 != 2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v30);
  }
  v38 = 0;
  v37 = DMMVIDPNTOPOLOGY::FindByValue;
  v40 = v41;
  v39 = v41;
  v15 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          (__int64)v8,
          (__int64)&v37,
          &v36,
          0);
  v19 = v15;
  v20 = -1071774937;
  if ( v15 == -1071774937 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v31[3] = v7;
    v31[4] = v5;
    v31[5] = v8;
    WdLogEvent5_WdWarning(v31);
    if ( v36 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v33);
    }
    goto LABEL_30;
  }
  if ( v15 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17);
    v34[3] = v7;
    v34[4] = v5;
    v34[5] = v8;
    v34[6] = v19;
    WdLogEvent5_WdDmmEvent(v34);
    v20 = v19;
LABEL_30:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v41);
    goto LABEL_18;
  }
  v21 = v36;
  if ( !v36 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v35);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v41);
  *a4 = v21;
  v20 = 0;
LABEL_18:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, 6021);
  return v20;
}
