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
  __int64 v9; // r15
  int SystemInformation; // ebx
  int v11; // r13d
  unsigned __int64 Heap; // rsi
  char *v13; // r9
  unsigned __int64 v14; // rax
  struct _PEB *v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  size_t v21; // r8
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // r13
  int v25; // r15d
  int v26; // eax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-E0h]
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[16]; // [rsp+88h] [rbp-78h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp-68h]
  void *Src; // [rsp+A0h] [rbp-60h]
  _BYTE v39[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+C0h] [rbp-40h]
  _QWORD v42[4]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v43[20]; // [rsp+F8h] [rbp-8h] BYREF
  int v44; // [rsp+10Ch] [rbp+Ch]
  _QWORD v45[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v46[16]; // [rsp+140h] [rbp+40h] BYREF

  LODWORD(Size) = a3;
  Src = a2;
  v30 = 0;
  memset(v46, 0, sizeof(v46));
  memset(v45, 0, sizeof(v45));
  memset(v42, 0, sizeof(v42));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  v31 = 0LL;
  if ( !v7 )
    sub_1801050C4(a1 + 184, a1 + 200, a1 + 168);
  v9 = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v11 = a3 + 72;
LABEL_10:
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
    if ( !Heap )
      return (unsigned int)-1073741801;
    SystemInformation = sub_1800537C0(SourceString, v28, (__int64)&v31);
    if ( SystemInformation < 0 )
    {
      v16 = v31;
    }
    else if ( a4 )
    {
      v16 = v31;
      v33 = 0LL;
      SystemInformation = ZwReadFile(v31, 0LL, 0LL, 0LL, v36, Heap, v9, &v33, 0LL);
      if ( SystemInformation >= 0 )
      {
        if ( (*(_BYTE *)(Heap + 136) & 2) == 0
          && *(_BYTE *)(Heap + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(Heap + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(Heap + 148) == 8 )
        {
          v24 = *(unsigned int *)(Heap + 104);
          v25 = *(_DWORD *)(Heap + 140);
          if ( (unsigned int)(v24 - 1024) <= 0xFFFC00
            && v25
            && *(_QWORD *)(Heap + 120)
            && *(_DWORD *)(Heap + 116) == *(_DWORD *)(a1 + 204) )
          {
            *(_QWORD *)(Heap + 120) = 0LL;
            v26 = ZwWriteFile(v16, 0LL, 0LL, 0LL, v36, Heap, *(_DWORD *)(a1 + 208), &v33, 0LL);
            *(_DWORD *)(a1 + 392) = v25;
            SystemInformation = v26;
            *(_DWORD *)(a1 + 336) = v25;
            *(_DWORD *)(a1 + 208) = v24;
            *(_QWORD *)(a1 + 352) = v24;
            *(_QWORD *)(a1 + 144) = v16;
            *(_QWORD *)(a1 + 360) = (unsigned int)(v24 * v25);
LABEL_33:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
            return (unsigned int)SystemInformation;
          }
        }
        SystemInformation = -1073741811;
      }
    }
    else
    {
      v13 = (char *)Src;
      *(_DWORD *)Heap = v9;
      *(_DWORD *)(Heap + 52) = 262145;
      *(_DWORD *)(Heap + 48) = (v11 + 7) & 0xFFFFFFF8;
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
        memmove((void *)(Heap + 72), v13, v21);
      }
      else
      {
        *(_DWORD *)(Heap + 72) = -1073610752;
        *(_DWORD *)(Heap + 76) = v11 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v14 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v14 = __rdtsc();
        }
        else
        {
          v34 = 0LL;
          RtlQueryPerformanceCounter(&v34);
          v14 = v34;
        }
        *(_QWORD *)(Heap + 88) = v14;
        *(_DWORD *)(Heap + 84) = v40;
        *(_DWORD *)(Heap + 80) = v41;
        *(_DWORD *)(Heap + 96) = v42[2] / (__int64)v46[1];
        *(_DWORD *)(Heap + 100) = v42[3] / (__int64)v46[1];
        v15 = NtCurrentPeb();
        *(_BYTE *)(Heap + 108) = v15->OSMajorVersion;
        *(_BYTE *)(Heap + 109) = v15->OSMinorVersion;
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
        *(_DWORD *)(Heap + 112) = v15->OSBuildNumber;
        *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(Heap + 148) = 8;
        *(_DWORD *)(Heap + 144) = 1;
        *(_DWORD *)(Heap + 104) = v9;
        *(_DWORD *)(Heap + 140) = 1;
        *(_DWORD *)(Heap + 132) = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(Heap + 136) = *(_DWORD *)(a1 + 324);
        *(_DWORD *)(Heap + 128) = v46[1];
        *(_QWORD *)(Heap + 352) = v45[0] - v45[4];
        *(_DWORD *)(Heap + 156) = v30;
        *(_QWORD *)(Heap + 160) = 0LL;
        *(_QWORD *)(Heap + 168) = 0LL;
        memmove((void *)(Heap + 384), *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (void *)(Heap + *(unsigned __int16 *)(a1 + 152) + 386LL),
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        sub_180054098((void *)(Heap + 176));
        *(_QWORD *)(Heap + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(Heap + 368) = *(_QWORD *)a1;
        *(_QWORD *)(Heap + 88) = *(_QWORD *)(a1 + 8);
      }
      v16 = v31;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        *(_DWORD *)(Heap + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v16, v36, v43, 24LL, 3) >= 0 )
        {
          LODWORD(v9) = ~(v44 - 1) & (*(_DWORD *)(Heap + 48) + v44 - 1);
          *(_DWORD *)Heap = v9;
        }
      }
      *(_DWORD *)(Heap + 4) = *(_DWORD *)(Heap + 48);
      sub_180053748(a1, Heap, (unsigned int)v9);
      v17 = *(unsigned int *)(Heap + 48);
      if ( (unsigned int)v17 < (unsigned int)v9 && (unsigned int)v17 > 0x48 )
        memset((void *)(Heap + v17), 255, (unsigned int)(v9 - v17));
      SystemInformation = ZwWriteFile(v16, 0LL, 0LL, 0LL, v36, Heap, v9, 0LL, 0LL);
      if ( SystemInformation >= 0 )
      {
        if ( (v18 = *(unsigned int *)(a1 + 320), !(_DWORD)v18)
          || (v19 = *(_DWORD *)(a1 + 324), (v19 & 0x20) == 0)
          || ((v19 & 0x2000) == 0 ? (v27 = v18 << 20) : (v27 = v18 << 10),
              v35 = v27,
              SystemInformation = ZwSetInformationFile(v16, v36, &v35, 8LL, 20),
              SystemInformation >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v16;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)v9;
          *(_QWORD *)(a1 + 352) = (unsigned int)v9;
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
  SystemInformation = ZwQuerySystemInformation(0LL, v46, 64LL, 0LL);
  if ( SystemInformation >= 0 )
  {
    SystemInformation = ZwQueryInformationThread(-2LL, 0LL, v39, 48LL, 0LL);
    if ( SystemInformation >= 0 )
    {
      SystemInformation = ZwQueryInformationThread(-2LL, 1LL, v42, 32LL, 0LL);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = ZwQuerySystemInformation(3LL, v45, 48LL, 0LL);
        if ( SystemInformation >= 0 )
        {
          SystemInformation = EtwpGetCpuSpeed_0(&v30);
          if ( SystemInformation >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 168) + *(unsigned __int16 *)(a1 + 152) + 388;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)SystemInformation;
}
