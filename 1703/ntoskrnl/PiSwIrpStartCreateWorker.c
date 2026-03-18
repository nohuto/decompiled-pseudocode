/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x14045FDC0
 * Callers:
 *     PiSwIrpStartCreate @ 0x14045FCD4 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x1406A34B8 (PiSwStartCreate.c)
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwFindPdoAssociation @ 0x14045A1C0 (PiSwFindPdoAssociation.c)
 *     PiSwFreeInterfaceList @ 0x14045FB84 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x140460394 (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x1404604F4 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x140460650 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1404607E8 (PiSwInstanceInfoInit.c)
 *     PiSwDeviceCreate @ 0x140460870 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x1404608EC (PiSwValidateCreateData.c)
 *     PiSwPropertySet @ 0x140460E50 (PiSwPropertySet.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 *     PiSwBusRelationRemove @ 0x14056D5EC (PiSwBusRelationRemove.c)
 *     PiSwPnPInfoFree @ 0x14056DE7C (PiSwPnPInfoFree.c)
 *     PiSwIrpCleanup @ 0x140570744 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x140576020 (PiSwDeviceDereference.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406A30E0 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406A3334 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406A3448 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r14
  char v5; // r15
  NTSTATUS Data; // ebx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 **inserted; // rax
  volatile signed __int32 *v10; // rax
  int v11; // r8d
  void *v12; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  void *v26; // rcx
  __int64 v27; // r8
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v32; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v33; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  v33 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_29;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !a2 )
    goto LABEL_91;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) )
    Data = -1073741637;
  if ( Data >= 0 )
  {
LABEL_91:
    Data = PiSwDeviceCreate(&Buffer);
    if ( Data >= 0 )
    {
      Data = PiSwInstanceInfoInit(Buffer + 8, a1);
      if ( Data >= 0 )
      {
        inserted = (volatile signed __int32 **)RtlInsertElementGenericTableAvl(
                                                 &PiSwDeviceInstanceTable,
                                                 &Buffer,
                                                 8u,
                                                 &NewElement);
        if ( !inserted )
        {
          Data = -1073741670;
LABEL_26:
          if ( Data >= 0 )
            goto LABEL_27;
          goto LABEL_42;
        }
        v10 = *inserted;
        v33 = v10;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement(v10);
          Data = PiSwPnPInfoInit(v33 + 6, a1);
          if ( Data < 0 )
            goto LABEL_42;
          *((_DWORD *)v33 + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)v33 + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
            v12 = (void *)*((_QWORD *)v33 + 19);
            if ( !v12 )
            {
              Data = -1073741670;
              goto LABEL_42;
            }
            memmove(v12, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(
                   *(_DWORD *)(a1 + 104),
                   *(_QWORD *)(a1 + 112),
                   v11,
                   (int)v33 + 176,
                   (__int64)(v33 + 42));
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8)), Data < 0) )
          {
LABEL_42:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &v33);
              PiSwDeviceDereference(v33);
              if ( *((_QWORD *)v33 + 14) )
                PiSwBusRelationRemove(v33);
            }
            goto LABEL_27;
          }
LABEL_16:
          v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)v33 + 14), 1953261124LL);
LABEL_17:
          v5 = 1;
LABEL_18:
          if ( a2 )
          {
            if ( v5 )
            {
              _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
              if ( *(_BYTE *)(a2 + 68) )
              {
                Data = -1073741536;
                goto LABEL_42;
              }
              *((_QWORD *)v33 + 18) = a2;
              *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
            }
            else
            {
              Data = RtlStringCbCopyW(
                       *(NTSTRSAFE_PWSTR *)(a2 + 24),
                       *(unsigned int *)(v3 + 8),
                       *((NTSTRSAFE_PCWSTR *)v33 + 10));
              if ( Data < 0 )
                goto LABEL_42;
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
              if ( Data < 0 )
                goto LABEL_42;
            }
          }
          *((_DWORD *)v33 + 1) |= 1u;
          if ( a2 )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = v33;
            v33 = 0LL;
          }
          if ( v4 )
            IoInvalidateDeviceRelations(v4, SingleBusRelations);
          goto LABEL_26;
        }
        _InterlockedIncrement(v10);
        v14 = (__int64)v33;
        v15 = *((_DWORD *)v33 + 1);
        if ( (v15 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_27;
        }
        if ( (v15 & 2) == 0 )
        {
          v16 = *((_QWORD *)v33 + 15);
          if ( v16 && (*(_DWORD *)(*(_QWORD *)(v16 + 64) + 8LL) & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v33, a1) )
            {
              Data = PnpCopyDevPropertyArray(
                       *(_DWORD *)(a1 + 104),
                       *(_QWORD *)(a1 + 112),
                       v17,
                       (unsigned int)&v32,
                       (__int64)&v30);
              if ( Data < 0 )
                goto LABEL_27;
              v18 = (__int64)v33;
              v19 = *((_QWORD *)v33 + 21);
              if ( v19 )
              {
                PnpFreeDevPropertyArray(*((unsigned int *)v33 + 44), v19, 1466986064LL);
                v18 = (__int64)v33;
              }
              *(_DWORD *)(v18 + 176) = v32;
              *((_QWORD *)v33 + 21) = v30;
              goto LABEL_18;
            }
            v14 = (__int64)v33;
          }
          if ( *(_QWORD *)(v14 + 88) )
          {
            PiSwQueuedCreateInfoFree(*(_QWORD *)(v14 + 88));
            *((_QWORD *)v33 + 11) = 0LL;
            v14 = (__int64)v33;
          }
          Data = PiSwQueuedCreateInfoCreate(v14 + 88, a1);
          if ( Data < 0 )
            goto LABEL_27;
          *((_DWORD *)v33 + 1) |= 2u;
          goto LABEL_16;
        }
        v20 = PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)v33 + 14), 1953261124LL);
        v21 = (__int64)v33;
        v4 = (struct _DEVICE_OBJECT *)v20;
        if ( v20 && PiSwFindPdoAssociation((__int64)v33, v20, 1) )
        {
          ObfDereferenceObject(v22);
          v4 = 0LL;
          Data = PiSwQueuedCreateInfoCreate(v33 + 22, a1);
          if ( Data < 0 )
            goto LABEL_27;
          goto LABEL_17;
        }
        *(_DWORD *)(v21 + 4) &= ~4u;
        PiSwBusRelationRemove(v33);
        PiSwPnPInfoFree(v33 + 6);
        v23 = (__int64)v33;
        if ( *((_QWORD *)v33 + 19) )
        {
          ExFreePoolWithTag(*((PVOID *)v33 + 19), 0x57706E50u);
          *((_QWORD *)v33 + 19) = 0LL;
          *((_DWORD *)v33 + 40) = 0;
          v23 = (__int64)v33;
        }
        v24 = *(_QWORD *)(v23 + 168);
        if ( v24 )
        {
          PnpFreeDevPropertyArray(*(unsigned int *)(v23 + 176), v24, 1466986064LL);
          *((_DWORD *)v33 + 44) = 0;
          *((_QWORD *)v33 + 21) = 0LL;
          v23 = (__int64)v33;
        }
        PiSwFreeInterfaceList((__int64 **)(v23 + 184));
        Data = PiSwPnPInfoInit(v33 + 6, a1);
        if ( Data < 0 )
          goto LABEL_27;
        *((_DWORD *)v33 + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          *((_QWORD *)v33 + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
          v26 = (void *)*((_QWORD *)v33 + 19);
          if ( !v26 )
          {
            Data = -1073741670;
            goto LABEL_27;
          }
          memmove(v26, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
        }
        Data = PnpCopyDevPropertyArray(
                 *(_DWORD *)(a1 + 104),
                 *(_QWORD *)(a1 + 112),
                 v25,
                 (int)v33 + 176,
                 (__int64)(v33 + 42));
        if ( Data >= 0 )
        {
          Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8));
          if ( Data >= 0 )
          {
            *((_DWORD *)v33 + 1) &= ~2u;
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Data >= 0 && !v5 )
  {
    v27 = *(_QWORD *)(a1 + 112);
    if ( v27 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v27, *(unsigned int *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_29:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_33;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    *((_DWORD *)v33 + 45) = 1;
    PiSwIrpCleanup(v33);
  }
LABEL_33:
  if ( v33 )
    PiSwDeviceDereference(v33);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
