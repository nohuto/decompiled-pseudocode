/*
 * XREFs of ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C007D090
 * Callers:
 *     <none>
 * Callees:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001008 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003730 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C007D2CC (-MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  struct _KTHREAD **v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ADAPTER_RENDER **v16; // rsi
  ADAPTER_RENDER *v17; // rax
  __int64 v18; // r9
  int v19; // eax
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v21; // rax
  struct _KTHREAD *v22; // rdx
  int v23; // ecx
  struct _VIDMM_MULTI_ALLOC **v24; // rdi
  struct ADAPTER_RENDER *v25; // r11
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 hDevice; // rcx
  __int64 v33; // rax
  unsigned int v34; // [rsp+38h] [rbp-89h]
  struct DXGDEVICE *v35; // [rsp+58h] [rbp-69h] BYREF
  struct DXGDEVICE *v36; // [rsp+60h] [rbp-61h] BYREF
  char v37[8]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v38; // [rsp+70h] [rbp-51h]
  char v39; // [rsp+78h] [rbp-49h]
  _BYTE v40[24]; // [rsp+80h] [rbp-41h] BYREF
  char P[8]; // [rsp+98h] [rbp-29h] BYREF
  char v42[32]; // [rsp+A0h] [rbp-21h] BYREF
  char v43[56]; // [rsp+C0h] [rbp-1h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v12 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, a1->hDevice, Current, &v36);
    v16 = (ADAPTER_RENDER **)v36;
    if ( v36 )
    {
      if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40, v36);
        v17 = v16[2];
        v39 = 0;
        v38 = *((_QWORD *)v17 + 2);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)P, (__int64)v16, 0, v18, 0);
        v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)P);
        if ( v19 < 0
          || (v19 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>((DXGDEVICE *)v16, a2, P, v34, a3, a4, a6), v19 < 0) )
        {
          v26 = v19;
        }
        else
        {
          hAllocation = a1->pOpenAllocationInfo->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 25));
          v21 = (hAllocation >> 6) & 0xFFFFFF;
          if ( (unsigned int)v21 < *((_DWORD *)v12 + 60)
            && (v22 = v12[28],
                v23 = *((_DWORD *)v22 + 4 * v21 + 2),
                ((hAllocation >> 25) & 0x60) == (*((_BYTE *)v22 + 16 * v21 + 8) & 0x60))
            && (v23 & 0x2000) == 0
            && (v23 & 0x1F) != 0
            && (*((_BYTE *)v22 + 16 * (unsigned int)v21 + 8) & 0x1F) == 5 )
          {
            v24 = (struct _VIDMM_MULTI_ALLOC **)*((_QWORD *)v22 + 2 * (unsigned int)v21);
          }
          else
          {
            v24 = 0LL;
          }
          ExReleasePushLockSharedEx(v12 + 25, 0LL);
          KeLeaveCriticalRegion();
          if ( v24 )
          {
            if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v16[2])
              && (v26 = MapGpuVirtualAddressToAllocation(v25, (struct DXGALLOCATION *)v24), v26 < 0) )
            {
              DXGDEVICE::DestroyAllocationInternal(
                (DXGDEVICE *)v16,
                0,
                0LL,
                v24[5],
                0LL,
                DXGDEVICE::DestroyFlagsDefault);
            }
            else
            {
              if ( a5 )
                *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                *((VIDMM_EXPORT **)v16[2] + 66),
                                *((struct VIDMM_GLOBAL **)v16[2] + 67),
                                v24[3]);
              v26 = 0;
            }
          }
          else
          {
            v26 = -1073741811;
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        if ( v39 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
      }
      else
      {
        v33 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        v26 = -1073741811;
        *(_QWORD *)(v33 + 24) = v16;
        *(_QWORD *)(v33 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v33);
      }
    }
    else
    {
      v31 = WdLogNewEntry5_WdError(v14);
      hDevice = a1->hDevice;
      v26 = -1073741811;
      *(_QWORD *)(v31 + 24) = hDevice;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v31);
    }
    if ( v35 )
    {
      v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v27 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v11);
    v26 = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, 3034);
  return (unsigned int)v26;
}
