/*
 * XREFs of IopGetBootDiskInformation @ 0x1408DE714
 * Callers:
 *     IoGetBootDiskInformation @ 0x14071C290 (IoGetBootDiskInformation.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlEqualString @ 0x1400AF960 (RtlEqualString.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     RtlStringCchPrintfA @ 0x140179880 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     IoGetConfigurationInformation @ 0x140605F90 (IoGetConfigurationInformation.c)
 *     IopVerifyDiskSignature @ 0x140655578 (IopVerifyDiskSignature.c)
 */

__int64 __fastcall IopGetBootDiskInformation(__int64 a1, unsigned int a2)
{
  int v4; // r12d
  __int64 v6; // rsi
  bool v7; // cf
  __int64 v8; // rbx
  _QWORD **v9; // r13
  const CHAR *v10; // rdx
  ULONG v11; // eax
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v13; // r15
  IRP *v14; // rax
  NTSTATUS v15; // eax
  SIZE_T v16; // rdx
  unsigned int j; // r14d
  IRP *v18; // rdi
  NTSTATUS v19; // edi
  _DWORD *PoolWithTag; // rbx
  int v21; // eax
  _QWORD *k; // r14
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // r13
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-ACh]
  ULONG i; // [rsp+60h] [rbp-A8h]
  struct _KEVENT Object; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  _QWORD **v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  _QWORD **v34; // [rsp+A0h] [rbp-68h]
  _DWORD v35[4]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING ObjectName; // [rsp+B8h] [rbp-50h] BYREF
  _STRING String1; // [rsp+C8h] [rbp-40h] BYREF
  _STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  _STRING String2; // [rsp+F8h] [rbp-10h] BYREF
  LARGE_INTEGER v41; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v42; // [rsp+11Ch] [rbp+14h]
  char pszDest[128]; // [rsp+128h] [rbp+20h] BYREF
  CHAR v44[128]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 retaddr; // [rsp+260h] [rbp+158h]

  v33 = a1;
  v4 = 0;
  v26 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  if ( (unsigned int)InitializationPhase >= 2 )
    return 3221225865LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  v6 = 0LL;
  v7 = a2 < 0x40;
  v8 = KeLoaderBlock_0;
  if ( !v7 )
    v6 = a1;
  v9 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  v10 = *(const CHAR **)(KeLoaderBlock_0 + 184);
  v34 = v9;
  v32 = (_QWORD **)**v9;
  RtlInitAnsiString(&DestinationString, v10);
  RtlInitAnsiString(&String2, *(PCSZ *)(v8 + 192));
  v11 = 0;
  for ( i = 0; v11 < DiskCount; i = v11 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\Harddisk%d\\Partition0", v11);
    RtlInitAnsiString(&SourceString, pszDest);
    if ( RtlAnsiStringToUnicodeString(&ObjectName, &SourceString, 1u) < 0 )
      goto LABEL_26;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
    RtlFreeAnsiString(&ObjectName);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_26;
    v13 = DeviceObject;
    v14 = (IRP *)IopBuildDeviceIoControlRequest(
                   458752,
                   (__int64)DeviceObject,
                   0LL,
                   0,
                   &v41,
                   0x18u,
                   0,
                   (__int64)&Object,
                   (__int64)v35,
                   retaddr);
    if ( !v14 )
      goto LABEL_11;
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    v15 = IofCallDriver(v13, v14);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
      v15 = v35[0];
    }
    if ( v15 >= 0 )
    {
      v16 = 4096LL;
      for ( j = 4096; ; v16 = j )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6F426F49u);
        if ( !PoolWithTag )
          break;
        v18 = (IRP *)IopBuildDeviceIoControlRequest(
                       458832,
                       (__int64)v13,
                       0LL,
                       0,
                       PoolWithTag,
                       j,
                       0,
                       (__int64)&Object,
                       (__int64)v35,
                       retaddr);
        if ( !v18 )
          break;
        KeResetEvent(&Object);
        v19 = IofCallDriver(v13, v18);
        if ( v19 == 259 )
        {
          KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
          v19 = v35[0];
        }
        if ( v19 != -1073741789 )
          goto LABEL_23;
        ExFreePoolWithTag(PoolWithTag, 0);
        j *= 2;
      }
      v19 = -1073741670;
LABEL_23:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
      if ( v19 >= 0 )
      {
        v21 = v42;
        if ( v42 < 0x200 )
          v21 = 512;
        v42 = v21;
        for ( k = *v9; k != v9; k = (_QWORD *)*k )
        {
          if ( v32 != v9 || DiskCount != 1 || *PoolWithTag )
          {
            v23 = IopVerifyDiskSignature((__int64)PoolWithTag, (__int64)k, &v26);
            v4 = v26;
            if ( !v23 )
              continue;
          }
          v24 = 0LL;
          if ( PoolWithTag[1] )
          {
            v25 = v33;
            do
            {
              if ( !v4 && !*PoolWithTag )
                v4 = PoolWithTag[2];
              if ( PoolWithTag[36 * v24 + 18] )
              {
                RtlStringCchPrintfA(v44, 0x80uLL, "%spartition(%d)", (const char *)k[3], PoolWithTag[36 * v24 + 18]);
                RtlInitAnsiString(&String1, v44);
                if ( RtlEqualString(&String1, &DestinationString, 1u) )
                {
                  *(_DWORD *)(v25 + 16) = v4;
                  *(_QWORD *)v25 = *(_QWORD *)&PoolWithTag[36 * v24 + 14];
                  if ( *PoolWithTag == 1 )
                  {
                    if ( v6 )
                    {
                      *(_BYTE *)(v6 + 56) = 1;
                      *(_OWORD *)(v6 + 24) = *(_OWORD *)(PoolWithTag + 2);
                    }
                  }
                  else if ( v6 )
                  {
                    *(_BYTE *)(v6 + 56) = 0;
                  }
                }
                if ( RtlEqualString(&String1, &String2, 1u) )
                {
                  *(_DWORD *)(v25 + 20) = v4;
                  *(_QWORD *)(v25 + 8) = *(_QWORD *)&PoolWithTag[36 * v24 + 14];
                  if ( *PoolWithTag == 1 )
                  {
                    if ( v6 )
                    {
                      *(_BYTE *)(v6 + 57) = 1;
                      *(_OWORD *)(v6 + 40) = *(_OWORD *)(PoolWithTag + 2);
                    }
                  }
                  else if ( v6 )
                  {
                    *(_BYTE *)(v6 + 57) = 0;
                  }
                }
              }
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < PoolWithTag[1] );
            v9 = v34;
            v26 = v4;
          }
        }
LABEL_25:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_26;
      }
      if ( PoolWithTag )
        goto LABEL_25;
    }
    else
    {
LABEL_11:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
LABEL_26:
    v11 = i + 1;
  }
  return 0LL;
}
