/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70
 * Callers:
 *     ?VmBusEvict@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D350 (-VmBusEvict@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C009DE60 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     DxgkEvict @ 0x1C009DF60 (DxgkEvict.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013970 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendEvict@DXGADAPTER@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0030184 (-VmBusSendEvict@DXGADAPTER@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C009E750 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C009E78C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C00BFF20 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, __int64 a3)
{
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  DXGPROCESS *Current; // r12
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // r9d
  struct _D3DKMT_EVICT *v14; // rax
  struct _D3DKMT_EVICT *v15; // r14
  __int64 v16; // rax
  struct DXGALLOCATION **v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct DXGDEVICE *v22; // r13
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // r12
  unsigned int *v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned int *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int *v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned int v46; // r8d
  DXGADAPTER *v47; // rdi
  UINT v48; // ebx
  unsigned int HostProcess; // eax
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // [rsp+40h] [rbp-1D8h]
  struct DXGDEVICE *v54; // [rsp+48h] [rbp-1D0h] BYREF
  int v55; // [rsp+50h] [rbp-1C8h]
  struct _D3DKMT_EVICT *v56; // [rsp+58h] [rbp-1C0h]
  struct DXGDEVICE **v57; // [rsp+60h] [rbp-1B8h] BYREF
  int v58; // [rsp+68h] [rbp-1B0h]
  unsigned __int64 v59; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-1A0h]
  int v61; // [rsp+7Ch] [rbp-19Ch]
  struct DXGDEVICE *v62; // [rsp+80h] [rbp-198h] BYREF
  struct _D3DKMT_EVICT *v63; // [rsp+88h] [rbp-190h]
  __int64 v64; // [rsp+90h] [rbp-188h]
  _BYTE v65[16]; // [rsp+98h] [rbp-180h] BYREF
  struct DXGPROCESS *v66; // [rsp+A8h] [rbp-170h]
  unsigned int *v67; // [rsp+B0h] [rbp-168h]
  DXGPROCESS *v68; // [rsp+B8h] [rbp-160h]
  unsigned int *v69; // [rsp+C0h] [rbp-158h]
  _BYTE v70[24]; // [rsp+C8h] [rbp-150h] BYREF
  _OWORD v71[2]; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v72[96]; // [rsp+100h] [rbp-118h] BYREF
  _BYTE *v73; // [rsp+160h] [rbp-B8h] BYREF
  _BYTE v74[128]; // [rsp+168h] [rbp-B0h] BYREF
  int v75; // [rsp+1E8h] [rbp-30h]

  v58 = a2;
  v56 = a1;
  v55 = 2116;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2116);
  Current = DXGPROCESS::GetCurrent();
  v68 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v14 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v14 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v71[0] = *(_OWORD *)&v14->hDevice;
    v71[1] = *(_OWORD *)&v14->Flags.0;
    v15 = (struct _D3DKMT_EVICT *)v71;
    v63 = (struct _D3DKMT_EVICT *)v71;
  }
  else
  {
    v15 = a1;
    v63 = a1;
  }
  if ( !v15->NumAllocations )
  {
    v16 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v16);
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( v11 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    v12 = 2116;
LABEL_9:
    Template_q(v10, &EventProfilerExit, v9, v12);
    return 3221225485LL;
  }
  if ( !v15->AllocationList )
  {
    v16 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v16 + 24) = 764LL;
    goto LABEL_18;
  }
  if ( v15->Flags.Value >= 4 )
  {
    v16 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v16 + 24) = 771LL;
    goto LABEL_18;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v73);
  v73 = v74;
  v75 = 16;
  v17 = (struct DXGALLOCATION **)v74;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v15->hDevice, (struct _KTHREAD **)Current, &v62);
  v22 = v62;
  if ( !v62 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = v15->hDevice;
    WdLogEvent5_WdAssertion(v23);
    goto LABEL_25;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v65,
    v62);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)v22, 0LL, v24, 0);
  v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72);
  if ( v26 >= 0 )
  {
    NumAllocations = v15->NumAllocations;
    v64 = NumAllocations;
    AllocationList = (unsigned int *)v15->AllocationList;
    v32 = &AllocationList[NumAllocations];
    v69 = v32;
    if ( v32 < AllocationList )
    {
      v33 = WdLogNewEntry5_WdAssertion(v25, NumAllocations, v32, v27);
      *(_QWORD *)(v33 + 24) = v15->NumAllocations;
      WdLogEvent5_WdAssertion(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v65);
LABEL_25:
      if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v73);
      if ( (qword_1C006E790 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      v12 = 2116;
      goto LABEL_9;
    }
    v53 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL) + 186LL);
    v34 = 0LL;
    v59 = 0LL;
LABEL_42:
    if ( AllocationList != v32 )
    {
      v35 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v35 = (unsigned int)NumAllocations;
      v61 = v35;
      v36 = &AllocationList[v35];
      v67 = v36;
      v66 = DXGPROCESS::GetCurrent();
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, v66, v37, v38);
      while ( 1 )
      {
        if ( AllocationList == v36 )
        {
          if ( v53 )
          {
            v47 = *(DXGADAPTER **)(*((_QWORD *)v22 + 2) + 16LL);
            v48 = *((_DWORD *)v22 + 84);
            HostProcess = DXGPROCESS::GetHostProcess(v68);
            DXGADAPTER::VmBusSendEvict(
              v47,
              HostProcess,
              v48,
              v15->Flags,
              v15->NumAllocations,
              (const struct DXGALLOCATIONREFERENCE *)v74,
              &v59);
            v17 = (struct DXGALLOCATION **)v74;
          }
          else
          {
            v46 = ((char *)v17 - v74) >> 3;
            v17 = (struct DXGALLOCATION **)v74;
            DXGDEVICE::Evict(v22, (struct DXGALLOCATIONREFERENCE *)v74, v46, v15->Flags, &v59);
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
          LODWORD(NumAllocations) = v64 - v61;
          v64 = (unsigned int)(v64 - v61);
          v34 = v59;
          v32 = v69;
          goto LABEL_42;
        }
        if ( v58 )
        {
          v39 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v39 = (unsigned int *)MmUserProbeAddress;
          v40 = *v39;
          v60 = *v39;
          v15 = v63;
          v22 = v62;
        }
        else
        {
          v40 = *AllocationList;
          v60 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v66, (DXGALLOCATIONREFERENCE *)&v57, v40);
        if ( !v57 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
          *(_QWORD *)(v45 + 24) = v40;
          goto LABEL_56;
        }
        if ( v57[1] != v22 )
          break;
        DXGALLOCATIONREFERENCE::MoveAssign(v17++, (struct DXGALLOCATION **)&v57);
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v57);
        v36 = v67;
      }
      v45 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
      *(_QWORD *)(v45 + 24) = v22;
      *(_QWORD *)(v45 + 32) = v57[1];
LABEL_56:
      WdLogEvent5_WdAssertion(v45);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v57);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
      _guard_dispatch_icall_fptr();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v65);
      if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v73);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v12 = v55;
        goto LABEL_9;
      }
      return 3221225485LL;
    }
    if ( v58 )
    {
      p_NumBytesToTrim = &v56->NumBytesToTrim;
      if ( (unsigned __int64)&v56->NumBytesToTrim >= MmUserProbeAddress )
        p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
      *p_NumBytesToTrim = v59;
    }
    else
    {
      v15->NumBytesToTrim = v34;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v65);
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v73);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v51, &EventProfilerExit, v52, v55);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v65);
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v73);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v28, &EventProfilerExit, v29, 2116);
    return (unsigned int)v26;
  }
}
