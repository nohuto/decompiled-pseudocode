/*
 * XREFs of ACPIBuildRunMethodRequest @ 0x1C00111B8
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000FA10 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildRegRequest @ 0x1C001104C (ACPIBuildRegRequest.c)
 *     ACPIDeferredWakeHandler @ 0x1C0020F34 (ACPIDeferredWakeHandler.c)
 *     ACPITableLoad @ 0x1C003B1B0 (ACPITableLoad.c)
 *     ACPIWakeRestoreEnables @ 0x1C0041B68 (ACPIWakeRestoreEnables.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0002FF4 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildScheduleDpc @ 0x1C00113C4 (ACPIBuildScheduleDpc.c)
 */

__int64 __fastcall ACPIBuildRunMethodRequest(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  _QWORD *v10; // rdi
  __int64 **v11; // rbx
  unsigned int v12; // ebx
  __int64 *v14; // rax

  v10 = 0LL;
  v11 = (__int64 **)ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v11 )
  {
    v12 = -1073741670;
    if ( !a2 )
      return v12;
LABEL_3:
    a2(a1, a3, v12);
    return v12;
  }
  if ( a2 )
  {
    v10 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
    if ( !v10 )
    {
      ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
      v12 = -1073741670;
      goto LABEL_3;
    }
  }
  if ( !*(_DWORD *)(a1 + 684) )
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
    v12 = -1073741130;
    if ( !a2 )
      return v12;
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v10);
    goto LABEL_3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
  memset(v11, 0, 0x88uLL);
  *((_DWORD *)v11 + 12) = 0;
  v11[16] = &AcpiBuildRunMethodList;
  *((_DWORD *)v11 + 21) = a5;
  *((_DWORD *)v11 + 4) = 1599293264;
  *((_DWORD *)v11 + 6) = 3;
  v11[5] = (__int64 *)a1;
  *((_DWORD *)v11 + 20) = a4;
  *((_DWORD *)v11 + 5) = 4108;
  if ( a2 )
  {
    memset(v10, 0, 0x88uLL);
    *((_DWORD *)v10 + 8) = 0;
    *((_DWORD *)v10 + 12) = 0;
    v10[16] = &AcpiBuildSynchronizationList;
    v10[10] = &AcpiBuildRunMethodList;
    *((_DWORD *)v10 + 4) = 1599293264;
    *((_DWORD *)v10 + 6) = 3;
    v10[8] = a2;
    v10[9] = a3;
    v10[5] = a1;
    *((_DWORD *)v10 + 22) = a4;
    *((_DWORD *)v10 + 5) = 4106;
    *((_DWORD *)v10 + 23) = 1;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v14 = (__int64 *)qword_1C00673D8;
  if ( *(__int64 **)qword_1C00673D8 != &AcpiBuildQueueList )
    __fastfail(3u);
  *v11 = &AcpiBuildQueueList;
  v11[1] = v14;
  *v14 = (__int64)v11;
  qword_1C00673D8 = (__int64)v11;
  if ( a2 )
  {
    if ( *v11 != &AcpiBuildQueueList )
      __fastfail(3u);
    *v10 = &AcpiBuildQueueList;
    v10[1] = v11;
    *v11 = v10;
    qword_1C00673D8 = (__int64)v10;
  }
  if ( a6 )
    ACPIBuildScheduleDpc();
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
