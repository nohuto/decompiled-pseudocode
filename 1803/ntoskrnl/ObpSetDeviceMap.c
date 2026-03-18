/*
 * XREFs of ObpSetDeviceMap @ 0x14057D9B8
 * Callers:
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
 *     ObpSetSiloDeviceMap @ 0x14061D1CC (ObpSetSiloDeviceMap.c)
 *     ObSetProcessDeviceMap @ 0x14075B740 (ObSetProcessDeviceMap.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpCloseHandle @ 0x1404B5E0C (ObpCloseHandle.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, _QWORD *a6)
{
  NTSTATUS result; // eax
  PVOID v9; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  NTSTATUS v12; // ebp
  void *v13; // rbp
  unsigned __int64 *v14; // rdi
  void ***ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  void ***v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  int v23; // ebx
  void *v24; // rcx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result < 0 )
    return result;
  v9 = Objecta;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
  {
    v23 = -1073741811;
LABEL_25:
    ObfDereferenceObject(v9);
    return v23;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6D44624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v23 = -1073741670;
    goto LABEL_25;
  }
  memset(PoolWithTag, 0, 0x48uLL);
  *((_DWORD *)v11 + 6) = 1;
  *v11 = v9;
  v12 = ObOpenObjectByPointer(v9, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v11 + 2);
  if ( v12 < 0 )
  {
    ObfDereferenceObject(v9);
    ExFreePoolWithTag(v11, 0x6D44624Fu);
    return v12;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v11[8] = Object;
    }
    v13 = 0LL;
    v14 = 0LL;
    ServerSiloGlobals = (void ***)PsGetServerSiloGlobals((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = ServerSiloGlobals;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 15), 0LL);
    v20 = Objecta;
    v21 = *((_QWORD *)Objecta + 38);
    if ( v21 )
    {
      v14 = v11;
      v11 = (_QWORD *)*((_QWORD *)Objecta + 38);
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 24));
    }
    else
    {
      if ( (a5 & 1) != 0 )
        *v17 = (void **)v11;
      v20[38] = v11;
      if ( (a5 & 2) != 0 )
      {
        v22 = **v17;
        if ( v20 != v22 )
          v11[1] = v22;
      }
    }
    if ( a2 )
    {
      v13 = *(void **)(a2 + 1072);
      *(_QWORD *)(a2 + 1072) = v11;
    }
    ExReleasePushLockEx((ULONG_PTR)(v17 + 15), 0LL, v18, v19);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v14 )
    {
      ObpCloseHandle(v14[2], 0);
      ObfDereferenceObject(Objecta);
      v24 = (void *)v11[8];
      if ( v24 )
        ObfDereferenceObjectWithTag(v24, 0x6D44624Fu);
      ExFreePoolWithTag(v14, 0x6D44624Fu);
    }
    if ( v13 )
      ObfDereferenceDeviceMap(v13);
    if ( a6 )
      *a6 = v11;
    return 0;
  }
}
