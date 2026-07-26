/*
 * XREFs of ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00C0B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0012C6C (-ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00C1170 (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z.c)
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
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
            WPP_SF_q(0xAu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, (__int64)MiniportByPdo);
          LOBYTE(v7) = 1;
          ndisMSetMiniportReadyForBinding(v8, v7, 0x80000LL, 1LL);
        }
        ObfDereferenceObject(v5);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
