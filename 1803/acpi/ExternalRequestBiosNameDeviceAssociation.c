/*
 * XREFs of ExternalRequestBiosNameDeviceAssociation @ 0x1C007ACA0
 * Callers:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A814 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qSD @ 0x1C00232A0 (WPP_RECORDER_SF_qSD.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C0023420 (WPP_RECORDER_SF_qsD.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0029E0C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLISetNSObjectNotifyFlag @ 0x1C0044448 (AMLISetNSObjectNotifyFlag.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C007A774 (AcpiExternalAddBiosNameDeviceAssociation.c)
 *     ACPIInitUnicodeString @ 0x1C007D67C (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ExternalRequestBiosNameDeviceAssociation(_BYTE *a1, __int64 a2, char a3)
{
  void *v5; // rdi
  int v6; // ebx
  __int64 v7; // r8
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  __int64 *v15; // [rsp+40h] [rbp-20h] BYREF
  void *v16; // [rsp+48h] [rbp-18h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF

  v15 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = AMLIGetNameSpaceObject(a1, 0LL, (__int64)&v15, 0);
  if ( v6 >= 0 )
  {
    AMLISetNSObjectNotifyFlag(v15);
    v6 = ACPIInitUnicodeString(&DestinationString);
    if ( v6 >= 0 )
    {
      ACPIInternalGetDeviceFromNSOBJ((__int64)v15, &v16, v7, &v18);
      v5 = v16;
      if ( v18 == 3 )
      {
        v6 = AcpiExternalAddBiosNameDeviceAssociation((__int64)&DestinationString, (__int64)v16);
        if ( v6 < 0 )
        {
          WPP_RECORDER_SF_qSD(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10);
          v6 = 0;
        }
      }
      if ( (a3 & 4) == 0 )
      {
        v6 = IoReserveDependency(*(_QWORD *)(a2 + 736), &DestinationString, 2LL);
        if ( v6 < 0 )
        {
          WPP_RECORDER_SF_qsD(WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13);
          v6 = 0;
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
  if ( v15 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v15);
  return (unsigned int)v6;
}
