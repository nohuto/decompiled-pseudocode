/*
 * XREFs of ?AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0218D80
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0224368 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireFirstSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v25)(DMMVIDEOPRESENTTARGETSET *); // [rsp+30h] [rbp-10h] BYREF
  int v26; // [rsp+38h] [rbp-8h]
  __int64 v27; // [rsp+58h] [rbp+18h] BYREF

  v24 = 0LL;
  v23 = 6041;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6041);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6041);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 26) == 1833172993 )
      v8 = this;
    else
      v8 = 0LL;
    if ( v8 )
    {
      v26 = 0;
      v27 = 0LL;
      v25 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v10 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET>>(
              v8,
              &v25,
              &v27);
      v7 = v10;
      if ( v10 == -1071774972 )
      {
        v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
        *(_QWORD *)(v14 + 24) = v8;
        WdLogEvent5_WdWarning(v14);
        if ( v27 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v16);
        }
        v7 = 1075708747;
      }
      else if ( v10 >= 0 )
      {
        v18 = v27;
        if ( !v27 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v19);
        }
        *(_QWORD *)a2 = v18;
        v7 = 0;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v17 + 24) = v8;
        WdLogEvent5_WdError(v17);
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = this;
      WdLogEvent5_WdError(v9);
      v7 = -1071774955;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = this;
    WdLogEvent5_WdError(v6);
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v7;
}
