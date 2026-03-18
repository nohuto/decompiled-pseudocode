/*
 * XREFs of WmipBuildTraceDeviceList @ 0x140279F5C
 * Callers:
 *     WmiSetNetworkNotify @ 0x140742968 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x1407429E8 (WmiTraceRundownNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipFreeTraceDeviceList @ 0x140742A98 (WmipFreeTraceDeviceList.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  void *v6; // rdi
  KIRQL v7; // al
  unsigned int v8; // esi
  KIRQL v9; // bp
  unsigned int v10; // ebx
  PVOID PoolWithTag; // rax
  _UNKNOWN **v12; // rdx
  _DWORD *v13; // r8
  unsigned int v14; // ebx
  int v15; // r9d

  v6 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v8 = WmipInUseRegEntryCount;
  v9 = v7;
  if ( !WmipInUseRegEntryCount )
  {
    v10 = -1073741632;
LABEL_5:
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    __writecr8(v9);
    KeReleaseMutex(&WmipSMMutex, 0);
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)WmipInUseRegEntryCount, 0x70696D57u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    goto LABEL_5;
  }
  v12 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v13 = PoolWithTag;
  v14 = 0;
  while ( v12 != &WmipInUseRegEntryHead )
  {
    v15 = (*((int *)v12 + 12) >> 4) & 0xF00000;
    if ( (v15 & a1) != 0 && ((_DWORD)v12[6] & 0x40000000) != 0 && v12[2] && v14 < v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 12);
      *(_QWORD *)v13 = v12;
      v13[2] = v15;
      v13 += 4;
      ++v14;
    }
    v12 = (_UNKNOWN **)*v12;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v9);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( v14 )
  {
    *a3 = v14;
    v10 = 0;
    *a2 = v6;
    return v10;
  }
  v10 = -1073741632;
LABEL_15:
  if ( v6 )
    WmipFreeTraceDeviceList(v6);
  return v10;
}
