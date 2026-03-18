/*
 * XREFs of PiSwProcessRemove @ 0x1406CE2EC
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14055E648 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x1405BA930 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140526CC4 (PnpFreeDevPropertyArray.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405BB128 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwFreeInterfaceList @ 0x1405BB1F4 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x1405BB5CC (PiSwBusRelationAdd.c)
 *     PiSwDeviceDereference @ 0x1405F2D74 (PiSwDeviceDereference.c)
 *     PiSwBusRelationRemove @ 0x1406CD984 (PiSwBusRelationRemove.c)
 *     PiSwMakePdoInactive @ 0x1406CE20C (PiSwMakePdoInactive.c)
 *     PiSwPnPInfoFree @ 0x1406CE260 (PiSwPnPInfoFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406CE694 (PiSwQueuedCreateInfoFree.c)
 *     PiSwUnassociateDeviceObject @ 0x1406CE854 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 v2; // rbx
  int v5; // eax
  char *v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  char *v9; // rdx
  void *v10; // rcx
  char *v11; // r9
  void *v12; // rdx
  int v13; // edx
  struct _DEVICE_OBJECT *v14; // rax
  struct _DEVICE_OBJECT *v15; // rbx
  __int64 v16; // rcx
  char *Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  Buffer = *(char **)v2;
  v5 = *(_DWORD *)(v2 + 8);
  if ( (v5 & 0x20) == 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v2 + 8) = v5 & 0xFFFFFFFE;
      PiSwDeviceInterfacesUpdateState((__int64)Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (*(_DWORD *)(v2 + 8) & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      if ( (*((_DWORD *)Buffer + 1) & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer);
        v6 = Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          *((_DWORD *)Buffer + 1) &= ~4u;
          PiSwPnPInfoFree((__int64)(Buffer + 24));
          v7 = Buffer;
          v8 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 24) = *(_OWORD *)(v8 + 8);
          *(_OWORD *)(v7 + 40) = *(_OWORD *)(v8 + 24);
          *(_OWORD *)(v7 + 56) = *(_OWORD *)(v8 + 40);
          memset((void *)(*((_QWORD *)Buffer + 11) + 8LL), 0, 0x30uLL);
          v9 = Buffer;
          v10 = (void *)*((_QWORD *)Buffer + 19);
          if ( v10 )
          {
            ExFreePoolWithTag(v10, 0x57706E50u);
            v9 = Buffer;
          }
          *((_DWORD *)v9 + 40) = *(_DWORD *)(*((_QWORD *)v9 + 11) + 64LL);
          *((_QWORD *)Buffer + 19) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v11 = Buffer;
          v12 = (void *)*((_QWORD *)Buffer + 21);
          if ( v12 )
          {
            PnpFreeDevPropertyArray(*((_DWORD *)Buffer + 44), v12, 0x57706E50u);
            v11 = Buffer;
          }
          *((_DWORD *)v11 + 44) = *(_DWORD *)(*((_QWORD *)v11 + 11) + 80LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 80LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0LL;
          PiSwFreeInterfaceList((_QWORD **)Buffer + 23);
          v13 = PiSwBusRelationAdd(**((NTSTRSAFE_PCWSTR **)Buffer + 11), (__int64)Buffer);
          if ( v13 < 0 )
          {
            v16 = *((_QWORD *)Buffer + 18);
            if ( v16 && _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v13;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            *((_DWORD *)Buffer + 1) &= ~2u;
            v14 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                             *((_QWORD *)Buffer + 14),
                                             0x746C6644u);
            v15 = v14;
            if ( v14 )
            {
              IoInvalidateDeviceRelations(v14, SingleBusRelations);
              ObfDereferenceObject(v15);
            }
          }
          PiSwQueuedCreateInfoFree(*((PVOID *)Buffer + 11));
          *((_QWORD *)Buffer + 11) = 0LL;
          v6 = Buffer;
        }
        if ( !*((_QWORD *)v6 + 14) )
        {
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
}
