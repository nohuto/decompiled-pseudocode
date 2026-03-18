/*
 * XREFs of PiDqIrpQueryGetResult @ 0x14054D9E8
 * Callers:
 *     PiDqDispatch @ 0x14054C640 (PiDqDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     PiDqQuerySerializeActionQueue @ 0x14052DBC8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpComplete @ 0x14054CC4C (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x14054CE1C (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int v2; // edi
  __int64 v3; // r15
  __int64 v4; // rsi
  int v5; // r13d
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rcx
  ULONG_PTR v11; // rcx
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v14; // rax
  _OWORD v15[4]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = 0;
  v16 = 0;
  v15[0] = 0uLL;
  if ( !v4 )
  {
    v2 = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v8 = *(_DWORD *)(v4 + 216);
  if ( (v8 & 8) != 0 )
  {
    v2 = -1073741536;
    goto LABEL_7;
  }
  if ( (v8 & 4) == 0 )
    goto LABEL_30;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x10) == 0 )
    {
      *(_DWORD *)(v4 + 216) = v8 | 0x10;
      v6 = 1;
      goto LABEL_7;
    }
LABEL_30:
    v2 = -1073741637;
    goto LABEL_7;
  }
  v2 = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 < 0 )
    goto LABEL_13;
  v9 = *(_DWORD *)(v3 + 8);
  if ( v9 < 0x10 )
  {
    v2 = -1073741789;
  }
  else
  {
    if ( v5 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v9, 8u);
      v2 = PiDqQuerySerializeActionQueue(v4, *(_QWORD *)(a1 + 112), *(_DWORD *)(v3 + 8), (int *)&v16, &v17);
      if ( v2 < 0 )
        goto LABEL_13;
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      PiDqQueryGetNextIoctlInfo(v4, *(_DWORD *)(v3 + 8), v17, v15);
      v11 = v4 + 64;
LABEL_12:
      ExReleasePushLockEx(v11, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_13:
      if ( v2 == 259 )
        return (unsigned int)v2;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
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
        PiDqQueryGetNextIoctlInfo(v4, *(_DWORD *)(v3 + 8), 0, v15);
        v16 = 16;
      }
      v11 = v4 + 64;
      goto LABEL_12;
    }
    v2 = -1073741811;
  }
LABEL_14:
  if ( v6 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    *(_DWORD *)(v4 + 216) &= ~0x10u;
    if ( v2 < 0 )
    {
      *(_DWORD *)(v4 + 216) |= 1u;
      PiDqQueryFreeActiveData(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete((IRP *)a1, v2, v16, v15);
  return (unsigned int)v2;
}
