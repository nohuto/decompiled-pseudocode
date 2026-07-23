/*
 * XREFs of sub_1800531B0 @ 0x1800531B0
 * Callers:
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180053748 @ 0x180053748 (sub_180053748.c)
 *     sub_1800537C0 @ 0x1800537C0 (sub_1800537C0.c)
 *     EtwpGetCpuSpeed_0 @ 0x180053FB8 (EtwpGetCpuSpeed_0.c)
 *     sub_180054098 @ 0x180054098 (sub_180054098.c)
 *     RtlQueryPerformanceCounter @ 0x18005F480 (RtlQueryPerformanceCounter.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A5C20 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 */

__int64 __fastcall sub_1800531B0(__int64 a1, void *a2, int a3, char a4)
{
  bool v7; // zf
  __int64 v8; // r14
  SIZE_T Length; // r15
  NTSTATUS InformationThread; // ebx
  int v11; // r13d
  LARGE_INTEGER *Buffer; // rsi
  char *v13; // r9
  LARGE_INTEGER v14; // rax
  struct _PEB *v15; // rcx
  HANDLE v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  size_t v21; // r8
  unsigned int v22; // ecx
  int v23; // eax
  __int64 LowPart; // r13
  LONG HighPart; // r15d
  NTSTATUS v26; // eax
  __int64 v27; // rax
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  LONG v30; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp-88h] BYREF
  __int64 FileInformation; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp-68h]
  void *Src; // [rsp+A0h] [rbp-60h]
  char ThreadInformation[16]; // [rsp+A8h] [rbp-58h] BYREF
  LONG v40; // [rsp+B8h] [rbp-48h]
  DWORD v41; // [rsp+C0h] [rbp-40h]
  _QWORD v42[4]; // [rsp+D8h] [rbp-28h] BYREF
  char FsInformation[20]; // [rsp+F8h] [rbp-8h] BYREF
  int v44; // [rsp+10Ch] [rbp+Ch]
  _QWORD v45[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD SystemInformation[16]; // [rsp+140h] [rbp+40h] BYREF

  LODWORD(Size) = a3;
  Src = a2;
  v30 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v45, 0, sizeof(v45));
  memset(v42, 0, sizeof(v42));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  FileHandle = 0LL;
  if ( !v7 )
    sub_1801050C4(a1 + 184, a1 + 200, a1 + 168);
  Length = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v11 = a3 + 72;
LABEL_10:
    Buffer = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
      return (unsigned int)-1073741801;
    InformationThread = sub_1800537C0(SourceString, ReturnLength, (__int64)&FileHandle);
    if ( InformationThread < 0 )
    {
      v16 = FileHandle;
    }
    else if ( a4 )
    {
      v16 = FileHandle;
      ByteOffset.QuadPart = 0LL;
      InformationThread = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( InformationThread >= 0 )
      {
        if ( (Buffer[17].LowPart & 2) == 0
          && BYTE4(Buffer[13].QuadPart) == MEMORY[0x7FFE026C]
          && BYTE5(Buffer[13].QuadPart) == MEMORY[0x7FFE0270]
          && Buffer[18].HighPart == 8 )
        {
          LowPart = Buffer[13].LowPart;
          HighPart = Buffer[17].HighPart;
          if ( (unsigned int)(LowPart - 1024) <= 0xFFFC00
            && HighPart
            && Buffer[15].QuadPart
            && Buffer[14].HighPart == *(_DWORD *)(a1 + 204) )
          {
            Buffer[15].QuadPart = 0LL;
            v26 = ZwWriteFile(v16, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, *(_DWORD *)(a1 + 208), &ByteOffset, 0LL);
            *(_DWORD *)(a1 + 392) = HighPart;
            InformationThread = v26;
            *(_DWORD *)(a1 + 336) = HighPart;
            *(_DWORD *)(a1 + 208) = LowPart;
            *(_QWORD *)(a1 + 352) = LowPart;
            *(_QWORD *)(a1 + 144) = v16;
            *(_QWORD *)(a1 + 360) = (unsigned int)(LowPart * HighPart);
LABEL_33:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
            return (unsigned int)InformationThread;
          }
        }
        InformationThread = -1073741811;
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
        v21 = (unsigned int)Size;
        v22 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v8 = (__int64)&v13[v22 + 32];
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
            v22 += (*(unsigned __int16 *)&v13[v22 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v22 < (unsigned int)v21 );
        }
        if ( *(_DWORD *)(v8 + 44) == 4 )
          v23 = *(_DWORD *)(v8 + 264);
        else
          v23 = *(_DWORD *)(v8 + 272);
        *(_DWORD *)(a1 + 16) = v23;
        memmove(&Buffer[9], v13, v21);
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
        Buffer[10].HighPart = v40;
        Buffer[10].LowPart = v41;
        Buffer[12].LowPart = v42[2] / (__int64)SystemInformation[1];
        Buffer[12].HighPart = v42[3] / (__int64)SystemInformation[1];
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
        Buffer[44].QuadPart = v45[0] - v45[4];
        Buffer[19].HighPart = v30;
        Buffer[20].QuadPart = 0LL;
        Buffer[21].QuadPart = 0LL;
        memmove(&Buffer[48], *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (char *)&Buffer[48] + *(unsigned __int16 *)(a1 + 152) + 2,
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        sub_180054098(&Buffer[22]);
        Buffer[45].QuadPart = MEMORY[0x7FFE0300];
        Buffer[46] = *(LARGE_INTEGER *)a1;
        Buffer[11] = *(LARGE_INTEGER *)(a1 + 8);
      }
      v16 = FileHandle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v16, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          LODWORD(Length) = ~(v44 - 1) & (Buffer[6].LowPart + v44 - 1);
          Buffer->LowPart = Length;
        }
      }
      Buffer->HighPart = Buffer[6].LowPart;
      sub_180053748(a1, Buffer, (unsigned int)Length);
      v17 = Buffer[6].LowPart;
      if ( (unsigned int)v17 < (unsigned int)Length && (unsigned int)v17 > 0x48 )
        memset((char *)Buffer + v17, 255, (unsigned int)(Length - v17));
      InformationThread = ZwWriteFile(v16, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
      if ( InformationThread >= 0 )
      {
        if ( (v18 = *(unsigned int *)(a1 + 320), !(_DWORD)v18)
          || (v19 = *(_DWORD *)(a1 + 324), (v19 & 0x20) == 0)
          || ((v19 & 0x2000) == 0 ? (v27 = v18 << 20) : (v27 = v18 << 10),
              FileInformation = v27,
              InformationThread = ZwSetInformationFile(
                                    v16,
                                    &IoStatusBlock,
                                    &FileInformation,
                                    8u,
                                    FileEndOfFileInformation),
              InformationThread >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v16;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)Length;
          *(_QWORD *)(a1 + 352) = (unsigned int)Length;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_DWORD *)(a1 + 456) = 0;
            *(_DWORD *)(a1 + 460) = 0;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v16 = 0LL;
        }
      }
    }
    if ( v16 )
      ZwClose(v16);
    goto LABEL_33;
  }
  InformationThread = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( InformationThread >= 0 )
  {
    InformationThread = ZwQueryInformationThread(
                          (HANDLE)0xFFFFFFFFFFFFFFFELL,
                          ThreadBasicInformation,
                          ThreadInformation,
                          0x30u,
                          0LL);
    if ( InformationThread >= 0 )
    {
      InformationThread = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, v42, 0x20u, 0LL);
      if ( InformationThread >= 0 )
      {
        InformationThread = ZwQuerySystemInformation(SystemTimeOfDayInformation, v45, 0x30u, 0LL);
        if ( InformationThread >= 0 )
        {
          InformationThread = EtwpGetCpuSpeed_0(&v30);
          if ( InformationThread >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 168) + *(unsigned __int16 *)(a1 + 152) + 388;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)InformationThread;
}
