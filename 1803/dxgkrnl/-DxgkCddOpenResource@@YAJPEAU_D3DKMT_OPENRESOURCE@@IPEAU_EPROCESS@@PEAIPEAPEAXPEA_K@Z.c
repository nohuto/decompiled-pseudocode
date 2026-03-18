/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C009AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C00011B4 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C244 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C009B098 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DxgkCddOpenResource(
        struct _D3DKMT_OPENRESOURCE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct _KTHREAD **Current; // rax
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ADAPTER_RENDER **v16; // rsi
  ADAPTER_RENDER *v17; // rax
  __int64 v18; // r9
  int v19; // eax
  struct _KTHREAD **v20; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v22; // rax
  struct _KTHREAD *v23; // rdi
  int v24; // ecx
  struct _VIDMM_MULTI_ALLOC **v25; // rdi
  struct ADAPTER_RENDER *v26; // r11
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 hDevice; // rcx
  __int64 v34; // rax
  unsigned int v35; // [rsp+38h] [rbp-99h]
  struct DXGDEVICE *v36; // [rsp+58h] [rbp-79h] BYREF
  struct DXGDEVICE *v37; // [rsp+60h] [rbp-71h] BYREF
  int v38; // [rsp+68h] [rbp-69h] BYREF
  __int64 v39; // [rsp+70h] [rbp-61h]
  char v40[8]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v41; // [rsp+80h] [rbp-51h]
  char v42; // [rsp+88h] [rbp-49h]
  _BYTE v43[24]; // [rsp+90h] [rbp-41h] BYREF
  char v44[8]; // [rsp+A8h] [rbp-29h] BYREF
  char v45[32]; // [rsp+B0h] [rbp-21h] BYREF
  char v46[56]; // [rsp+D0h] [rbp-1h] BYREF

  v39 = 0LL;
  v38 = 3034;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v12 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, a1->hDevice, Current, &v37);
    v16 = (ADAPTER_RENDER **)v37;
    if ( v37 )
    {
      if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v37);
        v17 = v16[2];
        v42 = 0;
        v41 = *((_QWORD *)v17 + 2);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v16, 0, v18, 0);
        v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
        if ( v19 < 0
          || (v19 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                      (DXGDEVICE *)v16,
                      a2,
                      (struct COREDEVICEACCESS *)v44,
                      v35,
                      a3,
                      a4,
                      a6),
              v19 < 0) )
        {
          v27 = v19;
        }
        else
        {
          v20 = v12 + 26;
          hAllocation = a1->pOpenAllocationInfo->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 26));
          v22 = (hAllocation >> 6) & 0xFFFFFF;
          if ( (unsigned int)v22 < *((_DWORD *)v12 + 62)
            && (v23 = v12[29],
                v24 = *((_DWORD *)v23 + 4 * v22 + 2),
                ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v23 + 16 * v22 + 8) & 0x60))
            && (v24 & 0x2000) == 0
            && (v24 & 0x1F) == 5 )
          {
            v25 = (struct _VIDMM_MULTI_ALLOC **)*((_QWORD *)v23 + 2 * (unsigned int)v22);
          }
          else
          {
            v25 = 0LL;
          }
          ExReleasePushLockSharedEx(v20, 0LL);
          KeLeaveCriticalRegion();
          if ( v25 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v16[2])
              && (v27 = MapGpuVirtualAddressToAllocation(v26, (struct DXGALLOCATION *)v25), v27 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v16,
                0,
                0LL,
                v25[5],
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                *((VIDMM_EXPORT **)v16[2] + 68),
                                *((struct VIDMM_GLOBAL **)v16[2] + 69),
                                v25[3]);
              v27 = 0;
            }
          }
          else
          {
            v27 = -1073741811;
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v46);
        COREACCESS::~COREACCESS((COREACCESS *)v45);
        if ( v42 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
      }
      else
      {
        v34 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        v27 = -1073741811;
        *(_QWORD *)(v34 + 24) = v16;
        *(_QWORD *)(v34 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v34);
      }
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v14);
      hDevice = a1->hDevice;
      v27 = -1073741811;
      *(_QWORD *)(v32 + 24) = hDevice;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v32);
    }
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v11);
    v27 = -1073741811;
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v38);
  return (unsigned int)v27;
}
