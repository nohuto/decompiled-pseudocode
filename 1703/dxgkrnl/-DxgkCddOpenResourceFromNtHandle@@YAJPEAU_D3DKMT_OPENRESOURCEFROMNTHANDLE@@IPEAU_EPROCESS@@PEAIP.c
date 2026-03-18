/*
 * XREFs of ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0182880
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
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C1F00 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  struct DXGPROCESS *Current; // r14
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  HANDLE hNtHandle; // rcx
  __int64 hDevice; // rdx
  char v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGDEVICE *v30; // rsi
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r8
  D3DKMT_HANDLE hAllocation; // edi
  unsigned int v38; // ecx
  __int64 v39; // r8
  int v40; // edx
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct ADAPTER_RENDER *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _VIDMM_MULTI_ALLOC **v49; // r11
  struct DXGDEVICE *v51; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v52; // [rsp+60h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v53; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v54[2]; // [rsp+70h] [rbp-98h] BYREF
  char v55; // [rsp+80h] [rbp-88h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-80h] BYREF
  PVOID v57; // [rsp+90h] [rbp-78h]
  _BYTE v58[16]; // [rsp+98h] [rbp-70h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  PERESOURCE *v60; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v61[32]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v62[56]; // [rsp+E0h] [rbp-28h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3034);
  HandleInformation = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    v13 = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    goto LABEL_47;
  }
  v16 = ObReferenceObjectByHandle(
          a1->hNtHandle,
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          1,
          &Object,
          &HandleInformation);
  v21 = v16;
  v13 = v16;
  v57 = Object;
  if ( v16 == -1073741788 )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v22 + 32) = -1073741788LL;
LABEL_8:
    *(_QWORD *)(v22 + 24) = hNtHandle;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_45;
  }
  if ( v16 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    hNtHandle = a1->hNtHandle;
    *(_QWORD *)(v22 + 32) = v21;
    goto LABEL_8;
  }
  hDevice = a1->hDevice;
  v52 = 0LL;
  v25 = (HandleInformation.GrantedAccess & 1) == 0;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, hDevice, (struct _KTHREAD **)Current, &v52);
  v30 = v52;
  if ( !v52 )
  {
    v31 = WdLogNewEntry5_WdError(v27, v26);
    v13 = -1073741811;
    *(_QWORD *)(v31 + 24) = a1->hDevice;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    goto LABEL_13;
  }
  if ( !a1->TotalPrivateDriverDataBufferSize && !a1->ResourcePrivateDriverDataSize )
  {
    v33 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    v13 = -1073741811;
    *(_QWORD *)(v33 + 24) = v30;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58, v52);
  v34 = *((_QWORD *)v30 + 2);
  v55 = 0;
  v54[1] = *(_QWORD *)(v34 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v60, (__int64)v30, 0LL, v35, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v60);
  if ( v13 >= 0 )
  {
    v13 = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
            v30,
            (__int64)a1,
            v36,
            (__int64)v57,
            a2,
            &v60,
            v25,
            a3,
            a4,
            a6);
    if ( v13 >= 0 )
    {
      hAllocation = a1->pOpenAllocationInfo2->hAllocation;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
      v38 = (hAllocation >> 6) & 0xFFFFFF;
      if ( v38 < *((_DWORD *)Current + 52)
        && (v39 = *((_QWORD *)Current + 24),
            v40 = *(_DWORD *)(v39 + 16LL * v38 + 8),
            ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x30))
        && (v40 & 0x1000) == 0
        && (v40 & 0xF) != 0
        && (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0xF) == 5 )
      {
        v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v38);
      }
      else
      {
        v41 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v53, v41);
      ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( !v53 )
      {
        v13 = -1073741811;
LABEL_32:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v42, v43, v44);
        goto LABEL_19;
      }
      v45 = (struct ADAPTER_RENDER *)*((_QWORD *)v30 + 2);
      if ( ADAPTER_RENDER::GdiNodeSupportsGpuVa(v45) )
      {
        v13 = MapGpuVirtualAddressToAllocation(v45, (struct DXGALLOCATION *)v49);
        if ( v13 < 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            v30,
            0,
            0LL,
            (struct DXGRESOURCE *)v53[5].Count,
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
          goto LABEL_32;
        }
        v49 = (struct _VIDMM_MULTI_ALLOC **)v53;
      }
      if ( a5 )
        *a5 = (void *)VIDMM_EXPORT::VidMmGetAllocationSection(
                        *(VIDMM_EXPORT **)(*((_QWORD *)v30 + 2) + 432LL),
                        *(struct VIDMM_GLOBAL **)(*((_QWORD *)v30 + 2) + 440LL),
                        v49[3]);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v46, v47, v48);
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      if ( v55 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58);
      if ( !v51 )
        goto LABEL_45;
      v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_43;
    }
  }
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v62);
  COREACCESS::~COREACCESS((COREACCESS *)v61);
  if ( v55 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58);
LABEL_13:
  if ( v51 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v32 = v14 == 1;
LABEL_43:
    if ( v32 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
  }
LABEL_45:
  if ( v57 )
    ObfDereferenceObject(v57);
LABEL_47:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 3034);
  return (unsigned int)v13;
}
