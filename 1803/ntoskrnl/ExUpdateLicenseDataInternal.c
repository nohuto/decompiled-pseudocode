/*
 * XREFs of ExUpdateLicenseDataInternal @ 0x140548390
 * Callers:
 *     ExUpdateLicenseData @ 0x1407BE0F0 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExpLicUpdateChecksum @ 0x1400A18F0 (ExpLicUpdateChecksum.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401A7E00 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     sub_140548DF0 @ 0x140548DF0 (sub_140548DF0.c)
 *     ExpSetKernelDataProtection @ 0x140548EB4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14054A388 (ExpGetKernelDataProtection.c)
 *     sub_14054B4E0 @ 0x14054B4E0 (sub_14054B4E0.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 *     sub_14054B65C @ 0x14054B65C (sub_14054B65C.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14054B684 (ExpPutLicenseDataIntoRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     sub_1407BE424 @ 0x1407BE424 (sub_1407BE424.c)
 */

__int64 __fastcall ExUpdateLicenseDataInternal(int a1, unsigned int *a2)
{
  void *v4; // r12
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  char *v8; // rdi
  char v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v11; // cl
  unsigned int v12; // edx
  int v13; // r14d
  NTSTATUS v14; // edi
  PVOID v15; // r12
  unsigned int *v16; // r12
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  struct _KTHREAD *v19; // rax
  unsigned int v20; // edi
  PVOID PoolWithTag; // rax
  void *v22; // rsi
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // ecx
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int16 v31; // ax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // r9
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // eax
  char v44; // r12
  char v45; // al
  __int64 v46; // rcx
  int v47; // esi
  struct _KTHREAD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  char v52; // al
  struct _KTHREAD *v54; // rax
  int v55; // eax
  int KernelDataProtection; // eax
  __int64 v57; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  unsigned int v62; // ecx
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  unsigned int v68; // ecx
  unsigned __int64 v69; // rax
  int v70; // eax
  unsigned int v71; // ecx
  unsigned __int64 v72; // rax
  int v73; // eax
  struct _KTHREAD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  unsigned int v79; // ecx
  unsigned __int64 v80; // rax
  __int64 v81; // rcx
  NTSTATUS v82; // [rsp+40h] [rbp-3D8h]
  char v83; // [rsp+44h] [rbp-3D4h]
  bool v84; // [rsp+45h] [rbp-3D3h]
  char v85; // [rsp+46h] [rbp-3D2h]
  int v86; // [rsp+48h] [rbp-3D0h]
  _DWORD NumOfElements[3]; // [rsp+4Ch] [rbp-3CCh] BYREF
  unsigned int v88; // [rsp+58h] [rbp-3C0h]
  int v89; // [rsp+5Ch] [rbp-3BCh]
  PVOID P; // [rsp+60h] [rbp-3B8h]
  PVOID MappedBase; // [rsp+68h] [rbp-3B0h] BYREF
  void *Src; // [rsp+70h] [rbp-3A8h]
  int v93; // [rsp+78h] [rbp-3A0h]
  PVOID v94; // [rsp+80h] [rbp-398h]
  PVOID v95; // [rsp+88h] [rbp-390h]
  PVOID v96; // [rsp+90h] [rbp-388h]
  LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp-380h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-378h] BYREF
  __int128 v99; // [rsp+B0h] [rbp-368h] BYREF
  __int128 v100; // [rsp+C0h] [rbp-358h]
  __int128 v101; // [rsp+D0h] [rbp-348h]
  __int128 v102; // [rsp+E0h] [rbp-338h] BYREF
  __int128 v103; // [rsp+F0h] [rbp-328h]
  __int128 v104; // [rsp+100h] [rbp-318h]
  __int128 v105; // [rsp+110h] [rbp-308h] BYREF
  __int128 v106; // [rsp+120h] [rbp-2F8h]
  __int128 v107; // [rsp+130h] [rbp-2E8h]
  __int128 v108; // [rsp+140h] [rbp-2D8h] BYREF
  __int128 v109; // [rsp+150h] [rbp-2C8h]
  __int128 v110; // [rsp+160h] [rbp-2B8h]
  __int128 v111; // [rsp+170h] [rbp-2A8h] BYREF
  __int128 v112; // [rsp+180h] [rbp-298h]
  __int128 v113; // [rsp+190h] [rbp-288h]
  __int128 v114; // [rsp+1A0h] [rbp-278h] BYREF
  __int128 v115; // [rsp+1B0h] [rbp-268h]
  __int128 v116; // [rsp+1C0h] [rbp-258h]
  __int64 v117; // [rsp+1D0h] [rbp-248h]
  int v118; // [rsp+1D8h] [rbp-240h]
  PVOID Object; // [rsp+1E0h] [rbp-238h] BYREF
  ULONG_PTR ViewSize; // [rsp+1E8h] [rbp-230h] BYREF
  __int128 v121; // [rsp+1F0h] [rbp-228h] BYREF
  __int128 v122; // [rsp+200h] [rbp-218h]
  __int128 v123; // [rsp+210h] [rbp-208h]
  _OWORD v124[3]; // [rsp+220h] [rbp-1F8h] BYREF
  _OWORD v125[3]; // [rsp+250h] [rbp-1C8h] BYREF
  _OWORD v126[3]; // [rsp+280h] [rbp-198h] BYREF
  _OWORD v127[3]; // [rsp+2B0h] [rbp-168h] BYREF
  __int64 v128; // [rsp+2E0h] [rbp-138h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2E8h] [rbp-130h] BYREF
  _BYTE v130[8]; // [rsp+318h] [rbp-100h] BYREF
  int v131; // [rsp+320h] [rbp-F8h]
  _BYTE v132[8]; // [rsp+348h] [rbp-D0h] BYREF
  int v133; // [rsp+350h] [rbp-C8h]
  _BYTE v134[48]; // [rsp+378h] [rbp-A0h] BYREF
  _BYTE v135[8]; // [rsp+3A8h] [rbp-70h] BYREF
  int v136; // [rsp+3B0h] [rbp-68h]
  char v137; // [rsp+428h] [rbp+10h]
  char v138; // [rsp+430h] [rbp+18h]

  v84 = 0;
  v137 = 0;
  v85 = 0;
  v138 = 0;
  MappedBase = 0LL;
  v96 = 0LL;
  v94 = 0LL;
  v4 = 0LL;
  memset(NumOfElements, 0, sizeof(NumOfElements));
  P = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_199;
  v5 = *a2;
  if ( *a2 > 0x10000 || (v6 = a2[1], (unsigned int)v6 > 0x10000) || (v7 = a2[2], v7 > 0x10000) )
  {
    v82 = -1073741760;
    v47 = -1073741811;
    goto LABEL_200;
  }
  v95 = a2 + 5;
  v8 = (char *)a2 + v6 + 20;
  Src = v8;
  if ( ((unsigned __int8)v8 & 3) != 0 )
  {
    v82 = -1073741811;
    v47 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
LABEL_200:
    v9 = 1;
    goto LABEL_201;
  }
  if ( v7 + (_DWORD)v6 + 20 != v5 )
  {
LABEL_199:
    v47 = -1073741811;
    v82 = -1073741811;
    goto LABEL_200;
  }
  v9 = 1;
  if ( v5 != a1 || a2[4] != 1 )
  {
    v47 = -1073741811;
    v82 = -1073741811;
    goto LABEL_201;
  }
  v82 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( off_140861030 )
  {
    v11 = 1;
    v137 = 1;
  }
  else
  {
    v85 = 1;
    v11 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v11 )
    {
      v82 = -1073741823;
      goto LABEL_32;
    }
  }
  else if ( !v11 && (a2[3] & 1) != 0 )
  {
    v82 = -1073741811;
    goto LABEL_32;
  }
  v84 = 0;
  if ( !v11 )
  {
    if ( Data )
    {
      if ( !BYTE1(NlsMbCodePageTag) && *a2 == *(_DWORD *)Data )
      {
        v12 = a2[1];
        if ( v12 == *((_DWORD *)Data + 1)
          && a2[2] == *((_DWORD *)Data + 2)
          && a2[3] == *((_DWORD *)Data + 3)
          && a2[4] == *((_DWORD *)Data + 4)
          && RtlCompareMemory((char *)Data + 20, a2 + 5, v12) == a2[1] )
        {
          v84 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v8, a2[2]) == a2[2];
        }
      }
    }
  }
LABEL_32:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v82 < 0 )
  {
    v47 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
LABEL_201:
    v13 = 4;
    goto LABEL_102;
  }
  if ( v84 )
  {
    v54 = KeGetCurrentThread();
    --v54->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v124);
      if ( KernelDataProtection < 0 )
      {
        v13 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v99 = 0LL;
            v100 = 0uLL;
            DWORD2(v99) = 4;
            *(_QWORD *)&v101 = 0LL;
            BYTE8(v101) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v99);
            if ( !updated )
            {
              if ( (_DWORD)v57 )
              {
                v59 = 16LL * (unsigned int)v57;
                updated = v59 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v59 <= 0xFFFFFFFF )
                  updated = ExpLicUpdateChecksum((__int64)qword_140863E00, v57, &v99);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v99 = 0LL;
              DWORD2(v99) = 4;
            }
            v124[0] = v99;
            v124[1] = v100;
            v124[2] = v101;
            v60 = 0;
          }
          else
          {
            v60 = -1073741811;
          }
          if ( v60 >= 0 )
          {
            DWORD2(v124[0]) = 4;
            ExpSetKernelDataProtection(v124, 0xFFFFFFFFLL, 0LL);
          }
        }
        v86 = 4;
        goto LABEL_138;
      }
      v55 = DWORD2(v124[0]);
    }
    else
    {
      v55 = dword_1408610C8;
    }
    v86 = v55;
    v13 = 4;
LABEL_138:
    *(_QWORD *)&v102 = 0LL;
    v103 = 0uLL;
    DWORD2(v102) = 0;
    *(_QWORD *)&v104 = 10800LL;
    BYTE8(v104) = 1;
    v62 = ExpLicUpdateChecksum((__int64)v95, (unsigned int)::NumOfElements, &v102);
    if ( !v62 )
    {
      if ( (_DWORD)v61 )
      {
        v63 = 16LL * (unsigned int)v61;
        v62 = v63 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v63 <= 0xFFFFFFFF )
          v62 = ExpLicUpdateChecksum((__int64)qword_140863E00, v61, &v102);
      }
    }
    if ( v62 )
    {
      *(_QWORD *)&v102 = 0LL;
      DWORD2(v102) = 4;
    }
    v121 = v102;
    v122 = v103;
    v123 = v104;
    ExpSetKernelDataProtection(&v121, 7LL, 1LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v64, v65, v66);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v86 )
      ((void (*)(void))sub_14054B65C)();
    v82 = 0x40000000;
    goto LABEL_149;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v13 = 4;
  v82 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v82 < 0 )
    goto LABEL_152;
  v14 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v15 = Object;
  v94 = Object;
  v82 = v14;
  ZwClose(SectionHandle);
  if ( v14 < 0 )
    goto LABEL_152;
  ViewSize = 0LL;
  v82 = MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize);
  if ( v82 < 0 )
    goto LABEL_152;
  v16 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v16[4] = a2[4];
  memmove(v16 + 5, a2 + 5, a2[1]);
  memmove((char *)v16 + a2[1] + 20, Src, a2[2]);
  v18 = (unsigned int *)((char *)v16 + v16[1] + 20);
  if ( v16[2] != 4 || !v18 || *v18 != 69 )
  {
    v82 = -1073741761;
    goto LABEL_152;
  }
  LOBYTE(v17) = 1;
  v82 = sub_14054B4E0(v16, v17, 0LL, 0LL, NumOfElements);
  if ( v82 != -1073741789 )
    goto LABEL_49;
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  v82 = NumOfElements[0] > 0x923u ? 0xC000000D : 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v82 < 0 )
  {
LABEL_152:
    v47 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
    goto LABEL_102;
  }
  v20 = NumOfElements[0];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * NumOfElements[0], 0x20534C53u);
  v22 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v82 = -1073741801;
    v47 = -1073741811;
    v4 = 0LL;
    goto LABEL_102;
  }
  v82 = sub_14054B4E0(MappedBase, 0LL, PoolWithTag, NumOfElements[0], 0LL);
  if ( v82 >= 0 )
    qsort(v22, v20, 0x10uLL, sub_140548DF0);
LABEL_49:
  if ( v82 < 0 )
  {
    v47 = -1073741811;
    if ( v82 == -1073741762 )
      v82 = -1073741811;
    goto LABEL_157;
  }
  v83 = 0;
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140862420, 0LL);
  if ( !v137 )
  {
    v24 = 0;
    v89 = 0;
    v25 = 0;
    v88 = 0;
    while ( v24 < NumOfElements[0] && v25 < (unsigned int)::NumOfElements )
    {
      v26 = 2LL * v25;
      v27 = (char *)P + 16 * v24;
      v28 = sub_140548DF0(v27, &qword_140863E00[2 * v25]);
      v118 = v28;
      v29 = v27[1];
      v117 = v29;
      v30 = qword_140863E00[v26 + 1];
      v128 = v30;
      if ( v28 < 0 )
      {
        if ( (*(_DWORD *)(v29 + 8) & 2) != 0 )
          goto LABEL_61;
        v89 = ++v24;
        v25 = v88;
      }
      else
      {
        if ( v28 <= 0 )
        {
          if ( (*(_DWORD *)(v29 + 8) & 2) != 0 )
          {
            v31 = *(_WORD *)(v30 + 6);
            if ( *(_WORD *)(v29 + 6) != v31
              || memcmp(
                   (const void *)(*(unsigned __int16 *)(v29 + 2) + 16LL + v29),
                   (const void *)(*(unsigned __int16 *)(v30 + 2) + 16LL + v30),
                   v31) )
            {
LABEL_61:
              v83 = 1;
              goto LABEL_67;
            }
          }
          v89 = ++v24;
        }
        v25 = ++v88;
      }
    }
    while ( v24 < NumOfElements[0] )
    {
      v117 = *((_QWORD *)P + 2 * v24 + 1);
      if ( (*(_DWORD *)(v117 + 8) & 2) != 0 )
        goto LABEL_61;
      v89 = ++v24;
    }
  }
LABEL_67:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140862420, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140862420);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfReferenceObject(v94);
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
  v95 = MappedBase;
  v35 = 0LL;
  if ( !MappedBase )
  {
    LODWORD(v36) = NumOfElements[0];
LABEL_160:
    v38 = -1073741811;
    goto LABEL_79;
  }
  v36 = NumOfElements[0];
  v33 = (__int64)P;
  if ( NumOfElements[0] && !P )
    goto LABEL_160;
  *(_QWORD *)&v105 = 0LL;
  v106 = 0uLL;
  DWORD2(v105) = 0;
  *(_QWORD *)&v107 = 10800LL;
  BYTE8(v107) = 1;
  v37 = ExpLicUpdateChecksum((__int64)MappedBase + 20, (__int64)P, &v105);
  if ( !v37 )
  {
    if ( (_DWORD)v36 )
    {
      v37 = (unsigned __int64)(16 * v36) > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( (unsigned __int64)(16 * v36) <= 0xFFFFFFFF )
        v37 = ExpLicUpdateChecksum(v33, v33, &v105);
    }
  }
  if ( v37 )
  {
    *(_QWORD *)&v105 = v35;
    DWORD2(v105) = 4;
  }
  v121 = v105;
  v122 = v106;
  v123 = v107;
  v38 = v35;
LABEL_79:
  LODWORD(Src) = v38;
  v82 = v38;
  if ( v38 < 0 )
    goto LABEL_92;
  ExpSetKernelDataProtection(&v121, 7LL, 1LL);
  *(_QWORD *)&NumOfElements[1] = qword_1408629B0;
  v96 = Data;
  qword_1408629B0 = (__int64)v94;
  Data = v95;
  MappedBase = 0LL;
  off_140861030 = 0LL;
  v138 = BYTE1(NlsMbCodePageTag);
  BYTE1(NlsMbCodePageTag) = 0;
  memset(qword_140863E00, 0, 16LL * (unsigned int)::NumOfElements);
  LODWORD(v39) = 0;
  LODWORD(::NumOfElements) = 0;
  if ( P )
  {
    memmove(qword_140863E00, P, 16LL * (unsigned int)v36);
    LODWORD(::NumOfElements) = v36;
    LODWORD(v39) = 0;
  }
  BYTE6(NlsMbCodePageTag) = 1;
  if ( !v95 )
  {
    v41 = dword_1408610C8;
    goto LABEL_85;
  }
  v40 = ExpGetKernelDataProtection(v125);
  LODWORD(v39) = 0;
  if ( v40 >= 0 )
  {
    v41 = DWORD2(v125[0]);
LABEL_85:
    v93 = v41;
    goto LABEL_86;
  }
  if ( v40 == -1073741275 )
  {
    if ( Data )
    {
      *(_QWORD *)&v108 = 0LL;
      v109 = 0uLL;
      DWORD2(v108) = 4;
      *(_QWORD *)&v110 = 0LL;
      BYTE8(v110) = 1;
      v68 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v108);
      if ( !v68 )
      {
        if ( (_DWORD)v67 )
        {
          v69 = 16LL * (unsigned int)v67;
          v68 = v69 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v69 <= 0xFFFFFFFF )
            v68 = ExpLicUpdateChecksum((__int64)qword_140863E00, v67, &v108);
        }
      }
      if ( v68 )
      {
        *(_QWORD *)&v108 = v39;
        DWORD2(v108) = 4;
      }
      v125[0] = v108;
      v125[1] = v109;
      v125[2] = v110;
      v70 = v39;
    }
    else
    {
      v70 = -1073741811;
    }
    if ( v70 >= 0 )
    {
      DWORD2(v125[0]) = 4;
      ExpSetKernelDataProtection(v125, 0xFFFFFFFFLL, 0LL);
      LODWORD(v39) = 0;
    }
  }
  v41 = 4;
  v93 = 4;
LABEL_86:
  if ( (*((_DWORD *)Data + 3) & 1) != 0 )
  {
    dword_1408610C8 = 2;
    v131 = 2;
    ExpSetKernelDataProtection(v130, 2LL, 0LL);
    v85 = 1;
  }
  else
  {
    dword_1408610C8 = v39;
    v133 = v39;
    ExpSetKernelDataProtection(v132, 2LL, 0LL);
  }
  v35 = 0LL;
  if ( Data )
  {
    v42 = ExpGetKernelDataProtection(v126);
    v35 = 0LL;
    if ( v42 < 0 )
    {
      if ( v42 == -1073741275 )
      {
        v33 = (unsigned int)::NumOfElements;
        if ( Data )
        {
          *(_QWORD *)&v111 = 0LL;
          v112 = 0uLL;
          DWORD2(v111) = 4;
          *(_QWORD *)&v113 = 0LL;
          BYTE8(v113) = 1;
          v71 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v111);
          if ( !v71 )
          {
            if ( (_DWORD)v33 )
            {
              v72 = 16LL * (unsigned int)v33;
              v71 = v72 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( v72 <= 0xFFFFFFFF )
                v71 = ExpLicUpdateChecksum((__int64)qword_140863E00, v33, &v111);
            }
          }
          if ( v71 )
          {
            *(_QWORD *)&v111 = v35;
            DWORD2(v111) = 4;
          }
          v126[0] = v111;
          v126[1] = v112;
          v126[2] = v113;
          v73 = v35;
        }
        else
        {
          v73 = -1073741811;
        }
        if ( v73 >= 0 )
        {
          DWORD2(v126[0]) = 4;
          ExpSetKernelDataProtection(v126, 0xFFFFFFFFLL, 0LL);
          v35 = 0LL;
        }
      }
      v43 = 4;
    }
    else
    {
      v43 = DWORD2(v126[0]);
    }
  }
  else
  {
    v43 = dword_1408610C8;
  }
  if ( v41 != v43 && (!v41 || !v43) )
  {
    v44 = 1;
    goto LABEL_93;
  }
LABEL_92:
  v44 = v35;
LABEL_93:
  v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v45 & 2) != 0 && (v45 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v33, v34, v35);
  KeAbPostRelease((ULONG_PTR)&qword_140862420);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (int)Src < 0 )
  {
LABEL_149:
    v47 = -1073741811;
    v4 = *(void **)&NumOfElements[1];
    goto LABEL_102;
  }
  if ( !v137 )
  {
    v82 = ExpPutLicenseDataIntoRegistry();
    v46 = 0LL;
    if ( v82 < 0 )
    {
      v47 = -1073741811;
LABEL_157:
      v4 = *(void **)&NumOfElements[1];
      goto LABEL_102;
    }
  }
  if ( v44 || !v137 )
    sub_14054B65C(v46);
  v82 = 0;
  v47 = -1073741811;
  v4 = *(void **)&NumOfElements[1];
  if ( v83 == 1 )
    v82 = 263;
LABEL_102:
  if ( v138 && !BYTE1(NlsMbCodePageTag) )
    sub_1407BE424(&KernelLicensingCacheCorruptionFixed);
  if ( v85 )
  {
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    v134[40] = 0;
    ExpSetKernelDataProtection(v134, 32LL, 0LL);
    v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v52 & 2) != 0 && (v52 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v49, v50, v51);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v94 )
    ObfDereferenceObject(v94);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v96 )
    MmUnmapViewInSystemSpace(v96);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v82 == -1073741811 || (unsigned int)(v82 + 1073741761) <= 1 )
  {
    v74 = KeGetCurrentThread();
    --v74->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140862420, 0LL);
    if ( Data )
    {
      v78 = ExpGetKernelDataProtection(v127);
      if ( v78 < 0 )
      {
        if ( v78 == -1073741275 )
        {
          v75 = (unsigned int)::NumOfElements;
          if ( Data )
          {
            *(_QWORD *)&v114 = 0LL;
            v115 = 0uLL;
            DWORD2(v114) = 4;
            *(_QWORD *)&v116 = 0LL;
            BYTE8(v116) = 1;
            v79 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v114);
            if ( !v79 )
            {
              if ( (_DWORD)v75 )
              {
                v80 = 16LL * (unsigned int)v75;
                v79 = v80 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v80 <= 0xFFFFFFFF )
                  v79 = ExpLicUpdateChecksum((__int64)qword_140863E00, v75, &v114);
              }
            }
            if ( v79 )
            {
              *(_QWORD *)&v114 = 0LL;
              DWORD2(v114) = 4;
            }
            v127[0] = v114;
            v127[1] = v115;
            v127[2] = v116;
            v47 = 0;
          }
          if ( v47 >= 0 )
          {
            DWORD2(v127[0]) = 4;
            ExpSetKernelDataProtection(v127, 0xFFFFFFFFLL, 0LL);
          }
        }
      }
      else
      {
        v13 = DWORD2(v127[0]);
      }
    }
    else
    {
      v13 = dword_1408610C8;
    }
    if ( v13 )
    {
      v9 = 0;
    }
    else
    {
      dword_1408610C8 = 5;
      v136 = 5;
      ExpSetKernelDataProtection(v135, 2LL, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140862420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140862420, v75, v76, v77);
    KeAbPostRelease((ULONG_PTR)&qword_140862420);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
      sub_14054B65C(v81);
  }
  return (unsigned int)v82;
}
