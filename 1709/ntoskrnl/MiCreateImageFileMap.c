/*
 * XREFs of MiCreateImageFileMap @ 0x1404F8B90
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     MiPageRead @ 0x1400258EC (MiPageRead.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiCreateMdl @ 0x1400B5D3C (MiCreateMdl.c)
 *     MiCopyHeaderIfResident @ 0x1400B6F80 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x1400B71B4 (MiFlushDataSection.c)
 *     MiReturnPfnReferenceCount @ 0x1400B7758 (MiReturnPfnReferenceCount.c)
 *     IoIsDeviceEjectable @ 0x1400B7948 (IoIsDeviceEjectable.c)
 *     MiLegacyImageArchitecture @ 0x1400B7968 (MiLegacyImageArchitecture.c)
 *     MiInitializeImageHeaderPage @ 0x1400B7A00 (MiInitializeImageHeaderPage.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     MiInitializeImageProtos @ 0x1400ECF10 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400EE050 (MiGetPageForHeader.c)
 *     PsIsCurrentThreadPrefetching @ 0x140115110 (PsIsCurrentThreadPrefetching.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     MiBuildImageControlArea @ 0x1404FA468 (MiBuildImageControlArea.c)
 *     MiVerifyImageHeader @ 0x1404FB054 (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x1406E1280 (MiLogCreateImageFileMapFailure.c)
 *     MiCopyDirectMapHeader @ 0x1406E40C0 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x1406E430C (MiInitializeImageExtents.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        ULONG_PTR *a2,
        int a3,
        unsigned int a4,
        unsigned int **a5,
        __int64 *a6,
        _DWORD *a7,
        PVOID *a8)
{
  NTSTATUS result; // eax
  __int64 v13; // r14
  struct _MDL *p_MemoryDescriptorList; // rsi
  __int64 PageForHeader; // rax
  __int64 v16; // rdi
  char *StartVa; // r13
  int LowPart; // esi
  unsigned __int64 v19; // r9
  LARGE_INTEGER v20; // rdi
  unsigned __int64 v21; // rax
  struct _MDL *v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // r13
  unsigned __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // r12
  char *v29; // r8
  unsigned __int64 v30; // r9
  char *v31; // rdi
  _DWORD *v32; // r11
  PVOID *v33; // rcx
  BOOL v34; // eax
  unsigned int v35; // r9d
  _DWORD *v36; // r11
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // r10d
  int v40; // edx
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  int v43; // r12d
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  char *v46; // r12
  SIZE_T v47; // rdi
  SIZE_T v48; // rcx
  int v49; // esi
  __int64 v50; // rax
  int v51; // eax
  char v52; // r12
  __int64 v53; // r8
  unsigned int v54; // eax
  unsigned __int16 v55; // si
  __int64 v56; // r9
  __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  volatile signed __int64 *v59; // rsi
  int v60; // ecx
  _DWORD *v61; // rdi
  __int64 DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int16 v64; // dx
  unsigned int v65; // r8d
  PFILE_OBJECT v66; // rax
  int v67; // ebx
  unsigned __int64 i; // rdi
  __int64 v69; // rbx
  unsigned int *v70; // [rsp+40h] [rbp-C0h]
  __int64 v71; // [rsp+48h] [rbp-B8h]
  char v72; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v73; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v74; // [rsp+60h] [rbp-A0h]
  _DWORD *v75; // [rsp+68h] [rbp-98h]
  char *v76; // [rsp+70h] [rbp-90h]
  unsigned __int64 v77; // [rsp+78h] [rbp-88h]
  PFILE_OBJECT v78; // [rsp+80h] [rbp-80h]
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  int v81; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v83; // [rsp+A8h] [rbp-58h] BYREF
  int v84; // [rsp+B8h] [rbp-48h]
  ULONG_PTR *v85; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v86; // [rsp+C8h] [rbp-38h]
  PVOID FsContext; // [rsp+D0h] [rbp-30h] BYREF
  int v88; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v89; // [rsp+DCh] [rbp-24h]
  __int16 v90; // [rsp+DEh] [rbp-22h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-20h] BYREF
  char *v92; // [rsp+F8h] [rbp-8h]
  unsigned int **v93; // [rsp+100h] [rbp+0h]
  __int64 *v94; // [rsp+108h] [rbp+8h]
  PVOID *p_FsContext; // [rsp+110h] [rbp+10h] BYREF
  int v96; // [rsp+118h] [rbp+18h]
  int v97; // [rsp+11Ch] [rbp+1Ch]
  struct _MDL MemoryDescriptorList; // [rsp+120h] [rbp+20h] BYREF
  __int64 v99; // [rsp+150h] [rbp+50h]
  PMDL Mdl; // [rsp+158h] [rbp+58h]
  struct _MDL *v101; // [rsp+160h] [rbp+60h]
  struct _MDL *v102; // [rsp+168h] [rbp+68h]

  v93 = a5;
  v94 = a6;
  v75 = a7;
  p_FsContext = a8;
  v85 = a2;
  Mdl = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v81 = a3;
  v78 = FileObject;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_1403882F8 = 1;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
    return -1073741792;
  v13 = 0LL;
  v77 = 1LL;
  v80 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.Next = 0LL;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  PageForHeader = MiGetPageForHeader(a2, a3);
  v86 = PageForHeader;
  v16 = PageForHeader;
  if ( PageForHeader == -1 )
    return -1073741670;
  v99 = PageForHeader;
  StartVa = 0LL;
  v71 = 48 * PageForHeader - 0x58000000000LL;
  v76 = 0LL;
  CcZeroEndOfLastPage(FileObject);
  if ( (unsigned int)MiFlushDataSection((__int64)FileObject) )
    a4 |= 0x40000u;
  if ( (a4 & 0x40080) == 0 || !PsIsCurrentThreadPrefetching() )
  {
    v19 = 0LL;
    v74 = 0LL;
    if ( (a4 & 0x10000) != 0 )
    {
      if ( (unsigned int)MiCopyDirectMapHeader(FileObject, v16) == 1 )
      {
        v19 = 4096LL;
        v74 = 4096LL;
      }
      else
      {
        v19 = v74;
        a4 &= ~0x10000u;
      }
    }
    v20 = FileSize;
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v86) == 1 )
      {
        v19 = 4096LL;
        v74 = 4096LL;
      }
      else if ( ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && v20.LowPart <= 0x20000)
             && !FileObject->SectionObjectPointer->DataSectionObject
             && (v21 = ((unsigned __int64)v20.LowPart + 4095) >> 12, v77 = v21, v21 > 1) )
      {
        v22 = MiCreateMdl(v21 << 12);
        v19 = v74;
        Mdl = v22;
        if ( v22 )
        {
          StartVa = (char *)v22->StartVa;
          p_MemoryDescriptorList = v22;
          v76 = StartVa;
        }
        else
        {
          v77 = 1LL;
        }
      }
      else
      {
        v19 = v74;
      }
    }
    if ( (p_MemoryDescriptorList->MdlFlags & 2) != 0 )
    {
      v76 = (char *)MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      StartVa = v76;
      if ( !v76 )
      {
        dword_1403882F8 = 37;
        LowPart = -1073741670;
LABEL_155:
        StartVa = 0LL;
        goto LABEL_156;
      }
      v19 = v74;
      Mdl = p_MemoryDescriptorList;
    }
    if ( !v19 )
    {
      v79 = 0LL;
      LowPart = MiPageRead((int)FileObject, (int)p_MemoryDescriptorList, (int)&v79, (int)&Event, (__int64)&v73, 0, 0LL);
      if ( LowPart == 259 )
      {
        KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
        LowPart = v73.LowPart;
      }
      if ( LowPart < 0 )
      {
        dword_1403882F8 = 2;
        goto LABEL_39;
      }
      v24 = v77;
      v19 = v74;
      if ( v74 == v77 << 12 )
      {
LABEL_47:
        if ( *(_WORD *)StartVa != 23117 )
        {
          LowPart = -1073741521;
          goto LABEL_155;
        }
        v25 = *((unsigned int *)StartVa + 15);
        if ( (int)v25 + 264 < (unsigned int)v25 )
        {
          LowPart = -1073741520;
          dword_1403882F8 = 6;
          goto LABEL_155;
        }
        v26 = v25 + 264;
        if ( (unsigned __int64)(v25 + 264) > v20.QuadPart )
        {
          LowPart = -1073741520;
          dword_1403882F8 = 5;
          goto LABEL_155;
        }
        if ( v26 <= v24 << 12 )
        {
          if ( v26 > v19 )
          {
            LowPart = -1073741520;
            dword_1403882F8 = 39;
            goto LABEL_155;
          }
          v29 = v76;
          v30 = v19 - v25;
          v31 = &v76[v25];
        }
        else
        {
          v101 = MiCreateMdl(0x2000uLL);
          v27 = (int)v101;
          if ( !v101 )
          {
            LowPart = -1073741670;
            dword_1403882F8 = 7;
            goto LABEL_155;
          }
          v79 = (unsigned int)v25 & 0xFFFFF000;
          KeResetEvent(&Event);
          v74 = 0LL;
          LowPart = MiPageRead((int)v78, v27, (int)&v79, (int)&Event, (__int64)&v73, 0, 0LL);
          if ( LowPart == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            LowPart = v73.LowPart;
          }
          if ( LowPart < 0 )
          {
            dword_1403882F8 = 8;
            goto LABEL_39;
          }
          if ( v74 != 0x2000 && v74 < (unsigned __int64)(v25 & 0xFFF) + 264 )
          {
            LowPart = -1073741520;
            dword_1403882F8 = 24;
            goto LABEL_155;
          }
          v28 = v25 & 0xFFF;
          v29 = v76;
          v30 = v74 - v28;
          v92 = (char *)v101->StartVa + v28;
          v74 += (unsigned int)v25 & 0xFFFFF000;
          v31 = v92;
        }
        LowPart = MiVerifyImageHeader(v75, v31, v29, v30);
        if ( LowPart )
        {
          dword_1403882F8 = 9;
          goto LABEL_155;
        }
        v32 = v75;
        if ( v75[6] >= v75[4] )
        {
          dword_1403882F8 = 16;
LABEL_154:
          LowPart = -1073741701;
          goto LABEL_155;
        }
        v33 = p_FsContext;
        *(_DWORD *)p_FsContext = v25 + 48;
        if ( *((_WORD *)v32 + 24) == 267 )
          *(_DWORD *)v33 = v25 + 52;
        if ( !((v32[4] >> 12) + ((v32[4] & 0xFFF) != 0)) )
        {
          dword_1403882F8 = 10;
          goto LABEL_154;
        }
        v84 = *((_DWORD *)v31 + 5);
        v83 = *(_OWORD *)(v31 + 4);
        if ( (v84 & 7) != 0 )
        {
          dword_1403882F8 = 14;
          goto LABEL_154;
        }
        if ( (unsigned __int16)*v32 )
        {
          dword_1403882F8 = 15;
          goto LABEL_154;
        }
        v34 = MiLegacyImageArchitecture(v83);
        v38 = HIWORD(v37);
        v39 = v34;
        LODWORD(v76) = v34;
        if ( v34 )
        {
          if ( (v38 & 1) != 0 && (v36[15] & 0x1000) != 0 )
            goto LABEL_82;
        }
        else
        {
          if ( (v38 & 1) != 0 )
          {
LABEL_82:
            dword_1403882F8 = 23;
            goto LABEL_154;
          }
          if ( (v36[15] & 0x140) != 0x140 )
          {
            dword_1403882F8 = 44;
            goto LABEL_154;
          }
        }
        v40 = (unsigned __int16)v84 + 24;
        if ( (unsigned int)v25 + v40 + 40 * WORD1(v83) <= (unsigned int)v25 )
        {
          dword_1403882F8 = 52;
          goto LABEL_154;
        }
        v41 = (unsigned int)(v40 + v25);
        v42 = (unsigned int)v36[6];
        v43 = v41;
        v44 = 40LL * WORD1(v83);
        v45 = v44 + v41;
        if ( v42 < v44 + v41 )
          LODWORD(v42) = v44 + v41;
        if ( (unsigned int)v42 > v35 )
        {
          dword_1403882F8 = 48;
          goto LABEL_154;
        }
        if ( v45 > v74 )
        {
          v47 = v44 + ((v40 + (int)v31) & 0xFFFLL);
          if ( v47 - 1 > 0xFFFFFFFE || (v48 = (v47 + 4095) & 0xFFFFFFFFFFFFF000uLL, v47 > v48) )
          {
            dword_1403882F8 = 53;
            goto LABEL_154;
          }
          v102 = MiCreateMdl(v48);
          v49 = (int)v102;
          if ( !v102 )
          {
            LowPart = -1073741670;
            dword_1403882F8 = 18;
            goto LABEL_155;
          }
          v50 = v43 & 0xFFFFF000;
          v46 = (char *)v102->StartVa + (v43 & 0xFFF);
          v79 = v50;
          KeResetEvent(&Event);
          v74 = 0LL;
          LowPart = MiPageRead((int)v78, v49, (int)&v79, (int)&Event, (__int64)&v73, 0, 0LL);
          if ( LowPart == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            LowPart = v73.LowPart;
          }
          if ( LowPart < 0 )
          {
            dword_1403882F8 = 19;
LABEL_39:
            if ( LowPart != -1073741740 )
            {
              v23 = v71;
              StartVa = 0LL;
              if ( LowPart != -1073741209 )
                LowPart = -1073741792;
              goto LABEL_157;
            }
            goto LABEL_155;
          }
          if ( v74 < v47 )
          {
            dword_1403882F8 = 40;
            goto LABEL_154;
          }
          v39 = (int)v76;
          v36 = v75;
        }
        else
        {
          LODWORD(v46) = (_DWORD)v31 + v40;
        }
        if ( v36[3] < 0x1000u )
        {
          if ( (a4 & 0x20000) != 0 )
          {
            LowPart = -1073741701;
            MiLogCreateImageFileMapFailure(v45, v78);
LABEL_107:
            dword_1403882F8 = 22;
            goto LABEL_155;
          }
          if ( !v39 )
          {
            LowPart = -1073741701;
            goto LABEL_107;
          }
          a4 |= 0x80000u;
        }
        v51 = MiBuildImageControlArea(
                v81,
                (_DWORD)v46,
                (_DWORD)v36,
                (unsigned int)&v83,
                a4,
                (__int64)&FileSize,
                (__int64)&v80);
        v13 = v80;
        v52 = 0;
        LowPart = v51;
        if ( v51 < 0 )
        {
          StartVa = 0LL;
          goto LABEL_156;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v80 + 56LL) + 64LL) = v42;
        *(_WORD *)(v13 + 60) ^= (*(_WORD *)(v13 + 60) ^ *(_WORD *)v85) & 0x3FF;
        if ( (a4 & 0x200) != 0 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v13 + 56LL) + 51LL) |= 0x10u;
        v53 = *(_QWORD *)v13;
        v70 = *(unsigned int **)v13;
        v72 = 0;
        if ( !v101 && !v102 && (a4 & 0x90000) == 0 )
        {
          v54 = v75[6];
          if ( v54 < 0x1000 )
          {
            if ( (v54 & 0x1FF) != 0 )
              ++*(_QWORD *)(v53 + 16);
            v72 = 1;
          }
        }
        v55 = HIWORD(v84);
        v56 = 2048LL;
        if ( (a4 & 0x40080) != 0
          || IoIsDeviceEjectable((__int64)v78->DeviceObject)
          || (v55 & 0x400) != 0 && (*(_DWORD *)(v57 + 52) & 1) != 0
          || (v55 & (unsigned __int16)v56) != 0 && (*(_DWORD *)(v57 + 52) & 0x10) != 0 )
        {
          v52 = 1;
        }
        v58 = *(_QWORD *)(v53 + 16);
        if ( v58 )
        {
          v59 = (volatile signed __int64 *)v85;
          if ( !(unsigned int)MiChargeCommit((__int64)v85, v58, 0LL, v56) )
          {
            StartVa = (char *)v70;
            LowPart = -1073741523;
            dword_1403882F8 = 35;
            goto LABEL_156;
          }
          _InterlockedExchangeAdd64(v59 + 809, v58);
          v13 = v80;
          v55 = HIWORD(v84);
        }
        v60 = *(_DWORD *)(v13 + 56);
        v61 = v75;
        if ( (v60 & 0x20000) != 0 && (a4 & 0x80000) == 0 && (v75[5] & 0x1000000) == 0 )
          *(_DWORD *)(v13 + 56) = v60 | 0x4000000;
        if ( v77 > 1 )
          MiInitializeImageProtos(v13, (__int64)Mdl, v71);
        if ( v72 == 1 )
          MiInitializeImageHeaderPage(v86, (unsigned int)v61[6]);
        if ( *((_WORD *)v61 + 24) == 267 )
          *((_BYTE *)v70 + 14) |= 0x40u;
        if ( v52 == 1 )
        {
          *(_DWORD *)(v13 + 56) |= 0x800u;
          if ( (a4 & 0x40080) != 0 )
            *(_DWORD *)(v13 + 56) |= 0x40000u;
          if ( (PerfGlobalGroupMask & 4) != 0 )
          {
            v89 = v55;
            DeviceObject = (__int64)v78->DeviceObject;
            FsContext = v78->FsContext;
            v88 = *(_DWORD *)(DeviceObject + 52);
            v90 = (a4 >> 18) & 1;
            IsDeviceEjectable = IoIsDeviceEjectable(DeviceObject);
            v97 = 0;
            v96 = 16;
            p_FsContext = &FsContext;
            v90 = (4 * ((a4 >> 7) & 1)) | v64 & 0xFFF9 | (2 * IsDeviceEjectable) & 0xFB;
            EtwTraceKernelEvent((__int64)&p_FsContext, 1u, v65, 0x269u, 0x401802u);
          }
        }
        else if ( (a4 & 0x10000) != 0 )
        {
          v66 = v78;
          *(_DWORD *)(v13 + 56) |= 0x40000000u;
          *(_QWORD *)(v13 + 64) = v66;
          v67 = MiInitializeImageExtents(v13);
          ObFastReplaceObject((volatile __int64 *)(v13 + 64), 0LL);
          if ( v67 < 0 )
          {
            dword_1403882F8 = 11;
            *(_DWORD *)(v13 + 56) &= ~0x40000000u;
          }
        }
        LowPart = 0;
        StartVa = (char *)v70;
        v23 = v71;
        *v93 = v70;
        *v94 = v71;
        goto LABEL_157;
      }
      if ( v74 < 0x40 )
      {
        LowPart = -1073741521;
        dword_1403882F8 = 38;
        goto LABEL_155;
      }
      memset(&StartVa[v74], 0, (v77 << 12) - v74);
      v19 = v74;
    }
    v24 = v77;
    goto LABEL_47;
  }
  dword_1403882F8 = 64;
  LowPart = -1073740749;
LABEL_156:
  v23 = v71;
LABEL_157:
  for ( i = 0LL; i < 3; ++i )
  {
    v69 = (__int64)*(&Mdl + i);
    if ( v69 )
    {
      if ( (*(_BYTE *)(v69 + 10) & 1) != 0 )
      {
        MmUnmapLockedPages(*(PVOID *)(v69 + 24), *(&Mdl + i));
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(v69 + 32), 0);
        IoFreeMdl((PMDL)v69);
      }
    }
  }
  if ( LowPart < 0 )
  {
    MiReturnPfnReferenceCount(v23);
    if ( StartVa )
      ExFreePoolWithTag(StartVa, 0);
    if ( v13 )
      ExFreePoolWithTag((PVOID)v13, 0);
  }
  return LowPart;
}
