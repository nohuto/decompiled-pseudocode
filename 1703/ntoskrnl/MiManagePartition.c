/*
 * XREFs of MiManagePartition @ 0x14043C484
 * Callers:
 *     NtManagePartition @ 0x14043C408 (NtManagePartition.c)
 * Callees:
 *     MiQueryMemoryListInformation @ 0x140020744 (MiQueryMemoryListInformation.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiGetChannelInformation @ 0x14043CB04 (MiGetChannelInformation.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     MiCombineIdenticalPages @ 0x14056185C (MiCombineIdenticalPages.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiManagePartition(
        HANDLE Handle,
        void *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        KPROCESSOR_MODE AccessMode)
{
  _DWORD *v6; // r15
  __int64 v9; // rbx
  _QWORD *v10; // r9
  ACCESS_MASK v11; // r12d
  KPROCESSOR_MODE v12; // si
  NTSTATUS v13; // ebx
  ULONG_PTR *ProcessPartition; // r13
  ULONG_PTR *v15; // rax
  __int64 v16; // r10
  unsigned __int16 v17; // r10
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r12d
  unsigned int v24; // ecx
  unsigned __int64 v25; // r9
  _QWORD *v26; // r15
  unsigned int v27; // r14d
  char *v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  int v33; // r14d
  int v34; // r14d
  int v35; // r14d
  int v36; // r14d
  int v37; // eax
  SIZE_T v38; // rbx
  SIZE_T v39; // r14
  _DWORD *PoolWithTag; // r12
  _QWORD *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  NTSTATUS PagingFile; // eax
  int v46; // r8d
  int v47; // r9d
  int Object; // [rsp+20h] [rbp-318h]
  __int16 v49; // [rsp+44h] [rbp-2F4h]
  __int64 v52; // [rsp+58h] [rbp-2E0h] BYREF
  PVOID v53; // [rsp+60h] [rbp-2D8h]
  PVOID v54; // [rsp+68h] [rbp-2D0h]
  int v55; // [rsp+70h] [rbp-2C8h]
  PVOID v56; // [rsp+78h] [rbp-2C0h] BYREF
  PVOID v57; // [rsp+80h] [rbp-2B8h] BYREF
  _QWORD v58[3]; // [rsp+98h] [rbp-2A0h] BYREF
  _QWORD Src[30]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int64 v60[5]; // [rsp+1A0h] [rbp-198h] BYREF
  __int128 v61; // [rsp+1C8h] [rbp-170h]
  __int128 v62; // [rsp+1D8h] [rbp-160h]
  __int128 v63; // [rsp+1E8h] [rbp-150h]
  __int128 v64; // [rsp+1F8h] [rbp-140h]
  __int128 v65; // [rsp+208h] [rbp-130h]
  __int128 v66; // [rsp+218h] [rbp-120h]
  __int128 v67; // [rsp+228h] [rbp-110h]
  __int128 v68; // [rsp+238h] [rbp-100h]
  _BYTE v69[24]; // [rsp+250h] [rbp-E8h] BYREF
  char v70; // [rsp+268h] [rbp-D0h] BYREF

  v6 = a4;
  v9 = 232LL;
  memset(Src, 0, 0xE8uLL);
  v10 = 0LL;
  if ( !a3 )
  {
LABEL_2:
    v11 = 1;
LABEL_3:
    v12 = AccessMode;
LABEL_4:
    v10 = Src;
    goto LABEL_5;
  }
  if ( a3 == 1 )
  {
    v12 = AccessMode;
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, AccessMode) )
    {
      v9 = 16LL;
      goto LABEL_76;
    }
    return 3221225569LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 )
    {
      v9 = 24LL;
      v11 = 2;
      goto LABEL_3;
    }
    if ( a3 != 4 )
    {
      if ( a3 != 5 )
        return 3221225475LL;
      v9 = 40LL;
      goto LABEL_2;
    }
    v12 = AccessMode;
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, AccessMode) )
    {
      v9 = 32LL;
LABEL_76:
      v11 = 2;
      goto LABEL_4;
    }
    return 3221225569LL;
  }
  v9 = 40LL;
  v11 = 2;
  v12 = AccessMode;
LABEL_5:
  if ( (unsigned int)Size != v9 )
    return 3221225476LL;
  if ( v10 )
    memmove(v10, v6, (unsigned int)Size);
  v53 = 0LL;
  v54 = 0LL;
  if ( Handle == (HANDLE)-1LL )
  {
    ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    goto LABEL_12;
  }
  if ( Handle == (HANDLE)-2LL )
  {
    v15 = &MiSystemPartition;
    ProcessPartition = &MiSystemPartition;
LABEL_13:
    if ( a3 != 1 )
    {
      if ( a2 )
      {
        v13 = -1073741584;
        goto LABEL_44;
      }
      LODWORD(v16) = 0;
      goto LABEL_16;
    }
    if ( a2 == (void *)-1LL )
    {
      LODWORD(v15) = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    else if ( a2 != (void *)-2LL )
    {
      v13 = ObReferenceObjectByHandle(a2, v11, MmPartitionObjectType, v12, &v57, 0LL);
      v54 = v57;
      if ( v13 < 0 )
        goto LABEL_44;
      v16 = *(_QWORD *)v57;
LABEL_16:
      if ( !a3 )
      {
        if ( !LODWORD(Src[0]) )
        {
          v17 = KeNumberNodes;
          v49 = KeNumberNodes;
          v18 = HIDWORD(Src[0]);
          if ( (HIDWORD(Src[0]) == -1 || HIDWORD(Src[0]) < (unsigned __int16)KeNumberNodes) && LODWORD(Src[1]) == -1 )
          {
            v13 = 0;
            do
            {
              if ( v18 == -1 )
              {
                HIDWORD(Src[1]) = v17;
                Src[2] = ProcessPartition[728];
                Src[3] = ProcessPartition[766];
                Src[4] = ProcessPartition[781];
                Src[5] = ProcessPartition[616];
                v19 = 0LL;
                if ( ProcessPartition == &MiSystemPartition )
                  v19 = qword_14036C900;
                Src[28] = v19;
                MiQueryMemoryListInformation(ProcessPartition, v60);
                *(_OWORD *)&Src[11] = v61;
                *(_OWORD *)&Src[13] = v62;
                *(_OWORD *)&Src[15] = v63;
                *(_OWORD *)&Src[17] = v64;
                *(_OWORD *)&Src[19] = v65;
                *(_OWORD *)&Src[21] = v66;
                *(_OWORD *)&Src[23] = v67;
                *(_OWORD *)&Src[25] = v68;
                Src[27] = ProcessPartition[617];
                v20 = Src[27];
                if ( Src[4] > Src[27] )
                  v20 = Src[4];
                Src[27] = v20;
                v21 = Src[5];
                v22 = Src[3];
                if ( Src[5] < Src[3] )
                  v21 = Src[3];
                Src[5] = v21;
                if ( Src[3] > Src[4] )
                  v22 = Src[4];
                Src[3] = v22;
                v23 = 0;
                v17 = KeNumberNodes;
                v49 = KeNumberNodes;
                v24 = (unsigned __int16)KeNumberNodes;
                v18 = HIDWORD(Src[0]);
              }
              else
              {
                HIDWORD(Src[1]) = 0;
                memset(&Src[2], 0, 32);
                memset(&Src[11], 0, 144);
                v18 = HIDWORD(Src[0]);
                v23 = HIDWORD(Src[0]);
                v24 = HIDWORD(Src[0]) + 1;
                v17 = v49;
              }
              memset(&Src[8], 0, 24);
              v25 = 0LL;
              Src[6] = 0LL;
              if ( v23 < v24 )
              {
                v26 = (_QWORD *)(ProcessPartition[6] + 2184LL * v23 + 2056);
                v27 = v24;
                do
                {
                  MiGetChannelInformation(ProcessPartition, v23, v69, v58);
                  if ( (unsigned int)(v58[0] / 0x28uLL) )
                  {
                    v28 = &v70;
                    v29 = (unsigned int)(v58[0] / 0x28uLL);
                    do
                    {
                      Src[8] += *((_QWORD *)v28 - 1);
                      Src[9] += *(_QWORD *)v28;
                      Src[10] += *((_QWORD *)v28 + 1);
                      v28 += 40;
                      --v29;
                    }
                    while ( v29 );
                  }
                  v25 = *v26 + Src[6];
                  Src[6] = v25;
                  v26 += 273;
                  ++v23;
                }
                while ( v23 < v27 );
                v18 = HIDWORD(Src[0]);
                v17 = KeNumberNodes;
                v49 = KeNumberNodes;
              }
              if ( v18 == -1 )
              {
                Src[10] = 0LL;
                v30 = &Src[11];
                v31 = 8LL;
                do
                {
                  Src[10] += *v30++;
                  --v31;
                }
                while ( v31 );
              }
              Src[7] = Src[8] + Src[9] + Src[10];
            }
            while ( Src[7] > v25 );
            v6 = a4;
            if ( AccessMode )
            {
              ProbeForWrite(a4, (unsigned int)Size, 8u);
              memmove(a4, Src, (unsigned int)Size);
              goto LABEL_44;
            }
LABEL_144:
            memmove(v6, Src, (unsigned int)Size);
            goto LABEL_44;
          }
        }
        goto LABEL_140;
      }
      v33 = a3 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 != 1 )
              {
                v13 = -1073741821;
                goto LABEL_44;
              }
              if ( LODWORD(Src[0]) && (Src[0] & 0xFFFFFFFE) == 0 )
              {
                v37 = v12 ? WORD2(Src[0]) & 0x1DF2 : HIDWORD(Src[0]) & 0x11FF2;
                if ( v37 == HIDWORD(Src[0]) )
                {
                  memset(&Src[2], 0, 24);
                  v13 = 0;
                  if ( (Src[0] & 1) != 0 )
                  {
                    v13 = ObOpenObjectByPointer(
                            (PVOID)ProcessPartition[41],
                            HIDWORD(Src[0]),
                            0LL,
                            Src[1],
                            (POBJECT_TYPE)ExEventObjectType,
                            v12,
                            (PHANDLE)&Src[2]);
                    if ( v13 >= 0 )
                    {
                      v13 = ObOpenObjectByPointer(
                              (PVOID)ProcessPartition[42],
                              HIDWORD(Src[0]),
                              0LL,
                              Src[1],
                              (POBJECT_TYPE)ExEventObjectType,
                              v12,
                              (PHANDLE)&Src[3]);
                      if ( v13 >= 0 )
                        v13 = ObOpenObjectByPointer(
                                (PVOID)ProcessPartition[43],
                                HIDWORD(Src[0]),
                                0LL,
                                Src[1],
                                (POBJECT_TYPE)ExEventObjectType,
                                v12,
                                (PHANDLE)&Src[4]);
                    }
                  }
                  if ( v13 < 0 )
                  {
                    if ( Src[2] )
                      ObCloseHandle((HANDLE)Src[2], v12);
                    if ( Src[3] )
                      ObCloseHandle((HANDLE)Src[3], v12);
                    if ( Src[4] )
                      ObCloseHandle((HANDLE)Src[4], v12);
                    goto LABEL_44;
                  }
                  if ( v12 )
                  {
                    ProbeForWrite(v6, (unsigned int)Size, 8u);
                    memmove(v6, Src, (unsigned int)Size);
                    goto LABEL_44;
                  }
                  goto LABEL_144;
                }
              }
LABEL_140:
              v13 = -1073741811;
              goto LABEL_44;
            }
            if ( (Src[0] & 0xFFFFFFFC) != 0 || (Src[0] & 3) == 0 || !HIDWORD(Src[0]) )
              goto LABEL_140;
            v38 = (SIZE_T)(v6 + 4);
            if ( v12 )
            {
              v39 = 16LL * HIDWORD(Src[0]);
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v39, 0x6148694Du);
              if ( !PoolWithTag )
              {
                v13 = -1073741670;
                goto LABEL_44;
              }
              if ( v39 )
              {
                if ( (v38 & 7) != 0 )
                  ExRaiseDatatypeMisalignment();
                if ( v38 + v39 > 0x7FFFFFFF0000LL || v38 + v39 < v38 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(PoolWithTag, v6 + 4, v39);
            }
            else
            {
              PoolWithTag = v6 + 4;
            }
            v13 = MiHotAddPartitionMemory(ProcessPartition, PoolWithTag, Src);
            if ( PoolWithTag != v6 + 4 )
              ExFreePoolWithTag(PoolWithTag, 0);
            if ( v13 < 0 )
              goto LABEL_44;
            v41 = v6 + 2;
            if ( v12 )
            {
              v42 = (__int64)v41;
              if ( (unsigned __int64)v41 >= 0x7FFFFFFF0000LL )
                v42 = 0x7FFFFFFF0000LL;
              *(_QWORD *)v42 = *(_QWORD *)v42;
              *v41 = Src[1];
              goto LABEL_44;
            }
            v43 = Src[1];
          }
          else
          {
            if ( (Src[1] & 1) != 0 && ProcessPartition != &MiSystemPartition )
            {
              v13 = -1073741585;
              goto LABEL_44;
            }
            LOBYTE(Object) = v12;
            v13 = MiCombineIdenticalPages(ProcessPartition, Src[0], LODWORD(Src[1]), 0LL, Object, &v52);
            if ( v13 < 0 )
              goto LABEL_44;
            v41 = v6 + 4;
            if ( v12 )
            {
              v44 = (__int64)v41;
              if ( (unsigned __int64)v41 >= 0x7FFFFFFF0000LL )
                v44 = 0x7FFFFFFF0000LL;
              *(_QWORD *)v44 = *(_QWORD *)v44;
              *v41 = v52;
              goto LABEL_44;
            }
            v43 = v52;
          }
          *v41 = v43;
          goto LABEL_44;
        }
        v55 = v6[8];
        LOBYTE(v10) = v12;
        PagingFile = MiCreatePagingFile(v6, v6 + 4, v6 + 6, v10, v55, ProcessPartition);
      }
      else
      {
        v46 = Src[0];
        if ( !Src[0] )
        {
          v13 = 0;
          goto LABEL_44;
        }
        v47 = Src[1];
        if ( LODWORD(Src[1]) == -1 )
        {
          v47 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
          v46 = Src[0];
        }
        else if ( LODWORD(Src[1]) >= (unsigned __int16)KeNumberNodes )
        {
          goto LABEL_140;
        }
        if ( (Src[1] & 0xFFFFFFF800000000uLL) != 0 )
          goto LABEL_140;
        PagingFile = MiAllocatePartitionPhysicalPages(v16, (_DWORD)ProcessPartition, v46, v47, HIDWORD(Src[1]));
      }
      v13 = PagingFile;
      goto LABEL_44;
    }
    LODWORD(v16) = (_DWORD)v15;
    goto LABEL_16;
  }
  v13 = ObReferenceObjectByHandle(Handle, v11, MmPartitionObjectType, v12, &v56, 0LL);
  v53 = v56;
  if ( v13 >= 0 )
  {
    ProcessPartition = *(ULONG_PTR **)v56;
LABEL_12:
    v15 = &MiSystemPartition;
    goto LABEL_13;
  }
LABEL_44:
  if ( v53 )
    ObfDereferenceObject(v53);
  if ( v54 )
    ObfDereferenceObject(v54);
  return (unsigned int)v13;
}
