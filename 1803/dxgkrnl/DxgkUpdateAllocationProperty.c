/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C01AE7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C000B9A0 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C01642F0 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __m256i *v12; // rax
  UINT v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rax
  ADAPTER_RENDER **v16; // r14
  __int64 v17; // r9
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  __int32 v30; // ebx
  __int32 v31; // edi
  int updated; // eax
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // r8
  int v39; // [rsp+30h] [rbp-138h] BYREF
  __int64 v40; // [rsp+38h] [rbp-130h]
  struct _EX_RUNDOWN_REF *v41; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v42[8]; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v43[16]; // [rsp+50h] [rbp-118h] BYREF
  struct DXGPAGINGQUEUE *v44; // [rsp+60h] [rbp-108h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v45; // [rsp+68h] [rbp-100h] BYREF
  __m256i v46; // [rsp+80h] [rbp-E8h]
  __int64 v47; // [rsp+A0h] [rbp-C8h]
  __int64 v49; // [rsp+B0h] [rbp-B8h]
  ADAPTER_RENDER **v50; // [rsp+B8h] [rbp-B0h]
  _BYTE v51[96]; // [rsp+C0h] [rbp-A8h] BYREF
  __int32 v52; // [rsp+120h] [rbp-48h]
  __int32 v53; // [rsp+124h] [rbp-44h]
  __int32 v54; // [rsp+128h] [rbp-40h]
  UINT v55; // [rsp+12Ch] [rbp-3Ch]

  v40 = 0LL;
  v39 = 2132;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2132);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2132);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
    goto LABEL_5;
  v6 = MmUserProbeAddress;
  v12 = (__m256i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (__m256i *)MmUserProbeAddress;
  v46 = *v12;
  v47 = v12[1].m256i_i64[0];
  v13 = v47;
  if ( (v47 & 0xFFFFFFF8) != 0 || !(_DWORD)v47 )
  {
LABEL_5:
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v39);
    return 3221225485LL;
  }
  v44 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42, v46.m256i_u32[0], Current, &v44);
  if ( !v44 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v46.m256i_u32[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_16:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    goto LABEL_6;
  }
  v16 = (ADAPTER_RENDER **)*((_QWORD *)v44 + 2);
  v50 = v16;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
    (struct DXGDEVICE *)v16);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v16, 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51);
  if ( v18 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C0079010, &EventProfilerExit, v19, v39);
    return (unsigned int)v18;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v41, v46.m256i_u32[1]);
  if ( !v41 )
  {
    v21 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v20);
    v22 = (struct _EX_RUNDOWN_REF *)v46.m256i_u32[1];
LABEL_24:
    v21[3].Count = (ULONG_PTR)v22;
LABEL_25:
    WdLogEvent5_WdError(v21);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    goto LABEL_16;
  }
  if ( (ADAPTER_RENDER **)v41[1].Count != v16 )
  {
    v21 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v20);
    v21[3].Count = (ULONG_PTR)v16;
    v21[4].Count = v41[1].Count;
    goto LABEL_25;
  }
  if ( !v41[3].Count )
  {
    v21 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(0LL);
    v22 = v41;
    goto LABEL_24;
  }
  v23 = *((_QWORD *)v16[2] + 2);
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 64LL) + 40LL);
  if ( *(_DWORD *)(v24 + 28) < 0x6002u )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    v26 = -1073741637LL;
    *(_QWORD *)(v25 + 32) = 1099LL;
LABEL_32:
    *(_QWORD *)(v25 + 24) = v26;
    WdLogEvent5_WdError(v25);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v29 = (qword_1C0079010 & 2) == 0;
LABEL_33:
    if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v39);
    return (unsigned int)v26;
  }
  if ( !*(_QWORD *)(v23 + 960) )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    v26 = -1073741822LL;
    *(_QWORD *)(v25 + 32) = 1105LL;
    goto LABEL_32;
  }
  memset(&v45, 0, sizeof(v45));
  v45.hAllocation = v41[4].Ptr;
  v30 = v46.m256i_i32[4];
  v31 = v46.m256i_i32[3];
  *(_QWORD *)&v45.PreferredSegment.0 = *(__int64 *)((char *)&v46.m256i_i64[1] + 4);
  v45.SupportedSegmentSet = v46.m256i_u32[2];
  v45.PropertyMaskValue = v13;
  updated = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v16[2], &v45, v23);
  v34 = updated;
  if ( updated >= 0 )
  {
    v54 = v30;
    v53 = v31;
    v52 = v46.m256i_i32[2];
    v55 = v13;
    LODWORD(v26) = _guard_dispatch_icall_fptr();
    if ( (int)v26 >= 0 )
    {
      v38 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v38 = (_QWORD *)MmUserProbeAddress;
      *v38 = v49;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v29 = (qword_1C0079010 & 2) == 0;
    goto LABEL_33;
  }
  v35 = WdLogNewEntry5_WdError(v33);
  *(_QWORD *)(v35 + 24) = v34;
  WdLogEvent5_WdError(v35);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v39);
  return (unsigned int)v34;
}
