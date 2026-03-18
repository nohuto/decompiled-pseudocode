/*
 * XREFs of IopCreateRegistryKeyEx @ 0x1405F7BC4
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x1405DAA00 (PiDevCfgConfigureSoftwareDevices.c)
 *     NtDisableLastKnownGood @ 0x1405F3D68 (NtDisableLastKnownGood.c)
 *     PipOpenServiceEnumKeys @ 0x1405F7868 (PipOpenServiceEnumKeys.c)
 *     PnpBuildCmResourceList @ 0x140616220 (PnpBuildCmResourceList.c)
 *     IopWriteResourceList @ 0x140617604 (IopWriteResourceList.c)
 *     PnpOpenCCSPnpRegKey @ 0x1406344CC (PnpOpenCCSPnpRegKey.c)
 *     IoSetSystemPartition @ 0x14071C790 (IoSetSystemPartition.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140722BF4 (PipHardwareConfigTriggerRespecialize.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 *     IopInitializeResourceMap @ 0x14089836C (IopInitializeResourceMap.c)
 *     IoReportHalResourceUsage @ 0x140898810 (IoReportHalResourceUsage.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     IopStoreSystemPartitionInformation @ 0x1408B7144 (IopStoreSystemPartitionInformation.c)
 *     PipHardwareConfigInit @ 0x1408C395C (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x1408CA024 (PiInitFirmwareResources.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 */

__int64 __fastcall IopCreateRegistryKeyEx(
        _QWORD *a1,
        void *a2,
        UNICODE_STRING *a3,
        ACCESS_MASK a4,
        ULONG CreateOptions,
        ULONG *a6)
{
  _QWORD *v6; // rsi
  __int64 v7; // r13
  __int64 v9; // r15
  NTSTATUS v11; // edi
  wchar_t *Buffer; // rsi
  unsigned int v14; // r12d
  __int64 Length; // r14
  wchar_t *v16; // r14
  wchar_t *v17; // rbx
  char v18; // al
  ULONG Disposition; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-49h] BYREF
  _WORD v22[4]; // [rsp+58h] [rbp-41h] BYREF
  wchar_t *v23; // [rsp+60h] [rbp-39h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-31h] BYREF
  char v26; // [rsp+F8h] [rbp+5Fh]

  v6 = a1;
  ObjectAttributes.RootDirectory = a2;
  v7 = 0LL;
  ObjectAttributes.ObjectName = a3;
  *a1 = 0LL;
  ObjectAttributes.Length = 48;
  LODWORD(v9) = 1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateKey(&KeyHandle, a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( v11 != -1073741772 )
    goto LABEL_2;
  if ( a2 )
  {
    Buffer = a3->Buffer;
    v14 = 0;
    Length = a3->Length;
    Handle = 0LL;
    v16 = (wchar_t *)((char *)Buffer + Length);
    KeyHandle = a2;
    v26 = 1;
    while ( 1 )
    {
      if ( v14 > 1 )
        ZwClose(*(&Handle + v7));
      v7 = (unsigned int)v9;
      v17 = Buffer;
      v9 = ((_BYTE)v9 - 1) & 1;
      for ( *(&Handle + v9) = 0LL; v17 < v16; ++v17 )
      {
        if ( *v17 == 92 )
          break;
      }
      if ( (_DWORD)v17 == (_DWORD)Buffer )
        break;
      v22[1] = (_WORD)v17 - (_WORD)Buffer;
      v22[0] = (_WORD)v17 - (_WORD)Buffer;
      ObjectAttributes.RootDirectory = *(&Handle + v7);
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
      v23 = Buffer;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwCreateKey(&Handle + v9, a4, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
      if ( v11 < 0 )
        goto LABEL_21;
      ++v14;
      if ( v17 == v16 )
        goto LABEL_19;
      Buffer = v17 + 1;
      if ( v17 + 1 == v16 )
        goto LABEL_19;
      v18 = v26;
LABEL_20:
      if ( !v18 )
      {
LABEL_21:
        if ( v14 > 1 )
          ZwClose(*(&Handle + v7));
        v6 = a1;
LABEL_2:
        if ( v11 >= 0 )
        {
          *v6 = *(&Handle + (unsigned int)v9);
          if ( a6 )
            *a6 = Disposition;
        }
        return (unsigned int)v11;
      }
    }
    v11 = -1073741811;
LABEL_19:
    v18 = 0;
    v26 = 0;
    goto LABEL_20;
  }
  return (unsigned int)v11;
}
