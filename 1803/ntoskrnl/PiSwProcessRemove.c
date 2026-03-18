/*
 * XREFs of PiSwProcessRemove @ 0x1405C3D0C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x140145A30 (IoInvalidateDeviceRelations.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x14050AC0C (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x1405C3DC8 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1405C3E5C (PiSwUnassociateDeviceObject.c)
 *     PiSwMakePdoInactive @ 0x1405C3F24 (PiSwMakePdoInactive.c)
 *     PiSwPnPInfoFree @ 0x1405C4288 (PiSwPnPInfoFree.c)
 *     PiSwDeviceDereference @ 0x1405C53A0 (PiSwDeviceDereference.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1405C5C8C (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwFreeInterfaceList @ 0x1405C5D5C (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x1405C6D44 (PiSwBusRelationAdd.c)
 *     PiSwQueuedCreateInfoFree @ 0x140735684 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  unsigned int **v2; // rbx
  __int64 result; // rax
  unsigned int *v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // rdx
  void *v9; // rcx
  unsigned int *v10; // r9
  char *v11; // rdx
  int v12; // edx
  struct _DEVICE_OBJECT *v13; // rax
  struct _DEVICE_OBJECT *v14; // rbx
  __int64 v15; // rcx
  unsigned int *Buffer; // [rsp+30h] [rbp+10h] BYREF

  v2 = *(unsigned int ***)(a1 + 64);
  Buffer = *v2;
  result = *((unsigned int *)v2 + 2);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *((_DWORD *)v2 + 2) = result & 0xFFFFFFFE;
      result = PiSwDeviceInterfacesUpdateState(Buffer, 0LL);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( ((_DWORD)v2[1] & 8) == 0 )
        PiSwUnassociateDeviceObject(a1);
      result = Buffer[1];
      if ( (result & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer);
        result = (__int64)Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          Buffer[1] &= ~4u;
          PiSwPnPInfoFree(Buffer + 6);
          v6 = Buffer;
          v7 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 6) = *(_OWORD *)(v7 + 8);
          *(_OWORD *)(v6 + 10) = *(_OWORD *)(v7 + 24);
          *(_OWORD *)(v6 + 14) = *(_OWORD *)(v7 + 40);
          memset((void *)(*((_QWORD *)Buffer + 11) + 8LL), 0, 0x30uLL);
          v8 = Buffer;
          v9 = (void *)*((_QWORD *)Buffer + 19);
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0x57706E50u);
            v8 = Buffer;
          }
          v8[40] = *(_DWORD *)(*((_QWORD *)v8 + 11) + 64LL);
          *((_QWORD *)Buffer + 19) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v10 = Buffer;
          v11 = (char *)*((_QWORD *)Buffer + 21);
          if ( v11 )
          {
            PnpFreeDevPropertyArray(Buffer[44], v11, 0x57706E50u);
            v10 = Buffer;
          }
          v10[44] = *(_DWORD *)(*((_QWORD *)v10 + 11) + 80LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 80LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0LL;
          PiSwFreeInterfaceList(Buffer + 46);
          v12 = PiSwBusRelationAdd(**((NTSTRSAFE_PCWSTR **)Buffer + 11));
          if ( v12 < 0 )
          {
            v15 = *((_QWORD *)Buffer + 18);
            if ( v15 && _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v12;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            Buffer[1] &= ~2u;
            v13 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                             *((_QWORD *)Buffer + 14),
                                             0x746C6644u);
            v14 = v13;
            if ( v13 )
            {
              IoInvalidateDeviceRelations(v13, SingleBusRelations);
              ObfDereferenceObject(v14);
            }
          }
          PiSwQueuedCreateInfoFree(*((PVOID *)Buffer + 11));
          *((_QWORD *)Buffer + 11) = 0LL;
          result = (__int64)Buffer;
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
