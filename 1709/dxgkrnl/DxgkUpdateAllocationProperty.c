/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C01B2B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0008920 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0014DC8 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C017D8E4 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __m256i *v11; // rax
  UINT v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  ADAPTER_RENDER **v16; // r15
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
  __int64 v27; // r8
  __int64 v28; // rcx
  bool v29; // zf
  __int32 v30; // ebx
  __int32 v31; // edi
  int updated; // eax
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // r8
  struct _EX_RUNDOWN_REF *v39; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v40[8]; // [rsp+38h] [rbp-130h] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-128h] BYREF
  struct DXGPAGINGQUEUE *v42; // [rsp+50h] [rbp-118h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v43; // [rsp+58h] [rbp-110h] BYREF
  __m256i v44; // [rsp+70h] [rbp-F8h]
  __int64 v45; // [rsp+90h] [rbp-D8h]
  ULONG64 v47; // [rsp+A0h] [rbp-C8h]
  __int64 v48; // [rsp+A8h] [rbp-C0h]
  ADAPTER_RENDER **v49; // [rsp+B0h] [rbp-B8h]
  _BYTE v50[96]; // [rsp+C0h] [rbp-A8h] BYREF
  __int32 v51; // [rsp+120h] [rbp-48h]
  __int32 v52; // [rsp+124h] [rbp-44h]
  __int32 v53; // [rsp+128h] [rbp-40h]
  UINT v54; // [rsp+12Ch] [rbp-3Ch]

  v47 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2132);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v7, 2132);
    return 3221225485LL;
  }
  v11 = (__m256i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (__m256i *)MmUserProbeAddress;
  v44 = *v11;
  v45 = v11[1].m256i_i64[0];
  v12 = v45;
  if ( (v45 & 0xFFFFFFF8) != 0 || !(_DWORD)v45 )
  {
    v13 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_14:
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  v42 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v40, v44.m256i_u32[0], Current, &v42);
  if ( !v42 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v44.m256i_u32[0];
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_18:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v40);
    goto LABEL_14;
  }
  v16 = (ADAPTER_RENDER **)*((_QWORD *)v42 + 2);
  v49 = v16;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41,
    (struct DXGDEVICE *)v16);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v16, 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50);
  if ( v18 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v40);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v19, 2132);
    return (unsigned int)v18;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v39, v44.m256i_u32[1]);
  if ( !v39 )
  {
    v21 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v20);
    v22 = (struct _EX_RUNDOWN_REF *)v44.m256i_u32[1];
LABEL_26:
    v21[3].Count = (ULONG_PTR)v22;
LABEL_27:
    WdLogEvent5_WdError(v21);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
    goto LABEL_18;
  }
  if ( (ADAPTER_RENDER **)v39[1].Count != v16 )
  {
    v21 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v20);
    v21[3].Count = (ULONG_PTR)v16;
    v21[4].Count = v39[1].Count;
    goto LABEL_27;
  }
  if ( !v39[3].Count )
  {
    v21 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(0LL);
    v22 = v39;
    goto LABEL_26;
  }
  v23 = *((_QWORD *)v16[2] + 2);
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 64LL) + 40LL);
  if ( *(_DWORD *)(v24 + 28) < 0x6002u )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    v26 = -1073741637LL;
    *(_QWORD *)(v25 + 32) = 1084LL;
LABEL_34:
    *(_QWORD *)(v25 + 24) = v26;
    WdLogEvent5_WdError(v25);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v40);
    v28 = qword_1C005F010;
    v29 = (qword_1C005F010 & 2) == 0;
LABEL_35:
    if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v27, 2132);
    return (unsigned int)v26;
  }
  if ( !*(_QWORD *)(v23 + 960) )
  {
    v25 = WdLogNewEntry5_WdError(v24);
    v26 = -1073741822LL;
    *(_QWORD *)(v25 + 32) = 1090LL;
    goto LABEL_34;
  }
  memset(&v43, 0, sizeof(v43));
  v43.hAllocation = v39[4].Ptr;
  v30 = v44.m256i_i32[4];
  v31 = v44.m256i_i32[3];
  *(_QWORD *)&v43.PreferredSegment.0 = *(__int64 *)((char *)&v44.m256i_i64[1] + 4);
  v43.SupportedSegmentSet = v44.m256i_u32[2];
  v43.PropertyMaskValue = v12;
  updated = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v16[2], &v43, v23);
  v34 = updated;
  if ( updated >= 0 )
  {
    v53 = v30;
    v52 = v31;
    v51 = v44.m256i_i32[2];
    v54 = v12;
    LODWORD(v26) = _guard_dispatch_icall_fptr();
    if ( (int)v26 >= 0 )
    {
      v38 = (_QWORD *)(v47 + 24);
      if ( v47 + 24 >= MmUserProbeAddress )
        v38 = (_QWORD *)MmUserProbeAddress;
      *v38 = v48;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v40);
    v29 = (qword_1C005F010 & 2) == 0;
    goto LABEL_35;
  }
  v35 = WdLogNewEntry5_WdError(v33);
  *(_QWORD *)(v35 + 24) = v34;
  WdLogEvent5_WdError(v35);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v41);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v40);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, 2132);
  return (unsigned int)v34;
}
