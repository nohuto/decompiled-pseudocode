/*
 * XREFs of MmQueryVirtualMemory @ 0x1405B5C20
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x14009990C (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x1405B5BEC (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x14075C414 (PfpVirtualQuery.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiQueryAddressSpan @ 0x1400B1200 (MiQueryAddressSpan.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiIsSoftwareEnclave @ 0x1400BB998 (MiIsSoftwareEnclave.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiGetWorkingSetInfo @ 0x140144490 (MiGetWorkingSetInfo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     VslQueryVirtualMemory @ 0x1402300A8 (VslQueryVirtualMemory.c)
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v7; // r14
  _QWORD *v11; // r9
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // r15
  char PreviousMode; // cl
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  _KPROCESS *Process; // r12
  int v21; // ebx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // r10
  __int64 v34; // r12
  int v35; // edx
  int v36; // edx
  int v37; // r15d
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r10d
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  int v45; // r10d
  __int64 v46; // r11
  PVOID v47; // rsi
  __int64 *v48; // rdx
  __int64 result; // rax
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rsi
  char v54; // bl
  __int64 *v55; // rdx
  __int64 v56; // rax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  __int64 v60; // rax
  __int64 AddressSpan; // rax
  __int64 *v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // ebx
  __int64 *v65; // rax
  __int64 v66; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rsi
  int WorkingSetInfoList; // edi
  unsigned __int64 v72; // rdi
  __int64 v73; // rdi
  _QWORD *v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 **VadEvent; // rax
  char v79; // [rsp+40h] [rbp-158h]
  char v80; // [rsp+44h] [rbp-154h]
  unsigned int v81; // [rsp+48h] [rbp-150h] BYREF
  _QWORD *v82; // [rsp+50h] [rbp-148h]
  unsigned __int64 v83; // [rsp+58h] [rbp-140h]
  unsigned __int8 v84; // [rsp+60h] [rbp-138h]
  PVOID v85; // [rsp+68h] [rbp-130h]
  PVOID v86; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v87; // [rsp+78h] [rbp-120h]
  __int64 v88; // [rsp+80h] [rbp-118h]
  PVOID Object; // [rsp+88h] [rbp-110h]
  __int128 v90; // [rsp+90h] [rbp-108h]
  __int64 v91; // [rsp+A0h] [rbp-F8h]
  unsigned __int64 v92; // [rsp+A8h] [rbp-F0h]
  _OWORD v93[3]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 Source; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v96; // [rsp+100h] [rbp-98h]
  __int128 v97; // [rsp+110h] [rbp-88h]
  _BYTE v98[48]; // [rsp+120h] [rbp-78h] BYREF

  v7 = (unsigned __int64)a4;
  v87 = a4;
  v83 = a2;
  v11 = (_QWORD *)a6;
  v82 = (_QWORD *)a6;
  v12 = 0LL;
  v79 = 0;
  Object = 0LL;
  v92 = 0LL;
  if ( a3 != 6 && a3 != 3 )
  {
    switch ( a3 )
    {
      case 0:
      case 8:
        v13 = a5;
        if ( a5 >= 0x30 )
          goto LABEL_4;
        result = 3221225476LL;
        break;
      case 1:
      case 5:
        v13 = a5;
        if ( a5 >= 8 )
          goto LABEL_4;
        result = 3221225476LL;
        break;
      case 2:
        v13 = a5;
        goto LABEL_4;
      case 4:
        v13 = a5;
        if ( a5 >= 0x10 )
          goto LABEL_4;
        result = 3221225476LL;
        break;
      case 7:
        v13 = a5;
        if ( a5 >= 0x20 )
          goto LABEL_4;
        result = 3221225476LL;
        break;
      default:
        result = 3221225475LL;
        break;
    }
    return result;
  }
  v13 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v80 = PreviousMode;
  if ( PreviousMode )
  {
    if ( v13 )
    {
      v16 = v7;
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = v13 + v7 - 1;
      if ( v7 > v17 || v17 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v16 = *(_BYTE *)v16;
          v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v16 != v18 );
      }
    }
    if ( a6 )
    {
      v19 = a6;
      if ( a6 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = *(_QWORD *)v19;
    }
    PreviousMode = v80;
  }
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v88 = a2 & 0x7FFFFFFFF000LL;
  if ( a3 != 10 )
    goto LABEL_22;
  Source = *(_OWORD *)v7;
  v96 = *(_OWORD *)(v7 + 16);
  v97 = *(_OWORD *)(v7 + 32);
  v72 = *((_QWORD *)&v96 + 1);
  *((_QWORD *)&v96 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v72 > 0x7FFFFFFF0000LL - a2 )
    return 3221225485LL;
  v92 = (((a2 & 0xFFF) + v72 + 4095) & 0xFFFFFFFFFFFFF000uLL) + v88;
  v11 = v82;
  PreviousMode = v80;
  v12 = 0LL;
LABEL_22:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    v85 = Process;
    v86 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &v86,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v86;
    v85 = v86;
    if ( (*((_DWORD *)v86 + 435) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v86, 0x6D566D4Du);
      return 3221225506LL;
    }
    v11 = v82;
  }
  switch ( a3 )
  {
    case 4:
      WorkingSetInfoList = MiGetWorkingSetInfoList(v7, v13, (ULONG_PTR)Process, a7);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList < 0 )
        return (unsigned int)WorkingSetInfoList;
      if ( v82 )
        *v82 = v13;
      return 0LL;
    case 5:
      v73 = *(_QWORD *)&Process[2].ThreadSeed[4];
      if ( BugCheckParameter1 != -1LL )
      {
        ObfDereferenceObjectWithTag(v86, 0x6D566D4Du);
        v11 = v82;
      }
      *(_QWORD *)v7 = v73;
      if ( v11 )
        *v11 = 8LL;
      return 0LL;
    case 1:
      WorkingSetInfoList = MiGetWorkingSetInfo(v7, &v94, v13, (__int64)Process);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList < 0 )
        return (unsigned int)WorkingSetInfoList;
      if ( v82 )
        *v82 = 8 * v94 + 8;
      return 0LL;
  }
  if ( BugCheckParameter1 == -1LL )
  {
    memset(v98, 0, sizeof(v98));
    v21 = 0;
  }
  else
  {
    KiStackAttachProcess(Process, 0, (__int64)v98);
    v21 = 1;
    v79 = 1;
  }
  if ( a3 == 8 && Process->SecureState.SecureHandle && VslQueryVirtualMemory((__int64)Process, v83, v93) >= 0 )
  {
    if ( v21 )
    {
      KiUnstackDetachProcess((__int64)v98, 0LL);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    *(_OWORD *)v7 = v93[0];
    *(_OWORD *)(v7 + 16) = v93[1];
    *(_OWORD *)(v7 + 32) = v93[2];
    if ( v82 )
      *v82 = 48LL;
    return 0LL;
  }
  while ( 1 )
  {
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (v21 & 1) != 0 )
      {
        KiUnstackDetachProcess((__int64)v98, 0LL);
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      }
      return 3221225738LL;
    }
    v22 = 0LL;
    if ( Process[2].Affinity.Bitmap[6] )
    {
      v12 = Process[2].Affinity.Bitmap[4];
      v22 = v83 >> 12;
      while ( v12 )
      {
        v23 = *(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32);
        if ( v22 < v23 )
          goto LABEL_39;
        if ( v22 <= (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
        {
          v21 |= 2u;
          v79 = v21;
          break;
        }
        if ( v22 < v23 )
        {
LABEL_39:
          if ( !*(_QWORD *)v12 )
            break;
          v12 = *(_QWORD *)v12;
        }
        else
        {
          if ( !*(_QWORD *)(v12 + 8) )
            break;
          v12 = *(_QWORD *)(v12 + 8);
        }
      }
    }
    if ( (v21 & 2) == 0 )
    {
      if ( v12 )
      {
        v66 = *(unsigned int *)(v12 + 24);
        if ( (v66 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) < v22 )
        {
          i = *(_QWORD *)(v12 + 8);
          if ( i )
          {
            v74 = *(_QWORD **)i;
            if ( *(_QWORD *)i )
            {
              do
              {
                i = (unsigned __int64)v74;
                v74 = (_QWORD *)*v74;
              }
              while ( v74 );
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)i == v12 )
                break;
              v12 = i;
            }
          }
          v68 = v83 & 0xFFFFFFFFFFFFF000uLL;
          if ( i )
            v69 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
          else
            v69 = 0x7FFFFFFF0000LL;
LABEL_140:
          v70 = v69 - v68;
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
          if ( (v21 & 1) != 0 )
          {
            KiUnstackDetachProcess((__int64)v98, 0LL);
            ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
          }
          if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
          {
            *(_QWORD *)(v7 + 8) = 0LL;
            *(_DWORD *)(v7 + 16) = 0;
            *(_QWORD *)v7 = v68;
            *(_QWORD *)(v7 + 24) = v70;
            *(_DWORD *)(v7 + 32) = 0x10000;
            *(_QWORD *)(v7 + 36) = 1LL;
            if ( v82 )
              *v82 = 48LL;
            return 0LL;
          }
          return 3221225793LL;
        }
        v69 = (v66 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12;
      }
      else
      {
        v69 = 0x7FFFFFFF0000LL;
      }
      v68 = v83 & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_140;
    }
    MiReferenceVad(v12);
    --CurrentThread->KernelApcDisable;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
    MiLockVad((__int64)CurrentThread, v12);
    v24 = CurrentThread->KernelApcDisable++ == -1;
    if ( v24
      && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (unsigned int)MiVadDeleted(v12) != 1 )
      break;
    MiWaitForVadDeletion(v26);
    MiUnlockAndDereferenceVad((PVOID)v12, v75, v76, v77);
    v21 &= ~2u;
    v79 = v21;
LABEL_200:
    v12 = 0LL;
  }
  v29 = *(unsigned __int8 *)(v12 + 32);
  v30 = *(unsigned int *)(v12 + 24);
  if ( v22 < (v30 | (unsigned __int64)(v29 << 32))
    || v22 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((PVOID)v12, v25, v27, v28);
    v21 &= ~2u;
    v79 = v21;
    v7 = (unsigned __int64)v87;
    Process = (_KPROCESS *)v85;
    goto LABEL_200;
  }
  memset(v93, 0, sizeof(v93));
  v33 = v88;
  *(_QWORD *)&v93[0] = v88;
  v34 = (v30 | (v29 << 32)) << 12;
  *((_QWORD *)&v93[0] + 1) = v34;
  v35 = *(_DWORD *)(v12 + 48);
  LODWORD(v83) = MmProtectToValue[(unsigned __int8)v35 >> 3];
  LODWORD(v93[1]) = v83;
  if ( (v35 & 0x4000) != 0 )
  {
    v37 = 0x20000;
    DWORD2(v93[2]) = 0x20000;
    if ( MiIsSoftwareEnclave(v12) )
    {
      LOBYTE(v21) = v21 | 0x10;
      v79 = v21;
    }
    v63 = *(unsigned int *)(v12 + 52);
    LODWORD(v63) = v63 & 0x7FFFFFFF;
    v39 = 0x7FFFFFFFDLL;
    v38 = (__int64)Object;
    if ( (v63 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 31)) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v21) = v21 | 0x20;
      v79 = v21;
    }
  }
  else
  {
    v36 = v35 & 7;
    if ( v36 == 2 )
    {
      v37 = 0x1000000;
      DWORD2(v93[2]) = 0x1000000;
      if ( a3 == 7 && (*(_DWORD *)(**(_QWORD **)(v12 + 72) + 56LL) & 0x40000000) != 0 )
        goto LABEL_214;
      goto LABEL_51;
    }
    v37 = 0x40000;
    DWORD2(v93[2]) = 0x40000;
    if ( v36 == 1 )
    {
      LOBYTE(v21) = v21 | 8;
LABEL_215:
      v79 = v21;
      goto LABEL_51;
    }
    if ( a3 == 3 && a5 >= 0x20 || a3 == 7 )
    {
      v60 = *(_QWORD *)(v12 + 72);
      if ( !*(_QWORD *)(*(_QWORD *)v60 + 64LL) )
      {
        v37 = 0x8000000;
        DWORD2(v93[2]) = 0x8000000;
        goto LABEL_51;
      }
      if ( a3 == 7 && (*(_DWORD *)(*(_QWORD *)v60 + 56LL) & 0x40000000) != 0 )
      {
LABEL_214:
        LOBYTE(v21) = v21 | 4;
        goto LABEL_215;
      }
    }
LABEL_51:
    if ( a3 == 2 )
    {
      v38 = 0LL;
      if ( v36 != 1 )
      {
        v65 = *(__int64 **)(v12 + 72);
        v38 = *(_QWORD *)(*v65 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v38 )
        {
          v38 = MiReferenceControlAreaFile(*v65);
          v33 = v88;
        }
      }
      if ( !v38 )
        v38 = 1LL;
    }
    else
    {
      v38 = (__int64)Object;
    }
    v39 = 0x7FFFFFFFDLL;
  }
  if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
  {
    v50 = ((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
         - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
         + 1) << 12;
    v51 = *(unsigned int *)(v12 + 52);
    LODWORD(v51) = v51 & 0x7FFFFFFF;
    v52 = v51 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 31);
    if ( v52 >= 0x7FFFFFFFDLL )
      v52 = 0LL;
    MiUnlockAndDereferenceVad((PVOID)v12, 0x7FFFFFFFDLL, v31, v32);
    if ( (v21 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v98, 0LL);
      ObfDereferenceObjectWithTag(v85, 0x6D566D4Du);
    }
    v53 = v52 << 12;
    v54 = v21 & 0xFD;
    v55 = v87;
    *v87 = v34;
    *((_DWORD *)v55 + 2) = v83;
    v55[2] = v50;
    if ( a3 == 7 )
    {
      *((_DWORD *)v55 + 3) = 0;
      if ( v37 == 0x20000 )
      {
        v57 = 1;
        *((_DWORD *)v55 + 3) = 1;
      }
      else if ( (v54 & 8) != 0 )
      {
        *((_DWORD *)v55 + 3) = 16;
        v57 = 16;
      }
      else if ( v37 == 0x40000 )
      {
        *((_DWORD *)v55 + 3) = 2;
        v57 = 2;
      }
      else if ( v37 == 0x1000000 )
      {
        *((_DWORD *)v55 + 3) = 4;
        v57 = 4;
      }
      else
      {
        *((_DWORD *)v55 + 3) = 8;
        v57 = 8;
      }
      if ( (*(_DWORD *)(v12 + 48) & 0x20000) != 0 )
      {
        v57 |= 0x80u;
        *((_DWORD *)v55 + 3) = v57;
      }
      v58 = v57 | (8 * (v54 & 4));
      *((_DWORD *)v55 + 3) = v58;
      v59 = v58 | (4 * (v54 & 0x10));
      *((_DWORD *)v55 + 3) = v59;
      *((_DWORD *)v55 + 3) = v59 | (8 * (v54 & 0x20));
    }
    else
    {
      *((_DWORD *)v55 + 3) = v37;
    }
    if ( a5 < 0x20 )
    {
      v56 = 24LL;
    }
    else
    {
      v55[3] = v53;
      v56 = 32LL;
    }
    v81 = v56;
    if ( v82 )
      *v82 = v56;
    return 0LL;
  }
  if ( a3 == 6 )
  {
    v90 = 0uLL;
    v91 = 0LL;
    v40 = *(_DWORD *)(v12 + 48);
    if ( (v40 & 0x4000) != 0 || (v40 & 7) != 2 )
    {
      v47 = v85;
    }
    else
    {
      v41 = ***(_QWORD ***)(v12 + 72);
      *(_QWORD *)&v90 = (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12;
      *((_QWORD *)&v90 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 24), -1LL, -1LL);
      v42 = v91 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v41 + 15) >> 2) & 0x3FFFFFFC;
      LODWORD(v91) = v42;
      if ( (*(_DWORD *)(v12 + 48) & 0xF8) == 8 )
        LODWORD(v91) = v42 | 2;
      if ( MiVadMapsLargeImage(v12) )
      {
        VadEvent = MiLocateVadEvent(v43, 16);
        v84 = *((_BYTE *)VadEvent + 8);
        v39 = (__int64)VadEvent[2];
        *(_QWORD *)&v90 = v32 + ((unsigned __int64)v84 << 16);
      }
      else
      {
        v39 = (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
            - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
            + 1;
      }
      if ( (v44 & 0xFFF) == 0 )
        v46 = 0LL;
      v31 = v46 + (v44 >> 12);
      LOBYTE(v21) = v79;
      v47 = v86;
      if ( v39 != v31 )
        LODWORD(v91) = v45 | 1;
    }
    MiUnlockAndDereferenceVad((PVOID)v12, v39, v31, v32);
    if ( (v21 & 1) != 0 )
    {
      KiUnstackDetachProcess((__int64)v98, 0LL);
      ObfDereferenceObjectWithTag(v47, 0x6D566D4Du);
    }
    v81 = 24;
    v48 = v87;
    *(_OWORD *)v87 = v90;
    v48[2] = v91;
    if ( v82 )
      *v82 = 24LL;
    return 0LL;
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    AddressSpan = MiQueryAddressSpan((__int64)v93, v33, v92, v12);
    *((_QWORD *)&v93[1] + 1) = AddressSpan - *(_QWORD *)&v93[0];
  }
  MiUnlockAndDereferenceVad((PVOID)v12, v39, v31, v32);
  if ( (v21 & 1) != 0 )
  {
    KiUnstackDetachProcess((__int64)v98, 0LL);
    ObfDereferenceObjectWithTag(v85, 0x6D566D4Du);
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    v62 = v87;
    *(_OWORD *)v87 = v93[0];
    *((_OWORD *)v62 + 1) = v93[1];
    *((_OWORD *)v62 + 2) = v93[2];
    if ( v82 )
      *v82 = 48LL;
    return 0LL;
  }
  if ( !v38 )
    return 3221225793LL;
  if ( v38 == 1 )
    return 3221225624LL;
  if ( (unsigned int)a5 < a5 )
  {
    ObfDereferenceObject((PVOID)v38);
    return 3221225715LL;
  }
  else
  {
    v81 = 0;
    v64 = ObQueryNameStringMode((char *)v38, (__int64)v87, a5, &v81, v80);
    ObfDereferenceObject((PVOID)v38);
    if ( v82 )
      *v82 = v81;
    return v64;
  }
}
