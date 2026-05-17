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
  __int64 v9; // r15
  NTSTATUS File; // ebx
  int v11; // r13d
  unsigned __int64 Heap; // rsi
  __int64 v13; // rdx
  char *v14; // rbx
  unsigned __int64 v15; // rax
  struct _PEB *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int PartitionRegistryInformationUm; // eax
  HANDLE v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  size_t v27; // r8
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // r13
  int v32; // r15d
  NTSTATUS v33; // eax
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  void *Src; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[16]; // [rsp+98h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp-58h]
  _BYTE v47[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  _QWORD v50[4]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD SystemInformation[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v52[20]; // [rsp+140h] [rbp+40h] BYREF
  int v53; // [rsp+154h] [rbp+54h]
  _QWORD v54[6]; // [rsp+158h] [rbp+58h] BYREF

  LODWORD(Size) = a3;
  Src = a2;
  v37 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v54, 0, sizeof(v54));
  memset(v50, 0, sizeof(v50));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  Handle = 0LL;
  if ( !v7 )
    EtwpGenerateFileName(a1 + 184, a1 + 200, a1 + 168);
  v9 = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v11 = a3 + 72;
LABEL_10:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
    if ( !Heap )
      return (unsigned int)-1073741801;
    File = EtwpCreateFile(SourceString, v35, (__int64)&Handle);
    if ( File < 0 )
    {
      v22 = Handle;
    }
    else if ( a4 )
    {
      v22 = Handle;
      v41 = 0LL;
      File = NtReadFile(Handle, 0LL, 0LL, 0LL, v45, Heap, v9, &v41, 0LL);
      if ( File >= 0 )
      {
        if ( (*(_BYTE *)(Heap + 136) & 2) == 0
          && *(_BYTE *)(Heap + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(Heap + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(Heap + 148) == 8 )
        {
          v31 = *(unsigned int *)(Heap + 104);
          if ( (unsigned int)(v31 - 1024) <= 0xFFFC00 )
          {
            v32 = *(_DWORD *)(Heap + 140);
            if ( v32 )
            {
              if ( *(_QWORD *)(Heap + 120) && *(_DWORD *)(Heap + 116) == *(_DWORD *)(a1 + 204) )
              {
                *(_QWORD *)(Heap + 120) = 0LL;
                v33 = NtWriteFile(v22, 0LL, 0LL, 0LL, v45, Heap, *(_DWORD *)(a1 + 208), &v41, 0LL);
                *(_DWORD *)(a1 + 392) = v32;
                File = v33;
                *(_DWORD *)(a1 + 336) = v32;
                *(_DWORD *)(a1 + 208) = v31;
                *(_QWORD *)(a1 + 352) = v31;
                *(_QWORD *)(a1 + 144) = v22;
                *(_QWORD *)(a1 + 360) = (unsigned int)(v31 * v32);
LABEL_39:
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
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
      v14 = (char *)Src;
      *(_DWORD *)Heap = v9;
      *(_DWORD *)(Heap + 52) = 262145;
      *(_DWORD *)(Heap + 48) = (v11 + 7) & 0xFFFFFFF8;
      if ( v14 )
      {
        v27 = (unsigned int)Size;
        v28 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v8 = (__int64)&v14[v28 + 32];
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
            v28 += (*(unsigned __int16 *)&v14[v28 + 4] + 7) & 0xFFFFFFF8;
          }
          while ( v28 < (unsigned int)v27 );
        }
        if ( *(_DWORD *)(v8 + 44) == 4 )
          v29 = *(_DWORD *)(v8 + 264);
        else
          v29 = *(_DWORD *)(v8 + 272);
        *(_DWORD *)(a1 + 16) = v29;
        memmove((void *)(Heap + 72), v14, v27);
      }
      else
      {
        *(_DWORD *)(Heap + 72) = -1073610752;
        *(_DWORD *)(Heap + 76) = v11 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v15 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v15 = __rdtsc();
        }
        else
        {
          v42 = 0LL;
          RtlQueryPerformanceCounter(&v42, v13);
          v15 = v42;
        }
        *(_QWORD *)(Heap + 88) = v15;
        *(_DWORD *)(Heap + 84) = v48;
        *(_DWORD *)(Heap + 80) = v49;
        *(_DWORD *)(Heap + 96) = v50[2] / (__int64)SystemInformation[1];
        *(_DWORD *)(Heap + 100) = v50[3] / (__int64)SystemInformation[1];
        v16 = NtCurrentPeb();
        *(_BYTE *)(Heap + 108) = v16->OSMajorVersion;
        *(_BYTE *)(Heap + 109) = v16->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          *(_WORD *)(Heap + 110) = 2;
        }
        else
        {
          *(_WORD *)(Heap + 110) = 1281;
        }
        *(_DWORD *)(Heap + 112) = v16->OSBuildNumber;
        *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(Heap + 148) = 8;
        *(_DWORD *)(Heap + 144) = 1;
        *(_DWORD *)(Heap + 104) = v9;
        *(_DWORD *)(Heap + 140) = 1;
        *(_DWORD *)(Heap + 132) = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(Heap + 136) = *(_DWORD *)(a1 + 324);
        *(_DWORD *)(Heap + 128) = SystemInformation[1];
        *(_QWORD *)(Heap + 352) = v54[0] - v54[4];
        *(_DWORD *)(Heap + 156) = v37;
        *(_QWORD *)(Heap + 160) = 0LL;
        *(_QWORD *)(Heap + 168) = 0LL;
        memmove((void *)(Heap + 384), *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (void *)(Heap + *(unsigned __int16 *)(a1 + 152) + 386LL),
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        EtwpGetTimeZoneInformation((void *)(Heap + 176));
        *(_QWORD *)(Heap + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(Heap + 368) = *(_QWORD *)a1;
        *(_QWORD *)(Heap + 88) = *(_QWORD *)(a1 + 8);
        v17 = *(unsigned int *)(Heap + 48);
        if ( (unsigned int)(v17 + 80) <= *(_DWORD *)Heap )
        {
          v18 = Heap + v17;
          *(_DWORD *)(v18 + 4) = 5242960;
          *(_DWORD *)v18 = -1073610750;
          *(_DWORD *)(v18 + 8) = v49;
          *(_DWORD *)(v18 + 12) = v48;
          *(_DWORD *)(v18 + 24) = v50[2] / (__int64)SystemInformation[1];
          v19 = v50[3] % (__int64)SystemInformation[1];
          *(_DWORD *)(v18 + 28) = v50[3] / (__int64)SystemInformation[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v20 = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v20 = __rdtsc();
          }
          else
          {
            v43 = 0LL;
            RtlQueryPerformanceCounter(&v43, v19);
            v20 = v43;
          }
          *(_QWORD *)(v18 + 16) = v20;
          *(_DWORD *)(v18 + 32) = 0;
          PartitionRegistryInformationUm = EtwpQueryPartitionRegistryInformationUm(
                                             v18 + 48,
                                             v18 + 36,
                                             v18 + 40,
                                             v18 + 64);
          v14 = (char *)Src;
          if ( !PartitionRegistryInformationUm )
            *(_DWORD *)(Heap + 48) += 80;
        }
      }
      v22 = Handle;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        *(_DWORD *)(Heap + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v22, v45, v52, 24LL, 3) >= 0 )
        {
          v30 = *(_DWORD *)(Heap + 48);
          if ( v14 )
            v30 += 80;
          LODWORD(v9) = ~(v53 - 1) & (v30 + v53 - 1);
          *(_DWORD *)Heap = v9;
        }
      }
      *(_DWORD *)(Heap + 4) = *(_DWORD *)(Heap + 48);
      EtwpAddProviderTrackingInfo(a1, Heap, (unsigned int)v9);
      v23 = *(unsigned int *)(Heap + 48);
      if ( (unsigned int)v23 < (unsigned int)v9 && (unsigned int)v23 > 0x48 )
        memset((void *)(Heap + v23), 255, (unsigned int)(v9 - v23));
      File = NtWriteFile(v22, 0LL, 0LL, 0LL, v45, Heap, v9, 0LL, 0LL);
      if ( File >= 0 )
      {
        if ( (v24 = *(unsigned int *)(a1 + 320), !(_DWORD)v24)
          || (v25 = *(_DWORD *)(a1 + 324), (v25 & 0x20) == 0)
          || ((v25 & 0x2000) == 0 ? (v34 = v24 << 20) : (v34 = v24 << 10),
              v44 = v34,
              File = ZwSetInformationFile(v22, v45, &v44, 8LL, 20),
              File >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v22;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)v9;
          *(_QWORD *)(a1 + 352) = (unsigned int)v9;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v22 = 0LL;
        }
      }
    }
    if ( v22 )
      NtClose(v22);
    goto LABEL_39;
  }
  File = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( File >= 0 )
  {
    File = ZwQueryInformationThread(-2LL, 0LL, v47);
    if ( File >= 0 )
    {
      v35 = 0;
      File = ZwQueryInformationThread(-2LL, 1LL, v50);
      if ( File >= 0 )
      {
        File = NtQuerySystemInformation(SystemTimeOfDayInformation, v54, 0x30u, 0LL);
        if ( File >= 0 )
        {
          File = EtwpGetCpuSpeedFromRegistry(&v37);
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
