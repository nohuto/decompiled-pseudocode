/*
 * XREFs of ExpCheckPortableOperatingSystem @ 0x14057EC4C
 * Callers:
 *     ExIsWindowsToGo @ 0x14048BDF0 (ExIsWindowsToGo.c)
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlCheckPortableOperatingSystem @ 0x1400CE5D0 (RtlCheckPortableOperatingSystem.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x1405E3C04 (ExpHwidSendSynchronousIrpToDevice.c)
 */

__int64 __fastcall ExpCheckPortableOperatingSystem(_DWORD *a1)
{
  unsigned int *v2; // rsi
  NTSTATUS DevicePropertyData; // ebx
  __int64 HostSilo; // rax
  unsigned int v6; // edi
  int i; // r14d
  unsigned int *PoolWithTag; // rax
  int v9; // eax
  unsigned int *v10; // rdi
  int v11; // eax
  void *v12; // r14
  char v13; // dl
  char *v14; // rcx
  char *v15; // r8
  BOOLEAN IsPortable; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Data[7]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+54h] [rbp-ACh] BYREF
  ULONG Type; // [rsp+60h] [rbp-A0h] BYREF
  ULONG RequiredSize; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING v23; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  int v26; // [rsp+90h] [rbp-70h]
  WCHAR SourceString[12]; // [rsp+98h] [rbp-68h] BYREF
  wchar_t pszDest[264]; // [rsp+B0h] [rbp-50h] BYREF

  *a1 = 0;
  v2 = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  DevicePropertyData = RtlCheckPortableOperatingSystem(&IsPortable);
  if ( DevicePropertyData >= 0 && IsPortable )
  {
    wcscpy(SourceString, L"\\??\\x:");
    HostSilo = PsGetHostSilo();
    SourceString[4] = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 132);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = 32;
    for ( i = 0; ; i = 1 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x20475457u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v6);
      v9 = ExpHwidSendSynchronousIrpToDevice(&DestinationString, 5636096LL, 0LL, 0LL, v2, v6, 0LL, 0LL);
      DevicePropertyData = v9;
      if ( v9 >= 0 )
      {
        if ( *v2 == 1 )
        {
          RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", v2[2]);
          RtlInitUnicodeString(&v23, pszDest);
          v25 = 0LL;
          v26 = 0;
          DevicePropertyData = ExpHwidSendSynchronousIrpToDevice(&v23, 2954240LL, &v25, 12LL, v19, 8, 0LL, 0LL);
          if ( DevicePropertyData >= 0 )
          {
            v10 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20475457u);
            if ( v10 )
            {
              v18 = 0LL;
              v11 = ExpHwidSendSynchronousIrpToDevice(
                      &v23,
                      2954240LL,
                      &v25,
                      12LL,
                      v10,
                      NumberOfBytes[0],
                      &v18,
                      &NumberOfBytes[1]);
              v12 = *(void **)&NumberOfBytes[1];
              DevicePropertyData = v11;
              if ( v11 >= 0 )
              {
                if ( *(_QWORD *)&NumberOfBytes[1] && v18 >= 0x28 && v18 >= v10[1] )
                {
                  if ( v10[7] == 7 )
                  {
                    DevicePropertyData = IoGetDevicePropertyData(
                                           *(PDEVICE_OBJECT *)&NumberOfBytes[1],
                                           &DEVPKEY_Device_InLocalMachineContainer,
                                           0,
                                           0,
                                           1u,
                                           Data,
                                           &RequiredSize,
                                           &Type);
                    if ( DevicePropertyData >= 0 && !Data[0] )
                    {
                      *a1 = 2;
                      v13 = 0;
                      v14 = (char *)v10 + v10[6];
                      v15 = (char *)v10 + v10[1];
                      if ( v14 >= (char *)v10 + 36 )
                      {
                        if ( v14 >= v15 )
                          goto LABEL_31;
                        do
                        {
                          if ( !*v14 )
                            break;
                          if ( ((*v14 - 32) & 0xEF) != 0 )
                            v13 = 1;
                          ++v14;
                        }
                        while ( v14 < v15 );
                        if ( v14 >= v15 )
LABEL_31:
                          v13 = 0;
                        if ( v13 )
                        {
                          *a1 = 1;
                          DevicePropertyData = 0;
                        }
                      }
                    }
                  }
                }
                else
                {
                  DevicePropertyData = -1073741823;
                }
              }
              ExFreePoolWithTag(v10, 0);
              if ( v12 )
                ObfDereferenceObject(v12);
            }
            else
            {
              DevicePropertyData = -1073741801;
            }
          }
        }
        else
        {
          DevicePropertyData = 0;
        }
LABEL_37:
        ExFreePoolWithTag(v2, 0);
        return (unsigned int)DevicePropertyData;
      }
      if ( v9 != -2147483643 || i )
        goto LABEL_37;
      v6 = v6 + 24 * *v2 - 24;
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DevicePropertyData;
}
