/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0
 * Callers:
 *     ?VmBusWaitForSyncObjectFromCpu@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00336E0 (-VmBusWaitForSyncObjectFromCpu@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C008D190 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C008D1B0 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00013E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001434 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0032844 (-VmBusSendWaitForSyncObjectFromCpu@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRON.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C008D60C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008D658 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C008EE90 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        void *a3)
{
  void **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v17; // rcx
  size_t v18; // r8
  const void *v19; // rdx
  void *v20; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  struct DXGDEVICE *v36[2]; // [rsp+20h] [rbp-F8h] BYREF
  void **v37; // [rsp+30h] [rbp-E8h]
  void *Src[2]; // [rsp+38h] [rbp-E0h] BYREF
  void *v39[2]; // [rsp+48h] [rbp-D0h]
  void *v40; // [rsp+58h] [rbp-C0h]
  int v41; // [rsp+60h] [rbp-B8h]
  struct _KTHREAD **v42; // [rsp+68h] [rbp-B0h]
  struct DXGDEVICE *v43[5]; // [rsp+70h] [rbp-A8h] BYREF
  void *v44[3]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp-68h]
  void *v46[5]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp-38h]

  v5 = (void **)a1;
  v41 = 2043;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v42 = Current;
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v31 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    v33 = qword_1C006E790;
    v34 = (qword_1C006E790 & 2) == 0;
    goto LABEL_48;
  }
  v44[0] = 0LL;
  v45 = 0;
  v46[0] = 0LL;
  v47 = 0;
  v37 = 0LL;
  if ( !a2 )
  {
    v37 = v5;
    if ( !*((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 8) >= 2u )
    {
LABEL_47:
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
      PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v44);
      v34 = (qword_1C006E790 & 2) == 0;
LABEL_48:
      if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v33, &EventProfilerExit, v32, 2043);
      return 3221225485LL;
    }
LABEL_6:
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v36, *(unsigned int *)v5, Current, v43);
    if ( v43[0] )
    {
      v11 = *(_QWORD *)(*((_QWORD *)v43[0] + 2) + 16LL);
      if ( *(_BYTE *)(v11 + 186) )
        v12 = DXGADAPTER::VmBusSendWaitForSyncObjectFromCpu(
                (struct VMBCHANNEL__ **)v11,
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v43[0] + 84),
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5);
      else
        v12 = WaitForSynchronizationObjectFromCpu(
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                (struct DXGPROCESS *)Current,
                v43[0],
                a3);
      v13 = v12;
      if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
      PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v44);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v14, &EventProfilerExit, v15, 2043);
      return v13;
    }
    v35 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v35 + 24) = *(unsigned int *)v5;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
    goto LABEL_47;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)v39 = *((_OWORD *)v5 + 1);
  v40 = v5[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v40 & 0xFFFFFFFE) != 0 )
    {
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
      PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v44);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v25, &EventProfilerExit, v26, 2043);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v44);
      v17 = v44[0];
      v43[1] = (struct DXGDEVICE *)v44[0];
      if ( v44[0] )
      {
        v43[2] = (struct DXGDEVICE *)v44[0];
        v18 = 4LL * v45;
        v19 = Src[1];
        if ( (char *)Src[1] + v18 < Src[1] || (char *)Src[1] + v18 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v17, v19, v18);
        v43[3] = (struct DXGDEVICE *)v44[0];
        Src[1] = v44[0];
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(v46, HIDWORD(Src[0]));
        v20 = v46[0];
        v43[4] = (struct DXGDEVICE *)v46[0];
        if ( v46[0] )
        {
          v36[1] = (struct DXGDEVICE *)v46[0];
          v21 = 8LL * v47;
          v22 = v39[0];
          if ( (char *)v39[0] + v21 < v39[0] || (char *)v39[0] + v21 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v20, v22, v21);
          v39[0] = v46[0];
          v5 = Src;
          v37 = Src;
          goto LABEL_6;
        }
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
        PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v44);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v29, &EventProfilerExit, v30, 2043);
        return 3221225495LL;
      }
      else
      {
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
        PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v44);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v27, &EventProfilerExit, v28, 2043);
        return 3221225495LL;
      }
    }
  }
  else
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v44);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v23, &EventProfilerExit, v24, 2043);
    return 3221225485LL;
  }
}
