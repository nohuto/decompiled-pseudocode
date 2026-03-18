/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1C00A1C00
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00A17A4 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_qSD @ 0x1C004CFCC (WPP_RECORDER_SF_qSD.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C004D14C (WPP_RECORDER_SF_qsD.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C004FBAC (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLISetNSObjectNotifyFlag @ 0x1C005BA58 (AMLISetNSObjectNotifyFlag.c)
 *     ACPIInitUnicodeString @ 0x1C0087D3C (ACPIInitUnicodeString.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C00A1704 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(char *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v7; // ebx
  __int64 v8; // r8
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 *v16; // [rsp+40h] [rbp-20h] BYREF
  void *v17; // [rsp+48h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v7 = AMLIGetNameSpaceObject(a1, 0LL, (__int64 *)&v16, 0);
  if ( v7 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(v16);
    v7 = ACPIInitUnicodeString(&DestinationString, a1);
    if ( v7 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ((__int64)v16, &v17, v8, &v19);
      v5 = v17;
      if ( v19 == 3 )
      {
        v7 = AcpiExternalAddBiosNameDeviceAssociation((__int64)&DestinationString, (__int64)v17);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_qSD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
          v7 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v7 = IoReserveDependency(*(_QWORD *)(a2 + 736), &DestinationString, 2LL);
        if ( v7 < 0 )
        {
          WPP_RECORDER_SF_qsD(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
          v7 = 0;
        }
      }
    }
  }
  if ( DestinationString.Buffer )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0x53706341u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v16 )
    AMLIDereferenceHandleEx((__int64)v16);
  return (unsigned int)v7;
}
