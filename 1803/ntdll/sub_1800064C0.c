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
  const WCHAR *v9; // rbx
  __int64 v10; // r15
  int SystemInformation; // ebx
  int v12; // r13d
  __int64 Heap; // rax
  __int64 v14; // rsi
  _DWORD *v15; // r12
  char *v16; // rbx
  unsigned __int64 v17; // rax
  struct _PEB *v18; // rdx
  char v19; // cl
  char v20; // al
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  PCWSTR v24; // rax
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  size_t v30; // r9
  unsigned int v31; // edx
  char v32; // al
  char v33; // r10
  int v34; // eax
  int v35; // ecx
  __int64 v36; // r13
  int v37; // r15d
  int v38; // eax
  int v39; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR SourceString; // [rsp+68h] [rbp-98h] BYREF
  unsigned int Size; // [rsp+70h] [rbp-90h]
  int Size_4; // [rsp+74h] [rbp-8Ch]
  void *Src; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v49[16]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v51[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+C0h] [rbp-40h]
  _QWORD v54[5]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v55[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v56[20]; // [rsp+140h] [rbp+40h] BYREF
  int v57; // [rsp+154h] [rbp+54h]
  _QWORD v58[6]; // [rsp+158h] [rbp+58h] BYREF

  Size = a3;
  Src = a2;
  v41 = 0;
  memset(v55, 0, sizeof(v55));
  memset(v58, 0, sizeof(v58));
  memset(v54, 0, 0x20uLL);
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  v42 = 0LL;
  if ( !v7 )
    sub_180004530((const wchar_t **)(a1 + 184), (volatile signed __int32 *)(a1 + 200), (UNICODE_STRING *)(a1 + 168));
  v9 = *(const WCHAR **)(a1 + 176);
  v10 = *(unsigned int *)(a1 + 208);
  SourceString = v9;
  Size_4 = v10;
  if ( a2 )
  {
    v12 = a3 + 72;
LABEL_10:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v10);
    v14 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v15 = (_DWORD *)(Heap + 72);
    SystemInformation = sub_1800092CC(v9, v39, (__int64)&v42);
    if ( SystemInformation < 0 )
    {
      v26 = v42;
    }
    else if ( a4 )
    {
      v26 = v42;
      v47 = 0LL;
      SystemInformation = ZwReadFile(v42, 0LL, 0LL, 0LL, v49, v14, v10, &v47, 0LL);
      if ( SystemInformation >= 0 )
      {
        if ( (*(_BYTE *)(v14 + 136) & 2) == 0
          && *(_BYTE *)(v14 + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(v14 + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(v14 + 148) == 8 )
        {
          v36 = *(unsigned int *)(v14 + 104);
          if ( (unsigned int)(v36 - 1024) <= 0xFFFC00 )
          {
            v37 = *(_DWORD *)(v14 + 140);
            if ( v37 )
            {
              if ( *(_QWORD *)(v14 + 120) && *(_DWORD *)(v14 + 116) == *(_DWORD *)(a1 + 204) )
              {
                *(_QWORD *)(v14 + 120) = 0LL;
                v38 = ZwWriteFile(v26, 0LL, 0LL, 0LL, v49, v14, *(_DWORD *)(a1 + 208), &v47, 0LL);
                *(_DWORD *)(a1 + 392) = v37;
                SystemInformation = v38;
                *(_DWORD *)(a1 + 336) = v37;
                *(_DWORD *)(a1 + 208) = v36;
                *(_QWORD *)(a1 + 352) = v36;
                *(_QWORD *)(a1 + 144) = v26;
                *(_QWORD *)(a1 + 360) = (unsigned int)(v36 * v37);
LABEL_39:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v14);
                return (unsigned int)SystemInformation;
              }
            }
          }
        }
        SystemInformation = -1073741811;
      }
    }
    else
    {
      v16 = (char *)Src;
      *(_DWORD *)v14 = v10;
      *(_DWORD *)(v14 + 52) = 262145;
      *(_DWORD *)(v14 + 48) = (v12 + 7) & 0xFFFFFFF8;
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
          LODWORD(v10) = Size_4;
          v15 = (_DWORD *)(v14 + 72);
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
        *v15 = -1073610752;
        v15[1] = v12 - 72;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v17 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v17 = __rdtsc();
        }
        else
        {
          v48 = 0LL;
          RtlQueryPerformanceCounter(&v48);
          v17 = v48;
        }
        *((_QWORD *)v15 + 2) = v17;
        v15[3] = v52;
        v15[2] = v53;
        v15[6] = v54[2] / (__int64)v55[1];
        v15[7] = v54[3] / (__int64)v55[1];
        v18 = NtCurrentPeb();
        *(_BYTE *)(v14 + 108) = v18->OSMajorVersion;
        *(_BYTE *)(v14 + 109) = v18->OSMinorVersion;
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
        *(_BYTE *)(v14 + 110) = v20;
        *(_BYTE *)(v14 + 111) = v19;
        *(_DWORD *)(v14 + 112) = v18->OSBuildNumber;
        *(_DWORD *)(v14 + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(v14 + 116) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(v14 + 148) = 8;
        *(_DWORD *)(v14 + 144) = 1;
        *(_DWORD *)(v14 + 104) = v10;
        *(_DWORD *)(v14 + 140) = 1;
        *(_DWORD *)(v14 + 132) = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(v14 + 136) = *(_DWORD *)(a1 + 324);
        *(_DWORD *)(v14 + 128) = v55[1];
        *(_QWORD *)(v14 + 352) = v58[0] - v58[4];
        v21 = v41;
        *(_QWORD *)(v14 + 160) = 0LL;
        *(_QWORD *)(v14 + 168) = 0LL;
        *(_DWORD *)(v14 + 156) = v21;
        memmove((void *)(v14 + 384), *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (void *)(v14 + *(unsigned __int16 *)(a1 + 152) + 386LL),
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        sub_180009C0C((void *)(v14 + 176));
        *(_QWORD *)(v14 + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(v14 + 368) = *(_QWORD *)a1;
        *((_QWORD *)v15 + 2) = *(_QWORD *)(a1 + 8);
        v22 = *(unsigned int *)(v14 + 48);
        if ( (unsigned int)(v22 + 80) <= *(_DWORD *)v14 )
        {
          v23 = v14 + v22;
          *(_DWORD *)(v23 + 4) = 5242960;
          *(_DWORD *)v23 = -1073610750;
          *(_DWORD *)(v23 + 8) = v53;
          *(_DWORD *)(v23 + 12) = v52;
          *(_DWORD *)(v23 + 24) = v54[2] / (__int64)v55[1];
          *(_DWORD *)(v23 + 28) = v54[3] / (__int64)v55[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v24 = (PCWSTR)MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v24 = (PCWSTR)__rdtsc();
          }
          else
          {
            SourceString = 0LL;
            RtlQueryPerformanceCounter(&SourceString);
            v24 = SourceString;
          }
          *(_QWORD *)(v23 + 16) = v24;
          *(_DWORD *)(v23 + 32) = 0;
          v25 = sub_1800096C4(v23 + 48, v23 + 36, v23 + 40, v23 + 64);
          v16 = (char *)Src;
          if ( !v25 )
            *(_DWORD *)(v14 + 48) += 80;
        }
      }
      v26 = v42;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        *(_DWORD *)(v14 + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v26, v49, v56, 24LL, 3) >= 0 )
        {
          v35 = *(_DWORD *)(v14 + 48) + 80;
          if ( !v16 )
            v35 = *(_DWORD *)(v14 + 48);
          LODWORD(v10) = ~(v57 - 1) & (v35 + v57 - 1);
          *(_DWORD *)v14 = v10;
        }
      }
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(v14 + 48);
      sub_180009274(a1, v14, (unsigned int)v10);
      v27 = *(unsigned int *)(v14 + 48);
      if ( (unsigned int)v27 < (unsigned int)v10 && (unsigned int)v27 > 0x48 )
        memset((void *)(v14 + v27), 255, (unsigned int)(v10 - v27));
      SystemInformation = ZwWriteFile(v26, 0LL, 0LL, 0LL, v49, v14, v10, 0LL, 0LL);
      if ( SystemInformation >= 0 )
      {
        v28 = *(unsigned int *)(a1 + 320);
        if ( !(_DWORD)v28
          || (*(_DWORD *)(a1 + 324) & 0x20) == 0
          || (v50 = v28 * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              SystemInformation = ZwSetInformationFile(v26, v49, &v50, 8LL, 20),
              SystemInformation >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v26;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)v10;
          *(_QWORD *)(a1 + 352) = (unsigned int)v10;
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
  SystemInformation = ZwQuerySystemInformation(0LL, v55, 64LL);
  if ( SystemInformation >= 0 )
  {
    SystemInformation = ZwQueryInformationThread(-2LL, 0LL, v51, 48LL, 0LL);
    if ( SystemInformation >= 0 )
    {
      SystemInformation = ZwQueryInformationThread(-2LL, 1LL, v54, 32LL, 0LL);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = ZwQuerySystemInformation(3LL, v58, 48LL);
        if ( SystemInformation >= 0 )
        {
          SystemInformation = EtwpGetCpuSpeed_0(&v41);
          if ( SystemInformation >= 0 )
          {
            v9 = SourceString;
            v12 = *(unsigned __int16 *)(a1 + 168) + *(unsigned __int16 *)(a1 + 152) + 388;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)SystemInformation;
}
