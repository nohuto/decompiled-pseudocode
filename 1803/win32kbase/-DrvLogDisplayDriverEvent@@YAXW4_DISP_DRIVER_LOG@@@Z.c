/*
 * XREFs of ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00CFE64
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00507C0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0051310 (DrvGetDisplayDriverParameters.c)
 *     ldevLoadImage @ 0x1C0053150 (ldevLoadImage.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00CD344 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00CF1DC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvLogDisplayDriverEvent(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  int Data; // [rsp+A8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+77h] BYREF

  Data = 1;
  if ( G_fConsole )
  {
    RtlInitUnicodeString(&DestinationString, &pwsz);
    v5 = a1 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 && (unsigned int)(v8 - 1) > 1 )
            return;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"OldDisplayDriver");
        }
      }
    }
    v9 = WdLogNewEntry5_WdEvent(v3, v2, v4);
    WdLogEvent5_WdEvent(v9);
    if ( DestinationString.Length )
    {
      RtlInitUnicodeString(
        &v11,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InvalidDisplay");
      ObjectAttributes.ObjectName = &v11;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
        ZwClose(KeyHandle);
      }
    }
  }
}
