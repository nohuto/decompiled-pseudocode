/*
 * XREFs of SmpCreateVolumeDescriptor @ 0x1400054D8
 * Callers:
 *     SmpCreateVolumeDescriptors @ 0x140004FF0 (SmpCreateVolumeDescriptors.c)
 * Callees:
 *     SmpGetVolumeDiskNumber @ 0x140005A94 (SmpGetVolumeDiskNumber.c)
 *     SmpIsVhdVolume @ 0x140005B20 (SmpIsVhdVolume.c)
 *     SmpIsVolumeOnSCMDevice @ 0x140005BC8 (SmpIsVolumeOnSCMDevice.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x140005C64 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

int __fastcall SmpCreateVolumeDescriptor(unsigned __int16 a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  NTSTATUS v5; // r8d
  __int64 *Heap; // rax
  __int64 v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  signed __int32 v13; // et2
  __int64 v14; // rcx
  signed __int32 v15; // et2
  signed __int32 v16; // et2
  signed __int32 v17; // et2
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+38h] [rbp-31h] BYREF
  int v21; // [rsp+3Ch] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  _BYTE FsInformation[4]; // [rsp+48h] [rbp-21h] BYREF
  int v24; // [rsp+4Ch] [rbp-1Dh]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp+27h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+37h]
  unsigned int v29; // [rsp+A4h] [rbp+3Bh]

  Handle = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v5 < 0 )
  {
    v13 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v14 = 2LL * v13;
    *((_DWORD *)&SmpPagefileLog + 4 * v13) = 1345;
LABEL_34:
    LODWORD(Heap) = a1;
    *((_DWORD *)&SmpPagefileLog + 2 * v14 + 1) = v5;
    *((_QWORD *)&SmpPagefileLog + v14 + 1) = a1;
    goto LABEL_23;
  }
  LODWORD(Heap) = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  v5 = (int)Heap;
  if ( (int)Heap < 0 )
  {
    v16 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v14 = 2LL * v16;
    *((_DWORD *)&SmpPagefileLog + 4 * v16) = 1367;
    goto LABEL_34;
  }
  if ( (v24 & 0x17) != 0 )
    goto LABEL_23;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u);
  if ( v5 < 0 )
  {
    v17 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v14 = 2LL * v17;
    *((_DWORD *)&SmpPagefileLog + 4 * v17) = 1413;
    goto LABEL_34;
  }
  v5 = NtQueryVolumeInformationFile(Handle, &IoStatusBlock, v27, 0x18u, FileFsSizeInformation);
  if ( v5 < 0 )
  {
    v15 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v14 = 2LL * v15;
    *((_DWORD *)&SmpPagefileLog + 4 * v15) = 1435;
    goto LABEL_34;
  }
  Heap = (__int64 *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x30uLL);
  v7 = (__int64)Heap;
  if ( Heap )
  {
    v8 = a1 == (unsigned __int16)SmpOsVolumeLetter;
    *((_WORD *)Heap + 14) = a1;
    *((_DWORD *)Heap + 6) = v24;
    if ( v8 )
    {
      *((_DWORD *)Heap + 4) |= 1u;
      SmpOsVolumeDescriptor = (__int64)Heap;
    }
    if ( (int)RtlQueryVolumeDiskSpeedPolicy(FileHandle, &v20) >= 0 && v20 >= 20 )
      *(_DWORD *)(v7 + 16) |= 4u;
    if ( (unsigned __int8)SmpIsVolumeOnSCMDevice(FileHandle) )
      *(_DWORD *)(v7 + 16) |= 0x40u;
    v9 = v27[1] * v28 * (unsigned __int64)v29;
    *(_QWORD *)(v7 + 32) = v9;
    *(_QWORD *)(v7 + 40) = v27[0] * v28 * (unsigned __int64)v29;
    if ( v9 <= 0x2000000 )
      *(_QWORD *)(v7 + 32) = 0LL;
    else
      *(_QWORD *)(v7 + 32) = v9 - 0x2000000;
    if ( (unsigned __int8)SmpIsVhdVolume(FileHandle) )
      *(_DWORD *)(v7 + 16) |= 2u;
    if ( (int)SmpGetVolumeDiskNumber(FileHandle, &v21) >= 0 )
    {
      v10 = v21;
      *(_DWORD *)(v7 + 16) |= 8u;
      *(_DWORD *)(v7 + 20) = v10;
    }
    Heap = &SmpVolumeDescriptorList;
    if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
    {
      v12 = SmpVolumeDescriptorList;
      if ( *(__int64 **)(SmpVolumeDescriptorList + 8) != &SmpVolumeDescriptorList )
        __fastfail(3u);
      *(_QWORD *)v7 = SmpVolumeDescriptorList;
      *(_QWORD *)(v7 + 8) = &SmpVolumeDescriptorList;
      *(_QWORD *)(v12 + 8) = v7;
      SmpVolumeDescriptorList = v7;
    }
    else
    {
      v11 = (__int64 *)qword_1400214F8;
      if ( *(__int64 **)qword_1400214F8 != &SmpVolumeDescriptorList )
        __fastfail(3u);
      *(_QWORD *)v7 = &SmpVolumeDescriptorList;
      *(_QWORD *)(v7 + 8) = v11;
      *v11 = v7;
      qword_1400214F8 = v7;
    }
  }
LABEL_23:
  if ( FileHandle )
    LODWORD(Heap) = NtClose(FileHandle);
  if ( Handle )
    LODWORD(Heap) = NtClose(Handle);
  return (int)Heap;
}
