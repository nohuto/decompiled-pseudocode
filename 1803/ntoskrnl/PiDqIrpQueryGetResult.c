/*
 * XREFs of PiDqIrpQueryGetResult @ 0x140523AD4
 * Callers:
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDqQuerySerializeActionQueue @ 0x14050D2A0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpComplete @ 0x1405235D8 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1405237A4 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rdi
  int v5; // r13d
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // eax
  struct _KTHREAD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  struct _KTHREAD *v20; // rax
  _OWORD v21[5]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = 0;
  v22 = 0;
  v21[0] = 0uLL;
  if ( !v4 )
  {
    v2 = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v10 = *(_DWORD *)(v4 + 216);
  if ( (v10 & 8) != 0 )
  {
    v2 = -1073741536;
    goto LABEL_7;
  }
  if ( (v10 & 4) == 0 )
    goto LABEL_28;
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 0x10) == 0 )
    {
      *(_DWORD *)(v4 + 216) = v10 | 0x10;
      v6 = 1;
      goto LABEL_7;
    }
LABEL_28:
    v2 = -1073741637;
    goto LABEL_7;
  }
  v2 = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL, v8, v9);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 < 0 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v3 + 8);
  if ( v11 < 0x10 )
  {
    v2 = -1073741789;
  }
  else
  {
    if ( v5 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v11, 8u);
      v2 = PiDqQuerySerializeActionQueue(v4, *(_QWORD *)(a1 + 112), *(_DWORD *)(v3 + 8), (int *)&v22, &v23);
      if ( v2 < 0 )
        goto LABEL_13;
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      PiDqQueryGetNextIoctlInfo(v4, *(_DWORD *)(v3 + 8), v23, v21);
LABEL_12:
      ExReleasePushLockEx(v4 + 64, 0LL, v13, v14);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_13:
      if ( v2 == 259 )
        return (unsigned int)v2;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      if ( !*(_QWORD *)(v4 + 184)
        && *(_QWORD *)(v4 + 192) == v4 + 192
        && (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v2 = -1073741536;
        }
        else
        {
          *(_QWORD *)(v4 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          v2 = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, *(_DWORD *)(v3 + 8), 0, v21);
        v22 = 16;
      }
      goto LABEL_12;
    }
    v2 = -1073741811;
  }
LABEL_14:
  if ( v6 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    v18 = *(_DWORD *)(v4 + 216) & 0xFFFFFFEF;
    *(_DWORD *)(v4 + 216) = v18;
    if ( v2 < 0 )
    {
      *(_DWORD *)(v4 + 216) = v18 | 1;
      PiDqQueryFreeActiveData(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL, v16, v17);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete((IRP *)a1, v2, v22, v21);
  return (unsigned int)v2;
}
