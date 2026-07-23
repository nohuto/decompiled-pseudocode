/*
 * XREFs of sub_180003410 @ 0x180003410
 * Callers:
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 * Callees:
 *     sub_180003694 @ 0x180003694 (sub_180003694.c)
 *     sub_180003794 @ 0x180003794 (sub_180003794.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_180009274 @ 0x180009274 (sub_180009274.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x18009AB80 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009B3E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180003410(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  int v6; // esi
  ULONG Length; // r15d
  ULONG *Buffer; // r14
  void *v9; // rcx
  ULONG v10; // esi
  int v11; // eax
  __int64 v12; // r15
  const void *v13; // rdx
  NTSTATUS v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // [rsp+58h] [rbp-29h] BYREF
  int v23; // [rsp+5Ch] [rbp-25h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 FileInformation; // [rsp+68h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v27; // [rsp+80h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+90h] [rbp+Fh] BYREF
  int v29; // [rsp+A4h] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v23 = 0;
  v22 = 0;
  if ( !v4 )
  {
    v6 = sub_180003794(a1, &v23, &v22);
    if ( v6 < 0 )
      goto LABEL_26;
    *(_DWORD *)(a1 + 392) += v23;
    *(_DWORD *)(a1 + 388) += v22;
  }
  if ( *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 480) != a1 + 480
    || *(_QWORD *)(a1 + 520)
    || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
  {
    Length = *(_DWORD *)(a1 + 208);
    goto LABEL_9;
  }
  v6 = ZwQueryVolumeInformationFile(*(HANDLE *)(a1 + 144), &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
  if ( v6 >= 0 )
  {
    Length = (v29 + 7) & ~(v29 - 1);
LABEL_9:
    Buffer = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
    {
      v6 = -1073741801;
      return RtlNtStatusToDosError(v6);
    }
    v9 = *(void **)(a1 + 144);
    ByteOffset.QuadPart = 0LL;
    v6 = ZwReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v6 < 0 )
      goto LABEL_25;
    v10 = *Buffer;
    if ( Length < *Buffer )
      v10 = Length;
    if ( !a2 )
    {
      Buffer[29] = *(_DWORD *)(a1 + 204);
      Buffer[35] = *(_DWORD *)(a1 + 392);
      Buffer[38] += *(_DWORD *)(a1 + 384);
      Buffer[95] += *(_DWORD *)(a1 + 388);
      v11 = *(_DWORD *)(a1 + 324);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          sub_180003694(a1, (_DWORD)Buffer, v10, v23, v22);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    v12 = Buffer[1];
    Buffer[12] = v12;
    v13 = *(const void **)(a1 + 520);
    if ( v13 )
    {
      v18 = *(_DWORD *)(a1 + 528);
      v19 = (v18 + 7) & 0xFFFFFFF8;
      if ( (unsigned int)v12 < v10 && (unsigned int)v12 >= 0x180 && v10 - (unsigned int)v12 >= v19 )
      {
        memmove((char *)Buffer + v12, v13, v18);
        Buffer[12] = v12 + v19;
      }
    }
    sub_180009274(a1, Buffer, v10);
    v14 = ZwWriteFile(*(HANDLE *)(a1 + 144), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v10, &ByteOffset, 0LL);
    v6 = v14;
    if ( a2 )
      goto LABEL_25;
    if ( v14 < 0 )
      goto LABEL_25;
    v15 = *(_DWORD *)(a1 + 324);
    if ( (v15 & 0x4000020) == 0 )
      goto LABEL_25;
    if ( (v15 & 0x4000000) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v20 = *(unsigned int *)(a1 + 320);
      if ( (v15 & 0x2000) != 0 )
        v21 = v20 << 10;
      else
        v21 = v20 << 20;
      v16 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v16 >= v21 )
        goto LABEL_25;
    }
    FileInformation = v16;
    if ( v16 )
      v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 144), &v27, &FileInformation, 8u, FileEndOfFileInformation);
LABEL_25:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  }
LABEL_26:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}
