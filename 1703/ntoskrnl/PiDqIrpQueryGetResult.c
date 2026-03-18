/*
 * XREFs of PiDqIrpQueryGetResult @ 0x1404B80E4
 * Callers:
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1404B8ECC (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqIrpComplete @ 0x1404B8FB0 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int SerializeActionQueue; // edi
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
  __int64 v15; // [rsp+20h] [rbp-68h]
  _QWORD v16[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+20h] BYREF

  SerializeActionQueue = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = 0;
  v17 = 0;
  v16[0] = 0LL;
  v16[1] = 0LL;
  if ( !v4 )
  {
    SerializeActionQueue = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v8 = *(_DWORD *)(v4 + 216);
  if ( (v8 & 8) != 0 )
  {
    SerializeActionQueue = -1073741536;
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
    SerializeActionQueue = -1073741637;
    goto LABEL_7;
  }
  SerializeActionQueue = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( SerializeActionQueue < 0 )
    goto LABEL_13;
  v9 = *(_DWORD *)(v3 + 8);
  if ( v9 < 0x10 )
  {
    SerializeActionQueue = -1073741789;
  }
  else
  {
    if ( v5 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v9, 8u);
      SerializeActionQueue = PiDqQuerySerializeActionQueue(
                               v4,
                               *(_QWORD *)(a1 + 112),
                               *(_DWORD *)(v3 + 8),
                               (unsigned int)&v17,
                               (__int64)&v18);
      if ( SerializeActionQueue < 0 )
        goto LABEL_13;
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      PiDqQueryGetNextIoctlInfo(v4, *(unsigned int *)(v3 + 8), v18, v16);
      v11 = v4 + 64;
LABEL_12:
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_13:
      if ( SerializeActionQueue == 259 )
        return (unsigned int)SerializeActionQueue;
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
          SerializeActionQueue = -1073741536;
        }
        else
        {
          *(_QWORD *)(v4 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          SerializeActionQueue = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, *(unsigned int *)(v3 + 8), 0LL, v16);
        v17 = 16;
      }
      v11 = v4 + 64;
      goto LABEL_12;
    }
    SerializeActionQueue = -1073741811;
  }
LABEL_14:
  if ( v6 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    *(_DWORD *)(v4 + 216) &= ~0x10u;
    if ( SerializeActionQueue < 0 )
    {
      *(_DWORD *)(v4 + 216) |= 1u;
      PiDqQueryFreeActiveData(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(a1, (unsigned int)SerializeActionQueue, v17, v16, v15);
  return (unsigned int)SerializeActionQueue;
}
