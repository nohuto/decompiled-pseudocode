/*
 * XREFs of MiCreateImageFileMap @ 0x1404921D4
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 * Callees:
 *     PsIsCurrentThreadPrefetching @ 0x14001B870 (PsIsCurrentThreadPrefetching.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MiCreateMdl @ 0x14005C370 (MiCreateMdl.c)
 *     MiInitializeImageHeaderPage @ 0x14005DF60 (MiInitializeImageHeaderPage.c)
 *     MiCopyHeaderIfResident @ 0x14005DFD4 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x14005E1F4 (MiFlushDataSection.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     IoIsDeviceEjectable @ 0x14005EB0C (IoIsDeviceEjectable.c)
 *     MiLegacyImageArchitecture @ 0x14005EB2C (MiLegacyImageArchitecture.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPageForHeader @ 0x140109BE0 (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiPageRead @ 0x14010AFC4 (MiPageRead.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     MiBuildImageControlArea @ 0x1404940B8 (MiBuildImageControlArea.c)
 *     MiVerifyImageHeader @ 0x140494BDC (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x1406B5128 (MiLogCreateImageFileMapFailure.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x1406B76C8 (MiInitializeImageExtents.c)
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
  NTSTATUS Status; // esi
  ULONG_PTR Information; // r9
  LARGE_INTEGER v20; // rdi
  unsigned __int64 v21; // rax
  struct _MDL *v22; // rax
  __int64 v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // r13
  ULONG_PTR v26; // rcx
  struct _MDL *v27; // rsi
  __int64 v28; // r12
  char *v29; // r8
  ULONG_PTR v30; // r9
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
  ULONG_PTR v45; // rcx
  char *v46; // r12
  ULONG_PTR v47; // rdi
  SIZE_T v48; // rcx
  struct _MDL *v49; // rsi
  __int64 v50; // rax
  int v51; // eax
  char v52; // r12
  __int64 v53; // r8
  unsigned int v54; // eax
  unsigned __int16 v55; // si
  __int64 v56; // rdx
  unsigned __int16 v57; // r9
  unsigned __int64 v58; // rdi
  volatile signed __int64 *v59; // rsi
  int v60; // ecx
  _DWORD *v61; // rdi
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int16 v64; // dx
  unsigned int v65; // r8d
  struct _FILE_OBJECT *v66; // rax
  int v67; // ebx
  unsigned __int64 i; // rdi
  __int64 v69; // rbx
  unsigned int *v70; // [rsp+40h] [rbp-C0h]
  __int64 v71; // [rsp+48h] [rbp-B8h]
  char v72; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK v73; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v74; // [rsp+68h] [rbp-98h]
  char *v75; // [rsp+70h] [rbp-90h]
  unsigned __int64 v76; // [rsp+78h] [rbp-88h]
  struct _FILE_OBJECT *v77; // [rsp+80h] [rbp-80h]
  __int64 v78; // [rsp+88h] [rbp-78h] BYREF
  __int64 v79; // [rsp+90h] [rbp-70h] BYREF
  int v80; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v82; // [rsp+A8h] [rbp-58h] BYREF
  int v83; // [rsp+B8h] [rbp-48h]
  ULONG_PTR *v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h]
  PVOID FsContext; // [rsp+D0h] [rbp-30h] BYREF
  ULONG Characteristics; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v88; // [rsp+DCh] [rbp-24h]
  __int16 v89; // [rsp+DEh] [rbp-22h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-20h] BYREF
  char *v91; // [rsp+F8h] [rbp-8h]
  unsigned int **v92; // [rsp+100h] [rbp+0h]
  __int64 *v93; // [rsp+108h] [rbp+8h]
  PVOID *p_FsContext; // [rsp+110h] [rbp+10h] BYREF
  int v95; // [rsp+118h] [rbp+18h]
  int v96; // [rsp+11Ch] [rbp+1Ch]
  struct _MDL MemoryDescriptorList; // [rsp+120h] [rbp+20h] BYREF
  __int64 v98; // [rsp+150h] [rbp+50h]
  PMDL Mdl; // [rsp+158h] [rbp+58h]
  struct _MDL *v100; // [rsp+160h] [rbp+60h]
  struct _MDL *v101; // [rsp+168h] [rbp+68h]

  v92 = a5;
  v93 = a6;
  v74 = a7;
  p_FsContext = a8;
  v84 = a2;
  Mdl = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v80 = a3;
  v77 = FileObject;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_14036BFD8 = 1;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
    return -1073741792;
  v13 = 0LL;
  v76 = 1LL;
  v79 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.Next = 0LL;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  PageForHeader = MiGetPageForHeader(a2, a3);
  v85 = PageForHeader;
  v16 = PageForHeader;
  if ( PageForHeader == -1 )
    return -1073741670;
  v98 = PageForHeader;
  StartVa = 0LL;
  v71 = 48 * PageForHeader - 0x58000000000LL;
  v75 = 0LL;
  CcZeroEndOfLastPage(FileObject);
  if ( (unsigned int)MiFlushDataSection((__int64)FileObject) )
    a4 |= 0x40000u;
  if ( (a4 & 0x40080) == 0 || !PsIsCurrentThreadPrefetching() )
  {
    Information = 0LL;
    v73.Information = 0LL;
    if ( (a4 & 0x10000) != 0 )
    {
      if ( (unsigned int)MiCopyDirectMapHeader(FileObject, v16) == 1 )
      {
        Information = 4096LL;
        v73.Information = 4096LL;
      }
      else
      {
        Information = v73.Information;
        a4 &= ~0x10000u;
      }
    }
    v20 = FileSize;
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v85) == 1 )
      {
        Information = 4096LL;
        v73.Information = 4096LL;
      }
      else if ( ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && v20.LowPart <= 0x20000)
             && !FileObject->SectionObjectPointer->DataSectionObject
             && (v21 = ((unsigned __int64)v20.LowPart + 4095) >> 12, v76 = v21, v21 > 1) )
      {
        v22 = MiCreateMdl(v21 << 12);
        Information = v73.Information;
        Mdl = v22;
        if ( v22 )
        {
          StartVa = (char *)v22->StartVa;
          p_MemoryDescriptorList = v22;
          v75 = StartVa;
        }
        else
        {
          v76 = 1LL;
        }
      }
      else
      {
        Information = v73.Information;
      }
    }
    if ( (p_MemoryDescriptorList->MdlFlags & 2) != 0 )
    {
      v75 = (char *)MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      StartVa = v75;
      if ( !v75 )
      {
        dword_14036BFD8 = 37;
        Status = -1073741670;
LABEL_155:
        StartVa = 0LL;
        goto LABEL_156;
      }
      Information = v73.Information;
      Mdl = p_MemoryDescriptorList;
    }
    if ( !Information )
    {
      v78 = 0LL;
      Status = MiPageRead(FileObject, p_MemoryDescriptorList, &v78, &Event, &v73, 0, 0LL);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
        Status = v73.Status;
      }
      if ( Status < 0 )
      {
        dword_14036BFD8 = 2;
        goto LABEL_39;
      }
      v24 = v76;
      Information = v73.Information;
      if ( v73.Information == v76 << 12 )
      {
LABEL_47:
        if ( *(_WORD *)StartVa != 23117 )
        {
          Status = -1073741521;
          goto LABEL_155;
        }
        v25 = *((unsigned int *)StartVa + 15);
        if ( (int)v25 + 264 < (unsigned int)v25 )
        {
          Status = -1073741520;
          dword_14036BFD8 = 6;
          goto LABEL_155;
        }
        v26 = v25 + 264;
        if ( (unsigned __int64)(v25 + 264) > v20.QuadPart )
        {
          Status = -1073741520;
          dword_14036BFD8 = 5;
          goto LABEL_155;
        }
        if ( v26 <= v24 << 12 )
        {
          if ( v26 > Information )
          {
            Status = -1073741520;
            dword_14036BFD8 = 39;
            goto LABEL_155;
          }
          v29 = v75;
          v30 = Information - v25;
          v31 = &v75[v25];
        }
        else
        {
          v100 = MiCreateMdl(0x2000uLL);
          v27 = v100;
          if ( !v100 )
          {
            Status = -1073741670;
            dword_14036BFD8 = 7;
            goto LABEL_155;
          }
          v78 = (unsigned int)v25 & 0xFFFFF000;
          KeResetEvent(&Event);
          v73.Information = 0LL;
          Status = MiPageRead(v77, v27, &v78, &Event, &v73, 0, 0LL);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            Status = v73.Status;
          }
          if ( Status < 0 )
          {
            dword_14036BFD8 = 8;
            goto LABEL_39;
          }
          if ( v73.Information != 0x2000 && v73.Information < (unsigned __int64)(v25 & 0xFFF) + 264 )
          {
            Status = -1073741520;
            dword_14036BFD8 = 24;
            goto LABEL_155;
          }
          v28 = v25 & 0xFFF;
          v29 = v75;
          v30 = v73.Information - v28;
          v91 = (char *)v100->StartVa + v28;
          v73.Information += (unsigned int)v25 & 0xFFFFF000;
          v31 = v91;
        }
        Status = MiVerifyImageHeader(v74, v31, v29, v30);
        if ( Status )
        {
          dword_14036BFD8 = 9;
          goto LABEL_155;
        }
        v32 = v74;
        if ( v74[6] >= v74[4] )
        {
          dword_14036BFD8 = 16;
LABEL_154:
          Status = -1073741701;
          goto LABEL_155;
        }
        v33 = p_FsContext;
        *(_DWORD *)p_FsContext = v25 + 48;
        if ( *((_WORD *)v32 + 24) == 267 )
          *(_DWORD *)v33 = v25 + 52;
        if ( !((v32[4] >> 12) + ((v32[4] & 0xFFF) != 0)) )
        {
          dword_14036BFD8 = 10;
          goto LABEL_154;
        }
        v83 = *((_DWORD *)v31 + 5);
        v82 = *(_OWORD *)(v31 + 4);
        if ( (v83 & 7) != 0 )
        {
          dword_14036BFD8 = 14;
          goto LABEL_154;
        }
        if ( (unsigned __int16)*v32 )
        {
          dword_14036BFD8 = 15;
          goto LABEL_154;
        }
        v34 = MiLegacyImageArchitecture(v82);
        v38 = HIWORD(v37);
        v39 = v34;
        LODWORD(v75) = v34;
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
            dword_14036BFD8 = 23;
            goto LABEL_154;
          }
          if ( (v36[15] & 0x140) != 0x140 )
          {
            dword_14036BFD8 = 44;
            goto LABEL_154;
          }
        }
        v40 = (unsigned __int16)v83 + 24;
        if ( (unsigned int)v25 + v40 + 40 * WORD1(v82) <= (unsigned int)v25 )
        {
          dword_14036BFD8 = 52;
          goto LABEL_154;
        }
        v41 = (unsigned int)(v40 + v25);
        v42 = (unsigned int)v36[6];
        v43 = v41;
        v44 = 40LL * WORD1(v82);
        v45 = v44 + v41;
        if ( v42 < v44 + v41 )
          LODWORD(v42) = v44 + v41;
        if ( (unsigned int)v42 > v35 )
        {
          dword_14036BFD8 = 48;
          goto LABEL_154;
        }
        if ( v45 > v73.Information )
        {
          v47 = v44 + ((v40 + (int)v31) & 0xFFFLL);
          if ( v47 - 1 > 0xFFFFFFFE || (v48 = (v47 + 4095) & 0xFFFFFFFFFFFFF000uLL, v47 > v48) )
          {
            dword_14036BFD8 = 53;
            goto LABEL_154;
          }
          v101 = MiCreateMdl(v48);
          v49 = v101;
          if ( !v101 )
          {
            Status = -1073741670;
            dword_14036BFD8 = 18;
            goto LABEL_155;
          }
          v50 = v43 & 0xFFFFF000;
          v46 = (char *)v101->StartVa + (v43 & 0xFFF);
          v78 = v50;
          KeResetEvent(&Event);
          v73.Information = 0LL;
          Status = MiPageRead(v77, v49, &v78, &Event, &v73, 0, 0LL);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            Status = v73.Status;
          }
          if ( Status < 0 )
          {
            dword_14036BFD8 = 19;
LABEL_39:
            if ( Status != -1073741740 )
            {
              v23 = v71;
              StartVa = 0LL;
              if ( Status != -1073741209 )
                Status = -1073741792;
              goto LABEL_157;
            }
            goto LABEL_155;
          }
          if ( v73.Information < v47 )
          {
            dword_14036BFD8 = 40;
            goto LABEL_154;
          }
          v39 = (int)v75;
          v36 = v74;
        }
        else
        {
          LODWORD(v46) = (_DWORD)v31 + v40;
        }
        if ( v36[3] < 0x1000u )
        {
          if ( (a4 & 0x20000) != 0 )
          {
            Status = -1073741701;
            MiLogCreateImageFileMapFailure(v45, v77);
LABEL_107:
            dword_14036BFD8 = 22;
            goto LABEL_155;
          }
          if ( !v39 )
          {
            Status = -1073741701;
            goto LABEL_107;
          }
          a4 |= 0x80000u;
        }
        v51 = MiBuildImageControlArea(
                v80,
                (_DWORD)v46,
                (_DWORD)v36,
                (unsigned int)&v82,
                a4,
                (__int64)&FileSize,
                (__int64)&v79);
        v13 = v79;
        v52 = 0;
        Status = v51;
        if ( v51 < 0 )
        {
          StartVa = 0LL;
          goto LABEL_156;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v79 + 56LL) + 64LL) = v42;
        *(_WORD *)(v13 + 60) ^= (*(_WORD *)(v13 + 60) ^ *(_WORD *)v84) & 0x3FF;
        if ( (a4 & 0x200) != 0 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v13 + 56LL) + 51LL) |= 0x10u;
        v53 = *(_QWORD *)v13;
        v70 = *(unsigned int **)v13;
        v72 = 0;
        if ( !v100 && !v101 && (a4 & 0x90000) == 0 )
        {
          v54 = v74[6];
          if ( v54 < 0x1000 )
          {
            if ( (v54 & 0x1FF) != 0 )
              ++*(_QWORD *)(v53 + 16);
            v72 = 1;
          }
        }
        v55 = HIWORD(v83);
        if ( (a4 & 0x40080) != 0
          || IoIsDeviceEjectable((__int64)v77->DeviceObject)
          || (v55 & 0x400) != 0 && (*(_DWORD *)(v56 + 52) & 1) != 0
          || (v55 & v57) != 0 && (*(_DWORD *)(v56 + 52) & 0x10) != 0 )
        {
          v52 = 1;
        }
        v58 = *(_QWORD *)(v53 + 16);
        if ( v58 )
        {
          v59 = (volatile signed __int64 *)v84;
          if ( !(unsigned int)MiChargeCommit((unsigned __int64)v84, v58, 0LL) )
          {
            StartVa = (char *)v70;
            Status = -1073741523;
            dword_14036BFD8 = 35;
            goto LABEL_156;
          }
          _InterlockedExchangeAdd64(v59 + 785, v58);
          v13 = v79;
          v55 = HIWORD(v83);
        }
        v60 = *(_DWORD *)(v13 + 56);
        v61 = v74;
        if ( (v60 & 0x20000) != 0 && (a4 & 0x80000) == 0 && (v74[5] & 0x1000000) == 0 )
          *(_DWORD *)(v13 + 56) = v60 | 0x4000000;
        if ( v76 > 1 )
          MiInitializeImageProtos(v13, (__int64)Mdl, v71);
        if ( v72 == 1 )
          MiInitializeImageHeaderPage(v85, (unsigned int)v61[6]);
        if ( *((_WORD *)v61 + 24) == 267 )
          *((_BYTE *)v70 + 14) |= 0x40u;
        if ( v52 == 1 )
        {
          *(_DWORD *)(v13 + 56) |= 0x800u;
          if ( (a4 & 0x40080) != 0 )
            *(_DWORD *)(v13 + 56) |= 0x40000u;
          if ( (PerfGlobalGroupMask & 4) != 0 )
          {
            v88 = v55;
            DeviceObject = v77->DeviceObject;
            FsContext = v77->FsContext;
            Characteristics = DeviceObject->Characteristics;
            v89 = (a4 >> 18) & 1;
            IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
            v96 = 0;
            v95 = 16;
            p_FsContext = &FsContext;
            v89 = (4 * ((a4 >> 7) & 1)) | v64 & 0xFFF9 | (2 * IsDeviceEjectable) & 0xFB;
            EtwTraceKernelEvent((int)&p_FsContext, 1, v65, 617, 4200450);
          }
        }
        else if ( (a4 & 0x10000) != 0 )
        {
          v66 = v77;
          *(_DWORD *)(v13 + 56) |= 0x40000000u;
          *(_QWORD *)(v13 + 64) = v66;
          v67 = MiInitializeImageExtents(v13);
          ObFastReplaceObject((volatile __int64 *)(v13 + 64), 0LL);
          if ( v67 < 0 )
          {
            dword_14036BFD8 = 11;
            *(_DWORD *)(v13 + 56) &= ~0x40000000u;
          }
        }
        Status = 0;
        StartVa = (char *)v70;
        v23 = v71;
        *v92 = v70;
        *v93 = v71;
        goto LABEL_157;
      }
      if ( v73.Information < 0x40 )
      {
        Status = -1073741521;
        dword_14036BFD8 = 38;
        goto LABEL_155;
      }
      memset(&StartVa[v73.Information], 0, (v76 << 12) - v73.Information);
      Information = v73.Information;
    }
    v24 = v76;
    goto LABEL_47;
  }
  dword_14036BFD8 = 64;
  Status = -1073740749;
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
  if ( Status < 0 )
  {
    MiReturnPfnReferenceCount(v23);
    if ( StartVa )
      ExFreePoolWithTag(StartVa, 0);
    if ( v13 )
      ExFreePoolWithTag((PVOID)v13, 0);
  }
  return Status;
}
