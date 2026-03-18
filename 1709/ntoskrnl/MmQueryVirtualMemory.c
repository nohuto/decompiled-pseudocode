/*
 * XREFs of MmQueryVirtualMemory @ 0x140497DA0
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140267E54 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x140497D68 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x1406F39F4 (PfpVirtualQuery.c)
 * Callees:
 *     MiGetWorkingSetInfo @ 0x14000CC00 (MiGetWorkingSetInfo.c)
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiQueryAddressSpan @ 0x14003EDF0 (MiQueryAddressSpan.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     MiIsSoftwareEnclave @ 0x14011D7E8 (MiIsSoftwareEnclave.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x140189680 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VslQueryVirtualMemory @ 0x1401F2588 (VslQueryVirtualMemory.c)
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  __int64 v7; // r14
  _QWORD *v11; // r8
  unsigned __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _KPROCESS *Process; // r15
  int v20; // ebx
  __int64 v21; // rdi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r12
  int v31; // edx
  int v32; // edx
  int v33; // r15d
  unsigned __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rdx
  int v37; // r9d
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // r10
  unsigned __int64 v42; // rdx
  PVOID v43; // rsi
  __int64 *v44; // rdx
  __int64 result; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // r14
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  unsigned int v51; // ebx
  __int64 *v52; // rdx
  unsigned int v53; // eax
  unsigned __int64 AddressSpan; // rax
  __int64 *v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r15
  int WorkingSetInfoList; // edi
  __int64 *v62; // rax
  unsigned int v63; // ebx
  unsigned int v64; // esi
  PVOID v65; // rcx
  unsigned __int64 v66; // rsi
  __int64 v67; // rdi
  _QWORD *v68; // rax
  __int64 **VadEvent; // rax
  char v70; // [rsp+40h] [rbp-158h]
  char PreviousMode; // [rsp+44h] [rbp-154h]
  unsigned int v72; // [rsp+48h] [rbp-150h] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-148h]
  _QWORD *v74; // [rsp+58h] [rbp-140h]
  PVOID Object; // [rsp+60h] [rbp-138h]
  unsigned __int8 v76; // [rsp+68h] [rbp-130h]
  PVOID v77; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v78; // [rsp+78h] [rbp-120h]
  unsigned __int64 v79; // [rsp+80h] [rbp-118h]
  __int128 v80; // [rsp+88h] [rbp-110h]
  __int64 v81; // [rsp+98h] [rbp-100h]
  unsigned __int64 v82; // [rsp+A0h] [rbp-F8h]
  _OWORD v83[3]; // [rsp+A8h] [rbp-F0h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-C0h] BYREF
  struct _KTHREAD *v85; // [rsp+E8h] [rbp-B0h]
  ULONG_PTR v86; // [rsp+F0h] [rbp-A8h]
  __int128 Source; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v88; // [rsp+108h] [rbp-90h]
  __int128 v89; // [rsp+118h] [rbp-80h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v90; // [rsp+128h] [rbp-70h] BYREF

  v7 = (__int64)a4;
  v78 = a4;
  v73 = a2;
  v86 = BugCheckParameter1;
  v11 = (_QWORD *)a6;
  v74 = (_QWORD *)a6;
  v70 = 0;
  v82 = 0LL;
  if ( a3 != 6 && a3 != 3 )
  {
    switch ( a3 )
    {
      case 0:
      case 8:
        v12 = a5;
        if ( a5 >= 0x30 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      case 1:
      case 5:
        v12 = a5;
        if ( a5 >= 8 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      case 2:
        v12 = a5;
        goto LABEL_3;
      case 4:
        v12 = a5;
        if ( a5 >= 0x10 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      case 7:
        v12 = a5;
        if ( a5 >= 0x20 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      default:
        result = 3221225475LL;
        break;
    }
    return result;
  }
  v12 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v85 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( v12 )
    {
      v14 = (unsigned __int64)a4;
      if ( ((unsigned __int8)a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (unsigned __int64)a4 + v12 - 1;
      if ( (unsigned __int64)a4 > v15 || v15 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v14 = *(_BYTE *)v14;
          v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v14 != v16 );
      }
    }
    if ( a6 )
    {
      v17 = a6;
      if ( a6 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
  }
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  v18 = a2 & 0x7FFFFFFFF000LL;
  v79 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a3 != 10 )
    goto LABEL_20;
  Source = *(_OWORD *)a4;
  v88 = *((_OWORD *)a4 + 1);
  v89 = *((_OWORD *)a4 + 2);
  v66 = *((_QWORD *)&v88 + 1);
  *((_QWORD *)&v88 + 1) = 0LL;
  if ( RtlCompareMemoryUlong(&Source, 0x30uLL, 0) != 48 || v66 > 0x7FFFFFFF0000LL - a2 )
    return 3221225485LL;
  v82 = v79 + ((v66 + 4095 + (a2 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL);
  v12 = a5;
  v18 = v79;
  v11 = v74;
LABEL_20:
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
    v77 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 1834380621, (__int64)&v77, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v77;
    Object = v77;
    if ( (*((_DWORD *)v77 + 435) & 0x1000) != 0 )
    {
      ObfDereferenceObjectWithTag(v77, 0x6D566D4Du);
      return 3221225506LL;
    }
    v18 = v79;
    v11 = v74;
  }
  if ( v73 > 0x7FFFFFFDFFFFLL || v18 == 2147352576 && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v64 = -1073741503;
    if ( (a3 & 0xFFFFFFF5) != 0 || a3 == 2 )
    {
      v65 = Object;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0x7FFFFFFE0000LL;
      *(_DWORD *)(v7 + 16) = 2;
      *(_QWORD *)v7 = v18;
      *(_QWORD *)(v7 + 24) = 0x7FFFFFFF0000LL - v18;
      *(_DWORD *)(v7 + 32) = 0x2000;
      *(_DWORD *)(v7 + 36) = 1;
      *(_DWORD *)(v7 + 40) = 0x20000;
      if ( v11 )
        *v11 = 48LL;
      if ( v18 == 2147352576 )
      {
        *(_QWORD *)(v7 + 8) = 2147352576LL;
        *(_DWORD *)(v7 + 36) = 2;
        *(_QWORD *)(v7 + 24) = 4096LL;
        *(_DWORD *)(v7 + 32) = 4096;
      }
      v65 = Object;
      v64 = 0;
    }
    if ( BugCheckParameter1 != -1LL )
      ObfDereferenceObjectWithTag(v65, 0x6D566D4Du);
    return v64;
  }
  switch ( a3 )
  {
    case 4:
      WorkingSetInfoList = MiGetWorkingSetInfoList(v7, v12, (ULONG_PTR)Process, a7);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList < 0 )
        return (unsigned int)WorkingSetInfoList;
      if ( v74 )
        *v74 = v12;
      return 0LL;
    case 5:
      v67 = *(_QWORD *)&Process[2].ThreadSeed[4];
      if ( BugCheckParameter1 != -1LL )
      {
        ObfDereferenceObjectWithTag(v77, 0x6D566D4Du);
        v11 = v74;
      }
      *(_QWORD *)v7 = v67;
      if ( v11 )
        *v11 = 8LL;
      return 0LL;
    case 1:
      WorkingSetInfoList = MiGetWorkingSetInfo(v7, &v84, v12, (__int64)Process);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList < 0 )
        return (unsigned int)WorkingSetInfoList;
      if ( v74 )
        *v74 = 8 * v84 + 8;
      return 0LL;
  }
  if ( BugCheckParameter1 == -1LL )
  {
    memset(&v90, 0, sizeof(v90));
    v20 = 0;
  }
  else
  {
    KiStackAttachProcess(Process, 0, (__int64)&v90);
    v20 = 1;
    v70 = 1;
  }
  if ( a3 == 8 && Process->SecureState.SecureHandle && VslQueryVirtualMemory((__int64)Process, v73, v83) >= 0 )
  {
    if ( v20 )
    {
      KiUnstackDetachProcess(&v90, 0LL);
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    }
    *(_OWORD *)v7 = v83[0];
    *(_OWORD *)(v7 + 16) = v83[1];
    *(_OWORD *)(v7 + 32) = v83[2];
    if ( v74 )
      *v74 = 48LL;
    return 0LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
        if ( (v20 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v90, 0LL);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        return 3221225738LL;
      }
      v21 = 0LL;
      v22 = 0LL;
      if ( Process[2].Affinity.Bitmap[6] )
      {
        v21 = Process[2].Affinity.Bitmap[4];
        v22 = v73 >> 12;
        while ( v21 )
        {
          v23 = *(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32);
          if ( v22 < v23 )
            goto LABEL_39;
          if ( v22 <= (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
          {
            v20 |= 2u;
            v70 = v20;
            break;
          }
          if ( v22 < v23 )
          {
LABEL_39:
            if ( !*(_QWORD *)v21 )
              break;
            v21 = *(_QWORD *)v21;
          }
          else
          {
            if ( !*(_QWORD *)(v21 + 8) )
              break;
            v21 = *(_QWORD *)(v21 + 8);
          }
        }
      }
      if ( (v20 & 2) == 0 )
      {
        if ( v21 )
        {
          v56 = *(unsigned int *)(v21 + 24);
          if ( (v56 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) < v22 )
          {
            i = *(_QWORD *)(v21 + 8);
            if ( i )
            {
              v68 = *(_QWORD **)i;
              if ( *(_QWORD *)i )
              {
                do
                {
                  i = (unsigned __int64)v68;
                  v68 = (_QWORD *)*v68;
                }
                while ( v68 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v21 )
                  break;
                v21 = i;
              }
            }
            v58 = v73 & 0xFFFFFFFFFFFFF000uLL;
            v73 &= 0xFFFFFFFFFFFFF000uLL;
            if ( i )
              v59 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
            else
              v59 = 0x7FFFFFFE0000LL;
LABEL_129:
            v60 = v59 - v58;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
            if ( (v20 & 1) != 0 )
            {
              KiUnstackDetachProcess(&v90, 0LL);
              ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
            }
            if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
            {
              *(_QWORD *)(v7 + 8) = 0LL;
              *(_DWORD *)(v7 + 16) = 0;
              *(_QWORD *)v7 = v73;
              *(_QWORD *)(v7 + 24) = v60;
              *(_DWORD *)(v7 + 32) = 0x10000;
              *(_QWORD *)(v7 + 36) = 1LL;
              if ( v74 )
                *v74 = 48LL;
              return 0LL;
            }
            return 3221225793LL;
          }
          v59 = (v56 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12;
        }
        else
        {
          v59 = 0x7FFFFFFE0000LL;
        }
        v58 = v73 & 0xFFFFFFFFFFFFF000uLL;
        v73 &= 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_129;
      }
      MiReferenceVad(v21);
      --CurrentThread->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      MiLockVad((__int64)CurrentThread, v21);
      v25 = CurrentThread->KernelApcDisable++ == -1;
      if ( v25
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v24);
      }
      if ( (unsigned int)MiVadDeleted(v21) != 1 )
        break;
      MiWaitForVadDeletion(v26);
      MiUnlockAndDereferenceVad((char *)v21);
      v20 &= ~2u;
      v70 = v20;
    }
    v27 = *(unsigned __int8 *)(v21 + 32);
    v28 = *(unsigned int *)(v21 + 24);
    if ( v22 >= (v28 | (unsigned __int64)(v27 << 32))
      && v22 <= (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
    {
      break;
    }
    MiUnlockAndDereferenceVad((char *)v21);
    v20 &= ~2u;
    v70 = v20;
    v7 = (__int64)v78;
    CurrentThread = v85;
  }
  memset(v83, 0, sizeof(v83));
  v29 = v79;
  *(_QWORD *)&v83[0] = v79;
  v30 = (v28 | (v27 << 32)) << 12;
  *((_QWORD *)&v83[0] + 1) = v30;
  v31 = *(_DWORD *)(v21 + 48);
  LODWORD(v73) = MmProtectToValue[(unsigned __int8)v31 >> 3];
  LODWORD(v83[1]) = v73;
  if ( (v31 & 0x8000) != 0 )
  {
    v33 = 0x20000;
    DWORD2(v83[2]) = 0x20000;
    if ( MiIsSoftwareEnclave(v21) )
    {
      v20 |= 0x10u;
      v70 = v20;
    }
    v34 = 0LL;
    goto LABEL_52;
  }
  v32 = v31 & 7;
  if ( v32 == 2 )
  {
    v33 = 0x1000000;
    DWORD2(v83[2]) = 0x1000000;
    if ( a3 == 7 && (*(_DWORD *)(**(_QWORD **)(v21 + 72) + 56LL) & 0x40000000) != 0 )
      goto LABEL_223;
  }
  else
  {
    v33 = 0x40000;
    DWORD2(v83[2]) = 0x40000;
    if ( v32 == 1 )
    {
      v20 |= 8u;
LABEL_224:
      v70 = v20;
      goto LABEL_51;
    }
    if ( a3 == 3 && a5 >= 0x20 || a3 == 7 )
    {
      v46 = *(_QWORD *)(v21 + 72);
      if ( !*(_QWORD *)(*(_QWORD *)v46 + 64LL) )
      {
        v33 = 0x8000000;
        DWORD2(v83[2]) = 0x8000000;
        goto LABEL_51;
      }
      if ( a3 == 7 && (*(_DWORD *)(*(_QWORD *)v46 + 56LL) & 0x40000000) != 0 )
      {
LABEL_223:
        v20 |= 4u;
        goto LABEL_224;
      }
    }
  }
LABEL_51:
  v34 = 0LL;
  if ( a3 == 2 )
  {
    if ( v32 != 1 )
    {
      v62 = *(__int64 **)(v21 + 72);
      v34 = *(_QWORD *)(*v62 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v34 )
        v34 = MiReferenceControlAreaFile(*v62);
    }
    if ( !v34 )
      v34 = 1LL;
  }
LABEL_52:
  if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
  {
    v47 = ((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
         - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
         + 1) << 12;
    v48 = *(unsigned int *)(v21 + 52);
    LODWORD(v48) = v48 & 0x7FFFFFFF;
    v49 = v48 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 34) << 31);
    if ( v49 >= 0x7FFFFFFFELL )
      v49 = 0LL;
    MiUnlockAndDereferenceVad((char *)v21);
    if ( (v20 & 1) != 0 )
    {
      KiUnstackDetachProcess(&v90, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    v50 = v49 << 12;
    v51 = v20 & 0xFFFFFFFD;
    v52 = v78;
    *v78 = v30;
    *((_DWORD *)v52 + 2) = v73;
    v52[2] = v47;
    if ( a3 == 7 )
    {
      *((_DWORD *)v52 + 3) = 0;
      if ( v33 == 0x20000 )
      {
        *((_DWORD *)v52 + 3) = 1;
      }
      else if ( (v51 & 8) != 0 )
      {
        *((_DWORD *)v52 + 3) = 16;
      }
      else if ( v33 == 0x40000 )
      {
        *((_DWORD *)v52 + 3) = 2;
      }
      else if ( v33 == 0x1000000 )
      {
        *((_DWORD *)v52 + 3) = 4;
      }
      else
      {
        *((_DWORD *)v52 + 3) = 8;
      }
      if ( (*(_DWORD *)(v21 + 48) & 0x100000) != 0 )
        *((_DWORD *)v52 + 3) |= 0x80u;
      *((_DWORD *)v52 + 3) ^= (*((_DWORD *)v52 + 3) ^ (8 * v51)) & 0x20;
      *((_DWORD *)v52 + 3) ^= ((unsigned __int8)*((_DWORD *)v52 + 3) ^ (unsigned __int8)(4 * v51)) & 0x40;
    }
    else
    {
      *((_DWORD *)v52 + 3) = v33;
    }
    if ( a5 < 0x20 )
    {
      v53 = 24;
    }
    else
    {
      v52[3] = v50;
      v53 = 32;
    }
    v72 = v53;
    if ( v74 )
      *v74 = v53;
    return 0LL;
  }
  if ( a3 == 6 )
  {
    v80 = 0uLL;
    v81 = 0LL;
    v35 = *(_DWORD *)(v21 + 48);
    if ( (v35 & 0x8000) != 0 || (v35 & 7) != 2 )
    {
      v43 = Object;
    }
    else
    {
      v36 = ***(_QWORD ***)(v21 + 72);
      *(_QWORD *)&v80 = (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12;
      *((_QWORD *)&v80 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 24), -1LL, -1LL);
      v37 = v81 & 0xFFFFFFC3 | (*(unsigned __int8 *)(v36 + 15) >> 2) & 0x3FFFFFFC;
      LODWORD(v81) = v37;
      if ( (*(_DWORD *)(v21 + 48) & 0xF8) == 8 )
        LODWORD(v81) = v37 | 2;
      if ( MiVadMapsLargeImage(v21) )
      {
        VadEvent = MiLocateVadEvent(v38, 16);
        v76 = *((_BYTE *)VadEvent + 8);
        v42 = (unsigned __int64)VadEvent[2];
        *(_QWORD *)&v80 = ((unsigned __int64)v76 << 16) + v80;
      }
      else
      {
        v42 = (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32))
            - (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
            + 1;
      }
      if ( (v39 & 0xFFF) == 0 )
        v41 = 0LL;
      LOBYTE(v20) = v70;
      v43 = v77;
      if ( v42 != v41 + (v39 >> 12) )
        LODWORD(v81) = v40 | 1;
    }
    MiUnlockAndDereferenceVad((char *)v21);
    if ( (v20 & 1) != 0 )
    {
      KiUnstackDetachProcess(&v90, 0LL);
      ObfDereferenceObjectWithTag(v43, 0x6D566D4Du);
    }
    v72 = 24;
    v44 = v78;
    *(_OWORD *)v78 = v80;
    v44[2] = v81;
    if ( v74 )
      *v74 = 24LL;
    return 0LL;
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    AddressSpan = MiQueryAddressSpan((__int64)v83, v29, v82, v21);
    *((_QWORD *)&v83[1] + 1) = AddressSpan - *(_QWORD *)&v83[0];
  }
  MiUnlockAndDereferenceVad((char *)v21);
  if ( (v20 & 1) != 0 )
  {
    KiUnstackDetachProcess(&v90, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  if ( (a3 & 0xFFFFFFF5) == 0 && a3 != 2 )
  {
    v55 = v78;
    *(_OWORD *)v78 = v83[0];
    *((_OWORD *)v55 + 1) = v83[1];
    *((_OWORD *)v55 + 2) = v83[2];
    if ( v74 )
      *v74 = 48LL;
    return 0LL;
  }
  if ( !v34 )
    return 3221225793LL;
  if ( v34 == 1 )
    return 3221225624LL;
  if ( (unsigned int)a5 < a5 )
  {
    ObfDereferenceObject((PVOID)v34);
    return 3221225715LL;
  }
  else
  {
    v72 = 0;
    v63 = ObQueryNameStringMode((char *)v34, (__int64)v78, a5, &v72, PreviousMode);
    ObfDereferenceObject((PVOID)v34);
    if ( v74 )
      *v74 = v72;
    return v63;
  }
}
