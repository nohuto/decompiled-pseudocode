/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00F66B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0009154 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00097C0 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E0A98 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v7; // r14
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDPNSOURCE *v11; // rbx
  __int64 v12; // r11
  struct DMMVIDPNTARGET *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  unsigned int v26; // ebx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v46)(__int64, __int64); // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+48h] [rbp-B8h]
  _BYTE *v48; // [rsp+50h] [rbp-B0h]
  _BYTE *v49; // [rsp+70h] [rbp-90h]
  _BYTE v50[80]; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6021);
  if ( !a4 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v31[3] = 0LL;
    v31[4] = v7;
    v31[5] = v5;
    v31[6] = this;
    WdLogEvent5_WdError(v31);
    v26 = -1073741811;
    goto LABEL_18;
  }
  *a4 = 0LL;
  if ( this && *((_DWORD *)this + 46) == 1833173002 )
    v8 = this;
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v32 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    v26 = -1071774976;
    goto LABEL_18;
  }
  v45 = 0LL;
  if ( !*((_QWORD *)v8 + 21) )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v33);
  }
  v11 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(
                                   *(_QWORD *)(*((_QWORD *)v8 + 21) + 304LL),
                                   v7);
  if ( !v11 )
  {
    v34 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v34 + 24) = v7;
    WdLogEvent5_WdError(v34);
    v26 = -1071774972;
    goto LABEL_18;
  }
  v13 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v12 + 312), v5);
  if ( !v13 )
  {
    v35 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v35 + 24) = v5;
    WdLogEvent5_WdError(v35);
    v26 = -1071774971;
    goto LABEL_18;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v50, v11, v13, 255LL, 0xFFFFu);
  if ( v51 != 2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v36);
  }
  v47 = 0;
  v46 = DMMVIDPNTOPOLOGY::FindByValue;
  v49 = v50;
  v48 = v50;
  v20 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          (__int64)v8,
          (__int64)&v46,
          &v45,
          0LL);
  v25 = v20;
  v26 = -1071774937;
  if ( v20 == -1071774937 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    v37[3] = v7;
    v37[4] = v5;
    v37[5] = v8;
    WdLogEvent5_WdWarning(v37);
    if ( v45 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
      WdLogEvent5_WdAssertion(v42);
    }
    goto LABEL_30;
  }
  if ( v20 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22, v21, v23, v24);
    v43[3] = v7;
    v43[4] = v5;
    v43[5] = v8;
    v43[6] = v25;
    WdLogEvent5_WdDmmEvent(v43);
    v26 = v25;
LABEL_30:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v50);
    goto LABEL_18;
  }
  v27 = v45;
  if ( !v45 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
    WdLogEvent5_WdAssertion(v44);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v50);
  *a4 = v27;
  v26 = 0;
LABEL_18:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 6021);
  return v26;
}
