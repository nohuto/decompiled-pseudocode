/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x1405C6A7C
 * Callers:
 *     PiSwIrpStartCreate @ 0x1405C6914 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x1407356F4 (PiSwStartCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14006D198 (RtlStringCbCopyW.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbLengthW @ 0x140075A6C (RtlStringCbLengthW.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x140145A30 (IoInvalidateDeviceRelations.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x1405C3DC8 (PiSwBusRelationRemove.c)
 *     PiSwPnPInfoFree @ 0x1405C4288 (PiSwPnPInfoFree.c)
 *     PiSwIrpCleanup @ 0x1405C529C (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x1405C53A0 (PiSwDeviceDereference.c)
 *     PiSwFreeInterfaceList @ 0x1405C5D5C (PiSwFreeInterfaceList.c)
 *     PiSwValidateCreateData @ 0x1405C5D80 (PiSwValidateCreateData.c)
 *     PiSwPropertySet @ 0x1405C6324 (PiSwPropertySet.c)
 *     PiSwDeviceCreate @ 0x1405C6A00 (PiSwDeviceCreate.c)
 *     PiSwBusRelationAdd @ 0x1405C6D44 (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x1405C6EA4 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x1405C6F68 (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x1405C7100 (PiSwInstanceInfoInit.c)
 *     PiSwFindPdoAssociation @ 0x1405E80EC (PiSwFindPdoAssociation.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140735320 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140735570 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x140735684 (PiSwQueuedCreateInfoFree.c)
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
  void *v13; // rcx
  PVOID *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r8d
  _DWORD *v18; // rcx
  char *v19; // rdx
  struct _DEVICE_OBJECT *v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rbx
  void *v23; // rdx
  PVOID v24; // rcx
  char *v25; // rdx
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
  Data = PiSwValidateCreateData(a1);
  if ( Data < 0 )
    goto LABEL_27;
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
LABEL_24:
          if ( Data >= 0 )
            goto LABEL_25;
          goto LABEL_41;
        }
        v10 = *inserted;
        P = v10;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v10);
          Data = PiSwPnPInfoInit((char *)P + 24, a1);
          if ( Data < 0 )
            goto LABEL_41;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
            v13 = (void *)*((_QWORD *)P + 19);
            if ( !v13 )
            {
              Data = -1073741670;
              goto LABEL_41;
            }
            memmove(v13, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(
                   *(_DWORD *)(a1 + 104),
                   *(_QWORD *)(a1 + 112),
                   v11,
                   (int)P + 176,
                   (__int64)P + 168);
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8)), Data < 0) )
          {
LABEL_41:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
              PiSwDeviceDereference(P);
              if ( *((_QWORD *)P + 14) )
                PiSwBusRelationRemove((char *)P);
            }
            goto LABEL_25;
          }
LABEL_14:
          v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
LABEL_15:
          v5 = 1;
LABEL_16:
          if ( a2 )
          {
            if ( v5 )
            {
              _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
              if ( *(_BYTE *)(a2 + 68) )
              {
                Data = -1073741536;
                goto LABEL_41;
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
                goto LABEL_41;
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), &pcbLength);
              if ( Data < 0 )
                goto LABEL_41;
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
          goto LABEL_24;
        }
        _InterlockedIncrement((volatile signed __int32 *)v10);
        v14 = (PVOID *)P;
        v15 = *((_DWORD *)P + 1);
        if ( (v15 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_25;
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
                goto LABEL_25;
              v18 = P;
              v19 = (char *)*((_QWORD *)P + 21);
              if ( v19 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v19, 0x57706E50u);
                v18 = P;
              }
              v18[44] = v33;
              *((_QWORD *)P + 21) = v31;
              goto LABEL_16;
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
            goto LABEL_25;
          *((_DWORD *)P + 1) |= 2u;
          goto LABEL_14;
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
              goto LABEL_25;
            goto LABEL_15;
          }
        }
        v22[1] &= ~4u;
        PiSwBusRelationRemove((char *)P);
        PiSwPnPInfoFree((__int64)P + 24);
        v24 = P;
        if ( *((_QWORD *)P + 19) )
        {
          ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
          *((_QWORD *)P + 19) = 0LL;
          *((_DWORD *)P + 40) = 0;
          v24 = P;
        }
        v25 = (char *)*((_QWORD *)v24 + 21);
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
          goto LABEL_25;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          *((_QWORD *)P + 19) = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 88), 0x57706E50u);
          v27 = (void *)*((_QWORD *)P + 19);
          if ( !v27 )
          {
            Data = -1073741670;
            goto LABEL_25;
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
            goto LABEL_15;
          }
        }
      }
    }
  }
LABEL_25:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Data >= 0 && !v5 )
  {
    v28 = *(_QWORD *)(a1 + 112);
    if ( v28 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1u, v28, *(_DWORD *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_27:
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
        goto LABEL_31;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup((__int64)P);
  }
LABEL_31:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
