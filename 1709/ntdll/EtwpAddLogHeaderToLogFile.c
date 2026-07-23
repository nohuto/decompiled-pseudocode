/*
 * XREFs of EtwpAddLogHeaderToLogFile @ 0x1800649D0
 * Callers:
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801098DC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180019360 (RtlQueryPerformanceCounter.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwpAddProviderTrackingInfo @ 0x180065010 (EtwpAddProviderTrackingInfo.c)
 *     EtwpCreateFile @ 0x180065084 (EtwpCreateFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180065878 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180065B00 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwpGetTimeZoneInformation @ 0x180065FF4 (EtwpGetTimeZoneInformation.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x1800A05A0 (ZwSetInformationFile.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A09E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     EtwpGenerateFileName @ 0x18010A398 (EtwpGenerateFileName.c)
 */

__int64 __fastcall EtwpAddLogHeaderToLogFile(__int64 a1, void *a2, int a3, char a4)
{
  bool v7; // zf
  __int64 v8; // r14
  SIZE_T Length; // r15
  NTSTATUS File; // ebx
  int v11; // r13d
  LARGE_INTEGER *Buffer; // rsi
  char *v13; // rbx
  LARGE_INTEGER v14; // rax
  struct _PEB *v15; // rcx
  __int64 v16; // rcx
  LARGE_INTEGER *v17; // rbx
  LARGE_INTEGER v18; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  size_t v25; // r8
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 LowPart; // r13
  int HighPart; // r15d
  NTSTATUS v31; // eax
  __int64 v32; // rax
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  void *Src; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 FileInformation; // [rsp+90h] [rbp-70h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp-58h]
  char ThreadInformation[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v46; // [rsp+C0h] [rbp-40h]
  unsigned int v47; // [rsp+C8h] [rbp-38h]
  _QWORD v48[4]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD SystemInformation[16]; // [rsp+100h] [rbp+0h] BYREF
  char FsInformation[20]; // [rsp+140h] [rbp+40h] BYREF
  int v51; // [rsp+154h] [rbp+54h]
  _QWORD v52[6]; // [rsp+158h] [rbp+58h] BYREF

  LODWORD(Size) = a3;
  Src = a2;
  v35 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v52, 0, sizeof(v52));
  memset(v48, 0, sizeof(v48));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  FileHandle = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 184, a1 + 200, a1 + 168);
  Length = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v11 = a3 + 72;
LABEL_10:
    Buffer = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
      return (unsigned int)-1073741801;
    File = EtwpCreateFile(SourceString, ReturnLength, (__int64)&FileHandle);
    if ( File < 0 )
    {
      v20 = FileHandle;
    }
    else if ( a4 )
    {
      v20 = FileHandle;
      ByteOffset.QuadPart = 0LL;
      File = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( File >= 0 )
      {
        if ( (Buffer[17].LowPart & 2) == 0
          && BYTE4(Buffer[13].QuadPart) == MEMORY[0x7FFE026C]
          && BYTE5(Buffer[13].QuadPart) == MEMORY[0x7FFE0270]
          && Buffer[18].HighPart == 8 )
        {
          LowPart = Buffer[13].LowPart;
          if ( (unsigned int)(LowPart - 1024) <= 0xFFFC00 )
          {
            HighPart = Buffer[17].HighPart;
            if ( HighPart )
            {
              if ( Buffer[15].QuadPart && Buffer[14].HighPart == *(_DWORD *)(a1 + 204) )
              {
                Buffer[15].QuadPart = 0LL;
                v31 = NtWriteFile(v20, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, *(_DWORD *)(a1 + 208), &ByteOffset, 0LL);
                *(_DWORD *)(a1 + 392) = HighPart;
                File = v31;
                *(_DWORD *)(a1 + 336) = HighPart;
                *(_DWORD *)(a1 + 208) = LowPart;
                *(_QWORD *)(a1 + 352) = LowPart;
                *(_QWORD *)(a1 + 144) = v20;
                *(_QWORD *)(a1 + 360) = (unsigned int)(LowPart * HighPart);
LABEL_39:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
                return (unsigned int)File;
              }
            }
          }
        }
        File = -1073741811;
      }
    }
    else
    {
      v13 = (char *)Src;
      Buffer->LowPart = Length;
      Buffer[6].HighPart = 262145;
      Buffer[6].LowPart = (v11 + 7) & 0xFFFFFFF8;
      if ( v13 )
      {
        v25 = (unsigned int)Size;
        v26 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v8 = (__int64)&v13[v26 + 32];
            *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 324) & 0x4101000 | 0x10001;
            *(_DWORD *)(v8 + 36) = 1;
            *(_DWORD *)v8 = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *(_DWORD *)(v8 + 12) > 0x100u )
            {
              *(_WORD *)(v8 + 6) = 2;
            }
            else
            {
              *(_WORD *)(v8 + 6) = 1281;
            }
            v26 += (*(unsigned __int16 *)&v13[v26 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v26 < (unsigned int)v25 );
        }
        if ( *(_DWORD *)(v8 + 44) == 4 )
          v27 = *(_DWORD *)(v8 + 264);
        else
          v27 = *(_DWORD *)(v8 + 272);
        *(_DWORD *)(a1 + 16) = v27;
        memmove(&Buffer[9], v13, v25);
      }
      else
      {
        Buffer[9].LowPart = -1073610752;
        Buffer[9].HighPart = v11 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v14.QuadPart = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v14.QuadPart = __rdtsc();
        }
        else
        {
          PerformanceCounter.QuadPart = 0LL;
          RtlQueryPerformanceCounter(&PerformanceCounter);
          v14 = PerformanceCounter;
        }
        Buffer[11] = v14;
        Buffer[10].HighPart = v46;
        Buffer[10].LowPart = v47;
        Buffer[12].LowPart = v48[2] / (__int64)SystemInformation[1];
        Buffer[12].HighPart = v48[3] / (__int64)SystemInformation[1];
        v15 = NtCurrentPeb();
        BYTE4(Buffer[13].QuadPart) = v15->OSMajorVersion;
        BYTE5(Buffer[13].QuadPart) = v15->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          HIWORD(Buffer[13].QuadPart) = 2;
        }
        else
        {
          HIWORD(Buffer[13].QuadPart) = 1281;
        }
        Buffer[14].LowPart = v15->OSBuildNumber;
        Buffer[47].LowPart = *(_DWORD *)(a1 + 16);
        Buffer[14].HighPart = *(_DWORD *)(a1 + 204);
        Buffer[18].HighPart = 8;
        Buffer[18].LowPart = 1;
        Buffer[13].LowPart = Length;
        Buffer[17].HighPart = 1;
        Buffer[16].HighPart = *(_DWORD *)(a1 + 320);
        Buffer[17].LowPart = *(_DWORD *)(a1 + 324);
        Buffer[16].LowPart = SystemInformation[1];
        Buffer[44].QuadPart = v52[0] - v52[4];
        Buffer[19].HighPart = v35;
        Buffer[20].QuadPart = 0LL;
        Buffer[21].QuadPart = 0LL;
        memmove(&Buffer[48], *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (char *)&Buffer[48] + *(unsigned __int16 *)(a1 + 152) + 2,
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        EtwpGetTimeZoneInformation(&Buffer[22]);
        Buffer[45].QuadPart = MEMORY[0x7FFE0300];
        Buffer[46] = *(LARGE_INTEGER *)a1;
        Buffer[11] = *(LARGE_INTEGER *)(a1 + 8);
        v16 = Buffer[6].LowPart;
        if ( (unsigned int)(v16 + 80) <= Buffer->LowPart )
        {
          v17 = (LARGE_INTEGER *)((char *)Buffer + v16);
          v17->HighPart = 5242960;
          v17->LowPart = -1073610750;
          v17[1].LowPart = v47;
          v17[1].HighPart = v46;
          v17[3].LowPart = v48[2] / (__int64)SystemInformation[1];
          v17[3].HighPart = v48[3] / (__int64)SystemInformation[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v18.QuadPart = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v18.QuadPart = __rdtsc();
          }
          else
          {
            v41.QuadPart = 0LL;
            RtlQueryPerformanceCounter(&v41);
            v18 = v41;
          }
          v17[2] = v18;
          v17[4].LowPart = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             &v17[6],
                                             (char *)&v17[4].QuadPart + 4,
                                             &v17[5],
                                             &v17[8]);
          v13 = (char *)Src;
          if ( !PartitionRegistryInformationUm )
            Buffer[6].LowPart += 80;
        }
      }
      v20 = FileHandle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v20, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          v28 = Buffer[6].LowPart;
          if ( v13 )
            v28 += 80;
          LODWORD(Length) = ~(v51 - 1) & (v28 + v51 - 1);
          Buffer->LowPart = Length;
        }
      }
      Buffer->HighPart = Buffer[6].LowPart;
      EtwpAddProviderTrackingInfo(a1, Buffer, (unsigned int)Length);
      v21 = Buffer[6].LowPart;
      if ( (unsigned int)v21 < (unsigned int)Length && (unsigned int)v21 > 0x48 )
        memset((char *)Buffer + v21, 255, (unsigned int)(Length - v21));
      File = NtWriteFile(v20, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
      if ( File >= 0 )
      {
        if ( (v22 = *(unsigned int *)(a1 + 320), !(_DWORD)v22)
          || (v23 = *(_DWORD *)(a1 + 324), (v23 & 0x20) == 0)
          || ((v23 & 0x2000) == 0 ? (v32 = v22 << 20) : (v32 = v22 << 10),
              FileInformation = v32,
              File = ZwSetInformationFile(v20, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v20;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)Length;
          *(_QWORD *)(a1 + 352) = (unsigned int)Length;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v20 = 0LL;
        }
      }
    }
    if ( v20 )
      NtClose(v20);
    goto LABEL_39;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    if ( File >= 0 )
    {
      File = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, v48, 0x20u, 0LL);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v52, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v35);
          if ( File >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 168) + *(unsigned __int16 *)(a1 + 152) + 388;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)File;
}
