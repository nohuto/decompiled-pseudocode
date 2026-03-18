/*
 * XREFs of BiCreatePartitionDevice @ 0x14058C52C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x14058C478 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14058C478 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14058C7F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x14058C918 (BiGetPartitionInformation.c)
 *     BiGetDriveLayoutInformation @ 0x14058CA00 (BiGetDriveLayoutInformation.c)
 *     BiCreateFileDeviceElement @ 0x140735940 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x140735AEC (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  SIZE_T v5; // r15
  WCHAR *v6; // r12
  WCHAR *v7; // rsi
  const wchar_t *v8; // rax
  int PhysicalDriveName; // ebx
  __int128 v10; // xmm6
  unsigned int v11; // r14d
  _OWORD *PoolWithTag; // r15
  size_t v13; // rax
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  _DWORD *v17; // rcx
  wchar_t *v19; // rax
  wchar_t *v20; // rbx
  void *PartitionVhdFilePathFromUnicodeString; // rax
  unsigned int Size; // [rsp+38h] [rbp-D0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h]
  WCHAR *v25; // [rsp+60h] [rbp-A8h]
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp-88h]
  _DWORD *v29; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v30; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v31; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  int v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  __int128 v36; // [rsp+128h] [rbp+20h]
  _OWORD v37[5]; // [rsp+188h] [rbp+80h] BYREF

  v28 = a3;
  LODWORD(v24) = a2;
  v29 = a4;
  v5 = 72LL;
  FileHandle = 0LL;
  Src = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  Size = 0;
  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  memset(v37, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
    PhysicalDriveName = BiGetDriveLayoutInformation(*(PCWSTR *)&DestinationString.Length);
    if ( PhysicalDriveName < 0 )
      goto LABEL_23;
  }
  if ( (v24 & 0x40) == 0
    && (RtlInitUnicodeString(&DestinationString, SourceString),
        v8 = (const wchar_t *)BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString),
        (v7 = (WCHAR *)v8) != 0LL) )
  {
    if ( !wcsnicmp(v8, L"\\Device\\HarddiskVolume", 0x16uLL) )
    {
      v19 = wcschr(v7 + 22, 0x5Cu);
      v20 = v19;
      if ( v19 )
      {
        *v19 = 0;
        RtlInitUnicodeString(&v30, v7);
        PartitionVhdFilePathFromUnicodeString = (void *)BiGetPartitionVhdFilePathFromUnicodeString(&v30);
        *v20 = 92;
        if ( PartitionVhdFilePathFromUnicodeString )
        {
          ExFreePoolWithTag(PartitionVhdFilePathFromUnicodeString, 0x4B444342u);
          PhysicalDriveName = -1073741637;
          goto LABEL_23;
        }
      }
    }
    v6 = v25;
    PhysicalDriveName = BiCreateFileDeviceElement(v7);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(v25, 0, 0, &Src);
    if ( PhysicalDriveName < 0 )
      goto LABEL_21;
    LODWORD(v37[2]) = 6;
    Size = *((_DWORD *)Src + 2);
  }
  else
  {
    LODWORD(v37[2]) = 0;
  }
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_47:
      PhysicalDriveName = -1073741811;
      goto LABEL_21;
    }
    DWORD1(v37[2]) = 0;
    *(_OWORD *)((char *)&v37[2] + 8) = MEMORY[8];
  }
  else
  {
    DWORD2(v37[2]) = MEMORY[8];
    DWORD1(v37[2]) = 1;
  }
  RtlInitUnicodeString(&v31, SourceString);
  ObjectAttributes.ObjectName = &v31;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !v34 )
      {
        *(_QWORD *)&v37[1] = v35;
        v10 = v37[1];
LABEL_11:
        v11 = Size + 56;
        if ( Size + 56 > 0x48 )
          v5 = v11;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x4B444342u);
        if ( PoolWithTag )
        {
          v13 = 72LL;
          if ( v11 > 0x48 )
            v13 = v11;
          memset(PoolWithTag, 0, v13);
          v14 = v37[3];
          v15 = 72;
          LODWORD(v37[0]) = 6;
          if ( v11 > 0x48 )
            v15 = Size + 56;
          DWORD2(v37[0]) = v15;
          *PoolWithTag = v37[0];
          v16 = v37[2];
          PoolWithTag[1] = v10;
          PoolWithTag[2] = v16;
          *(_QWORD *)&v16 = *(_QWORD *)&v37[4];
          PoolWithTag[3] = v14;
          *((_QWORD *)PoolWithTag + 8) = v16;
          if ( v7 )
            memmove((char *)PoolWithTag + 56, Src, Size);
          v17 = v29;
          *v28 = PoolWithTag;
          *v17 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        goto LABEL_21;
      }
      if ( v34 == 1 )
      {
        v10 = v36;
        goto LABEL_11;
      }
      goto LABEL_47;
    }
  }
LABEL_21:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
LABEL_23:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
