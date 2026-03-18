/*
 * XREFs of ACPIBuildRunMethodRequest @ 0x1C001DEF8
 * Callers:
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 *     ACPIBuildRegRequest @ 0x1C004497C (ACPIBuildRegRequest.c)
 *     ACPIDeferredWakeHandler @ 0x1C004BC64 (ACPIDeferredWakeHandler.c)
 *     ACPIWakeRestoreEnables @ 0x1C005A028 (ACPIWakeRestoreEnables.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C000DFA8 (ACPIBuildScheduleDpc.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00131D8 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020A70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
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
  __int64 *v12; // rax
  unsigned int v14; // ebx

  v10 = 0LL;
  v11 = (__int64 **)ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v11 )
  {
    v14 = -1073741670;
    if ( !a2 )
      return v14;
LABEL_15:
    a2(a1, a3, v14);
    return v14;
  }
  if ( a2 )
  {
    v10 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
    if ( !v10 )
    {
      ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
      v14 = -1073741670;
      goto LABEL_15;
    }
  }
  if ( !*(_DWORD *)(a1 + 684) )
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
    v14 = -1073741130;
    if ( !a2 )
      return v14;
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v10);
    goto LABEL_15;
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
  v12 = (__int64 *)qword_1C00772B8;
  if ( *(__int64 **)qword_1C00772B8 != &AcpiBuildQueueList )
    __fastfail(3u);
  *v11 = &AcpiBuildQueueList;
  v11[1] = v12;
  *v12 = (__int64)v11;
  qword_1C00772B8 = (__int64)v11;
  if ( a2 )
  {
    if ( *v11 != &AcpiBuildQueueList )
      __fastfail(3u);
    *v10 = &AcpiBuildQueueList;
    v10[1] = v11;
    *v11 = v10;
    qword_1C00772B8 = (__int64)v10;
  }
  if ( a6 )
    ACPIBuildScheduleDpc();
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
