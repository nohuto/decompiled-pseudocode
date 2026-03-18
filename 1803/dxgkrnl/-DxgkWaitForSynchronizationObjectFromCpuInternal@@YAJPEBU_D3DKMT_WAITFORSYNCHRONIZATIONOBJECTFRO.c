/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00D0CAC
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C00D0C70 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C00D0C90 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01870D0 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5738 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00097E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00D1544 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00D15C4 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0185DF0 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        void *a3)
{
  void **v5; // rbx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rsi
  void *v8; // rcx
  size_t v9; // r8
  const void *v10; // rdx
  PVOID v11; // rcx
  size_t v12; // r8
  const void *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-D0h]
  struct DXGDEVICE *v37; // [rsp+30h] [rbp-C8h] BYREF
  struct DXGDEVICE *v38; // [rsp+38h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *v40[2]; // [rsp+50h] [rbp-A8h]
  void *v41; // [rsp+60h] [rbp-98h]
  struct _KTHREAD **v42; // [rsp+68h] [rbp-90h]
  void **v43; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  _BYTE v45[32]; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v46; // [rsp+A0h] [rbp-58h]
  void *v47[3]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned int v48; // [rsp+C0h] [rbp-38h]

  v5 = (void **)a1;
  v36 = 0LL;
  v35 = 2043;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2043);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v42 = Current;
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v29 + 24) = PsGetCurrentProcess(v31, v30);
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_55;
  }
  v47[0] = 0LL;
  v48 = 0;
  P = 0LL;
  v46 = 0;
  if ( !a2 )
  {
    v43 = v5;
    if ( !*((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 8) >= 2u )
    {
LABEL_54:
      P = 0LL;
      v46 = 0;
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v47);
LABEL_55:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v32, &EventProfilerExit, v33, v35);
      return 3221225485LL;
    }
LABEL_37:
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v37, *(_DWORD *)v5, Current, &v38);
    if ( v38 )
    {
      v24 = *(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL);
      if ( *(_BYTE *)(v24 + 185) )
        v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 4080),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v38 + 84),
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5);
      else
        v25 = WaitForSynchronizationObjectFromCpu(
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                (struct DXGPROCESS *)Current,
                v38,
                a3);
      v26 = v25;
      if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
      if ( P != v45 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v46 = 0;
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v47);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v27, &EventProfilerExit, v28, v35);
      return v26;
    }
    v34 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v34 + 24) = *(unsigned int *)v5;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    if ( v37 && _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v37 + 2), v37);
    if ( P != v45 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_54;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)v40 = *((_OWORD *)v5 + 1);
  v41 = v5[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v41 & 0xFFFFFFFE) != 0 )
    {
      P = 0LL;
      v46 = 0;
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v47);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v35);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v47);
      v8 = v47[0];
      if ( v47[0] )
      {
        v9 = 4LL * v48;
        v10 = Src[1];
        if ( (char *)Src[1] + v9 < Src[1] || (char *)Src[1] + v9 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, v10, v9);
        Src[1] = v47[0];
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, HIDWORD(Src[0]));
        v11 = P;
        if ( P )
        {
          v12 = 8LL * v46;
          v13 = v40[0];
          if ( (char *)v40[0] + v12 < v40[0] || (char *)v40[0] + v12 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v11, v13, v12);
          v40[0] = P;
          v5 = Src;
          v43 = Src;
          goto LABEL_37;
        }
        P = 0LL;
        v46 = 0;
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v47);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v21, &EventProfilerExit, v22, v35);
        return 3221225495LL;
      }
      else
      {
        if ( P != v45 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v46 = 0;
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v47);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v19, &EventProfilerExit, v20, v35);
        return 3221225495LL;
      }
    }
  }
  else
  {
    P = 0LL;
    v46 = 0;
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v35);
    return 3221225485LL;
  }
}
