/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C1CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00092DC (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00CFCFC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01C0460 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  ULONG64 v10; // rax
  unsigned int v11; // ebx
  void *v12; // rcx
  __int64 v13; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v15; // rcx
  __int64 v16; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // esi
  __int64 v23; // r8
  ULONG64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  UINT *v27; // rdx
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v29; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v31; // ebx
  struct DXGDEVICE *v32[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v33; // [rsp+40h] [rbp-128h] BYREF
  struct DXGDEVICE *v34; // [rsp+48h] [rbp-120h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+50h] [rbp-118h] BYREF
  struct _KTHREAD **v36; // [rsp+70h] [rbp-F8h]
  _BYTE v37[16]; // [rsp+78h] [rbp-F0h] BYREF
  void *v38; // [rsp+88h] [rbp-E0h]
  _BYTE v39[96]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID P; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v41[32]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v42; // [rsp+118h] [rbp-50h]
  void *v43[3]; // [rsp+120h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+138h] [rbp-30h]

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v36 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = PsGetCurrentProcess(v7, v6);
    v8 = -1073741811;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return v8;
  }
  v43[0] = 0LL;
  v44 = 0;
  P = 0LL;
  v42 = 0;
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v10;
  Src.FenceValueArray = *(const UINT64 **)(v10 + 16);
  Src.Flags.Value = 0;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v11 )
  {
    P = 0LL;
    v42 = 0;
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
    return -1073741811LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v43, v11);
  v12 = v43[0];
  if ( !v43[0] )
  {
    P = 0LL;
    v42 = 0;
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
    return 3221225495LL;
  }
  v38 = v43[0];
  v13 = v44;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v13] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v13] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v12, ObjectHandleArray, v13 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v43[0];
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, v11);
  v15 = P;
  if ( !P )
  {
    P = 0LL;
    v42 = 0;
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
    return 3221225495LL;
  }
  v32[1] = (struct DXGDEVICE *)P;
  v16 = v42;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v16] < Src.FenceValueArray || &Src.FenceValueArray[v16] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, FenceValueArray, v16 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v32, Src.hDevice, Current, &v34);
  if ( !v34 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_33:
    if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
    if ( P != v41 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
LABEL_39:
    P = 0LL;
    v42 = 0;
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
    return v8;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v33, v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v34, 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39);
  if ( v22 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    if ( v33 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    v8 = v22;
    goto LABEL_39;
  }
  v24 = *((_QWORD *)v34 + 2);
  v25 = *(_QWORD *)(v24 + 16);
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
    if ( v33 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v25 + 1528) >= 0x5020u )
  {
    v27 = (UINT *)(a1 + 24);
    v24 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v27 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v27;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v27, v23);
      *(_QWORD *)(v29 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_45:
      WdLogEvent5_WdWarning(v29);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
      if ( v33 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
      if ( P != v41 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v42 = 0;
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
      return -1073741811LL;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v27, v23);
      *(_QWORD *)(v29 + 24) = 4769LL;
      goto LABEL_45;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v24);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  v31 = SignalSynchronizationObjectFromCpu(&Src, (struct DXGPROCESS *)Current, v34);
  if ( v37[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  if ( v33 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
  if ( P != v41 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v42 = 0;
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v43);
  return v31;
}
