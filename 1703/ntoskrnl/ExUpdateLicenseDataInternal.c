/*
 * XREFs of ExUpdateLicenseDataInternal @ 0x1404AEAB0
 * Callers:
 *     ExUpdateLicenseData @ 0x140717D00 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 * Callees:
 *     ExpLicUpdateChecksum @ 0x14006B3D0 (ExpLicUpdateChecksum.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateSection @ 0x14017E880 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x14045D6C4 (ExpPutLicenseDataIntoRegistry.c)
 *     sub_14045EE78 @ 0x14045EE78 (sub_14045EE78.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
 *     ExpGetKernelDataProtection @ 0x1404AE3CC (ExpGetKernelDataProtection.c)
 *     ExpSetKernelDataProtection @ 0x1404AE780 (ExpSetKernelDataProtection.c)
 *     ExpLicensingDescriptorCompare @ 0x1404AF690 (ExpLicensingDescriptorCompare.c)
 *     sub_1404AF72C @ 0x1404AF72C (sub_1404AF72C.c)
 *     MmMapViewInSystemSpace @ 0x1404B0180 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     sub_140718008 @ 0x140718008 (sub_140718008.c)
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
  signed int v12; // r13d
  int v13; // r14d
  NTSTATUS v14; // edi
  PVOID v15; // r12
  unsigned int *v16; // rdi
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  struct _KTHREAD *v19; // rax
  unsigned int v20; // edi
  PVOID PoolWithTag; // rax
  void *v22; // rsi
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r13d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int16 v32; // ax
  struct _KTHREAD *v33; // rax
  __int64 v34; // rsi
  signed int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r9
  int v39; // eax
  int v40; // esi
  __int64 v41; // r9
  int v42; // eax
  int v43; // eax
  struct _KTHREAD *v44; // rax
  struct _KTHREAD *v46; // rax
  int KernelDataProtection; // eax
  int v48; // eax
  unsigned int v49; // eax
  __int64 v50; // rdx
  signed int updated; // eax
  __int64 v52; // rdx
  signed int v53; // eax
  __int64 v54; // rdx
  signed int v55; // eax
  __int64 v56; // rdx
  struct _KTHREAD *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  signed int v60; // [rsp+40h] [rbp-3D8h]
  char v61; // [rsp+44h] [rbp-3D4h]
  bool v62; // [rsp+45h] [rbp-3D3h]
  char v63; // [rsp+46h] [rbp-3D2h]
  int v64; // [rsp+48h] [rbp-3D0h]
  _DWORD NumOfElements[3]; // [rsp+4Ch] [rbp-3CCh] BYREF
  unsigned int v66; // [rsp+58h] [rbp-3C0h]
  int v67; // [rsp+5Ch] [rbp-3BCh]
  PVOID MappedBase; // [rsp+60h] [rbp-3B8h] BYREF
  PVOID P; // [rsp+68h] [rbp-3B0h]
  int v70; // [rsp+70h] [rbp-3A8h]
  PVOID v71; // [rsp+78h] [rbp-3A0h]
  PVOID v72; // [rsp+80h] [rbp-398h]
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-390h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-388h] BYREF
  PVOID v75; // [rsp+98h] [rbp-380h]
  __int128 v76; // [rsp+A8h] [rbp-370h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-360h]
  __int128 v78; // [rsp+C8h] [rbp-350h]
  __int128 v79; // [rsp+D8h] [rbp-340h] BYREF
  __int128 v80; // [rsp+E8h] [rbp-330h]
  __int128 v81; // [rsp+F8h] [rbp-320h]
  __int128 v82; // [rsp+108h] [rbp-310h] BYREF
  __int128 v83; // [rsp+118h] [rbp-300h]
  __int128 v84; // [rsp+128h] [rbp-2F0h]
  __int128 v85; // [rsp+138h] [rbp-2E0h] BYREF
  __int128 v86; // [rsp+148h] [rbp-2D0h]
  __int128 v87; // [rsp+158h] [rbp-2C0h]
  __int128 v88; // [rsp+168h] [rbp-2B0h] BYREF
  __int128 v89; // [rsp+178h] [rbp-2A0h]
  __int128 v90; // [rsp+188h] [rbp-290h]
  __int128 v91; // [rsp+198h] [rbp-280h] BYREF
  __int128 v92; // [rsp+1A8h] [rbp-270h]
  __int128 v93; // [rsp+1B8h] [rbp-260h]
  ULONG_PTR ViewSize; // [rsp+1C8h] [rbp-250h] BYREF
  void *Src; // [rsp+1D0h] [rbp-248h]
  __int64 v96; // [rsp+1D8h] [rbp-240h]
  int v97; // [rsp+1E0h] [rbp-238h]
  PVOID Object; // [rsp+1E8h] [rbp-230h] BYREF
  __int128 v99; // [rsp+1F0h] [rbp-228h] BYREF
  __int128 v100; // [rsp+200h] [rbp-218h]
  __int128 v101; // [rsp+210h] [rbp-208h]
  _OWORD v102[3]; // [rsp+220h] [rbp-1F8h] BYREF
  _OWORD v103[3]; // [rsp+250h] [rbp-1C8h] BYREF
  _OWORD v104[3]; // [rsp+280h] [rbp-198h] BYREF
  _OWORD v105[3]; // [rsp+2B0h] [rbp-168h] BYREF
  __int64 v106; // [rsp+2E0h] [rbp-138h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+2E8h] [rbp-130h] BYREF
  _BYTE v108[8]; // [rsp+318h] [rbp-100h] BYREF
  int v109; // [rsp+320h] [rbp-F8h]
  _BYTE v110[8]; // [rsp+348h] [rbp-D0h] BYREF
  int v111; // [rsp+350h] [rbp-C8h]
  _BYTE v112[48]; // [rsp+378h] [rbp-A0h] BYREF
  _BYTE v113[8]; // [rsp+3A8h] [rbp-70h] BYREF
  int v114; // [rsp+3B0h] [rbp-68h]
  char v115; // [rsp+428h] [rbp+10h]
  char v116; // [rsp+430h] [rbp+18h]
  char v117; // [rsp+438h] [rbp+20h]

  v62 = 0;
  v116 = 0;
  v115 = 0;
  v63 = 0;
  v117 = 0;
  MappedBase = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  v75 = 0LL;
  NumOfElements[0] = 0;
  P = 0LL;
  if ( !a2 || (unsigned int)(a1 - 25) > 0xFFE7 || ((unsigned __int8)a2 & 3) != 0 )
    goto LABEL_196;
  v4 = *a2;
  if ( *a2 > 0x10000 || (v5 = a2[1], (unsigned int)v5 > 0x10000) || (v6 = a2[2], v6 > 0x10000) )
  {
    v60 = -1073741760;
    v12 = -1073741811;
LABEL_197:
    v8 = 1;
    goto LABEL_198;
  }
  *(_QWORD *)&NumOfElements[1] = a2 + 5;
  v7 = (char *)a2 + v5 + 20;
  Src = v7;
  if ( ((unsigned __int8)v7 & 3) != 0 || v6 + (_DWORD)v5 + 20 != v4 )
  {
LABEL_196:
    v12 = -1073741811;
    v60 = -1073741811;
    goto LABEL_197;
  }
  v8 = 1;
  if ( v4 != a1 || a2[4] != 1 )
  {
    v12 = -1073741811;
    v60 = -1073741811;
LABEL_198:
    v13 = 4;
    goto LABEL_107;
  }
  v60 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
  if ( off_1407AC028 )
  {
    v10 = 1;
    v115 = 1;
  }
  else
  {
    v63 = 1;
    v10 = 0;
  }
  if ( InitSafeBootMode || InitIsWinPEMode )
  {
    if ( !v10 )
    {
      v60 = -1073741823;
LABEL_27:
      v12 = -1073741811;
      goto LABEL_32;
    }
LABEL_17:
    v62 = 0;
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
            v62 = RtlCompareMemory((char *)Data + *((unsigned int *)Data + 1) + 20, v7, a2[2]) == a2[2];
          }
        }
      }
    }
    goto LABEL_27;
  }
  if ( v10 || (a2[3] & 1) == 0 )
    goto LABEL_17;
  v12 = -1073741811;
  v60 = -1073741811;
LABEL_32:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
  KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v60 < 0 )
    goto LABEL_198;
  if ( v62 )
  {
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( Data )
    {
      KernelDataProtection = ExpGetKernelDataProtection(v102);
      if ( KernelDataProtection < 0 )
      {
        v13 = 4;
        if ( KernelDataProtection == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v76 = 0LL;
            v77 = 0uLL;
            DWORD2(v76) = 4;
            *(_QWORD *)&v78 = 0LL;
            BYTE8(v78) = 1;
            updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v76);
            if ( !updated )
            {
              if ( (_DWORD)v52 )
              {
                updated = 16 * (unsigned __int64)(unsigned int)v52 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( !updated )
                  updated = ExpLicUpdateChecksum((__int64)qword_1407AE4B0, v52, &v76);
              }
            }
            if ( updated )
            {
              *(_QWORD *)&v76 = 0LL;
              DWORD2(v76) = 4;
              updated = 0;
            }
            v102[0] = v76;
            v102[1] = v77;
            v102[2] = v78;
          }
          else
          {
            updated = -1073741811;
          }
          if ( updated >= 0 )
          {
            DWORD2(v102[0]) = 4;
            ExpSetKernelDataProtection((__int64)v102, -1, 0);
          }
        }
        v64 = 4;
        goto LABEL_129;
      }
      v48 = DWORD2(v102[0]);
    }
    else
    {
      v48 = dword_1407AC0D4;
    }
    v64 = v48;
    v13 = 4;
LABEL_129:
    *(_QWORD *)&v79 = 0LL;
    v80 = 0uLL;
    DWORD2(v79) = 0;
    *(_QWORD *)&v81 = 10800LL;
    BYTE8(v81) = 1;
    v49 = ExpLicUpdateChecksum(*(__int64 *)&NumOfElements[1], (unsigned int)::NumOfElements, &v79);
    if ( v49 )
      goto LABEL_153;
    if ( (_DWORD)v50 )
    {
      v49 = 16 * (unsigned __int64)(unsigned int)v50 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( !v49 )
        v49 = ExpLicUpdateChecksum((__int64)qword_1407AE4B0, v50, &v79);
    }
    if ( v49 )
    {
LABEL_153:
      *(_QWORD *)&v79 = 0LL;
      DWORD2(v79) = 4;
    }
    v99 = v79;
    v100 = v80;
    v101 = v81;
    ExpSetKernelDataProtection((__int64)&v99, 7, 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v64 )
      sub_14045EE78();
    v60 = 0x40000000;
    goto LABEL_107;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a2;
  v13 = 4;
  v60 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v60 < 0 )
    goto LABEL_107;
  v14 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v15 = Object;
  v71 = Object;
  v60 = v14;
  ZwClose(SectionHandle);
  if ( v14 < 0 )
    goto LABEL_107;
  ViewSize = 0LL;
  v60 = MmMapViewInSystemSpace(v15, &MappedBase, &ViewSize);
  if ( v60 < 0 )
    goto LABEL_107;
  v16 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a2;
  v16[4] = a2[4];
  memmove(v16 + 5, a2 + 5, a2[1]);
  memmove((char *)v16 + a2[1] + 20, Src, a2[2]);
  v18 = (unsigned int *)((char *)v16 + v16[1] + 20);
  if ( v16[2] != 4 || !v18 || *v18 != 69 )
  {
    v60 = -1073741761;
    goto LABEL_107;
  }
  LOBYTE(v17) = 1;
  v60 = sub_1404AF72C(v16, v17, 0LL, 0LL, NumOfElements);
  if ( v60 == -1073741789 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    v60 = NumOfElements[0] > 0x923u ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v60 < 0 )
      goto LABEL_107;
    v20 = NumOfElements[0];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * NumOfElements[0], 0x20534C53u);
    v22 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v60 = -1073741801;
      goto LABEL_107;
    }
    v60 = sub_1404AF72C(MappedBase, 0LL, PoolWithTag, NumOfElements[0], 0LL);
    if ( v60 >= 0 )
      qsort(v22, v20, 0x10uLL, ExpLicensingDescriptorCompare);
  }
  if ( v60 >= 0 )
  {
    v61 = 0;
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( !v115 )
    {
      v24 = 0;
      v67 = 0;
      v25 = 0;
      v66 = 0;
      v26 = ::NumOfElements;
      NumOfElements[1] = ::NumOfElements;
      while ( v24 < NumOfElements[0] && v25 < v26 )
      {
        v27 = 2LL * v25;
        v28 = (char *)P + 16 * v24;
        v29 = ExpLicensingDescriptorCompare(v28, &qword_1407AE4B0[2 * v25]);
        v97 = v29;
        v30 = v28[1];
        v96 = v30;
        v31 = qword_1407AE4B0[v27 + 1];
        v106 = v31;
        if ( v29 < 0 )
        {
          if ( (*(_DWORD *)(v30 + 8) & 2) != 0 )
            goto LABEL_67;
          v67 = ++v24;
          v25 = v66;
        }
        else
        {
          if ( v29 <= 0 )
          {
            if ( (*(_DWORD *)(v30 + 8) & 2) != 0 )
            {
              v32 = *(_WORD *)(v31 + 6);
              if ( *(_WORD *)(v30 + 6) != v32
                || memcmp(
                     (const void *)(*(unsigned __int16 *)(v30 + 2) + 16LL + v30),
                     (const void *)(*(unsigned __int16 *)(v31 + 2) + 16LL + v31),
                     v32) )
              {
LABEL_67:
                v61 = 1;
                goto LABEL_71;
              }
            }
            v67 = ++v24;
          }
          v25 = ++v66;
        }
        v26 = NumOfElements[1];
      }
      while ( v24 < NumOfElements[0] )
      {
        v96 = *((_QWORD *)P + 2 * v24 + 1);
        if ( (*(_DWORD *)(v96 + 8) & 2) != 0 )
        {
          v61 = 1;
          break;
        }
        v67 = ++v24;
      }
    }
LABEL_71:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1407ACA60, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfReferenceObject(v71);
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( MappedBase )
    {
      v34 = NumOfElements[0];
      if ( !NumOfElements[0] || P )
      {
        *(_QWORD *)&v82 = 0LL;
        v83 = 0uLL;
        DWORD2(v82) = 0;
        *(_QWORD *)&v84 = 10800LL;
        BYTE8(v84) = 1;
        v35 = ExpLicUpdateChecksum((__int64)MappedBase + 20, (__int64)P, &v82);
        NumOfElements[1] = v35;
        if ( !v35 )
        {
          if ( (_DWORD)v34 )
          {
            v35 = (unsigned __int64)(16 * v34) > 0xFFFFFFFF ? 0xC0000095 : 0;
            NumOfElements[1] = v35;
            if ( !v35 )
            {
              v35 = ExpLicUpdateChecksum(v36, v36, &v82);
              NumOfElements[1] = v35;
            }
          }
        }
        if ( v35 )
        {
          *(_QWORD *)&v82 = v37;
          DWORD2(v82) = 4;
          v35 = v37;
          NumOfElements[1] = v37;
        }
        v99 = v82;
        v100 = v83;
        v101 = v84;
        v12 = -1073741811;
LABEL_83:
        v60 = v35;
        if ( v35 < 0 )
        {
LABEL_97:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
          KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( NumOfElements[1] >= 0 )
          {
            if ( v115 || (v60 = ExpPutLicenseDataIntoRegistry(), v60 >= 0) )
            {
              if ( v116 || !v115 )
                sub_14045EE78();
              v60 = 0;
              if ( v61 == 1 )
                v60 = 263;
            }
          }
          goto LABEL_107;
        }
        ExpSetKernelDataProtection((__int64)&v99, 7, 1);
        v75 = (PVOID)qword_1407ACFD8;
        v72 = Data;
        qword_1407ACFD8 = (__int64)v71;
        Data = MappedBase;
        MappedBase = 0LL;
        off_1407AC028 = 0LL;
        v117 = BYTE1(NlsMbCodePageTag);
        BYTE1(NlsMbCodePageTag) = 0;
        memset(qword_1407AE4B0, 0, 16LL * (unsigned int)::NumOfElements);
        LODWORD(v38) = 0;
        LODWORD(::NumOfElements) = 0;
        if ( P )
        {
          memmove(qword_1407AE4B0, P, 16LL * (unsigned int)v34);
          LODWORD(::NumOfElements) = v34;
          LODWORD(v38) = 0;
        }
        BYTE6(NlsMbCodePageTag) = 1;
        if ( Data )
        {
          v39 = ExpGetKernelDataProtection(v103);
          LODWORD(v38) = 0;
          if ( v39 < 0 )
          {
            if ( v39 == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v85 = 0LL;
                v86 = 0uLL;
                DWORD2(v85) = 4;
                *(_QWORD *)&v87 = 0LL;
                BYTE8(v87) = 1;
                v53 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v85);
                if ( v53 )
                  goto LABEL_168;
                if ( (_DWORD)v54 )
                {
                  v53 = 16 * (unsigned __int64)(unsigned int)v54 > 0xFFFFFFFF ? 0xC0000095 : 0;
                  if ( !v53 )
                    v53 = ExpLicUpdateChecksum((__int64)qword_1407AE4B0, v54, &v85);
                }
                if ( v53 )
                {
LABEL_168:
                  *(_QWORD *)&v85 = v38;
                  DWORD2(v85) = 4;
                  v53 = v38;
                }
                v103[0] = v85;
                v103[1] = v86;
                v103[2] = v87;
              }
              else
              {
                v53 = -1073741811;
              }
              if ( v53 >= 0 )
              {
                DWORD2(v103[0]) = 4;
                ExpSetKernelDataProtection((__int64)v103, -1, 0);
                LODWORD(v38) = 0;
              }
            }
            v40 = 4;
            v70 = 4;
            goto LABEL_90;
          }
          v40 = DWORD2(v103[0]);
        }
        else
        {
          v40 = dword_1407AC0D4;
        }
        v70 = v40;
LABEL_90:
        if ( (*((_DWORD *)Data + 3) & 1) != 0 )
        {
          dword_1407AC0D4 = 2;
          v109 = 2;
          ExpSetKernelDataProtection((__int64)v108, 2, 0);
          v63 = 1;
        }
        else
        {
          dword_1407AC0D4 = v38;
          v111 = v38;
          ExpSetKernelDataProtection((__int64)v110, 2, 0);
        }
        LOBYTE(v41) = 0;
        if ( Data )
        {
          v42 = ExpGetKernelDataProtection(v104);
          LOBYTE(v41) = 0;
          if ( v42 < 0 )
          {
            if ( v42 == -1073741275 )
            {
              if ( Data )
              {
                *(_QWORD *)&v88 = 0LL;
                v89 = 0uLL;
                DWORD2(v88) = 4;
                *(_QWORD *)&v90 = 0LL;
                BYTE8(v90) = 1;
                v55 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v88);
                if ( v55 )
                  goto LABEL_183;
                if ( (_DWORD)v56 )
                {
                  v55 = 16 * (unsigned __int64)(unsigned int)v56 > 0xFFFFFFFF ? 0xC0000095 : 0;
                  if ( !v55 )
                    v55 = ExpLicUpdateChecksum((__int64)qword_1407AE4B0, v56, &v88);
                }
                if ( v55 )
                {
LABEL_183:
                  *(_QWORD *)&v88 = v41;
                  DWORD2(v88) = 4;
                  v55 = v41;
                }
                v104[0] = v88;
                v104[1] = v89;
                v104[2] = v90;
              }
              else
              {
                v55 = -1073741811;
              }
              if ( v55 >= 0 )
              {
                DWORD2(v104[0]) = 4;
                ExpSetKernelDataProtection((__int64)v104, -1, 0);
                LOBYTE(v41) = 0;
              }
            }
            v43 = 4;
          }
          else
          {
            v43 = DWORD2(v104[0]);
          }
        }
        else
        {
          v43 = dword_1407AC0D4;
        }
        if ( v40 == v43 || v40 && v43 )
          v116 = v41;
        else
          v116 = 1;
        goto LABEL_97;
      }
    }
    else
    {
      LODWORD(v34) = NumOfElements[0];
    }
    v12 = -1073741811;
    v35 = -1073741811;
    NumOfElements[1] = -1073741811;
    goto LABEL_83;
  }
  if ( v60 == -1073741762 )
    v60 = -1073741811;
LABEL_107:
  if ( v117 && !BYTE1(NlsMbCodePageTag) )
    sub_140718008(&KernelLicensingCacheCorruptionFixed);
  if ( v63 )
  {
    v44 = KeGetCurrentThread();
    --v44->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    v112[40] = 0;
    ExpSetKernelDataProtection((__int64)v112, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v71 )
    ObfDereferenceObject(v71);
  if ( v75 )
    ObfDereferenceObject(v75);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v72 )
    MmUnmapViewInSystemSpace(v72);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v60 == -1073741811 || (unsigned int)(v60 + 1073741761) <= 1 )
  {
    v57 = KeGetCurrentThread();
    --v57->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1407ACA60, 0LL);
    if ( Data )
    {
      v58 = ExpGetKernelDataProtection(v105);
      if ( v58 < 0 )
      {
        if ( v58 == -1073741275 )
        {
          if ( Data )
          {
            *(_QWORD *)&v91 = 0LL;
            v92 = 0uLL;
            DWORD2(v91) = 4;
            *(_QWORD *)&v93 = 0LL;
            BYTE8(v93) = 1;
            v12 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)::NumOfElements, &v91);
            if ( !v12 )
            {
              if ( (_DWORD)v59 )
              {
                v12 = 16 * (unsigned __int64)(unsigned int)v59 > 0xFFFFFFFF ? 0xC0000095 : 0;
                if ( !v12 )
                  v12 = ExpLicUpdateChecksum((__int64)qword_1407AE4B0, v59, &v91);
              }
            }
            if ( v12 )
            {
              *(_QWORD *)&v91 = 0LL;
              DWORD2(v91) = 4;
              v12 = 0;
            }
            v105[0] = v91;
            v105[1] = v92;
            v105[2] = v93;
          }
          if ( v12 >= 0 )
          {
            DWORD2(v105[0]) = 4;
            ExpSetKernelDataProtection((__int64)v105, -1, 0);
          }
        }
      }
      else
      {
        v13 = DWORD2(v105[0]);
      }
    }
    else
    {
      v13 = dword_1407AC0D4;
    }
    if ( v13 )
    {
      v8 = 0;
    }
    else
    {
      dword_1407AC0D4 = 5;
      v114 = 5;
      ExpSetKernelDataProtection((__int64)v113, 2, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1407ACA60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1407ACA60);
    KeAbPostRelease((ULONG_PTR)&qword_1407ACA60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v8 )
      sub_14045EE78();
  }
  return (unsigned int)v60;
}
