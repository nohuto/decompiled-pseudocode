/*
 * XREFs of sub_1800518CC @ 0x1800518CC
 * Callers:
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 * Callees:
 *     sub_1800049A4 @ 0x1800049A4 (sub_1800049A4.c)
 *     sub_180004C48 @ 0x180004C48 (sub_180004C48.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180053748 @ 0x180053748 (sub_180053748.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A5C20 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall sub_1800518CC(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS v6; // esi
  ULONG Length; // r14d
  PVOID Buffer; // r15
  void *v9; // rcx
  int v10; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+54h] [rbp-25h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 FileInformation; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v22; // [rsp+78h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v24; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v18 = 0;
  v17 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 464) == a1 + 464 && *(_QWORD *)(a1 + 480) == a1 + 480 && (*(_DWORD *)(a1 + 324) & 0x1000) == 0 )
    {
      v6 = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 144),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
      if ( v6 < 0 )
        goto LABEL_20;
      Length = (v24 + 7) & ~(v24 - 1);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 208);
    }
    Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
    {
      v6 = -1073741801;
      return RtlNtStatusToDosError(v6);
    }
    v9 = *(void **)(a1 + 144);
    ByteOffset.QuadPart = 0LL;
    v6 = ZwReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v6 < 0 )
      goto LABEL_19;
    if ( !a2 )
    {
      *((_DWORD *)Buffer + 29) = *(_DWORD *)(a1 + 204);
      *((_DWORD *)Buffer + 35) = *(_DWORD *)(a1 + 392);
      *((_DWORD *)Buffer + 38) += *(_DWORD *)(a1 + 384);
      *((_DWORD *)Buffer + 95) += *(_DWORD *)(a1 + 388);
      v10 = *(_DWORD *)(a1 + 324);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          sub_1800049A4(a1, (__int64)Buffer, Length, v18, v17);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    sub_180053748(a1, Buffer, Length);
    v11 = ZwWriteFile(*(HANDLE *)(a1 + 144), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v6 = v11;
    if ( a2 )
      goto LABEL_19;
    if ( v11 < 0 )
      goto LABEL_19;
    v12 = *(_DWORD *)(a1 + 324);
    if ( (v12 & 0x4000020) == 0 )
      goto LABEL_19;
    if ( (v12 & 0x4000000) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v15 = *(unsigned int *)(a1 + 320);
      if ( (v12 & 0x2000) != 0 )
        v16 = v15 << 10;
      else
        v16 = v15 << 20;
      v13 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v13 >= v16 )
        goto LABEL_19;
    }
    FileInformation = v13;
    if ( v13 )
      v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 144), &v22, &FileInformation, 8u, FileEndOfFileInformation);
LABEL_19:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    goto LABEL_20;
  }
  v6 = sub_180004C48(a1, &v18, &v17);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v18;
    *(_DWORD *)(a1 + 388) += v17;
    goto LABEL_2;
  }
LABEL_20:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}
