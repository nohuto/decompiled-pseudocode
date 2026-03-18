/*
 * XREFs of WmipBuildTraceDeviceList @ 0x140020014
 * Callers:
 *     WmiTraceRundownNotify @ 0x14043C010 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x140708DD4 (WmiSetNetworkNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     WmipFreeTraceDeviceList @ 0x14043C0C0 (WmipFreeTraceDeviceList.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  PVOID v6; // rdi
  KIRQL v7; // al
  unsigned int v8; // esi
  KIRQL v9; // bp
  PVOID PoolWithTag; // rax
  _UNKNOWN **v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // ebx
  int v14; // r9d
  unsigned int v15; // ebx

  v6 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v8 = WmipInUseRegEntryCount;
  v9 = v7;
  if ( !WmipInUseRegEntryCount )
  {
    v15 = -1073741632;
LABEL_15:
    KxReleaseSpinLock(&WmipRegistrationSpinLock);
    __writecr8(v9);
    KeReleaseMutex(&WmipSMMutex, 0);
    goto LABEL_17;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)WmipInUseRegEntryCount, 0x70696D57u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_15;
  }
  v11 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v12 = PoolWithTag;
  v13 = 0;
  while ( v11 != &WmipInUseRegEntryHead )
  {
    v14 = (*((int *)v11 + 12) >> 4) & 0xF00000;
    if ( (((v14 & a1) != 0) & _bittest((const signed __int32 *)v11 + 12, 0x1Eu)) != 0 && v11[2] && v13 < v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 12);
      *(_QWORD *)v12 = v11;
      v12[2] = v14;
      v12 += 4;
      ++v13;
    }
    v11 = (_UNKNOWN **)*v11;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v9);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( v13 )
  {
    *a3 = v13;
    v15 = 0;
    *a2 = v6;
    return v15;
  }
  v15 = -1073741632;
LABEL_17:
  if ( v6 )
    WmipFreeTraceDeviceList(v6, 0LL);
  return v15;
}
