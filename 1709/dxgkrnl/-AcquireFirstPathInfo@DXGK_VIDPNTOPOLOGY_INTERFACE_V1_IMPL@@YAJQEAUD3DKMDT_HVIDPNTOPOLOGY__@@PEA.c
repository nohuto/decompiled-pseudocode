/*
 * XREFs of ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A3520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00A39A0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v23)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+28h] [rbp-10h]
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v25; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 18);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7036);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( v4 && *((_DWORD *)v4 + 46) == 1833173002 )
      v10 = v4;
    else
      v10 = 0LL;
    if ( v10 )
    {
      v24 = 0;
      v25 = 0LL;
      v23 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v11 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
              v10,
              &v23,
              &v25);
      v4 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v11;
      if ( v11 == -1071774937 )
      {
        v16 = WdLogNewEntry5_WdTrace(v13, v12);
        v17 = v25 == 0LL;
        *(_QWORD *)(v16 + 24) = v10;
        if ( !v17 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v20);
        }
        LODWORD(v4) = 1075708747;
      }
      else if ( v11 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v21 + 24) = v10;
        *(_QWORD *)(v21 + 32) = v4;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        v4 = v25;
        if ( !v25 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v22);
        }
        *(_QWORD *)a2 = v4;
        LODWORD(v4) = 0;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v19 + 24) = v4;
      WdLogEvent5_WdError(v19);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v18 + 24) = 0LL;
    *(_QWORD *)(v18 + 32) = v4;
    WdLogEvent5_WdError(v18);
    LODWORD(v4) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 7036);
  return (unsigned int)v4;
}
