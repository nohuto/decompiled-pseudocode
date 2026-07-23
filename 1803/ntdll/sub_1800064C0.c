/*
 * XREFs of sub_1800064C0 @ 0x1800064C0
 * Callers:
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 * Callees:
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     RtlQueryPerformanceCounter @ 0x180007F20 (RtlQueryPerformanceCounter.c)
 *     sub_180009274 @ 0x180009274 (sub_180009274.c)
 *     sub_1800092CC @ 0x1800092CC (sub_1800092CC.c)
 *     EtwpGetCpuSpeed_0 @ 0x180009478 (EtwpGetCpuSpeed_0.c)
 *     sub_1800096C4 @ 0x1800096C4 (sub_1800096C4.c)
 *     sub_180009C0C @ 0x180009C0C (sub_180009C0C.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x18009AB80 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x18009B3E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800064C0(__int64 a1, void *a2, unsigned int a3, char a4)
{
  bool v7; // zf
  __int64 v8; // r14
  const WCHAR *QuadPart; // rbx
  SIZE_T Length; // r15
  NTSTATUS InformationThread; // ebx
  int v12; // r13d
  LARGE_INTEGER *Heap; // rax
  LARGE_INTEGER *Buffer; // rsi
  LARGE_INTEGER *v15; // r12
  char *v16; // rbx
  LARGE_INTEGER v17; // rax
  struct _PEB *v18; // rdx
  char v19; // cl
  char v20; // al
  LONG v21; // eax
  __int64 v22; // rcx
  LARGE_INTEGER *v23; // rbx
  LARGE_INTEGER v24; // rax
  int v25; // eax
  HANDLE v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  size_t v30; // r9
  unsigned int v31; // edx
  char v32; // al
  char v33; // r10
  int v34; // eax
  int v35; // ecx
  __int64 LowPart; // r13
  LONG HighPart; // r15d
  NTSTATUS v38; // eax
  int ReturnLength; // [rsp+20h] [rbp-E0h]
  LONG v41; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned int Size; // [rsp+70h] [rbp-90h]
  int Size_4; // [rsp+74h] [rbp-8Ch]
  void *Src; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER ByteOffset; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-78h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 FileInformation; // [rsp+A0h] [rbp-60h] BYREF
  char ThreadInformation[16]; // [rsp+A8h] [rbp-58h] BYREF
  LONG v52; // [rsp+B8h] [rbp-48h]
  DWORD v53; // [rsp+C0h] [rbp-40h]
  _QWORD v54[5]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD SystemInformation[16]; // [rsp+100h] [rbp+0h] BYREF
  char FsInformation[20]; // [rsp+140h] [rbp+40h] BYREF
  int v57; // [rsp+154h] [rbp+54h]
  _QWORD v58[6]; // [rsp+158h] [rbp+58h] BYREF

  Size = a3;
  Src = a2;
  v41 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v58, 0, sizeof(v58));
  memset(v54, 0, 0x20uLL);
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  FileHandle = 0LL;
  if ( !v7 )
    sub_180004530((const wchar_t **)(a1 + 184), (volatile signed __int32 *)(a1 + 200), (_UNICODE_STRING *)(a1 + 168));
  QuadPart = *(const WCHAR **)(a1 + 176);
  Length = *(unsigned int *)(a1 + 208);
  v43.QuadPart = (LONGLONG)QuadPart;
  Size_4 = Length;
  if ( a2 )
  {
    v12 = a3 + 72;
LABEL_10:
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    Buffer = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v15 = Heap + 9;
    InformationThread = sub_1800092CC(QuadPart, ReturnLength, (__int64)&FileHandle);
    if ( InformationThread < 0 )
    {
      v26 = FileHandle;
    }
    else if ( a4 )
    {
      v26 = FileHandle;
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
          if ( (unsigned int)(LowPart - 1024) <= 0xFFFC00 )
          {
            HighPart = Buffer[17].HighPart;
            if ( HighPart )
            {
              if ( Buffer[15].QuadPart && Buffer[14].HighPart == *(_DWORD *)(a1 + 204) )
              {
                Buffer[15].QuadPart = 0LL;
                v38 = ZwWriteFile(v26, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, *(_DWORD *)(a1 + 208), &ByteOffset, 0LL);
                *(_DWORD *)(a1 + 392) = HighPart;
                InformationThread = v38;
                *(_DWORD *)(a1 + 336) = HighPart;
                *(_DWORD *)(a1 + 208) = LowPart;
                *(_QWORD *)(a1 + 352) = LowPart;
                *(_QWORD *)(a1 + 144) = v26;
                *(_QWORD *)(a1 + 360) = (unsigned int)(LowPart * HighPart);
LABEL_39:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
                return (unsigned int)InformationThread;
              }
            }
          }
        }
        InformationThread = -1073741811;
      }
    }
    else
    {
      v16 = (char *)Src;
      Buffer->LowPart = Length;
      Buffer[6].HighPart = 262145;
      Buffer[6].LowPart = (v12 + 7) & 0xFFFFFFF8;
      if ( v16 )
      {
        v30 = Size;
        v31 = 0;
        if ( Size )
        {
          do
          {
            v8 = (__int64)&v16[v31 + 32];
            *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 324) & 0x4101000 | 0x10001;
            *(_DWORD *)(v8 + 36) = 1;
            *(_DWORD *)v8 = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *(_DWORD *)(v8 + 12) > 0x100u )
            {
              v32 = 0;
              v33 = 2;
            }
            else
            {
              v32 = 5;
              v33 = 1;
            }
            *(_BYTE *)(v8 + 6) = v33;
            *(_BYTE *)(v8 + 7) = v32;
            v31 += (*(unsigned __int16 *)&v16[v31 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v31 < (unsigned int)v30 );
          LODWORD(Length) = Size_4;
          v15 = Buffer + 9;
        }
        if ( *(_DWORD *)(v8 + 44) == 4 )
          v34 = *(_DWORD *)(v8 + 264);
        else
          v34 = *(_DWORD *)(v8 + 272);
        *(_DWORD *)(a1 + 16) = v34;
        memmove(v15, v16, v30);
      }
      else
      {
        v15->LowPart = -1073610752;
        v15->HighPart = v12 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v17.QuadPart = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v17.QuadPart = __rdtsc();
        }
        else
        {
          PerformanceCounter.QuadPart = 0LL;
          RtlQueryPerformanceCounter(&PerformanceCounter);
          v17 = PerformanceCounter;
        }
        v15[2] = v17;
        v15[1].HighPart = v52;
        v15[1].LowPart = v53;
        v15[3].LowPart = v54[2] / (__int64)SystemInformation[1];
        v15[3].HighPart = v54[3] / (__int64)SystemInformation[1];
        v18 = NtCurrentPeb();
        BYTE4(Buffer[13].QuadPart) = v18->OSMajorVersion;
        BYTE5(Buffer[13].QuadPart) = v18->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          v19 = 0;
          v20 = 2;
        }
        else
        {
          v19 = 5;
          v20 = 1;
        }
        BYTE6(Buffer[13].QuadPart) = v20;
        HIBYTE(Buffer[13].QuadPart) = v19;
        Buffer[14].LowPart = v18->OSBuildNumber;
        Buffer[47].LowPart = *(_DWORD *)(a1 + 16);
        Buffer[14].HighPart = *(_DWORD *)(a1 + 204);
        Buffer[18].HighPart = 8;
        Buffer[18].LowPart = 1;
        Buffer[13].LowPart = Length;
        Buffer[17].HighPart = 1;
        Buffer[16].HighPart = *(_DWORD *)(a1 + 320);
        Buffer[17].LowPart = *(_DWORD *)(a1 + 324);
        Buffer[16].LowPart = SystemInformation[1];
        Buffer[44].QuadPart = v58[0] - v58[4];
        v21 = v41;
        Buffer[20].QuadPart = 0LL;
        Buffer[21].QuadPart = 0LL;
        Buffer[19].HighPart = v21;
        memmove(&Buffer[48], *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (char *)&Buffer[48] + *(unsigned __int16 *)(a1 + 152) + 2,
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        sub_180009C0C(&Buffer[22]);
        Buffer[45].QuadPart = MEMORY[0x7FFE0300];
        Buffer[46] = *(LARGE_INTEGER *)a1;
        v15[2] = *(LARGE_INTEGER *)(a1 + 8);
        v22 = Buffer[6].LowPart;
        if ( (unsigned int)(v22 + 80) <= Buffer->LowPart )
        {
          v23 = (LARGE_INTEGER *)((char *)Buffer + v22);
          v23->HighPart = 5242960;
          v23->LowPart = -1073610750;
          v23[1].LowPart = v53;
          v23[1].HighPart = v52;
          v23[3].LowPart = v54[2] / (__int64)SystemInformation[1];
          v23[3].HighPart = v54[3] / (__int64)SystemInformation[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v24.QuadPart = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v24.QuadPart = __rdtsc();
          }
          else
          {
            v43.QuadPart = 0LL;
            RtlQueryPerformanceCounter(&v43);
            v24 = v43;
          }
          v23[2] = v24;
          v23[4].LowPart = 0;
          v25 = sub_1800096C4(&v23[6], (char *)&v23[4].QuadPart + 4, &v23[5], &v23[8]);
          v16 = (char *)Src;
          if ( !v25 )
            Buffer[6].LowPart += 80;
        }
      }
      v26 = FileHandle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        Buffer[5].HighPart = 3;
        if ( ZwQueryVolumeInformationFile(v26, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation) >= 0 )
        {
          v35 = Buffer[6].LowPart + 80;
          if ( !v16 )
            v35 = Buffer[6].LowPart;
          LODWORD(Length) = ~(v57 - 1) & (v35 + v57 - 1);
          Buffer->LowPart = Length;
        }
      }
      Buffer->HighPart = Buffer[6].LowPart;
      sub_180009274(a1, Buffer, (unsigned int)Length);
      v27 = Buffer[6].LowPart;
      if ( (unsigned int)v27 < (unsigned int)Length && (unsigned int)v27 > 0x48 )
        memset((char *)Buffer + v27, 255, (unsigned int)(Length - v27));
      InformationThread = ZwWriteFile(v26, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
      if ( InformationThread >= 0 )
      {
        v28 = *(unsigned int *)(a1 + 320);
        if ( !(_DWORD)v28
          || (*(_DWORD *)(a1 + 324) & 0x20) == 0
          || (FileInformation = v28
                              * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              InformationThread = ZwSetInformationFile(
                                    v26,
                                    &IoStatusBlock,
                                    &FileInformation,
                                    8u,
                                    FileEndOfFileInformation),
              InformationThread >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v26;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)Length;
          *(_QWORD *)(a1 + 352) = (unsigned int)Length;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v26 = 0LL;
        }
      }
    }
    if ( v26 )
      ZwClose(v26);
    goto LABEL_39;
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
      InformationThread = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadTimes, v54, 0x20u, 0LL);
      if ( InformationThread >= 0 )
      {
        InformationThread = ZwQuerySystemInformation(SystemTimeOfDayInformation, v58, 0x30u, 0LL);
        if ( InformationThread >= 0 )
        {
          InformationThread = EtwpGetCpuSpeed_0(&v41);
          if ( InformationThread >= 0 )
          {
            QuadPart = (const WCHAR *)v43.QuadPart;
            v12 = *(unsigned __int16 *)(a1 + 168) + *(unsigned __int16 *)(a1 + 152) + 388;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)InformationThread;
}
