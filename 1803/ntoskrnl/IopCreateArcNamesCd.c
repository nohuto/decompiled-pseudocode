/*
 * XREFs of IopCreateArcNamesCd @ 0x1408C4DE0
 * Callers:
 *     IopCreateArcNames @ 0x1408B74E4 (IopCreateArcNames.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     RtlStringCchPrintfA @ 0x140179880 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     IoBuildSynchronousFsdRequest @ 0x140539240 (IoBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x140603720 (IoCreateSymbolicLink.c)
 *     IoGetConfigurationInformation @ 0x140605F90 (IoGetConfigurationInformation.c)
 *     IopFetchConfigurationInformation @ 0x1408C4F0C (IopFetchConfigurationInformation.c)
 */

__int64 __fastcall IopCreateArcNamesCd(__int64 a1)
{
  _QWORD *v1; // rdi
  int v2; // r13d
  ULONG CdRomCount; // esi
  int ConfigurationInformation; // eax
  PVOID v6; // rbx
  bool v7; // sf
  _QWORD *v8; // rax
  const WCHAR *v9; // r12
  bool v10; // r15
  __int64 v11; // r10
  unsigned __int8 *v12; // rcx
  __int64 v13; // r9
  _QWORD *v14; // r11
  int v15; // r8d
  int v16; // edx
  char *Pool; // r14
  int v19; // edi
  __int64 v20; // rax
  NTSTATUS DeviceObjectPointer; // edi
  struct _DEVICE_OBJECT *v22; // r15
  IRP *v23; // rax
  IRP *v24; // rax
  int v25; // edi
  NTSTATUS Status; // eax
  unsigned __int64 v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  int v32; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  struct _KEVENT Object; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _STRING SourceString; // [rsp+98h] [rbp-70h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v38; // [rsp+B0h] [rbp-58h]
  LARGE_INTEGER StartingOffset; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+D8h] [rbp-30h] BYREF
  LARGE_INTEGER v43; // [rsp+E8h] [rbp-20h] BYREF
  char pszDest[128]; // [rsp+F8h] [rbp-10h] BYREF
  CHAR v45[128]; // [rsp+178h] [rbp+70h] BYREF
  __int64 retaddr; // [rsp+230h] [rbp+128h]

  v1 = *(_QWORD **)(a1 + 232);
  v2 = 0;
  v40 = a1;
  P = 0LL;
  CdRomCount = IoGetConfigurationInformation()->CdRomCount;
  SourceString = (_STRING)GUID_DEVINTERFACE_CDROM;
  ConfigurationInformation = IopFetchConfigurationInformation((PZZWSTR *)&P, (GUID *)&SourceString);
  v6 = P;
  v7 = ConfigurationInformation < 0;
  v8 = (_QWORD *)*v1;
  v9 = (const WCHAR *)P;
  v10 = v7;
  if ( (_QWORD *)*v1 == v1 )
    goto LABEL_9;
  v11 = *(_QWORD *)(a1 + 184);
  do
  {
    v12 = (unsigned __int8 *)v8[3];
    v13 = v11 - (_QWORD)v12;
    v38 = v8;
    v14 = v8;
    do
    {
      v15 = v12[v13];
      v16 = *v12 - v15;
      if ( v16 )
        break;
      ++v12;
    }
    while ( v15 );
    if ( !v16 )
      break;
    v8 = (_QWORD *)*v8;
    v14 = 0LL;
    v38 = 0LL;
  }
  while ( v8 != v1 );
  if ( !v14 )
    goto LABEL_9;
  Pool = (char *)IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, 0x800uLL);
  if ( !Pool )
    goto LABEL_9;
  v19 = 0;
  v32 = 0;
  if ( v10 )
    CdRomCount += 5;
  if ( !CdRomCount )
  {
LABEL_44:
    ExFreePoolWithTag(Pool, 0);
LABEL_9:
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  while ( 1 )
  {
    if ( v9 && *v9 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      v20 = -1LL;
      do
        ++v20;
      while ( v9[v20] );
      v9 += v20 + 1;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P);
      if ( DeviceObjectPointer < 0 )
        goto LABEL_26;
      v22 = (struct _DEVICE_OBJECT *)P;
      v23 = (IRP *)IopBuildDeviceIoControlRequest(
                     2953344,
                     (__int64)P,
                     0LL,
                     0,
                     &v43,
                     0xCu,
                     0,
                     (__int64)&Object,
                     (__int64)&IoStatusBlock,
                     retaddr);
      if ( !v23 )
        goto LABEL_48;
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.SignalState = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      DeviceObjectPointer = IofCallDriver(v22, v23);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer < 0
        || (RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v43.HighPart),
            RtlInitAnsiString(&SourceString, pszDest),
            DeviceObjectPointer = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u),
            DeviceObjectPointer < 0) )
      {
LABEL_26:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
LABEL_51:
        ExFreePoolWithTag(Pool, 0);
        return (unsigned int)DeviceObjectPointer;
      }
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\CdRom%d", v19);
      v32 = v19 + 1;
      RtlInitAnsiString(&SourceString, pszDest);
      if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
      {
LABEL_48:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        DeviceObjectPointer = -1073741670;
        goto LABEL_51;
      }
      if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)&P) < 0 )
        goto LABEL_43;
      v22 = (struct _DEVICE_OBJECT *)P;
    }
    StartingOffset.QuadPart = 0x8000LL;
    v24 = IoBuildSynchronousFsdRequest(3u, v22, Pool, 0x800u, &StartingOffset, &Object, &IoStatusBlock);
    v25 = 0;
    if ( v24 )
    {
      LOWORD(Object.Header.Lock) = 0;
      Object.Header.SignalState = 0;
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      Object.Header.Size = 6;
      Status = IofCallDriver(v22, v24);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v27 = 0LL;
        v28 = 0LL;
        do
        {
          v29 = _mm_loadu_si128((const __m128i *)&Pool[4 * v27]);
          v27 += 4LL;
          v30 = _mm_add_epi32(v29, v28);
          v28 = v30;
        }
        while ( v27 < 0x200 );
        v31 = _mm_add_epi32(v30, _mm_srli_si128(v30, 8));
        v25 = _mm_cvtsi128_si32(_mm_add_epi32(v31, _mm_srli_si128(v31, 4)));
      }
    }
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    if ( !(v25 + *((_DWORD *)v38 + 8)) )
      break;
    RtlFreeAnsiString(&DestinationString);
    if ( ++v2 >= CdRomCount )
      goto LABEL_44;
    v19 = v32;
  }
  RtlStringCchPrintfA(v45, 0x80uLL, "\\ArcName\\%s", *(const char **)(v40 + 184));
  RtlInitAnsiString(&SourceString, v45);
  DeviceObjectPointer = RtlAnsiStringToUnicodeString(&SymbolicLinkName, &SourceString, 1u);
  if ( DeviceObjectPointer >= 0 )
  {
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    RtlFreeAnsiString(&SymbolicLinkName);
LABEL_43:
    RtlFreeAnsiString(&DestinationString);
    goto LABEL_44;
  }
  ExFreePoolWithTag(Pool, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)DeviceObjectPointer;
}
