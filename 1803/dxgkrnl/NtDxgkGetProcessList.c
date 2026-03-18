/*
 * XREFs of NtDxgkGetProcessList @ 0x1C0169EF0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C000BF04 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C002499C (--1DXGADAPTERREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z @ 0x1C015B754 (-QueryProcessAdapterInfo@ADAPTER_RENDER@@QEAAJPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@PEAIK@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C0164824 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3.c)
 */

__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rcx
  ULONG64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int ProcessAdapterInfo; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  HANDLE *v31; // rsi
  __int64 v32; // r14
  _DWORD *v33; // rcx
  unsigned int HighPart; // eax
  size_t v35; // r8
  void *v36; // rcx
  int v37; // [rsp+20h] [rbp-288h] BYREF
  __int64 v38; // [rsp+28h] [rbp-280h]
  struct _LUID v39[2]; // [rsp+30h] [rbp-278h] BYREF
  void *Src; // [rsp+40h] [rbp-268h]
  DXGADAPTER *v41[2]; // [rsp+48h] [rbp-260h] BYREF
  int v42; // [rsp+58h] [rbp-250h]
  _BYTE v43[8]; // [rsp+60h] [rbp-248h] BYREF
  struct DXGADAPTER *v44; // [rsp+68h] [rbp-240h]
  char v45; // [rsp+70h] [rbp-238h]
  void *v46; // [rsp+78h] [rbp-230h]
  PVOID v47[65]; // [rsp+80h] [rbp-228h] BYREF
  int v48; // [rsp+288h] [rbp-20h]

  v38 = 0LL;
  v37 = 2203;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2203);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2203);
  v46 = 0LL;
  v41[0] = 0LL;
  v47[0] = 0LL;
  v48 = 0;
  v4 = MmUserProbeAddress;
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)&v39[0].LowPart = *(_OWORD *)v5;
  Src = *(void **)(v5 + 16);
  if ( Src )
  {
    if ( v39[1].HighPart )
    {
      v46 = Src;
      Src = PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(v47, v39[1].HighPart);
      if ( !Src )
      {
        v6 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v6 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v6);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v47);
        DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v41);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v7, &EventProfilerExit, v8, v37);
        return 3221225495LL;
      }
    }
  }
  if ( v39[1].LowPart != 1024 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v10[3] = v39[1].LowPart;
    v10[4] = -1073741811LL;
    goto LABEL_15;
  }
  v13 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)v41, v39[0]);
  v17 = v13;
  if ( !v13 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v10[3] = v39[0].HighPart;
    v10[4] = v39[0].LowPart;
    v10[5] = -1073741811LL;
LABEL_15:
    WdLogEvent5_WdError(v10);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v47);
    DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v37);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)v13 + 308) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v18[3] = v39[0].HighPart;
    v18[4] = v39[0].LowPart;
    LODWORD(v19) = -1073741637;
    v18[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v18);
LABEL_23:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v47);
    DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v37);
    return (unsigned int)v19;
  }
  v44 = v13;
  v45 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  if ( *((_DWORD *)v17 + 44) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v17 + 308),
                           (void **)Src,
                           (unsigned int *)&v39[1].HighPart,
                           0x400u);
    v19 = ProcessAdapterInfo;
    v42 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v33 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v33 = (_DWORD *)MmUserProbeAddress;
      HighPart = v39[1].HighPart;
      *v33 = v39[1].HighPart;
      if ( (int)v19 >= 0 )
      {
        v35 = 8LL * HighPart;
        v36 = v46;
        if ( (unsigned __int64)v46 + v35 > MmUserProbeAddress || (char *)v46 + v35 <= v46 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v36, Src, v35);
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = v19;
      WdLogEvent5_WdWarning(v30);
      if ( v39[1].HighPart )
      {
        v31 = (HANDLE *)Src;
        v32 = (unsigned int)v39[1].HighPart;
        do
        {
          if ( *v31 )
            ZwClose(*v31);
          ++v31;
          --v32;
        }
        while ( v32 );
      }
    }
    if ( v45 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
    goto LABEL_23;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  v23[3] = v39[0].HighPart;
  v23[4] = v39[0].LowPart;
  v23[5] = -1073741811LL;
  WdLogEvent5_WdError(v23);
  if ( v45 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v47);
  DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v37);
  return 3221226166LL;
}
