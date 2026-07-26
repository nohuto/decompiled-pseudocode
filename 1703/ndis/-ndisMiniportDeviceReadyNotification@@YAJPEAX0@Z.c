/*
 * XREFs of ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00AC760
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C001603C (-ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z @ 0x1C00AC47C (--$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@GPEBU_UNICODE_STRING@@@Z.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00AC4FC (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  _UNICODE_STRING *v4; // rax
  PVOID v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  __int64 v7; // rbx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3 )
  {
    CopyPartialStringToBuffer<64>((__int64)NotificationStructure, *((const void ***)NotificationStructure + 5));
    v4 = (_UNICODE_STRING *)*((_QWORD *)NotificationStructure + 5);
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
        v7 = (__int64)MiniportByPdo;
        if ( MiniportByPdo )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
            WPP_SF_q(0xAu, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, (__int64)MiniportByPdo);
          ndisMSetMiniportReadyForBinding(v7, 1, Reason_MiniportDeviceNotStarted, RunAsynchronous);
        }
        ObfDereferenceObject(v5);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
