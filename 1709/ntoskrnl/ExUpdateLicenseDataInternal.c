/*
 * XREFs of ExUpdateLicenseDataInternal @ 0x1404F3810
 * Callers:
 *     ExUpdateLicenseData @ 0x140757470 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExpLicUpdateChecksum @ 0x1400B5B00 (ExpLicUpdateChecksum.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateSection @ 0x14017E200 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404F33D8 (ExpPutLicenseDataIntoRegistry.c)
 *     sub_1404F34C8 @ 0x1404F34C8 (sub_1404F34C8.c)
 *     sub_1404F4410 @ 0x1404F4410 (sub_1404F4410.c)
 *     ExpSetKernelDataProtection @ 0x1404F44AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1404F49A0 (ExpGetKernelDataProtection.c)
 *     sub_1404F4DA0 @ 0x1404F4DA0 (sub_1404F4DA0.c)
 *     MmMapViewInSystemSpace @ 0x1404F6020 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 *     sub_1407576E4 @ 0x1407576E4 (sub_1407576E4.c)
 */

__int64 __fastcall ExUpdateLicenseDataInternal(int a1, unsigned int *a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  unsigned int v6; // r9d
  char *v7; // r14
  char v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v10; // cl
  unsigned int v11; // edx
  signed int v12; // r12d
  int v13; // r14d
  NTSTATUS v14; // edi
  PVOID v15; // r13
  unsigned int *v16; // rdi
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
  __int64 v33; // rsi
  __int64 v34; // rdx
  signed int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // r9
  int v38; // eax
  int v39; // esi
  __int64 v40; // r9
  int v41; // eax
  int v42; // eax
  char v43; // al
  struct _KTHREAD *v44; // rax
  char v45; // al
  struct _KTHREAD *v47; // rax
  int KernelDataProtection; // eax
  int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // ecx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  signed int updated; // ecx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  signed int v57; // ecx
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  signed int v60; // ecx
  unsigned __int64 v61; // rax
  struct _KTHREAD *v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  signed int v66; // [rsp+40h] [rbp-3D8h]
  char v67; // [rsp+44h] [rbp-3D4h]
  bool v68; // [rsp+45h] [rbp-3D3h]
  char v69; // [rsp+46h] [rbp-3D2h]
  int v70; // [rsp+48h] [rbp-3D0h]
  unsigned int NumOfElements; // [rsp+4Ch] [rbp-3CCh] BYREF
  unsigned int NumOfElements_4; // [rsp+50h] [rbp-3C8h]
  void *Src; // [rsp+58h] [rbp-3C0h]
  unsigned int v74; // [rsp+60h] [rbp-3B8h]
  PVOID P; // [rsp+68h] [rbp-3B0h]
  PVOID MappedBase; // [rsp+70h] [rbp-3A8h] BYREF
  int v77; // [rsp+78h] [rbp-3A0h]
  PVOID v78; // [rsp+80h] [rbp-398h]
  PVOID v79; // [rsp+88h] [rbp-390h]
  PVOID v80; // [rsp+90h] [rbp-388h]
  LARGE_INTEGER MaximumSize; // [rsp+98h] [rbp-380h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-378h] BYREF
  PVOID v83; // [rsp+A8h] [rbp-370h]
  __int128 v84; // [rsp+B8h] [rbp-360h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-350h]
  __int128 v86; // [rsp+D8h] [rbp-340h]
  __int128 v87; // [rsp+E8h] [rbp-330h] BYREF
  __int128 v88; // [rsp+F8h] [rbp-320h]
  __int128 v89; // [rsp+108h] [rbp-310h]
  __int128 v90; // [rsp+118h] [rbp-300h] BYREF
  __int128 v91; // [rsp+128h] [rbp-2F0h]
  __int128 v92; // [rsp+138h] [rbp-2E0h]
  __int128 v93; // [rsp+148h] [rbp-2D0h] BYREF
  __int128 v94; // [rsp+158h] [rbp-2C0h]
  __int128 v95; // [rsp+168h] [rbp-2B0h]
  __int128 v96; // [rsp+178h] [rbp-2A0h] BYREF
  __int128 v97; // [rsp+188h] [rbp-290h]
  __int128 v98; // [rsp+198h] [rbp-280h]
  __int128 v99; // [rsp+1A8h] [rbp-270h] BYREF
  __int128 v100; // [rsp+1B8h] [rbp-260h]
  __int128 v101; // [rsp+1C8h] [rbp-250h]
  __int64 v102; // [rsp+1D8h] [rbp-240h]
  int v103; // [rsp+1E0h] [rbp-238h]
  PVOID Object; // [rsp+1E8h] [rbp-230h] BYREF
  ULONG_PTR ViewSize; // [rsp+1F0h] [rbp-228h] BYREF
  __int128 v106; // [rsp+1F8h] [rbp-220h] BYREF
  __int128 v107; // [rsp+208h] [rbp-210h]
  __int128 v108; // [rsp+218h] [rbp-200h]
  _OWORD v109[3]; // [rsp+228h] [rbp-1F0h] BYREF
  _OWORD v110[3]; // [rsp+258h] [rbp-1C0h] BYREF
  _OWORD v111[3]; // [rsp+288h] [rbp-190h] BYREF
  _OWORD v112[3]; // [rsp+2B8h] [rbp-160h] BYREF
  __int64 v113; // [rsp+2E8h] [rbp-130h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2F0h] [rbp-128h] BYREF
  char v115[8]; // [rsp+320h] [rbp-F8h] BYREF
  int v116; // [rsp+328h] [rbp-F0h]
  char v117[8]; // [rsp+350h] [rbp-C8h] BYREF
  int v118; // [rsp+358h] [rbp-C0h]
  _BYTE v119[48]; // [rsp+380h] [rbp-98h] BYREF
  char v120[8]; // [rsp+3B0h] [rbp-68h] BYREF
  int v121; // [rsp+3B8h] [rbp-60h]
  char v122; // [rsp+428h] [rbp+10h]
  char v123; // [rsp+430h] [rbp+18h]
  char v124; // [rsp+438h] [rbp+20h]

  v68 = 0;
  v123 = 0;
  v122 = 0;
  v69 = 0;
  v124 = 0;
  MappedBase = 0LL;
  v80 = 0LL;
  v78 = 0LL;
  v83 = 0LL;
  NumOfElements = 0;
  P = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_194;
  v4 = *a2;
  if ( *a2 > 0x10000 || (v5 = a2[1], (unsigned int)v5 > 0x10000) || (v6 = a2[2], v6 > 0x10000) )
  {
    v66 = -1073741760;
    v12 = -1073741811;
    v8 = 1;
LABEL_196:
    v13 = 4;
    goto LABEL_105;
  }
  v79 = a2 + 5;
  v7 = (char *)a2 + v5 + 20;
  Src = v7;
  if ( ((unsigned __int8)v7 & 3) != 0 || v6 + (_DWORD)v5 + 20 != v4 )
  {
LABEL_194:
    v8 = 1;
LABEL_195:
    v12 = -1073741811;
    v66 = -1073741811;
    goto LABEL_196;
  }
  v8 = 1;
  if ( v4 != a1 || a2[4] != 1 )
    goto LABEL_195;
  v66 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
  if ( off_1407F3028 )
  {
    v10 = 1;
    v122 = 1;
  }
  else
  {
    v69 = 1;
    v10 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v10 )
    {
      v66 = -1073741823;
LABEL_27:
      v12 = -1073741811;
      goto LABEL_32;
    }
LABEL_17:
    v68 = 0;
    if ( !v10 )
    {
      if ( Data )
      {
        if ( !BYTE1(NlsMbCodePageTag) && *a2 == *(_DWORD *)Data )
        {
          v11 = a2[1];
          if ( v11 == *((_DWORD *)Data + 1)
            && a2[2] == *((_DWORD *)Data + 2)
            && a2[3] == *((_DWORD *)Data + 3)
            && a2[4] == *((_DWORD *)Data + 4)
            && RtlCompareMemory((char *)Data + 20, a2 + 5, v11) == a2[1] )
          {
            v68 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v7, a2[2]) == a2[2];
          }
        }
      }
    }
    goto LABEL_27;
  }
  if ( v10 || (a2[3] & 1) == 0 )
    goto LABEL_17;
  v12 = -1073741811;
  v66 = -1073741811;
LABEL_32:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
  KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v66 < 0 )
    goto LABEL_196;
  if ( v68 )
  {
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v109);
      if ( KernelDataProtection < 0 )
      {
        v13 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v84 = 0LL;
            v85 = 0uLL;
            DWORD2(v84) = 4;
            *(_QWORD *)&v86 = 0LL;
            BYTE8(v86) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v84);
            if ( !updated )
            {
              if ( (_DWORD)v53 )
              {
                v55 = 16LL * (unsigned int)v53;
                updated = v55 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v55 <= 0xFFFFFFFF )
                  updated = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v53, &v84);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v84 = 0LL;
              DWORD2(v84) = 4;
              updated = 0;
            }
            v109[0] = v84;
            v109[1] = v85;
            v109[2] = v86;
          }
          else
          {
            updated = -1073741811;
          }
          if ( updated >= 0 )
          {
            DWORD2(v109[0]) = 4;
            ExpSetKernelDataProtection(v109, 0xFFFFFFFFLL, 0LL);
          }
        }
        v70 = 4;
        goto LABEL_126;
      }
      v49 = DWORD2(v109[0]);
    }
    else
    {
      v49 = dword_1407F30C8;
    }
    v70 = v49;
    v13 = 4;
LABEL_126:
    *(_QWORD *)&v87 = 0LL;
    v88 = 0uLL;
    DWORD2(v87) = 0;
    *(_QWORD *)&v89 = 10800LL;
    BYTE8(v89) = 1;
    v51 = ExpLicUpdateChecksum((__int64)v79, (unsigned int)::NumOfElements, &v87);
    if ( !v51 )
    {
      if ( (_DWORD)v50 )
      {
        v52 = 16LL * (unsigned int)v50;
        v51 = v52 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v52 <= 0xFFFFFFFF )
          v51 = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v50, &v87);
      }
    }
    if ( v51 )
    {
      *(_QWORD *)&v87 = 0LL;
      DWORD2(v87) = 4;
    }
    v106 = v87;
    v107 = v88;
    v108 = v89;
    ExpSetKernelDataProtection(&v106, 7LL, 1LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v70 )
      sub_1404F34C8();
    v66 = 0x40000000;
    goto LABEL_105;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v13 = 4;
  v66 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v66 < 0 )
    goto LABEL_105;
  v14 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v15 = Object;
  v78 = Object;
  v66 = v14;
  ZwClose(SectionHandle);
  if ( v14 < 0 )
    goto LABEL_105;
  ViewSize = 0LL;
  v66 = MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize);
  if ( v66 < 0 )
    goto LABEL_105;
  v16 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v16[4] = a2[4];
  memmove(v16 + 5, a2 + 5, a2[1]);
  memmove((char *)v16 + a2[1] + 20, Src, a2[2]);
  v18 = (unsigned int *)((char *)v16 + v16[1] + 20);
  if ( v16[2] != 4 || !v18 || *v18 != 69 )
  {
    v66 = -1073741761;
    goto LABEL_105;
  }
  LOBYTE(v17) = 1;
  v66 = sub_1404F4DA0(v16, v17, 0LL, 0LL, &NumOfElements);
  if ( v66 == -1073741789 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    v66 = NumOfElements > 0x923 ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v66 < 0 )
      goto LABEL_105;
    v20 = NumOfElements;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * NumOfElements, 0x20534C53u);
    v22 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v66 = -1073741801;
      goto LABEL_105;
    }
    v66 = sub_1404F4DA0(MappedBase, 0LL, PoolWithTag, NumOfElements, 0LL);
    if ( v66 >= 0 )
      qsort(v22, v20, 0x10uLL, sub_1404F4410);
  }
  if ( v66 >= 0 )
  {
    v67 = 0;
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( !v122 )
    {
      v24 = 0;
      v74 = 0;
      v25 = 0;
      NumOfElements_4 = 0;
      while ( v24 < NumOfElements && v25 < (unsigned int)::NumOfElements )
      {
        v26 = 2LL * v25;
        v27 = (char *)P + 16 * v24;
        v28 = sub_1404F4410(v27, &qword_1407F54A0[2 * v25]);
        v103 = v28;
        v29 = v27[1];
        v102 = v29;
        v30 = qword_1407F54A0[v26 + 1];
        v113 = v30;
        if ( v28 < 0 )
        {
          if ( (*(_DWORD *)(v29 + 8) & 2) != 0 )
            goto LABEL_66;
          v74 = ++v24;
          v25 = NumOfElements_4;
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
LABEL_66:
                v67 = 1;
                goto LABEL_70;
              }
            }
            v74 = ++v24;
          }
          v25 = ++NumOfElements_4;
        }
      }
      while ( v24 < NumOfElements )
      {
        v102 = *((_QWORD *)P + 2 * v24 + 1);
        if ( (*(_DWORD *)(v102 + 8) & 2) != 0 )
        {
          v67 = 1;
          break;
        }
        v74 = ++v24;
      }
    }
LABEL_70:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407F3AE0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfReferenceObject(v78);
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    v79 = MappedBase;
    if ( MappedBase )
    {
      v33 = NumOfElements;
      if ( !NumOfElements || P )
      {
        *(_QWORD *)&v90 = 0LL;
        v91 = 0uLL;
        DWORD2(v90) = 0;
        *(_QWORD *)&v92 = 10800LL;
        BYTE8(v92) = 1;
        v35 = ExpLicUpdateChecksum((__int64)MappedBase + 20, (__int64)P, &v90);
        LODWORD(Src) = v35;
        if ( !v35 )
        {
          if ( (_DWORD)v33 )
          {
            v35 = (unsigned __int64)(16 * v33) > 0xFFFFFFFF ? 0xC0000095 : 0;
            LODWORD(Src) = v35;
            if ( (unsigned __int64)(16 * v33) <= 0xFFFFFFFF )
            {
              v35 = ExpLicUpdateChecksum(v34, v34, &v90);
              LODWORD(Src) = v35;
            }
          }
        }
        if ( v35 )
        {
          *(_QWORD *)&v90 = v36;
          DWORD2(v90) = 4;
          v35 = v36;
          LODWORD(Src) = v36;
        }
        v106 = v90;
        v107 = v91;
        v108 = v92;
        v12 = -1073741811;
LABEL_82:
        v66 = v35;
        if ( v35 < 0 )
        {
LABEL_96:
          v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v43 & 2) != 0 && (v43 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
          KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( (int)Src >= 0 )
          {
            if ( v122 || (v66 = ExpPutLicenseDataIntoRegistry(), v66 >= 0) )
            {
              if ( v123 || !v122 )
                sub_1404F34C8();
              v66 = 0;
              if ( v67 == 1 )
                v66 = 263;
            }
          }
          goto LABEL_105;
        }
        ExpSetKernelDataProtection(&v106, 7LL, 1LL);
        v83 = (PVOID)qword_1407F4060;
        v80 = Data;
        qword_1407F4060 = (__int64)v78;
        Data = v79;
        MappedBase = 0LL;
        off_1407F3028 = 0LL;
        v124 = BYTE1(NlsMbCodePageTag);
        BYTE1(NlsMbCodePageTag) = 0;
        memset(qword_1407F54A0, 0, 16LL * (unsigned int)::NumOfElements);
        LODWORD(v37) = 0;
        LODWORD(::NumOfElements) = 0;
        if ( P )
        {
          memmove(qword_1407F54A0, P, 16LL * (unsigned int)v33);
          LODWORD(::NumOfElements) = v33;
          LODWORD(v37) = 0;
        }
        BYTE6(NlsMbCodePageTag) = 1;
        if ( v79 )
        {
          v38 = ExpGetKernelDataProtection(v110);
          LODWORD(v37) = 0;
          if ( v38 < 0 )
          {
            if ( v38 == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v93 = 0LL;
                v94 = 0uLL;
                DWORD2(v93) = 4;
                *(_QWORD *)&v95 = 0LL;
                BYTE8(v95) = 1;
                v57 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v93);
                if ( !v57 )
                {
                  if ( (_DWORD)v56 )
                  {
                    v58 = 16LL * (unsigned int)v56;
                    v57 = v58 > 0xFFFFFFFF ? 0xC0000095 : 0;
                    if ( v58 <= 0xFFFFFFFF )
                      v57 = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v56, &v93);
                  }
                }
                if ( v57 )
                {
                  *(_QWORD *)&v93 = v37;
                  DWORD2(v93) = 4;
                  v57 = v37;
                }
                v110[0] = v93;
                v110[1] = v94;
                v110[2] = v95;
              }
              else
              {
                v57 = -1073741811;
              }
              if ( v57 >= 0 )
              {
                DWORD2(v110[0]) = 4;
                ExpSetKernelDataProtection(v110, 0xFFFFFFFFLL, 0LL);
                LODWORD(v37) = 0;
              }
            }
            v39 = 4;
            v77 = 4;
            goto LABEL_89;
          }
          v39 = DWORD2(v110[0]);
        }
        else
        {
          v39 = dword_1407F30C8;
        }
        v77 = v39;
LABEL_89:
        if ( (*((_DWORD *)Data + 3) & 1) != 0 )
        {
          dword_1407F30C8 = 2;
          v116 = 2;
          ExpSetKernelDataProtection(v115, 2LL, 0LL);
          v69 = 1;
        }
        else
        {
          dword_1407F30C8 = v37;
          v118 = v37;
          ExpSetKernelDataProtection(v117, 2LL, 0LL);
        }
        LOBYTE(v40) = 0;
        if ( Data )
        {
          v41 = ExpGetKernelDataProtection(v111);
          LOBYTE(v40) = 0;
          if ( v41 < 0 )
          {
            if ( v41 == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v96 = 0LL;
                v97 = 0uLL;
                DWORD2(v96) = 4;
                *(_QWORD *)&v98 = 0LL;
                BYTE8(v98) = 1;
                v60 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v96);
                if ( !v60 )
                {
                  if ( (_DWORD)v59 )
                  {
                    v61 = 16LL * (unsigned int)v59;
                    v60 = v61 > 0xFFFFFFFF ? 0xC0000095 : 0;
                    if ( v61 <= 0xFFFFFFFF )
                      v60 = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v59, &v96);
                  }
                }
                if ( v60 )
                {
                  *(_QWORD *)&v96 = v40;
                  DWORD2(v96) = 4;
                  v60 = v40;
                }
                v111[0] = v96;
                v111[1] = v97;
                v111[2] = v98;
              }
              else
              {
                v60 = -1073741811;
              }
              if ( v60 >= 0 )
              {
                DWORD2(v111[0]) = 4;
                ExpSetKernelDataProtection(v111, 0xFFFFFFFFLL, 0LL);
                LOBYTE(v40) = 0;
              }
            }
            v42 = 4;
          }
          else
          {
            v42 = DWORD2(v111[0]);
          }
        }
        else
        {
          v42 = dword_1407F30C8;
        }
        if ( v39 == v42 || v39 && v42 )
          v123 = v40;
        else
          v123 = 1;
        goto LABEL_96;
      }
    }
    else
    {
      LODWORD(v33) = NumOfElements;
    }
    v12 = -1073741811;
    v35 = -1073741811;
    LODWORD(Src) = -1073741811;
    goto LABEL_82;
  }
  if ( v66 == -1073741762 )
    v66 = -1073741811;
LABEL_105:
  if ( v124 && !BYTE1(NlsMbCodePageTag) )
    sub_1407576E4(&KernelLicensingCacheCorruptionFixed);
  if ( v69 )
  {
    v44 = KeGetCurrentThread();
    --v44->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    v119[40] = 0;
    ExpSetKernelDataProtection(v119, 32LL, 0LL);
    v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v45 & 2) != 0 && (v45 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v78 )
    ObfDereferenceObject(v78);
  if ( v83 )
    ObfDereferenceObject(v83);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v80 )
    MmUnmapViewInSystemSpace(v80);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v66 == -1073741811 || (unsigned int)(v66 + 1073741761) <= 1 )
  {
    v62 = KeGetCurrentThread();
    --v62->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407F3AE0, 0LL);
    if ( Data )
    {
      v63 = ExpGetKernelDataProtection(v112);
      if ( v63 < 0 )
      {
        if ( v63 == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v99 = 0LL;
            v100 = 0uLL;
            DWORD2(v99) = 4;
            *(_QWORD *)&v101 = 0LL;
            BYTE8(v101) = 1;
            v12 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v99);
            if ( !v12 )
            {
              if ( (_DWORD)v64 )
              {
                v65 = 16LL * (unsigned int)v64;
                v12 = v65 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( v65 <= 0xFFFFFFFF )
                  v12 = ExpLicUpdateChecksum((__int64)qword_1407F54A0, v64, &v99);
              }
            }
            if ( v12 )
            {
              *(_QWORD *)&v99 = 0LL;
              DWORD2(v99) = 4;
              v12 = 0;
            }
            v112[0] = v99;
            v112[1] = v100;
            v112[2] = v101;
          }
          if ( v12 >= 0 )
          {
            DWORD2(v112[0]) = 4;
            ExpSetKernelDataProtection(v112, 0xFFFFFFFFLL, 0LL);
          }
        }
      }
      else
      {
        v13 = DWORD2(v112[0]);
      }
    }
    else
    {
      v13 = dword_1407F30C8;
    }
    if ( v13 )
    {
      v8 = 0;
    }
    else
    {
      dword_1407F30C8 = 5;
      v121 = 5;
      ExpSetKernelDataProtection(v120, 2LL, 0LL);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407F3AE0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407F3AE0);
    KeAbPostRelease((ULONG_PTR)&qword_1407F3AE0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v8 )
      sub_1404F34C8();
  }
  return (unsigned int)v66;
}
