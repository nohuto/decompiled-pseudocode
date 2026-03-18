/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C008B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001078 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002596C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C008B320 (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  ADAPTER_RENDER **v18; // rsi
  ADAPTER_RENDER *v19; // rax
  __int64 v20; // r9
  int v21; // eax
  struct _KTHREAD **v22; // r14
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v24; // ecx
  struct _KTHREAD *v25; // r8
  int v26; // edx
  struct _VIDMM_MULTI_ALLOC **v27; // rdi
  struct ADAPTER_RENDER *v28; // r11
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 hDevice; // rcx
  __int64 v36; // rax
  int v37; // [rsp+38h] [rbp-89h]
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-69h] BYREF
  struct DXGDEVICE *v39; // [rsp+60h] [rbp-61h] BYREF
  char v40[8]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v41; // [rsp+70h] [rbp-51h]
  char v42; // [rsp+78h] [rbp-49h]
  _BYTE v43[24]; // [rsp+80h] [rbp-41h] BYREF
  char v44[8]; // [rsp+98h] [rbp-29h] BYREF
  char v45[32]; // [rsp+A0h] [rbp-21h] BYREF
  char v46[56]; // [rsp+C0h] [rbp-1h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v13 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, a1->hDevice, Current, &v39);
    v18 = (ADAPTER_RENDER **)v39;
    if ( v39 )
    {
      if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v39);
        v19 = v18[2];
        v42 = 0;
        v41 = *((_QWORD *)v19 + 2);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v18, 0LL, v20, 0);
        v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
        if ( v21 < 0
          || (v21 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                      (DXGDEVICE *)v18,
                      a2,
                      (struct COREDEVICEACCESS *)v44,
                      v37,
                      a3,
                      a4,
                      a6),
              v21 < 0) )
        {
          v29 = v21;
        }
        else
        {
          v22 = v13 + 21;
          hAllocation = a1->pOpenAllocationInfo->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 21));
          v24 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v24 < *((_DWORD *)v13 + 52)
            && (v25 = v13[24],
                v26 = *((_DWORD *)v25 + 4 * v24 + 2),
                ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v25 + 16 * v24 + 8) & 0x30))
            && (v26 & 0x1000) == 0
            && (v26 & 0xF) != 0
            && (*((_BYTE *)v25 + 16 * v24 + 8) & 0xF) == 5 )
          {
            v27 = (struct _VIDMM_MULTI_ALLOC **)*((_QWORD *)v25 + 2 * v24);
          }
          else
          {
            v27 = 0LL;
          }
          ExReleasePushLockSharedEx(v22, 0LL);
          KeLeaveCriticalRegion();
          if ( v27 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v18[2])
              && (v29 = MapGpuVirtualAddressToAllocation(v28, (struct DXGALLOCATION *)v27), v29 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v18,
                0,
                0LL,
                v27[5],
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                *((VIDMM_EXPORT **)v18[2] + 54),
                                *((struct VIDMM_GLOBAL **)v18[2] + 55),
                                v27[3]);
              v29 = 0;
            }
          }
          else
          {
            v29 = -1073741811;
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
        v36 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v29 = -1073741811;
        *(_QWORD *)(v36 + 24) = v18;
        *(_QWORD *)(v36 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v36);
      }
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v15, v14);
      hDevice = a1->hDevice;
      v29 = -1073741811;
      *(_QWORD *)(v34 + 24) = hDevice;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
    }
    if ( v38 )
    {
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v30 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v12, v11);
    v29 = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 3034);
  return (unsigned int)v29;
}
