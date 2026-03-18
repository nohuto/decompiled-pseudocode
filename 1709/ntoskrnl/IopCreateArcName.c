/*
 * XREFs of IopCreateArcName @ 0x1405C8AA8
 * Callers:
 *     IoCreateArcName @ 0x1405C8A90 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x1408454C4 (IopCreateArcNamesDisk.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     IoBuildDeviceIoControlRequest @ 0x140060810 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1401467A0 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x1401467D0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopBuildSynchronousFsdRequest @ 0x14051AFE0 (IopBuildSynchronousFsdRequest.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     IoCreateSymbolicLink @ 0x140596170 (IoCreateSymbolicLink.c)
 *     IopVerifyDiskSignature @ 0x1405C8FE0 (IopVerifyDiskSignature.c)
 *     IoVerifyPartitionTable @ 0x1405C9300 (IoVerifyPartitionTable.c)
 *     VhdiVerifyBootDisk @ 0x140789BCC (VhdiVerifyBootDisk.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, unsigned int a2)
{
  PDEVICE_OBJECT v2; // rax
  int *PoolWithTag; // r15
  IRP *v5; // rbx
  NTSTATUS Status; // ebx
  IRP *v7; // rbx
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 v10; // rax
  _DWORD *Pool; // rax
  _DWORD *v12; // r14
  __int64 v13; // rax
  IRP *v14; // rbx
  int v15; // r13d
  SIZE_T OutputBufferLength; // rdi
  SIZE_T j; // rdx
  IRP *v18; // rbx
  int v19; // r12d
  unsigned __int64 v20; // rcx
  unsigned __int64 k; // rax
  int v22; // eax
  bool v23; // bl
  PVOID *v24; // rdi
  PVOID *v25; // r11
  char v26; // dl
  const wchar_t *v27; // r8
  const char *v28; // r13
  int v29; // edi
  unsigned __int64 v31; // rcx
  unsigned __int64 i; // rax
  unsigned __int8 *v33; // rcx
  __int64 v34; // r8
  int v35; // edx
  int v36; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  _DWORD *v38; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v44[20]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+BCh] [rbp-44h]
  _BYTE v46[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+C4h] [rbp-3Ch]
  char v48[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v2 = (PDEVICE_OBJECT)IoArcTableListHead;
  PoolWithTag = 0LL;
  while ( 1 )
  {
    if ( v2 == (PDEVICE_OBJECT)&IoArcTableListHead )
    {
      if ( a2 == -1 )
      {
        v5 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, v46, 0xCu, 0, &Object, &IoStatusBlock);
        if ( !v5 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v5);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
      }
      else
      {
        v47 = a2;
      }
      v7 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, v44, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v7 )
      {
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v7);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
        v8 = v45;
        if ( v45 < 0x200 )
          v8 = 512;
        v9 = DeviceObject->DeviceType == 2;
        v45 = v8;
        v10 = 0LL;
        if ( v9 )
          v10 = 0x8000LL;
        v41 = v10;
        Pool = IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v8);
        v38 = Pool;
        v12 = Pool;
        if ( Pool )
        {
          v13 = IopBuildSynchronousFsdRequest(
                  3u,
                  (__int64)DeviceObject,
                  Pool,
                  v45,
                  &v41,
                  (__int64)&Object,
                  (__int64)&IoStatusBlock);
          v14 = (IRP *)v13;
          if ( !v13 )
          {
            Status = -1073741670;
            goto LABEL_65;
          }
          *(_BYTE *)(*(_QWORD *)(v13 + 184) - 70LL) |= 2u;
          KeInitializeEvent(&Object, NotificationEvent, 0);
          Status = IofCallDriver(DeviceObject, v14);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
          {
            if ( DeviceObject->DeviceType == 2 )
            {
              v19 = 0;
              v31 = (unsigned __int64)v45 >> 2;
              for ( i = 0LL; i < v31; ++i )
                v19 += v38[i];
            }
            else
            {
              v15 = v12[110];
              LODWORD(OutputBufferLength) = 4096;
              for ( j = 4096LL; ; j = OutputBufferLength )
              {
                PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, j, 0x6F426F49u);
                if ( !PoolWithTag )
                {
                  Status = -1073741670;
                  goto LABEL_63;
                }
                v18 = IoBuildDeviceIoControlRequest(
                        0x70050u,
                        DeviceObject,
                        0LL,
                        0,
                        PoolWithTag,
                        OutputBufferLength,
                        0,
                        &Object,
                        &IoStatusBlock);
                if ( !v18 )
                  break;
                KeResetEvent(&Object);
                Status = IofCallDriver(DeviceObject, v18);
                if ( Status == 259 )
                {
                  KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
                  Status = IoStatusBlock.Status;
                }
                if ( Status != -1073741789 )
                  goto LABEL_30;
                ExFreePoolWithTag(PoolWithTag, 0);
                OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
              }
              Status = -1073741670;
LABEL_30:
              if ( Status < 0 )
                goto LABEL_63;
              v19 = 0;
              v20 = (unsigned __int64)v45 >> 2;
              for ( k = 0LL; k < v20; ++k )
                v19 += v38[k];
              v22 = *PoolWithTag;
              if ( !*PoolWithTag && !v15 )
                PoolWithTag[2] = 0;
              v23 = 0;
              if ( v22 != 2 )
              {
                if ( !v22 && !PoolWithTag[1] && !PoolWithTag[2] )
                  v23 = IoVerifyPartitionTable(DeviceObject, 0) == -1073741637;
                goto LABEL_39;
              }
            }
            v23 = 1;
LABEL_39:
            v24 = (PVOID *)IoArcTableListHead;
            v25 = &IoArcTableListHead;
            while ( 1 )
            {
              if ( v24 == v25 )
              {
                Status = -1073741637;
                goto LABEL_62;
              }
              if ( !*((_BYTE *)v24 + 72) )
              {
                if ( v23 )
                {
                  if ( *((_BYTE *)v24 + 36) || v19 + *((_DWORD *)v24 + 8) )
                    goto LABEL_44;
                }
                else
                {
                  v26 = IopVerifyDiskSignature(PoolWithTag, v24, &v41);
                  if ( !v26 )
                    goto LABEL_44;
                  if ( v24[7] )
                  {
                    v26 = VhdiVerifyBootDisk(DeviceObject);
                    v25 = &IoArcTableListHead;
                  }
                  if ( !v26 || v19 + *((_DWORD *)v24 + 8) )
                    goto LABEL_44;
                }
                if ( !v24[8] )
                {
                  v24[8] = DeviceObject;
                  v27 = L"\\Device\\CdRom%d";
                  if ( DeviceObject->DeviceType != 2 )
                    v27 = L"\\Device\\Harddisk%d\\Partition0";
                  RtlStringCchPrintfW(pszDest, 0x40uLL, v27, v47);
                  RtlInitUnicodeString(&DestinationString, pszDest);
                  v28 = (const char *)v24[3];
                  RtlStringCchPrintfA(v48, 0x40uLL, "\\ArcName\\%s", v28);
                  Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v48);
                  if ( Status < 0 )
                    goto LABEL_62;
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeUnicodeString(&SymbolicLinkName);
                  if ( DeviceObject->DeviceType != 2 )
                  {
                    if ( PoolWithTag[1] )
                    {
                      Status = 0;
                      v29 = 1;
                      do
                      {
                        LODWORD(OutputBuffer) = v29;
                        RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\Harddisk%d\\Partition%d", v47, OutputBuffer);
                        RtlInitUnicodeString(&DestinationString, pszDest);
                        RtlStringCchPrintfA(v48, 0x40uLL, "\\ArcName\\%spartition(%d)", v28, v29);
                        if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v48) >= 0 )
                        {
                          IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                          RtlFreeUnicodeString(&SymbolicLinkName);
                        }
                        ++v29;
                      }
                      while ( v29 - 1 < (unsigned int)PoolWithTag[1] );
                    }
                    goto LABEL_62;
                  }
                  if ( (unsigned int)InitializationPhase < 2 )
                  {
                    v33 = (unsigned __int8 *)v24[3];
                    v34 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v33;
                    do
                    {
                      v35 = v33[v34];
                      v36 = *v33 - v35;
                      if ( v36 )
                        break;
                      ++v33;
                    }
                    while ( v35 );
                    v12 = v38;
                    if ( !v36 )
                      DeviceObject->Flags |= 0x100u;
LABEL_63:
                    if ( PoolWithTag )
                      ExFreePoolWithTag(PoolWithTag, 0);
                    break;
                  }
LABEL_62:
                  v12 = v38;
                  goto LABEL_63;
                }
              }
LABEL_44:
              v24 = (PVOID *)*v24;
            }
          }
LABEL_65:
          ExFreePoolWithTag(v12, 0);
          return (unsigned int)Status;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( v2->DeviceExtension == DeviceObject )
      return 0LL;
    v2 = *(PDEVICE_OBJECT *)&v2->Type;
  }
}
