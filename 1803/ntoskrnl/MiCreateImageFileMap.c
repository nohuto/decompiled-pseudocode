/*
 * XREFs of MiCreateImageFileMap @ 0x1404BF468
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MiPageRead @ 0x1400485DC (MiPageRead.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     IoIsDeviceEjectable @ 0x14004CD48 (IoIsDeviceEjectable.c)
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     MiCopyHeaderIfResident @ 0x14004D648 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x14004D85C (MiFlushDataSection.c)
 *     MiGetPageForHeader @ 0x14004DD9C (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     MiCreateMdl @ 0x140097F84 (MiCreateMdl.c)
 *     MiLegacyImageArchitecture @ 0x14009D544 (MiLegacyImageArchitecture.c)
 *     PsIsCurrentThreadPrefetching @ 0x1400B2120 (PsIsCurrentThreadPrefetching.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     MiInitializeImageHeaderPage @ 0x1400C7E10 (MiInitializeImageHeaderPage.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiBuildImageControlArea @ 0x1404BD514 (MiBuildImageControlArea.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     MiVerifyImageHeader @ 0x14056E46C (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x14074C040 (MiLogCreateImageFileMapFailure.c)
 *     MiCopyDirectMapHeader @ 0x14074E4AC (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x14074E70C (MiInitializeImageExtents.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        PVOID **a5,
        __int64 *a6,
        _DWORD *a7,
        PVOID *a8)
{
  NTSTATUS result; // eax
  __int64 v13; // r14
  struct _MDL *p_MemoryDescriptorList; // rsi
  __int64 PageForHeader; // rax
  __int64 v16; // rdi
  PVOID *StartVa; // r13
  int LowPart; // esi
  unsigned __int64 v19; // r9
  LARGE_INTEGER v20; // rdi
  unsigned __int64 v21; // rax
  struct _MDL *v22; // rax
  ULONG_PTR v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // r13
  unsigned __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // r12
  PVOID *v29; // r8
  unsigned __int64 v30; // r9
  char *v31; // rdi
  _DWORD *v32; // r10
  PVOID *v33; // rcx
  BOOL v34; // eax
  unsigned int v35; // r9d
  __int64 v36; // r10
  unsigned int v37; // edx
  unsigned int v38; // edx
  int v39; // r11d
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
  _WORD *v53; // rax
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned __int16 v56; // si
  __int64 v57; // r9
  __int64 v58; // rdx
  unsigned __int64 v59; // rdi
  __int64 v60; // rsi
  int v61; // ecx
  _DWORD *v62; // rdi
  __int64 DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int16 v65; // dx
  unsigned int v66; // r8d
  PFILE_OBJECT v67; // rax
  int v68; // ebx
  unsigned __int64 i; // rdi
  __int64 v70; // rbx
  PVOID *v71; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+48h] [rbp-B8h]
  char v73; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v74; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v75; // [rsp+60h] [rbp-A0h]
  _DWORD *v76; // [rsp+68h] [rbp-98h]
  PVOID *v77; // [rsp+70h] [rbp-90h]
  unsigned __int64 v78; // [rsp+78h] [rbp-88h]
  PFILE_OBJECT v79; // [rsp+80h] [rbp-80h]
  __int64 v80; // [rsp+88h] [rbp-78h] BYREF
  __int64 v81; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v82; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v84; // [rsp+A8h] [rbp-58h] BYREF
  int v85; // [rsp+B8h] [rbp-48h]
  _WORD *v86; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v87; // [rsp+C8h] [rbp-38h]
  PVOID FsContext; // [rsp+D0h] [rbp-30h] BYREF
  int v89; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v90; // [rsp+DCh] [rbp-24h]
  __int16 v91; // [rsp+DEh] [rbp-22h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-20h] BYREF
  char *v93; // [rsp+F8h] [rbp-8h]
  PVOID **v94; // [rsp+100h] [rbp+0h]
  __int64 *v95; // [rsp+108h] [rbp+8h]
  PVOID *p_FsContext; // [rsp+110h] [rbp+10h] BYREF
  int v97; // [rsp+118h] [rbp+18h]
  int v98; // [rsp+11Ch] [rbp+1Ch]
  struct _MDL MemoryDescriptorList; // [rsp+120h] [rbp+20h] BYREF
  __int64 v100; // [rsp+150h] [rbp+50h]
  PMDL Mdl; // [rsp+158h] [rbp+58h]
  struct _MDL *v102; // [rsp+160h] [rbp+60h]
  struct _MDL *v103; // [rsp+168h] [rbp+68h]

  v94 = a5;
  v95 = a6;
  v76 = a7;
  p_FsContext = a8;
  v86 = (_WORD *)a2;
  Mdl = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v82 = a3;
  v79 = FileObject;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_1403CB498 = 1;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
    return -1073741792;
  v13 = 0LL;
  v78 = 1LL;
  v81 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.Next = 0LL;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  PageForHeader = MiGetPageForHeader(a2, a3);
  v87 = PageForHeader;
  v16 = PageForHeader;
  if ( PageForHeader == -1 )
    return -1073741670;
  v100 = PageForHeader;
  StartVa = 0LL;
  v72 = 48 * PageForHeader - 0x58000000000LL;
  v77 = 0LL;
  CcZeroEndOfLastPage(FileObject);
  if ( (unsigned int)MiFlushDataSection((__int64)FileObject) )
    a4 |= 0x40000u;
  if ( (a4 & 0x40080) == 0 || !PsIsCurrentThreadPrefetching() )
  {
    v19 = 0LL;
    v75 = 0LL;
    if ( (a4 & 0x10000) != 0 )
    {
      if ( (int)MiCopyDirectMapHeader(FileObject, v16) < 0 )
      {
        v19 = v75;
        a4 &= ~0x10000u;
      }
      else
      {
        v19 = 4096LL;
        v75 = 4096LL;
      }
    }
    v20 = FileSize;
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v87) == 1 )
      {
        v19 = 4096LL;
        v75 = 4096LL;
      }
      else if ( ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && v20.LowPart <= 0x20000)
             && !FileObject->SectionObjectPointer->DataSectionObject
             && (v21 = ((unsigned __int64)v20.LowPart + 4095) >> 12, v78 = v21, v21 > 1) )
      {
        v22 = MiCreateMdl(v21 << 12);
        v19 = v75;
        Mdl = v22;
        if ( v22 )
        {
          StartVa = (PVOID *)v22->StartVa;
          p_MemoryDescriptorList = v22;
          v77 = StartVa;
        }
        else
        {
          v78 = 1LL;
        }
      }
      else
      {
        v19 = v75;
      }
    }
    if ( (p_MemoryDescriptorList->MdlFlags & 2) != 0 )
    {
      v77 = (PVOID *)MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      StartVa = v77;
      if ( !v77 )
      {
        dword_1403CB498 = 37;
        LowPart = -1073741670;
LABEL_155:
        StartVa = 0LL;
        goto LABEL_156;
      }
      v19 = v75;
      Mdl = p_MemoryDescriptorList;
    }
    if ( !v19 )
    {
      v80 = 0LL;
      LowPart = MiPageRead((int)FileObject, (int)p_MemoryDescriptorList, (int)&v80, (int)&Event, (__int64)&v74, 0, 0LL);
      if ( LowPart == 259 )
      {
        KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
        LowPart = v74.LowPart;
      }
      if ( LowPart < 0 )
      {
        dword_1403CB498 = 2;
        goto LABEL_39;
      }
      v24 = v78;
      v19 = v75;
      if ( v75 == v78 << 12 )
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
          dword_1403CB498 = 6;
          goto LABEL_155;
        }
        v26 = v25 + 264;
        if ( (unsigned __int64)(v25 + 264) > v20.QuadPart )
        {
          LowPart = -1073741520;
          dword_1403CB498 = 5;
          goto LABEL_155;
        }
        if ( v26 <= v24 << 12 )
        {
          if ( v26 > v19 )
          {
            LowPart = -1073741520;
            dword_1403CB498 = 39;
            goto LABEL_155;
          }
          v29 = v77;
          v30 = v19 - v25;
          v31 = (char *)v77 + v25;
        }
        else
        {
          v102 = MiCreateMdl(0x2000uLL);
          v27 = (int)v102;
          if ( !v102 )
          {
            LowPart = -1073741670;
            dword_1403CB498 = 7;
            goto LABEL_155;
          }
          v80 = (unsigned int)v25 & 0xFFFFF000;
          KeResetEvent(&Event);
          v75 = 0LL;
          LowPart = MiPageRead((int)v79, v27, (int)&v80, (int)&Event, (__int64)&v74, 0, 0LL);
          if ( LowPart == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            LowPart = v74.LowPart;
          }
          if ( LowPart < 0 )
          {
            dword_1403CB498 = 8;
            goto LABEL_39;
          }
          v28 = v25 & 0xFFF;
          if ( v75 != 0x2000 && v75 < v28 + 264 )
          {
            LowPart = -1073741520;
            dword_1403CB498 = 24;
            goto LABEL_155;
          }
          v29 = v77;
          v30 = v75 - v28;
          v93 = (char *)v102->StartVa + v28;
          v75 += (unsigned int)v25 & 0xFFFFF000;
          v31 = v93;
        }
        LowPart = MiVerifyImageHeader(v76, v31, v29, v30);
        if ( LowPart )
        {
          dword_1403CB498 = 9;
          goto LABEL_155;
        }
        v32 = v76;
        if ( v76[6] >= v76[4] )
        {
          dword_1403CB498 = 16;
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
          dword_1403CB498 = 10;
          goto LABEL_154;
        }
        v85 = *((_DWORD *)v31 + 5);
        v84 = *(_OWORD *)(v31 + 4);
        if ( (v85 & 7) != 0 )
        {
          dword_1403CB498 = 14;
          goto LABEL_154;
        }
        if ( *(_WORD *)v32 )
        {
          dword_1403CB498 = 15;
          goto LABEL_154;
        }
        v34 = MiLegacyImageArchitecture(v84);
        v38 = HIWORD(v37);
        v39 = v34;
        LODWORD(v77) = v34;
        if ( v34 )
        {
          if ( (v38 & 1) != 0 && (*(_WORD *)(v36 + 60) & 0x1000) != 0 )
            goto LABEL_82;
        }
        else
        {
          if ( (v38 & 1) != 0 )
          {
LABEL_82:
            dword_1403CB498 = 23;
            goto LABEL_154;
          }
          if ( (*(_WORD *)(v36 + 60) & 0x140) != 0x140 )
          {
            dword_1403CB498 = 44;
            goto LABEL_154;
          }
        }
        v40 = (unsigned __int16)v85 + 24;
        if ( (unsigned int)v25 + v40 + 40 * WORD1(v84) <= (unsigned int)v25 )
        {
          dword_1403CB498 = 52;
          goto LABEL_154;
        }
        v41 = (unsigned int)(v40 + v25);
        v42 = *(unsigned int *)(v36 + 24);
        v43 = v41;
        v44 = 40LL * WORD1(v84);
        v45 = v44 + v41;
        if ( v42 < v44 + v41 )
          LODWORD(v42) = v44 + v41;
        if ( (unsigned int)v42 > v35 )
        {
          dword_1403CB498 = 48;
          goto LABEL_154;
        }
        if ( v45 > v75 )
        {
          v47 = v44 + ((v40 + (int)v31) & 0xFFFLL);
          if ( v47 - 1 > 0xFFFFFFFE || (v48 = (v47 + 4095) & 0xFFFFFFFFFFFFF000uLL, v47 > v48) )
          {
            dword_1403CB498 = 53;
            goto LABEL_154;
          }
          v103 = MiCreateMdl(v48);
          v49 = (int)v103;
          if ( !v103 )
          {
            LowPart = -1073741670;
            dword_1403CB498 = 18;
            goto LABEL_155;
          }
          v50 = v43 & 0xFFFFF000;
          v46 = (char *)v103->StartVa + (v43 & 0xFFF);
          v80 = v50;
          KeResetEvent(&Event);
          v75 = 0LL;
          LowPart = MiPageRead((int)v79, v49, (int)&v80, (int)&Event, (__int64)&v74, 0, 0LL);
          if ( LowPart == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            LowPart = v74.LowPart;
          }
          if ( LowPart < 0 )
          {
            dword_1403CB498 = 19;
LABEL_39:
            if ( LowPart != -1073741740 )
            {
              v23 = v72;
              StartVa = 0LL;
              if ( LowPart != -1073741209 )
                LowPart = -1073741792;
              goto LABEL_157;
            }
            goto LABEL_155;
          }
          if ( v75 < v47 )
          {
            dword_1403CB498 = 40;
            goto LABEL_154;
          }
          v36 = (__int64)v76;
          v39 = (int)v77;
        }
        else
        {
          LODWORD(v46) = (_DWORD)v31 + v40;
        }
        if ( *(_DWORD *)(v36 + 12) < 0x1000u )
        {
          if ( (a4 & 0x20000) != 0 )
          {
            LowPart = -1073741701;
            MiLogCreateImageFileMapFailure(v45, v79, *(unsigned int *)(v36 + 64), DWORD1(v84));
LABEL_107:
            dword_1403CB498 = 22;
            goto LABEL_155;
          }
          if ( !v39 )
          {
            LowPart = -1073741701;
            goto LABEL_107;
          }
          a4 |= 0x80000u;
        }
        v51 = MiBuildImageControlArea(v82, (int)v46, v36, &v84, a4, (unsigned int *)&FileSize, &v81);
        v13 = v81;
        v52 = 0;
        LowPart = v51;
        if ( v51 < 0 )
        {
          StartVa = 0LL;
          goto LABEL_156;
        }
        v53 = v86;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v81 + 56LL) + 64LL) = v42;
        *(_WORD *)(v13 + 60) ^= (*v53 ^ *(_WORD *)(v13 + 60)) & 0x3FF;
        if ( (a4 & 0x200) != 0 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v13 + 56LL) + 51LL) |= 0x10u;
        v54 = *(_QWORD *)v13;
        v71 = *(PVOID **)v13;
        v73 = 0;
        if ( !v102 && !v103 && (a4 & 0x90000) == 0 )
        {
          v55 = v76[6];
          if ( v55 < 0x1000 )
          {
            if ( (v55 & 0x1FF) != 0 )
              ++*(_QWORD *)(v54 + 16);
            v73 = 1;
          }
        }
        v56 = HIWORD(v85);
        v57 = 2048LL;
        if ( (a4 & 0x40080) != 0
          || IoIsDeviceEjectable((__int64)v79->DeviceObject)
          || (v56 & 0x400) != 0 && (*(_DWORD *)(v58 + 52) & 1) != 0
          || (v56 & (unsigned __int16)v57) != 0 && (*(_DWORD *)(v58 + 52) & 0x10) != 0 )
        {
          v52 = 1;
        }
        v59 = *(_QWORD *)(v54 + 16);
        if ( v59 )
        {
          v60 = (__int64)v86;
          if ( !(unsigned int)MiChargeCommit((__int64)v86, v59, 0) )
          {
            StartVa = v71;
            LowPart = -1073741523;
            dword_1403CB498 = 35;
            goto LABEL_156;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 7560), v59);
          v13 = v81;
          v56 = HIWORD(v85);
        }
        v61 = *(_DWORD *)(v13 + 56);
        v62 = v76;
        if ( (v61 & 0x20000) != 0 && (a4 & 0x80000) == 0 && (v76[5] & 0x1000000) == 0 )
          *(_DWORD *)(v13 + 56) = v61 | 0x4000000;
        if ( v78 > 1 )
          MiInitializeImageProtos(v13, (__int64)Mdl, v72);
        if ( v73 == 1 )
          MiInitializeImageHeaderPage(v87, (unsigned int)v62[6], v54, v57);
        if ( *((_WORD *)v62 + 24) == 267 )
          *((_BYTE *)v71 + 14) |= 0x40u;
        if ( v52 == 1 )
        {
          *(_DWORD *)(v13 + 56) |= 0x800u;
          if ( (a4 & 0x40080) != 0 )
            *(_DWORD *)(v13 + 56) |= 0x40000u;
          if ( (PerfGlobalGroupMask & 4) != 0 )
          {
            v90 = v56;
            DeviceObject = (__int64)v79->DeviceObject;
            FsContext = v79->FsContext;
            v89 = *(_DWORD *)(DeviceObject + 52);
            v91 = (a4 >> 18) & 1;
            IsDeviceEjectable = IoIsDeviceEjectable(DeviceObject);
            v98 = 0;
            p_FsContext = &FsContext;
            v97 = 16;
            v91 = v65 | (2 * ((2 * ((a4 >> 7) & 1)) | IsDeviceEjectable));
            EtwTraceKernelEvent((int)&p_FsContext, 1, v66, 617, 4200450);
          }
        }
        else if ( (a4 & 0x10000) != 0 )
        {
          v67 = v79;
          *(_DWORD *)(v13 + 56) |= 0x40000000u;
          *(_QWORD *)(v13 + 64) = v67;
          v68 = MiInitializeImageExtents(v13);
          ObFastReplaceObject((volatile __int64 *)(v13 + 64), 0LL);
          if ( v68 < 0 )
          {
            dword_1403CB498 = 11;
            *(_DWORD *)(v13 + 56) &= ~0x40000000u;
          }
        }
        LowPart = 0;
        StartVa = v71;
        v23 = v72;
        *v94 = v71;
        *v95 = v72;
        goto LABEL_157;
      }
      if ( v75 < 0x40 )
      {
        LowPart = -1073741521;
        dword_1403CB498 = 38;
        goto LABEL_155;
      }
      memset((char *)StartVa + v75, 0, (v78 << 12) - v75);
      v19 = v75;
    }
    v24 = v78;
    goto LABEL_47;
  }
  dword_1403CB498 = 64;
  LowPart = -1073740749;
LABEL_156:
  v23 = v72;
LABEL_157:
  for ( i = 0LL; i < 3; ++i )
  {
    v70 = (__int64)*(&Mdl + i);
    if ( v70 )
    {
      if ( (*(_BYTE *)(v70 + 10) & 1) != 0 )
      {
        MmUnmapLockedPages(*(PVOID *)(v70 + 24), *(&Mdl + i));
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(v70 + 32), 0);
        IoFreeMdl((PMDL)v70);
      }
    }
  }
  if ( LowPart < 0 )
  {
    MiReturnPfnReferenceCount(v23);
    if ( v13 )
    {
      MiUpdateSystemProtoPtesTree(*(_QWORD *)(v13 + 96), 0);
      ExFreePoolWithTag(StartVa[8], 0);
      ExFreePoolWithTag(StartVa, 0);
      ExFreePoolWithTag((PVOID)v13, 0);
    }
  }
  return LowPart;
}
