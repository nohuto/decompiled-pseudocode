/*
 * XREFs of NtQueueApcThreadEx @ 0x1404C9748
 * Callers:
 *     NtQueueApcThread @ 0x1404C971C (NtQueueApcThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     EtwTiLogQueueApcThread @ 0x1404C9900 (EtwTiLogQueueApcThread.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtQueueApcThreadEx(void *a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  PVOID v11; // rdi
  unsigned __int64 v12; // rax
  char *PoolWithQuotaTag; // rbx
  void (__fastcall *v14)(void *); // r9
  void (__stdcall *v15)(PVOID); // rsi
  NTSTATUS v16; // ebx
  __int16 v17; // ax
  __int64 v18; // rcx
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PVOID v20; // [rsp+48h] [rbp-30h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v11 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0
      || (v11 = Object, (v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7]) != 0)
      && ((v17 = *(_WORD *)(v12 + 8), v17 == 332) || v17 == 452)
      && ((v18 = *(_QWORD *)(*((_QWORD *)Object + 68) + 1064LL)) == 0 || *(_WORD *)(v18 + 8) == 0x8664)
      && (unsigned __int64)-(a3 >> 2) <= 0xFFFFFFFF )
    {
      v16 = -1073741816;
    }
    else if ( a2 )
    {
      v16 = ObReferenceObjectByHandle(a2, 2u, PspMemoryReserveObjectTypes, PreviousMode, &v20, 0LL);
      if ( v16 >= 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)v20, 1, 0) )
        {
          v14 = (void (__fastcall *)(void *))PspUserApcReserveKernelRoutine;
          v11 = Object;
          v15 = (void (__stdcall *)(PVOID))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)v20 + 8;
LABEL_7:
          KeInitializeApc((__int64)PoolWithQuotaTag, (__int64)v11, 0, (__int64)v14, (__int64)v15, a3, 1, a4);
          if ( (unsigned __int8)KeInsertQueueApc((__int64)PoolWithQuotaTag, a5, a6, 0) )
          {
            v16 = 0;
          }
          else
          {
            ((void (__fastcall *)(char *))v15)(PoolWithQuotaTag);
            v16 = -1073741823;
          }
          goto LABEL_9;
        }
        ObfDereferenceObject(v20);
        v11 = Object;
        v16 = -1073741584;
      }
    }
    else
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
      if ( PoolWithQuotaTag )
      {
        v14 = PspQueueApcSpecialApc;
        v15 = ExFreePool;
        goto LABEL_7;
      }
      v16 = -1073741801;
    }
LABEL_9:
    EtwTiLogQueueApcThread(v16, (_DWORD)v11, a3, a4, a5, a6);
    ObfDereferenceObject(v11);
    return v16;
  }
  return result;
}
