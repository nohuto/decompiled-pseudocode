/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C019C080
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0002BF8 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C0179F1C (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __m256i *v12; // rax
  UINT v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ADAPTER_RENDER **v21; // r14
  __int64 v22; // r9
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _EX_RUNDOWN_REF *v30; // rax
  struct _EX_RUNDOWN_REF *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int32 v52; // ebx
  __int32 v53; // edi
  int updated; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  _QWORD *v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  struct _EX_RUNDOWN_REF *v73; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v74[8]; // [rsp+38h] [rbp-130h] BYREF
  _BYTE v75[16]; // [rsp+40h] [rbp-128h] BYREF
  struct DXGPAGINGQUEUE *v76; // [rsp+50h] [rbp-118h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v77; // [rsp+58h] [rbp-110h] BYREF
  __m256i v78; // [rsp+70h] [rbp-F8h]
  __int64 v79; // [rsp+90h] [rbp-D8h]
  int v80; // [rsp+98h] [rbp-D0h]
  __int64 v82; // [rsp+A8h] [rbp-C0h]
  ADAPTER_RENDER **v83; // [rsp+B0h] [rbp-B8h]
  _BYTE v84[96]; // [rsp+C0h] [rbp-A8h] BYREF
  __int32 v85; // [rsp+120h] [rbp-48h]
  __int32 v86; // [rsp+124h] [rbp-44h]
  __int32 v87; // [rsp+128h] [rbp-40h]
  UINT v88; // [rsp+12Ch] [rbp-3Ch]

  v80 = 2132;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2132);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2132);
    return 3221225485LL;
  }
  v12 = (__m256i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (__m256i *)MmUserProbeAddress;
  v78 = *v12;
  v79 = v12[1].m256i_i64[0];
  v13 = v79;
  if ( (v79 & 0xFFFFFFF8) != 0 || !(_DWORD)v79 )
  {
    v14 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_14:
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  v76 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v78.m256i_u32[0], Current, &v76);
  if ( !v76 )
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = v78.m256i_u32[0];
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v18, v19, v20);
    goto LABEL_14;
  }
  v21 = (ADAPTER_RENDER **)*((_QWORD *)v76 + 2);
  v83 = v21;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v75,
    (struct DXGDEVICE *)v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, (__int64)v21, 0LL, v22, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v84);
  if ( v23 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v75);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v24, v25, v26);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v27, 2132);
    return (unsigned int)v23;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v73, v78.m256i_u32[1]);
  if ( !v73 )
  {
    v30 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v29, v28);
    v31 = (struct _EX_RUNDOWN_REF *)v78.m256i_u32[1];
LABEL_25:
    v30[3].Count = (ULONG_PTR)v31;
LABEL_26:
    WdLogEvent5_WdError(v30);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73, v32, v33, v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v75);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v35, v36, v37);
    v10 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  if ( (ADAPTER_RENDER **)v73[1].Count != v21 )
  {
    v30 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v29, v28);
    v30[3].Count = (ULONG_PTR)v21;
    v30[4].Count = v73[1].Count;
    goto LABEL_26;
  }
  if ( !v73[3].Count )
  {
    v30 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(0LL, v28);
    v31 = v73;
    goto LABEL_25;
  }
  v38 = (__int64)v21[2];
  v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 192LL) + 64LL);
  v40 = *(_QWORD *)(v39 + 40);
  if ( *(_DWORD *)(v40 + 28) < 0x6002u )
  {
    v41 = WdLogNewEntry5_WdError(v39, v40);
    v42 = -1073741637LL;
    *(_QWORD *)(v41 + 32) = 1091LL;
LABEL_33:
    *(_QWORD *)(v41 + 24) = v42;
    WdLogEvent5_WdError(v41);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73, v43, v44, v45);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v75);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v46, v47, v48);
    v50 = qword_1C006E790;
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)v42;
    goto LABEL_35;
  }
  v51 = *(_QWORD *)(v38 + 16);
  if ( !*(_QWORD *)(v51 + 960) )
  {
    v41 = WdLogNewEntry5_WdError(v51, v40);
    v42 = -1073741822LL;
    *(_QWORD *)(v41 + 32) = 1097LL;
    goto LABEL_33;
  }
  memset(&v77, 0, sizeof(v77));
  v77.hAllocation = v73[4].Ptr;
  v52 = v78.m256i_i32[4];
  v53 = v78.m256i_i32[3];
  *(_QWORD *)&v77.PreferredSegment.0 = *(__int64 *)((char *)&v78.m256i_i64[1] + 4);
  v77.SupportedSegmentSet = v78.m256i_u32[2];
  v77.PropertyMaskValue = v13;
  updated = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v21[2], &v77, v38);
  v57 = updated;
  if ( updated >= 0 )
  {
    v87 = v52;
    v86 = v53;
    v85 = v78.m256i_i32[2];
    v88 = v13;
    LODWORD(v42) = _guard_dispatch_icall_fptr();
    if ( (int)v42 >= 0 )
    {
      v68 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v68 = (_QWORD *)MmUserProbeAddress;
      *v68 = v82;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73, v67, (__int64)v68, v69);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v75);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v70, v71, v72);
    if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)v42;
LABEL_35:
    Template_q(v50, &EventProfilerExit, v49, 2132);
    return (unsigned int)v42;
  }
  v58 = WdLogNewEntry5_WdError(v56, v55);
  *(_QWORD *)(v58 + 24) = v57;
  WdLogEvent5_WdError(v58);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v73, v59, v60, v61);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v75);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v74, v62, v63, v64);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v65, &EventProfilerExit, v66, 2132);
  return (unsigned int)v57;
}
