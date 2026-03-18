/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x1405BB304
 * Callers:
 *     PiSwIrpStartCreate @ 0x1405BB218 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x1406CE758 (PiSwStartCreate.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x1400DF4A4 (RtlStringCbCopyW.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 *     PiSwPropertySet @ 0x1405997C8 (PiSwPropertySet.c)
 *     PiSwFreeInterfaceList @ 0x1405BB1F4 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x1405BB5CC (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x1405BB72C (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x1405BB888 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1405BBA90 (PiSwInstanceInfoInit.c)
 *     PiSwDeviceCreate @ 0x1405BBB18 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x1405BBB94 (PiSwValidateCreateData.c)
 *     PiSwIrpCleanup @ 0x1405BBE50 (PiSwIrpCleanup.c)
 *     PiSwFindPdoAssociation @ 0x1405E3F10 (PiSwFindPdoAssociation.c)
 *     PiSwDeviceDereference @ 0x1405F2D74 (PiSwDeviceDereference.c)
 *     PiSwBusRelationRemove @ 0x1406CD984 (PiSwBusRelationRemove.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406CDBB4 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwPnPInfoFree @ 0x1406CE260 (PiSwPnPInfoFree.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406CE580 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406CE694 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r14
  char v5; // r15
  int Data; // ebx
  struct _KTHREAD *CurrentThread; // rax
  void **inserted; // rax
  void *v10; // rax
  int v11; // r8d
  void *v12; // rcx
  PVOID *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  _DWORD *v18; // rcx
  void *v19; // rdx
  struct _DEVICE_OBJECT *v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rbx
  void *v23; // rdx
  PVOID v24; // rcx
  void *v25; // rdx
  int v26; // r8d
  void *v27; // rcx
  __int64 v28; // r8
  char *Buffer; // [rsp+30h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v33; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  P = 0LL;
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
        inserted = (void **)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
        if ( !inserted )
        {
          Data = -1073741670;
LABEL_26:
          if ( Data >= 0 )
            goto LABEL_27;
          goto LABEL_42;
        }
        v10 = *inserted;
        P = v10;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v10);
          Data = PiSwPnPInfoInit((char *)P + 24, a1);
          if ( Data < 0 )
            goto LABEL_42;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
            v12 = (void *)*((_QWORD *)P + 19);
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
                   (int)P + 176,
                   (__int64)P + 168);
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8)), Data < 0) )
          {
LABEL_42:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
              PiSwDeviceDereference(P);
              if ( *((_QWORD *)P + 14) )
                PiSwBusRelationRemove(P);
            }
            goto LABEL_27;
          }
LABEL_16:
          v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
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
              *((_QWORD *)P + 18) = a2;
              *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
            }
            else
            {
              Data = RtlStringCbCopyW(
                       *(NTSTRSAFE_PWSTR *)(a2 + 24),
                       *(unsigned int *)(v3 + 8),
                       *((NTSTRSAFE_PCWSTR *)P + 10));
              if ( Data < 0 )
                goto LABEL_42;
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
              if ( Data < 0 )
                goto LABEL_42;
            }
          }
          *((_DWORD *)P + 1) |= 1u;
          if ( a2 )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = P;
            P = 0LL;
          }
          if ( v4 )
            IoInvalidateDeviceRelations(v4, SingleBusRelations);
          goto LABEL_26;
        }
        _InterlockedIncrement((volatile signed __int32 *)v10);
        v14 = (PVOID *)P;
        v15 = *((_DWORD *)P + 1);
        if ( (v15 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_27;
        }
        if ( (v15 & 2) == 0 )
        {
          v16 = *((_QWORD *)P + 15);
          if ( v16 && (*(_DWORD *)(*(_QWORD *)(v16 + 64) + 8LL) & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(P, a1) )
            {
              Data = PnpCopyDevPropertyArray(
                       *(_DWORD *)(a1 + 104),
                       *(_QWORD *)(a1 + 112),
                       v17,
                       (unsigned int)&v33,
                       (__int64)&v31);
              if ( Data < 0 )
                goto LABEL_27;
              v18 = P;
              v19 = (void *)*((_QWORD *)P + 21);
              if ( v19 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v19, 0x57706E50u);
                v18 = P;
              }
              v18[44] = v33;
              *((_QWORD *)P + 21) = v31;
              goto LABEL_18;
            }
            v14 = (PVOID *)P;
          }
          if ( v14[11] )
          {
            PiSwQueuedCreateInfoFree(v14[11]);
            *((_QWORD *)P + 11) = 0LL;
            v14 = (PVOID *)P;
          }
          Data = PiSwQueuedCreateInfoCreate(v14 + 11, a1);
          if ( Data < 0 )
            goto LABEL_27;
          *((_DWORD *)P + 1) |= 2u;
          goto LABEL_16;
        }
        v20 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
        v22 = P;
        v4 = v20;
        if ( v20 )
        {
          LOBYTE(v21) = 1;
          if ( PiSwFindPdoAssociation(P, v20, v21) )
          {
            ObfDereferenceObject(v23);
            v4 = 0LL;
            Data = PiSwQueuedCreateInfoCreate((char *)P + 88, a1);
            if ( Data < 0 )
              goto LABEL_27;
            goto LABEL_17;
          }
        }
        v22[1] &= ~4u;
        PiSwBusRelationRemove(P);
        PiSwPnPInfoFree((char *)P + 24);
        v24 = P;
        if ( *((_QWORD *)P + 19) )
        {
          ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
          *((_QWORD *)P + 19) = 0LL;
          *((_DWORD *)P + 40) = 0;
          v24 = P;
        }
        v25 = (void *)*((_QWORD *)v24 + 21);
        if ( v25 )
        {
          PnpFreeDevPropertyArray(*((_DWORD *)v24 + 44), v25, 0x57706E50u);
          *((_DWORD *)P + 44) = 0;
          *((_QWORD *)P + 21) = 0LL;
          v24 = P;
        }
        PiSwFreeInterfaceList((_QWORD **)v24 + 23);
        Data = PiSwPnPInfoInit((char *)P + 24, a1);
        if ( Data < 0 )
          goto LABEL_27;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          *((_QWORD *)P + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
          v27 = (void *)*((_QWORD *)P + 19);
          if ( !v27 )
          {
            Data = -1073741670;
            goto LABEL_27;
          }
          memmove(v27, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
        }
        Data = PnpCopyDevPropertyArray(
                 *(_DWORD *)(a1 + 104),
                 *(_QWORD *)(a1 + 112),
                 v26,
                 (int)P + 176,
                 (__int64)P + 168);
        if ( Data >= 0 )
        {
          Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8));
          if ( Data >= 0 )
          {
            *((_DWORD *)P + 1) &= ~2u;
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Data >= 0 && !v5 )
  {
    v28 = *(_QWORD *)(a1 + 112);
    if ( v28 )
    {
      Data = PiSwPropertySet(*(const WCHAR **)(a2 + 24), 1u, v28, *(_DWORD *)(a1 + 104));
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
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup(P);
  }
LABEL_33:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
