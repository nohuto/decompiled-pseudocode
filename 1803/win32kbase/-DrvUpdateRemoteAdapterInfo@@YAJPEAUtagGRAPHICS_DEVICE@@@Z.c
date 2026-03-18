/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D12B8
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00D6564 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0052BF4 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00CEF64 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D2248 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  NTSTATUS v2; // ebx
  int v3; // esi
  unsigned int v4; // edi
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v9[16]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v10; // [rsp+80h] [rbp-49h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-39h] BYREF
  __int64 v12; // [rsp+C8h] [rbp-1h]
  int v13; // [rsp+D0h] [rbp+7h]
  _BYTE v14[40]; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v16; // [rsp+140h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  P = 0LL;
  v3 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  LODWORD(v15) = 0;
  if ( !dword_1C01A1750 )
  {
    if ( qword_1C01A1760 || !(unsigned __int8)((__int64 (*)(void))qword_1C01A1EC0)() )
      return (unsigned int)v2;
    qword_1C01A1754 = *((_QWORD *)a1 + 37);
    qword_1C01A1760 = (PVOID)*((_QWORD *)a1 + 38);
  }
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 288;
  QueryTable.Name = L"MaxObjectNumber";
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = &v15;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 4;
  v12 = 0LL;
  v13 = 0;
  memset(v14, 0, sizeof(v14));
  v2 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v2 = RtlStringCchPrintfW(word_1C01A1768, 0x20uLL, L"\\Device\\Video%d", v4);
      if ( v2 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, word_1C01A1768);
      if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
      {
        v2 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, v9, 0x18u, &v16, 1u, 1);
        if ( v2 >= 0 && v10 == qword_1C01A1754 )
        {
          if ( dword_1C01A1750 )
          {
            v2 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
            if ( v2 >= 0 )
            {
              qword_1C01A1760 = (PVOID)*((_QWORD *)P + 1);
              ExFreePoolWithTag(P, 0);
            }
          }
          v3 = 1;
        }
        ObfDereferenceObject(FileObject);
        if ( v3 )
          goto LABEL_18;
      }
      if ( ++v4 > (unsigned int)v15 )
      {
        v2 = -1073741772;
LABEL_18:
        if ( v2 >= 0 )
          return (unsigned int)v2;
        break;
      }
    }
  }
  memset(word_1C01A1768, 0, 0x20uLL);
  if ( qword_1C01A1760 )
  {
    if ( dword_1C01A1750 )
    {
      ObfDereferenceObject(qword_1C01A1760);
    }
    else
    {
      v15 = 0LL;
      qword_1C01A1754 = 0LL;
    }
    qword_1C01A1760 = 0LL;
  }
  return (unsigned int)v2;
}
