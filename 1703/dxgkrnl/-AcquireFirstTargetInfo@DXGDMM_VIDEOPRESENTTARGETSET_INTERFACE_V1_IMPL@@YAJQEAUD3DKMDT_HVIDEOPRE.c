/*
 * XREFs of ?AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01D6F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0011CA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01DBC48 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v24)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+28h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6045);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v11 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v25 = 0;
      v26 = 0LL;
      v24 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v13 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET>>(
              v11,
              &v24,
              &v26);
      v8 = v13;
      if ( v13 == -1071774971 )
      {
        v16 = WdLogNewEntry5_WdWarning(v6, v14, v7, v15);
        *(_QWORD *)(v16 + 24) = v11;
        WdLogEvent5_WdWarning(v16);
        if ( v26 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v6, v17, v7, v18);
          WdLogEvent5_WdAssertion(v19);
        }
        v8 = 1075708747;
      }
      else if ( v13 >= 0 )
      {
        v21 = v26;
        if ( !v26 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v6, v14, v7, v15);
          WdLogEvent5_WdAssertion(v22);
        }
        *(_QWORD *)a2 = v21;
        v8 = 0;
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v6, v14);
        *(_QWORD *)(v20 + 24) = v11;
        WdLogEvent5_WdError(v20);
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdError(v12);
      v8 = -1071774954;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = this;
    WdLogEvent5_WdError(v5);
    v8 = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v6, &EventProfilerExit, v7, 6045);
  return v8;
}
