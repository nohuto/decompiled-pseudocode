/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x140597A84
 * Callers:
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PnpRequestDeviceEjectExWorker @ 0x140694800 (PnpRequestDeviceEjectExWorker.c)
 *     PiControlQueryAndRemoveDevice @ 0x1406A8200 (PiControlQueryAndRemoveDevice.c)
 * Callees:
 *     PnpDiagnosticTraceDeviceOperation @ 0x140033680 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpSetTargetDeviceRemove @ 0x14056E408 (PnpSetTargetDeviceRemove.c)
 *     PnpRemoveEventFromQueue @ 0x1406A05D8 (PnpRemoveEventFromQueue.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  int v7; // r14d
  volatile __int32 *v9; // rdi
  _DWORD *v10; // r15
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  char *PoolWithTag; // rax
  int v16; // ebx
  int v17; // edi
  int v18; // r12d
  int v19; // ebx
  char *v20; // r12
  int v22; // ecx
  _WORD *v23; // rax
  char v24; // [rsp+78h] [rbp-29h]
  __int64 v25; // [rsp+80h] [rbp-21h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  PVOID Object; // [rsp+90h] [rbp-11h]
  struct _KEVENT Event; // [rsp+98h] [rbp-9h] BYREF

  v7 = a5 & 8;
  P = 0LL;
  v9 = 0LL;
  v24 = 0;
  v10 = 0LL;
  *(_DWORD *)a2 = 0;
  v11 = 0LL;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  Object = v12;
  if ( !v12 )
  {
    v20 = a2;
    v19 = -1073741810;
    goto LABEL_27;
  }
  v13 = *(_QWORD *)(v12[39] + 40LL);
  if ( !v13 )
  {
    v19 = -1073741810;
LABEL_35:
    v20 = a2;
    goto LABEL_24;
  }
  if ( v13 == IopRootDeviceNode )
  {
    v19 = -1073741790;
    goto LABEL_35;
  }
  v14 = *(unsigned int *)a4;
  if ( (_DWORD)v14 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14 + 20, 0x20207050u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v19 = -1073741670;
LABEL_38:
      v20 = a2;
      goto LABEL_24;
    }
    v11 = (unsigned __int16 *)(PoolWithTag + 4);
    v24 = 1;
    *((_WORD *)PoolWithTag + 2) = 0;
    *(_QWORD *)(PoolWithTag + 12) = PoolWithTag + 20;
    v16 = 0;
    *((_WORD *)PoolWithTag + 3) = *a4;
  }
  else
  {
    v16 = 1;
  }
  if ( v7 && a6 )
    v16 = 1;
  if ( (a5 & 2) != 0 )
  {
    v17 = 22;
LABEL_12:
    v18 = 0;
    goto LABEL_13;
  }
  if ( !v7 )
  {
    v17 = 21;
    goto LABEL_12;
  }
  v17 = 47;
  v18 = 1;
LABEL_13:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v19 = PnpSetTargetDeviceRemove(
          Object,
          0,
          (a5 & 0xB) != 0,
          v18,
          v16,
          v17,
          0,
          (__int64)&Event,
          0LL,
          0LL,
          &v25,
          (__int64)v10,
          (__int64)v11,
          (__int64 *)&P);
  if ( v19 < 0 )
    goto LABEL_49;
  v19 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
  if ( v19 != 257 )
    goto LABEL_15;
  v9 = (volatile __int32 *)P;
  if ( (unsigned int)PnpRemoveEventFromQueue(P) )
  {
    v19 = -1073741536;
    goto LABEL_38;
  }
  if ( _InterlockedExchange(v9 + 17, 1) )
  {
    v19 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_15:
    v20 = a2;
    if ( v19 >= 0 )
      v19 = v25;
    if ( v10 )
      *(_DWORD *)a2 = *v10;
    if ( v11 )
    {
      if ( *v11 )
      {
        if ( (unsigned int)*v11 >= *(_DWORD *)a4 )
          *v11 = *a4 - 2;
        memmove(a3, *((const void **)v11 + 1), *v11);
        a3[(unsigned __int64)*v11 >> 1] = 0;
      }
      *(_DWORD *)a4 = *v11;
    }
    if ( *(_DWORD *)a2 == 6 )
    {
      if ( a3 )
      {
        v22 = 0;
        v23 = a3;
        if ( *a3 )
        {
          while ( *v23 != 92 || ++v22 != 3 )
          {
            if ( !*++v23 )
              goto LABEL_60;
          }
          *v23 = 0;
LABEL_60:
          if ( v22 == 3 )
            *(_DWORD *)a4 = (unsigned __int16)((_WORD)v23 - (_WORD)a3);
        }
      }
    }
    goto LABEL_23;
  }
  v19 = -1073741536;
  v24 = 0;
  *((_BYTE *)P + 72) = 1;
  _InterlockedExchange(v9 + 17, 0);
LABEL_49:
  v20 = a2;
LABEL_23:
  v9 = (volatile __int32 *)P;
LABEL_24:
  ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  if ( v9 && _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_27:
  if ( v7 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, a1, v19, (__int64)v11, *v20);
  if ( v24 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v19;
}
