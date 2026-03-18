/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C01A7F50
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00013E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001434 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C008D60C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008D658 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01A6720 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  ULONG64 v9; // rax
  unsigned int v10; // ebx
  void *v11; // rcx
  __int64 v12; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  void *v14; // rcx
  __int64 v15; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  UINT *v22; // rdx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v30; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r9
  unsigned int v35; // ebx
  struct DXGDEVICE *v36[2]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v37; // [rsp+40h] [rbp-148h] BYREF
  char v38; // [rsp+48h] [rbp-140h]
  struct DXGDEVICE *v39; // [rsp+50h] [rbp-138h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-130h] BYREF
  struct _KTHREAD **v41; // [rsp+78h] [rbp-110h]
  _BYTE v42[16]; // [rsp+80h] [rbp-108h] BYREF
  void *v43; // [rsp+90h] [rbp-F8h]
  void *v44; // [rsp+98h] [rbp-F0h]
  void *v45; // [rsp+A0h] [rbp-E8h]
  void *v46; // [rsp+A8h] [rbp-E0h]
  _BYTE v47[96]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v48[3]; // [rsp+110h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+128h] [rbp-60h]
  void *v50[5]; // [rsp+130h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+158h] [rbp-30h]

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v41 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = PsGetCurrentProcess(v6);
    v7 = -1073741811;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return v7;
  }
  v48[0] = 0LL;
  v49 = 0;
  v50[0] = 0LL;
  v51 = 0;
  v9 = a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v9;
  Src.FenceValueArray = *(const UINT64 **)(v9 + 16);
  Src.Flags.Value = 0;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v10 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v50);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
    return -1073741811LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v48, v10);
  v11 = v48[0];
  v43 = v48[0];
  if ( !v48[0] )
    goto LABEL_9;
  v44 = v48[0];
  v12 = v49;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v12] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v12] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v11, ObjectHandleArray, v12 * 4);
  v45 = v48[0];
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v48[0];
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(v50, v10);
  v14 = v50[0];
  v46 = v50[0];
  if ( !v50[0] )
  {
LABEL_9:
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v50);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
    return 3221225495LL;
  }
  v36[1] = (struct DXGDEVICE *)v50[0];
  v15 = v51;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v15] < Src.FenceValueArray || &Src.FenceValueArray[v15] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v14, FenceValueArray, v15 * 8);
  Src.FenceValueArray = (const UINT64 *)v50[0];
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v36, Src.hDevice, Current, &v39);
  if ( !v39 )
  {
    v20 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v20 + 24) = hDevice;
    v7 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_31:
    if ( v36[0] )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
    }
LABEL_34:
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v50);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
    return v7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v37, v39);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v39, 0LL, v21, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v47);
  if ( v23 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
    v7 = v23;
    goto LABEL_34;
  }
  v26 = *((_QWORD *)v39 + 2);
  v27 = *(_QWORD *)(v26 + 16);
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v22);
    *(_QWORD *)(v28 + 24) = hDevice;
    v7 = -1073741811;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v27 + 1504) >= 0x5020u )
  {
    v22 = (UINT *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v22 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v22;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v26, v22, v24, v25);
      *(_QWORD *)(v30 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
      goto LABEL_40;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v30 = WdLogNewEntry5_WdWarning(v26, v22, v24, v25);
      *(_QWORD *)(v30 + 24) = 4699LL;
LABEL_40:
      WdLogEvent5_WdWarning(v30);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v37 && v38 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v50);
      PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
      return -1073741811LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v26, (__int64)v22, v24, v25);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global, v32, v33);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
  v35 = SignalSynchronizationObjectFromCpu(&Src, (struct DXGPROCESS *)Current, v39, v34);
  if ( v42[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  if ( v37 && v38 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v50);
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v48);
  return v35;
}
