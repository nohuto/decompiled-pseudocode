/*
 * XREFs of ?AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01F01A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0012CF8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01F4548 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENT.c)
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
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v20)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+28h] [rbp-10h]
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6045);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v10 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v21 = 0;
      v22 = 0LL;
      v20 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v12 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET>>(
              v10,
              &v20,
              &v22);
      v8 = v12;
      if ( v12 == -1071774971 )
      {
        v14 = WdLogNewEntry5_WdWarning(v6, v13, v7);
        *(_QWORD *)(v14 + 24) = v10;
        WdLogEvent5_WdWarning(v14);
        if ( v22 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v6);
          WdLogEvent5_WdAssertion(v15);
        }
        v8 = 1075708747;
      }
      else if ( v12 >= 0 )
      {
        v17 = v22;
        if ( !v22 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v6);
          WdLogEvent5_WdAssertion(v18);
        }
        *(_QWORD *)a2 = v17;
        v8 = 0;
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v16 + 24) = v10;
        WdLogEvent5_WdError(v16);
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
      v8 = -1071774954;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = this;
    WdLogEvent5_WdError(v5);
    v8 = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, 6045);
  return v8;
}
