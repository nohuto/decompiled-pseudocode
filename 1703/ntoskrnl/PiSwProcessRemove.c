/*
 * XREFs of PiSwProcessRemove @ 0x14056D530
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045F1F0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140570C2C (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045FAB8 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwFreeInterfaceList @ 0x14045FB84 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x140460394 (PiSwBusRelationAdd.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1404B9DD0 (PnpFreeDevPropertyArray.c)
 *     PiSwBusRelationRemove @ 0x14056D5EC (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x14056D680 (PiSwUnassociateDeviceObject.c)
 *     PiSwMakePdoInactive @ 0x14056D748 (PiSwMakePdoInactive.c)
 *     PiSwPnPInfoFree @ 0x14056DE7C (PiSwPnPInfoFree.c)
 *     PiSwDeviceDereference @ 0x140576020 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406A3448 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // r9
  char *v11; // rdx
  int v12; // edx
  struct _DEVICE_OBJECT *v13; // rax
  struct _DEVICE_OBJECT *v14; // rbx
  __int64 v15; // rcx
  __int64 Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  Buffer = *(_QWORD *)v2;
  result = *(unsigned int *)(v2 + 8);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *(_DWORD *)(v2 + 8) = result & 0xFFFFFFFE;
      result = PiSwDeviceInterfacesUpdateState(Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (*(_DWORD *)(v2 + 8) & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      result = *(unsigned int *)(Buffer + 4);
      if ( (result & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer);
        result = Buffer;
        if ( *(_QWORD *)(Buffer + 88) )
        {
          *(_DWORD *)(Buffer + 4) &= ~4u;
          PiSwPnPInfoFree(Buffer + 24);
          v6 = Buffer;
          v7 = *(_QWORD *)(Buffer + 88);
          *(_OWORD *)(Buffer + 24) = *(_OWORD *)(v7 + 8);
          *(_OWORD *)(v6 + 40) = *(_OWORD *)(v7 + 24);
          *(_OWORD *)(v6 + 56) = *(_OWORD *)(v7 + 40);
          memset((void *)(*(_QWORD *)(Buffer + 88) + 8LL), 0, 0x30uLL);
          v8 = Buffer;
          v9 = *(void **)(Buffer + 152);
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0x57706E50u);
            v8 = Buffer;
          }
          *(_DWORD *)(v8 + 160) = *(_DWORD *)(*(_QWORD *)(v8 + 88) + 64LL);
          *(_QWORD *)(Buffer + 152) = *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 56LL);
          *(_DWORD *)(*(_QWORD *)(Buffer + 88) + 64LL) = 0;
          *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 56LL) = 0LL;
          v10 = Buffer;
          v11 = *(char **)(Buffer + 168);
          if ( v11 )
          {
            PnpFreeDevPropertyArray(*(_DWORD *)(Buffer + 176), v11, 0x57706E50u);
            v10 = Buffer;
          }
          *(_DWORD *)(v10 + 176) = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 80LL);
          *(_QWORD *)(Buffer + 168) = *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 72LL);
          *(_DWORD *)(*(_QWORD *)(Buffer + 88) + 80LL) = 0;
          *(_QWORD *)(*(_QWORD *)(Buffer + 88) + 72LL) = 0LL;
          PiSwFreeInterfaceList((__int64 **)(Buffer + 184));
          v12 = PiSwBusRelationAdd(**(NTSTRSAFE_PCWSTR **)(Buffer + 88), Buffer);
          if ( v12 < 0 )
          {
            v15 = *(_QWORD *)(Buffer + 144);
            if ( v15 && _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL) )
            {
              *(_QWORD *)(*(_QWORD *)(Buffer + 144) + 56LL) = 0LL;
              *(_DWORD *)(*(_QWORD *)(Buffer + 144) + 48LL) = v12;
              IofCompleteRequest(*(PIRP *)(Buffer + 144), 0);
              *(_QWORD *)(Buffer + 144) = 0LL;
            }
          }
          else
          {
            *(_DWORD *)(Buffer + 4) &= ~2u;
            v13 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                             *(_QWORD *)(Buffer + 112),
                                             0x746C6644u);
            v14 = v13;
            if ( v13 )
            {
              IoInvalidateDeviceRelations(v13, SingleBusRelations);
              ObfDereferenceObject(v14);
            }
          }
          PiSwQueuedCreateInfoFree(*(_QWORD *)(Buffer + 88));
          *(_QWORD *)(Buffer + 88) = 0LL;
          result = Buffer;
        }
        if ( !*(_QWORD *)(result + 112) )
        {
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          return PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
  return result;
}
