/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C016E9D0
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9838 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        unsigned int a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v13; // rax
  int v14; // ebx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  HANDLE hNtHandle; // rcx
  D3DKMT_HANDLE hDevice; // edx
  char v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  ADAPTER_RENDER **v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  ADAPTER_RENDER *v30; // rax
  __int64 v31; // r9
  unsigned int v32; // r8d
  D3DKMT_HANDLE hAllocation; // r15d
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  struct _VIDMM_MULTI_ALLOC **v37; // rdi
  struct ADAPTER_RENDER *v38; // r11
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGDEVICE *v42; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v43; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-88h] BYREF
  PVOID v47; // [rsp+88h] [rbp-80h]
  _BYTE v48[16]; // [rsp+90h] [rbp-78h] BYREF
  int v49; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h]
  PVOID Object; // [rsp+B0h] [rbp-58h] BYREF
  PERESOURCE *v52; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v53[32]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v54[56]; // [rsp+E0h] [rbp-28h] BYREF

  v50 = 0LL;
  v49 = 3034;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    v14 = -1073741811;
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_43;
  }
  v15 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v19 = v15;
  v14 = v15;
  v47 = Object;
  if ( v15 == -1073741788 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v20 + 32) = -1073741788LL;
LABEL_8:
    *(_QWORD *)(v20 + 24) = hNtHandle;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_41;
  }
  if ( v15 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v20 + 32) = v19;
    goto LABEL_8;
  }
  hDevice = a1->hDevice;
  v43 = 0LL;
  v23 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, hDevice, (struct _KTHREAD **)Current, &v43);
  v27 = (ADAPTER_RENDER **)v43;
  if ( v43 )
  {
    if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v43);
      v30 = v27[2];
      LOBYTE(v45) = 0;
      v44[1] = *((_QWORD *)v30 + 2);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v52, (__int64)v27, 0, v31, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v52);
      if ( v14 >= 0 )
      {
        v14 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                (DXGDEVICE *)v27,
                (__int64)a1,
                v32,
                (__int64)v47,
                a2,
                &v52,
                v23,
                a3,
                a4,
                a6);
        if ( v14 >= 0 )
        {
          hAllocation = a1->pOpenAllocationInfo2->hAllocation;
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
          v34 = (hAllocation >> 6) & 0xFFFFFF;
          if ( (unsigned int)v34 < *((_DWORD *)Current + 62)
            && (v35 = *((_QWORD *)Current + 29),
                v36 = *(_DWORD *)(v35 + 16 * v34 + 8),
                ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60))
            && (v36 & 0x2000) == 0
            && (v36 & 0x1F) == 5 )
          {
            v37 = *(struct _VIDMM_MULTI_ALLOC ***)(v35 + 16LL * (unsigned int)v34);
          }
          else
          {
            v37 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( v37 )
          {
            if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v27[2])
              || (v14 = MapGpuVirtualAddressToAllocation(v38, (struct DXGALLOCATION *)v37), v14 >= 0) )
            {
              if ( a5 )
                *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                *((VIDMM_EXPORT **)v27[2] + 68),
                                *((struct VIDMM_GLOBAL **)v27[2] + 69),
                                v37[3]);
              COREACCESS::~COREACCESS((COREACCESS *)v54);
              COREACCESS::~COREACCESS((COREACCESS *)v53);
              if ( (_BYTE)v45 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
              if ( !v42 )
                goto LABEL_41;
              goto LABEL_39;
            }
            DXGDEVICE::DestroyAllocationInternal((DXGDEVICE *)v27, 0, 0LL, v37[5], 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
          else
          {
            v14 = -1073741811;
          }
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v54);
      COREACCESS::~COREACCESS((COREACCESS *)v53);
      if ( (_BYTE)v45 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v14 = -1073741811;
      *(_QWORD *)(v29 + 24) = v27;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v25);
    v14 = -1073741811;
    *(_QWORD *)(v28 + 24) = a1->hDevice;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  if ( v42 )
  {
LABEL_39:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  }
LABEL_41:
  if ( v47 )
    ObfDereferenceObject(v47);
LABEL_43:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v49);
  return (unsigned int)v14;
}
