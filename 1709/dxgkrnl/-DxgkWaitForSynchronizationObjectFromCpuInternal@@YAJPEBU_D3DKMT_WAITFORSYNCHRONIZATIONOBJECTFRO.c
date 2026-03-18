/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00CF1AC
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007F8B4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C00CF110 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C00CF190 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A2E0 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00092DC (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00CF68C (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00CFCFC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0199190 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        __int64 a2,
        void *a3)
{
  int v4; // r15d
  void **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v9; // rdx
  PVOID v10; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  __int64 v13; // rdx
  PVOID v14; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // r8
  PVOID v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  bool v36; // zf
  __int64 v37; // rax
  signed __int64 v38; // rdx
  struct DXGDEVICE *v39[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-C8h] BYREF
  void *v41[2]; // [rsp+40h] [rbp-B8h]
  void *v42; // [rsp+50h] [rbp-A8h]
  struct _KTHREAD **v43; // [rsp+58h] [rbp-A0h]
  void **v44; // [rsp+60h] [rbp-98h]
  struct DXGDEVICE *v45[2]; // [rsp+68h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  _BYTE v47[32]; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+A0h] [rbp-58h]
  PVOID v49; // [rsp+A8h] [rbp-50h] BYREF
  char v50; // [rsp+B0h] [rbp-48h] BYREF
  unsigned int v51; // [rsp+C0h] [rbp-38h]

  v4 = a2;
  v5 = (void **)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v43 = Current;
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v31 + 24) = PsGetCurrentProcess(v33, v32);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    v35 = qword_1C005F010;
    v36 = (qword_1C005F010 & 2) == 0;
    goto LABEL_54;
  }
  v49 = 0LL;
  v51 = 0;
  P = 0LL;
  v48 = 0;
  if ( !v4 )
  {
    v44 = v5;
    if ( !*((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 8) >= 2u )
    {
LABEL_53:
      P = 0LL;
      v48 = 0;
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v49, v6);
      v36 = (qword_1C005F010 & 2) == 0;
LABEL_54:
      if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v35, &EventProfilerExit, v34, 2043);
      return 3221225485LL;
    }
LABEL_34:
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39, *(_DWORD *)v5, Current, v45);
    if ( v45[0] )
    {
      v27 = *(_QWORD *)(*((_QWORD *)v45[0] + 2) + 16LL);
      if ( *(_BYTE *)(v27 + 185) )
      {
        v28 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v27 + 3888),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v45[0] + 84),
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5);
        if ( v39[0] )
        {
          v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39[0] + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v38 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39[0] + 2), v39[0]);
        }
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v49, v38);
      }
      else
      {
        v28 = WaitForSynchronizationObjectFromCpu(
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                (struct DXGPROCESS *)Current,
                v45[0],
                a3);
        if ( v39[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v39[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39[0] + 2), v39[0]);
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        v30 = v49;
        if ( v49 != &v50 && v49 )
          ExFreePoolWithTag(v49, 0);
      }
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v30, &EventProfilerExit, v29, 2043);
      return v28;
    }
    v37 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v37 + 24) = *(unsigned int *)v5;
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    if ( v39[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v39[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39[0] + 2), v39[0]);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_53;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)v41 = *((_OWORD *)v5 + 1);
  v42 = v5[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v42 & 0xFFFFFFFE) != 0 )
    {
      P = 0LL;
      v48 = 0;
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v49, HIDWORD(Src[0]));
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, 2043);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v49);
      v10 = v49;
      if ( v49 )
      {
        v45[1] = (struct DXGDEVICE *)v49;
        v11 = 4LL * v51;
        v12 = Src[1];
        if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v10, v12, v11);
        Src[1] = v49;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, HIDWORD(Src[0]));
        v14 = P;
        if ( P )
        {
          v39[1] = (struct DXGDEVICE *)P;
          v15 = 8LL * v48;
          v16 = v41[0];
          if ( (char *)v41[0] + v15 < v41[0] || (char *)v41[0] + v15 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v14, v16, v15);
          v41[0] = P;
          v5 = Src;
          v44 = Src;
          goto LABEL_34;
        }
        P = 0LL;
        v48 = 0;
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v49, v13);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, 2043);
        return 3221225495LL;
      }
      else
      {
        P = 0LL;
        v48 = 0;
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v49, v9);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v22, &EventProfilerExit, v23, 2043);
        return 3221225495LL;
      }
    }
  }
  else
  {
    P = 0LL;
    v48 = 0;
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v49, 0LL);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, 2043);
    return 3221225485LL;
  }
}
