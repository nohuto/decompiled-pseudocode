/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0186AD0
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C009554C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddOpenResourceFromNtHandle(
        struct _D3DKMT_OPENRESOURCEFROMNTHANDLE *a1,
        __int64 a2,
        struct _EPROCESS *a3,
        unsigned int *a4,
        void **a5,
        unsigned __int64 *a6)
{
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  HANDLE hNtHandle; // rcx
  D3DKMT_HANDLE hDevice; // edx
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  ADAPTER_RENDER **v27; // rsi
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  ADAPTER_RENDER *v31; // rax
  __int64 v32; // r9
  unsigned int v33; // r8d
  D3DKMT_HANDLE hAllocation; // r14d
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  struct _VIDMM_MULTI_ALLOC **v38; // rdi
  struct ADAPTER_RENDER *v39; // r11
  struct DXGDEVICE *v41; // [rsp+58h] [rbp-89h] BYREF
  struct DXGDEVICE *v42; // [rsp+60h] [rbp-81h] BYREF
  _BYTE v43[8]; // [rsp+68h] [rbp-79h] BYREF
  __int64 v44; // [rsp+70h] [rbp-71h]
  char v45; // [rsp+78h] [rbp-69h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-61h] BYREF
  PVOID v47; // [rsp+88h] [rbp-59h]
  _BYTE v48[16]; // [rsp+90h] [rbp-51h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-41h] BYREF
  PERESOURCE *v50; // [rsp+A8h] [rbp-39h] BYREF
  _BYTE v51[32]; // [rsp+B0h] [rbp-31h] BYREF
  _BYTE v52[56]; // [rsp+D0h] [rbp-11h] BYREF
  unsigned int v53; // [rsp+140h] [rbp+5Fh]

  v53 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_45;
  }
  v15 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v19 = v15;
  v12 = v15;
  v47 = Object;
  if ( v15 == -1073741788 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v20 + 32) = -1073741788LL;
LABEL_8:
    *(_QWORD *)(v20 + 24) = hNtHandle;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_43;
  }
  if ( v15 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v20 + 32) = v19;
    goto LABEL_8;
  }
  hDevice = a1->hDevice;
  v42 = 0LL;
  v23 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, hDevice, (struct _KTHREAD **)Current, &v42);
  v27 = (ADAPTER_RENDER **)v42;
  if ( v42 )
  {
    if ( a1->TotalPrivateDriverDataBufferSize || a1->ResourcePrivateDriverDataSize )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v42);
      v31 = v27[2];
      v45 = 0;
      v44 = *((_QWORD *)v31 + 2);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v50, (__int64)v27, 0, v32, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v50);
      if ( v12 >= 0 )
      {
        v12 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                (DXGDEVICE *)v27,
                (__int64)a1,
                v33,
                (__int64)v47,
                v53,
                &v50,
                v23,
                a3,
                a4,
                a6);
        if ( v12 >= 0 )
        {
          hAllocation = a1->pOpenAllocationInfo2->hAllocation;
          DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
          v35 = (hAllocation >> 6) & 0xFFFFFF;
          if ( (unsigned int)v35 < *((_DWORD *)Current + 60)
            && (v36 = *((_QWORD *)Current + 28),
                v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
                ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60))
            && (v37 & 0x2000) == 0
            && (v37 & 0x1F) != 0
            && (*(_BYTE *)(v36 + 16LL * (unsigned int)v35 + 8) & 0x1F) == 5 )
          {
            v38 = *(struct _VIDMM_MULTI_ALLOC ***)(v36 + 16LL * (unsigned int)v35);
          }
          else
          {
            v38 = 0LL;
          }
          ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
          KeLeaveCriticalRegion();
          if ( v38 )
          {
            if ( !ADAPTER_RENDER::GdiNodeSupportsGpuVa(v27[2])
              || (v12 = MapGpuVirtualAddressToAllocation(v39, (struct DXGALLOCATION *)v38), v12 >= 0) )
            {
              if ( a5 )
                *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                                *((VIDMM_EXPORT **)v27[2] + 66),
                                *((struct VIDMM_GLOBAL **)v27[2] + 67),
                                v38[3]);
              COREACCESS::~COREACCESS((COREACCESS *)v52);
              COREACCESS::~COREACCESS((COREACCESS *)v51);
              if ( v45 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
              if ( !v41 )
                goto LABEL_43;
              v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
              goto LABEL_41;
            }
            DXGDEVICE::DestroyAllocationInternal((DXGDEVICE *)v27, 0, 0LL, v38[5], 0LL, DXGDEVICE::DestroyFlagsDefault);
          }
          else
          {
            v12 = -1073741811;
          }
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v52);
      COREACCESS::~COREACCESS((COREACCESS *)v51);
      if ( v45 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      v12 = -1073741811;
      *(_QWORD *)(v30 + 24) = v27;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v25);
    v12 = -1073741811;
    *(_QWORD *)(v28 + 24) = a1->hDevice;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  if ( v41 )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v29 = v13 == 1;
LABEL_41:
    if ( v29 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
  }
LABEL_43:
  if ( v47 )
    ObfDereferenceObject(v47);
LABEL_45:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 3034);
  return (unsigned int)v12;
}
