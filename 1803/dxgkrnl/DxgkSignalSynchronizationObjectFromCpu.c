/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C3170
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00097E8 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00D1544 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01C16F4 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rdi
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
  PERESOURCE *Global; // rax
  unsigned int v31; // ebx
  struct DXGDEVICE *v32[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v33; // [rsp+40h] [rbp-128h] BYREF
  char v34; // [rsp+48h] [rbp-120h]
  struct DXGDEVICE *v35; // [rsp+50h] [rbp-118h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-110h] BYREF
  _BYTE v37[24]; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v38[96]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID P; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v40[32]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+118h] [rbp-50h]
  void *v42[3]; // [rsp+120h] [rbp-48h] BYREF
  unsigned int v43; // [rsp+138h] [rbp-30h]

  Current = DXGPROCESS::GetCurrent(a1, a2);
  v32[1] = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = PsGetCurrentProcess(v7, v6);
    v8 = -1073741811;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return v8;
  }
  v42[0] = 0LL;
  v43 = 0;
  P = 0LL;
  v41 = 0;
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
    v41 = 0;
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v42);
    return -1073741811LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v42, v11);
  v12 = v42[0];
  if ( !v42[0] )
  {
    P = 0LL;
    v41 = 0;
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v42);
    return 3221225495LL;
  }
  v13 = v43;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v13] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v13] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v12, ObjectHandleArray, v13 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v42[0];
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, v11);
  v15 = P;
  if ( !P )
  {
    P = 0LL;
    v41 = 0;
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v42);
    return 3221225495LL;
  }
  v16 = v41;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v16] < Src.FenceValueArray || &Src.FenceValueArray[v16] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, FenceValueArray, v16 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v32, Src.hDevice, (struct _KTHREAD **)Current, &v35);
  if ( !v35 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_35:
    if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
    if ( P != v40 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
LABEL_41:
    P = 0LL;
    v41 = 0;
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v42);
    return v8;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v33, v35);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v35, 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38);
  if ( v22 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v33 && v34 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
    if ( P != v40 && P )
      ExFreePoolWithTag(P, 0);
    v8 = v22;
    goto LABEL_41;
  }
  v24 = *((_QWORD *)v35 + 2);
  v25 = *(_QWORD *)(v24 + 16);
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
    if ( v33 && v34 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_35;
  }
  if ( *(_DWORD *)(v25 + 1664) >= 0x5020u )
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
      goto LABEL_47;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v27, v23);
      *(_QWORD *)(v29 + 24) = 5033LL;
LABEL_47:
      WdLogEvent5_WdWarning(v29);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      if ( v33 && v34 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
        KeLeaveCriticalRegion();
      }
      if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v41 = 0;
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v42);
      return -1073741811LL;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  v31 = SignalSynchronizationObjectFromCpu(&Src, Current, v35);
  if ( v37[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
  if ( v33 && v34 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v33 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v32[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v32[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32[0] + 2), v32[0]);
  if ( P != v40 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v41 = 0;
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v42);
  return v31;
}
