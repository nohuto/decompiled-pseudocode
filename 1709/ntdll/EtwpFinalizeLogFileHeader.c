/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x18006305C
 * Callers:
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801098DC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwpAddProviderTrackingInfo @ 0x180065010 (EtwpAddProviderTrackingInfo.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180088978 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x180088B58 (EtwpWriteRemainingCompressedData.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A05A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A09E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  int v6; // esi
  ULONG Length; // r14d
  ULONG *Buffer; // r15
  void *v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  const void *v12; // rdx
  NTSTATUS v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  int v21; // [rsp+58h] [rbp-29h] BYREF
  int v22; // [rsp+5Ch] [rbp-25h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 FileInformation; // [rsp+68h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v26; // [rsp+80h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+90h] [rbp+Fh] BYREF
  int v28; // [rsp+A4h] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v22 = 0;
  v21 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 464) != a1 + 464
      || *(_QWORD *)(a1 + 480) != a1 + 480
      || *(_QWORD *)(a1 + 520)
      || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    {
      Length = *(_DWORD *)(a1 + 208);
    }
    else
    {
      v6 = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 144),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
      if ( v6 < 0 )
        goto LABEL_24;
      Length = (v28 + 7) & ~(v28 - 1);
    }
    Buffer = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
    {
      v6 = -1073741801;
      return RtlNtStatusToDosError(v6);
    }
    v9 = *(void **)(a1 + 144);
    ByteOffset.QuadPart = 0LL;
    v6 = NtReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v6 < 0 )
      goto LABEL_23;
    if ( Length >= *Buffer )
      Length = *Buffer;
    if ( !a2 )
    {
      Buffer[29] = *(_DWORD *)(a1 + 204);
      Buffer[35] = *(_DWORD *)(a1 + 392);
      Buffer[38] += *(_DWORD *)(a1 + 384);
      Buffer[95] += *(_DWORD *)(a1 + 388);
      v10 = *(_DWORD *)(a1 + 324);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, (_DWORD)Buffer, Length, v22, v21);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    v11 = Buffer[1];
    Buffer[12] = v11;
    v12 = *(const void **)(a1 + 520);
    if ( v12 )
    {
      v17 = *(_DWORD *)(a1 + 528);
      v18 = (v17 + 7) & 0xFFFFFFF8;
      if ( (unsigned int)v11 < Length && (unsigned int)v11 >= 0x180 && Length - (unsigned int)v11 >= v18 )
      {
        memmove((char *)Buffer + v11, v12, v17);
        Buffer[12] = v11 + v18;
      }
    }
    EtwpAddProviderTrackingInfo(a1, Buffer, Length);
    v13 = NtWriteFile(*(HANDLE *)(a1 + 144), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v6 = v13;
    if ( a2 )
      goto LABEL_23;
    if ( v13 < 0 )
      goto LABEL_23;
    v14 = *(_DWORD *)(a1 + 324);
    if ( (v14 & 0x4000020) == 0 )
      goto LABEL_23;
    if ( (v14 & 0x4000000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v19 = *(unsigned int *)(a1 + 320);
      if ( (v14 & 0x2000) != 0 )
        v20 = v19 << 10;
      else
        v20 = v19 << 20;
      v15 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v15 >= v20 )
        goto LABEL_23;
    }
    FileInformation = v15;
    if ( v15 )
      v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 144), &v26, &FileInformation, 8u, FileEndOfFileInformation);
LABEL_23:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    goto LABEL_24;
  }
  v6 = EtwpWriteRemainingCompressedData(a1, &v22, &v21);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v22;
    *(_DWORD *)(a1 + 388) += v21;
    goto LABEL_2;
  }
LABEL_24:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}
