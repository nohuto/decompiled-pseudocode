/*
 * XREFs of ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C6320
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0020DBC (-ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00C68DC (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  _UNICODE_STRING *v4; // rax
  PVOID v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  __int64 v7; // rdx
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3 )
  {
    CopyPartialStringToBuffer<64>(NotificationStructure, NotificationStructure[5]);
    v4 = (_UNICODE_STRING *)NotificationStructure[5];
    ObjectAttributes.RootDirectory = 0LL;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = v4;
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
    {
      if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        v5 = Object;
        MiniportByPdo = ndisFindMiniportByPdo(*((struct _DEVICE_OBJECT **)Object + 1));
        v8 = MiniportByPdo;
        if ( MiniportByPdo )
        {
          if ( (MiniportByPdo->Flags & 0x80u) != 0 )
          {
            MiniportByPdo->DriverHandle->CxBlock->Chars.EvtCxDeviceStartComplete(MiniportByPdo->MiniportAdapterContext);
          }
          else
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_q(0xAu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, (__int64)MiniportByPdo);
            LOBYTE(v7) = 1;
            ndisMSetMiniportReadyForBinding(v8, v7, 0x80000LL, 1LL);
          }
        }
        ObfDereferenceObject(v5);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
