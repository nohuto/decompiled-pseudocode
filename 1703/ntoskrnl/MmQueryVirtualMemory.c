/*
 * XREFs of MmQueryVirtualMemory @ 0x14051B090
 * Callers:
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x14003536C (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     NtQueryVirtualMemory @ 0x14051B054 (NtQueryVirtualMemory.c)
 *     PfpVirtualQuery @ 0x14057883C (PfpVirtualQuery.c)
 * Callees:
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiQueryAddressSpan @ 0x1400D1790 (MiQueryAddressSpan.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VslQueryVirtualMemory @ 0x1401ED718 (VslQueryVirtualMemory.c)
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmQueryVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  _QWORD *v10; // r8
  unsigned __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _KPROCESS *Process; // r14
  char v18; // al
  int v19; // ebx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // r14
  unsigned __int64 v28; // rcx
  int v29; // edx
  int v30; // edx
  int v31; // r12d
  unsigned __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // r10
  unsigned __int64 v39; // rdx
  PVOID v40; // rsi
  __int64 result; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rsi
  unsigned int v47; // ebx
  unsigned int v48; // eax
  unsigned __int64 AddressSpan; // rax
  int WorkingSetInfoList; // edi
  __int64 v51; // rcx
  unsigned __int64 i; // rcx
  __int64 *v53; // rax
  unsigned int v54; // ebx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // r14
  unsigned int v58; // esi
  unsigned __int64 v59; // rdx
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 **VadEvent; // rax
  char v63; // [rsp+40h] [rbp-118h]
  char PreviousMode; // [rsp+44h] [rbp-114h]
  unsigned __int64 v65; // [rsp+48h] [rbp-110h]
  unsigned __int64 v66; // [rsp+48h] [rbp-110h]
  unsigned int v67; // [rsp+50h] [rbp-108h] BYREF
  _QWORD *v68; // [rsp+58h] [rbp-100h]
  PVOID Object; // [rsp+60h] [rbp-F8h]
  unsigned __int8 v70; // [rsp+68h] [rbp-F0h]
  PVOID v71; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v72; // [rsp+78h] [rbp-E0h]
  __int64 v73; // [rsp+88h] [rbp-D0h]
  ULONG_PTR v74; // [rsp+90h] [rbp-C8h]
  struct _KTHREAD *v75; // [rsp+98h] [rbp-C0h]
  _OWORD v76[3]; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-88h] BYREF
  $5BC46E0569261879018906DEC3127961 v78; // [rsp+E0h] [rbp-78h] BYREF

  v65 = a2;
  v74 = BugCheckParameter1;
  v10 = (_QWORD *)a6;
  v68 = (_QWORD *)a6;
  v63 = 0;
  if ( a3 != 6 && a3 != 3 )
  {
    switch ( a3 )
    {
      case 0:
      case 8:
        v11 = a5;
        if ( a5 >= 0x30 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      case 1:
      case 5:
        v11 = a5;
        if ( a5 >= 8 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      case 2:
        v11 = a5;
        goto LABEL_3;
      case 4:
        v11 = a5;
        if ( a5 >= 0x10 )
          goto LABEL_3;
        result = 3221225476LL;
        break;
      case 7:
        v11 = a5;
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
  v11 = a5;
  if ( a5 < 0x18 )
    return 3221225476LL;
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v75 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      v13 = a4;
      if ( (a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = a4 + a5 - 1;
      if ( a4 > v14 || v14 >= 0x7FFFFFFF0000LL )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
        a2 = v65;
      }
      else
      {
        v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v13 = *(_BYTE *)v13;
          v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v13 != v15 );
        a2 = v65;
      }
    }
    if ( a6 )
    {
      v16 = a6;
      if ( a6 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v16 = *(_QWORD *)v16;
    }
    v11 = a5;
  }
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  if ( BugCheckParameter1 == -1LL )
  {
    Process = CurrentThread->ApcState.Process;
    Object = Process;
    v71 = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 1834380621, (__int64)&v71, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Process = (_KPROCESS *)v71;
    Object = v71;
    if ( v71 == PsInitialSystemProcess )
    {
      ObfDereferenceObjectWithTag(v71, 0x6D566D4Du);
      return 3221225506LL;
    }
    a2 = v65;
    v10 = v68;
  }
  if ( a2 > 0x7FFFFFFDFFFFLL
    || (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v58 = -1073741503;
    if ( (a3 & 0xFFFFFFF7) == 0 )
    {
      *(_QWORD *)(a4 + 8) = 0x7FFFFFFE0000LL;
      *(_DWORD *)(a4 + 16) = 2;
      v59 = a2 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)a4 = v59;
      *(_QWORD *)(a4 + 24) = 0x7FFFFFFF0000LL - v59;
      *(_DWORD *)(a4 + 32) = 0x2000;
      *(_DWORD *)(a4 + 36) = 1;
      *(_DWORD *)(a4 + 40) = 0x20000;
      if ( v10 )
        *v10 = 48LL;
      if ( v59 == 2147352576 )
      {
        *(_QWORD *)(a4 + 8) = 2147352576LL;
        *(_DWORD *)(a4 + 36) = 2;
        *(_QWORD *)(a4 + 24) = 4096LL;
        *(_DWORD *)(a4 + 32) = 4096;
      }
      v58 = 0;
      Process = (_KPROCESS *)Object;
    }
    if ( BugCheckParameter1 != -1LL )
      ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
    return v58;
  }
  switch ( a3 )
  {
    case 4:
      WorkingSetInfoList = MiGetWorkingSetInfoList(a4, a5, (ULONG_PTR)Process, a7);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList >= 0 )
      {
        if ( v68 )
          *v68 = a5;
        return 0LL;
      }
      return (unsigned int)WorkingSetInfoList;
    case 5:
      v60 = *(_QWORD *)&Process[2].0;
      if ( BugCheckParameter1 != -1LL )
      {
        ObfDereferenceObjectWithTag(v71, 0x6D566D4Du);
        v10 = v68;
      }
      *(_QWORD *)a4 = v60;
      if ( v10 )
        *v10 = 8LL;
      return 0LL;
    case 1:
      WorkingSetInfoList = MiGetWorkingSetInfo(a4, &v77, v11, (__int64)Process);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      if ( WorkingSetInfoList >= 0 )
      {
        if ( v68 )
          *v68 = 8 * v77 + 8;
        return 0LL;
      }
      return (unsigned int)WorkingSetInfoList;
  }
  if ( BugCheckParameter1 == -1LL )
  {
    memset(&v78, 0, sizeof(v78));
    v18 = 1;
    v19 = 0;
  }
  else
  {
    KiStackAttachProcess(Process, 0, (__int64)&v78);
    v18 = 1;
    v19 = 1;
    v63 = 1;
  }
  if ( a3 == 8 )
  {
    if ( !Process->SecurePid )
      v18 = 0;
    if ( v18 && VslQueryVirtualMemory((__int64)Process, v65, v76) >= 0 )
    {
      if ( v19 )
      {
        KiUnstackDetachProcess(&v78, 0LL);
        ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
      }
      *(_OWORD *)a4 = v76[0];
      *(_OWORD *)(a4 + 16) = v76[1];
      *(_OWORD *)(a4 + 32) = v76[2];
      if ( v68 )
        *v68 = 48LL;
      return 0LL;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
        if ( (v19 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v78, 0LL);
          ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
        }
        return 3221225738LL;
      }
      v20 = 0LL;
      v21 = 0LL;
      if ( Process[2].Affinity.Bitmap[6] )
      {
        v20 = Process[2].Affinity.Bitmap[4];
        v21 = v65 >> 12;
        while ( v20 )
        {
          v22 = *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32);
          if ( v21 < v22 )
            goto LABEL_41;
          if ( v21 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
          {
            v19 |= 2u;
            v63 = v19;
            break;
          }
          if ( v21 < v22 )
          {
LABEL_41:
            if ( !*(_QWORD *)v20 )
              break;
            v20 = *(_QWORD *)v20;
          }
          else
          {
            if ( !*(_QWORD *)(v20 + 8) )
              break;
            v20 = *(_QWORD *)(v20 + 8);
          }
        }
      }
      if ( (v19 & 2) == 0 )
      {
        if ( v20 )
        {
          v51 = *(unsigned int *)(v20 + 24);
          if ( (v51 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) < v21 )
          {
            i = *(_QWORD *)(v20 + 8);
            if ( i )
            {
              v61 = *(_QWORD **)i;
              if ( *(_QWORD *)i )
              {
                do
                {
                  i = (unsigned __int64)v61;
                  v61 = (_QWORD *)*v61;
                }
                while ( v61 );
              }
            }
            else
            {
              for ( i = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v20 )
                  break;
                v20 = i;
              }
            }
            v55 = v65 & 0xFFFFFFFFFFFFF000uLL;
            if ( i )
              v56 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
            else
              v56 = 0x7FFFFFFE0000LL;
LABEL_147:
            v57 = v56 - v55;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
            if ( (v19 & 1) != 0 )
            {
              KiUnstackDetachProcess(&v78, 0LL);
              ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
            }
            if ( (a3 & 0xFFFFFFF7) == 0 )
            {
              *(_QWORD *)(a4 + 8) = 0LL;
              *(_DWORD *)(a4 + 16) = 0;
              *(_QWORD *)a4 = v55;
              *(_QWORD *)(a4 + 24) = v57;
              *(_DWORD *)(a4 + 32) = 0x10000;
              *(_QWORD *)(a4 + 36) = 1LL;
              if ( v68 )
                *v68 = 48LL;
              return 0LL;
            }
            return 3221225793LL;
          }
          v56 = (v51 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12;
        }
        else
        {
          v56 = 0x7FFFFFFE0000LL;
        }
        v55 = v65 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_147;
      }
      MiReferenceVad(v20);
      --CurrentThread->KernelApcDisable;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      MiLockVad((__int64)CurrentThread, v20);
      v24 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v24;
      if ( !v24
        && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v23);
      }
      if ( (unsigned int)MiVadDeleted(v20) != 1 )
        break;
      MiWaitForVadDeletion(v25);
      MiUnlockAndDereferenceVad((char *)v20);
      v19 &= ~2u;
      v63 = v19;
    }
    v26 = *(unsigned __int8 *)(v20 + 32);
    v27 = *(unsigned int *)(v20 + 24);
    if ( v21 >= (v27 | (unsigned __int64)(v26 << 32))
      && v21 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
    {
      break;
    }
    MiUnlockAndDereferenceVad((char *)v20);
    v19 &= ~2u;
    v63 = v19;
    CurrentThread = v75;
    Process = (_KPROCESS *)Object;
  }
  memset(v76, 0, sizeof(v76));
  v28 = v65 & 0xFFFFFFFFFFFFF000uLL;
  v66 = v28;
  *(_QWORD *)&v76[0] = v28;
  v75 = (struct _KTHREAD *)((v27 | (v26 << 32)) << 12);
  *((_QWORD *)&v76[0] + 1) = v75;
  v29 = *(_DWORD *)(v20 + 48);
  LODWORD(v74) = MmProtectToValue[(unsigned __int8)v29 >> 3];
  LODWORD(v76[1]) = v74;
  if ( (v29 & 0x8000) == 0 )
  {
    v30 = v29 & 7;
    if ( v30 == 2 )
    {
      v31 = 0x1000000;
      DWORD2(v76[2]) = 0x1000000;
      if ( a3 != 7 || (*(_DWORD *)(**(_QWORD **)(v20 + 72) + 56LL) & 0x40000000) == 0 )
        goto LABEL_53;
    }
    else
    {
      v31 = 0x40000;
      DWORD2(v76[2]) = 0x40000;
      if ( v30 == 1 )
      {
        v19 |= 8u;
LABEL_218:
        v63 = v19;
        goto LABEL_53;
      }
      if ( (a3 != 3 || a5 < 0x20) && a3 != 7 )
        goto LABEL_53;
      v42 = *(_QWORD *)(v20 + 72);
      if ( !*(_QWORD *)(*(_QWORD *)v42 + 64LL) )
      {
        v31 = 0x8000000;
        DWORD2(v76[2]) = 0x8000000;
LABEL_53:
        v32 = 0LL;
        if ( a3 != 2 )
          goto LABEL_54;
        if ( v30 != 1 )
        {
          v53 = *(__int64 **)(v20 + 72);
          v32 = *(_QWORD *)(*v53 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v32 )
            v32 = MiReferenceControlAreaFile(*v53);
        }
        if ( v32 )
        {
LABEL_54:
          v28 = v66;
        }
        else
        {
          v32 = 1LL;
          v28 = v66;
        }
        goto LABEL_55;
      }
      if ( a3 != 7 || (*(_DWORD *)(*(_QWORD *)v42 + 56LL) & 0x40000000) == 0 )
        goto LABEL_53;
    }
    v19 |= 4u;
    goto LABEL_218;
  }
  v31 = 0x20000;
  DWORD2(v76[2]) = 0x20000;
  v32 = 0LL;
LABEL_55:
  if ( ((a3 - 3) & 0xFFFFFFFB) == 0 )
  {
    v43 = ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32))
         - (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
         + 1) << 12;
    v44 = *(unsigned int *)(v20 + 52);
    LODWORD(v44) = v44 & 0x7FFFFFFF;
    v45 = v44 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) << 31);
    if ( v45 >= 0x7FFFFFFFELL )
      v45 = 0LL;
    MiUnlockAndDereferenceVad((char *)v20);
    if ( (v19 & 1) != 0 )
    {
      KiUnstackDetachProcess(&v78, 0LL);
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    }
    v46 = v45 << 12;
    v47 = v19 & 0xFFFFFFFD;
    *(_QWORD *)a4 = v75;
    *(_DWORD *)(a4 + 8) = v74;
    *(_QWORD *)(a4 + 16) = v43;
    if ( a3 == 7 )
    {
      *(_DWORD *)(a4 + 12) = 0;
      if ( v31 == 0x20000 )
      {
        *(_DWORD *)(a4 + 12) = 1;
      }
      else if ( (v47 & 8) != 0 )
      {
        *(_DWORD *)(a4 + 12) = 16;
      }
      else if ( v31 == 0x40000 )
      {
        *(_DWORD *)(a4 + 12) = 2;
      }
      else if ( v31 == 0x1000000 )
      {
        *(_DWORD *)(a4 + 12) = 4;
      }
      else
      {
        *(_DWORD *)(a4 + 12) = 8;
      }
      *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a4 + 12) ^ (8 * v47)) & 0x20;
    }
    else
    {
      *(_DWORD *)(a4 + 12) = v31;
    }
    if ( a5 < 0x20 )
    {
      v48 = 24;
    }
    else
    {
      *(_QWORD *)(a4 + 24) = v46;
      v48 = 32;
    }
    v67 = v48;
    if ( v68 )
      *v68 = v48;
    return 0LL;
  }
  if ( a3 == 6 )
  {
    v72 = 0uLL;
    v73 = 0LL;
    v33 = *(_DWORD *)(v20 + 48);
    if ( (v33 & 0x8000) != 0 || (v33 & 7) != 2 )
    {
      v40 = Object;
    }
    else
    {
      v34 = ***(_QWORD ***)(v20 + 72);
      *(_QWORD *)&v72 = (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12;
      *((_QWORD *)&v72 + 1) = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 24), -1LL, -1LL);
      if ( (*(_DWORD *)(v20 + 48) & 0xF8) == 8 )
        LODWORD(v73) = v73 | 2;
      if ( MiVadMapsLargeImage(v20) )
      {
        VadEvent = MiLocateVadEvent(v35, 16);
        v70 = *((_BYTE *)VadEvent + 8);
        v39 = (unsigned __int64)VadEvent[2];
        *(_QWORD *)&v72 = ((unsigned __int64)v70 << 16) + v72;
      }
      else
      {
        v39 = (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32))
            - (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))
            + 1;
      }
      if ( (v36 & 0xFFF) == 0 )
        v38 = 0LL;
      LOBYTE(v19) = v63;
      v40 = v71;
      if ( v39 != v38 + (v36 >> 12) )
        LODWORD(v73) = v37 | 1;
    }
    MiUnlockAndDereferenceVad((char *)v20);
    if ( (v19 & 1) != 0 )
    {
      KiUnstackDetachProcess(&v78, 0LL);
      ObfDereferenceObjectWithTag(v40, 0x6D566D4Du);
    }
    v67 = 24;
    *(_OWORD *)a4 = v72;
    *(_QWORD *)(a4 + 16) = v73;
    if ( v68 )
      *v68 = 24LL;
    return 0LL;
  }
  if ( (a3 & 0xFFFFFFF7) == 0 )
  {
    AddressSpan = MiQueryAddressSpan((__int64)v76, v28, v20);
    *((_QWORD *)&v76[1] + 1) = AddressSpan - *(_QWORD *)&v76[0];
  }
  MiUnlockAndDereferenceVad((char *)v20);
  if ( (v19 & 1) != 0 )
  {
    KiUnstackDetachProcess(&v78, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  }
  if ( (a3 & 0xFFFFFFF7) == 0 )
  {
    *(_OWORD *)a4 = v76[0];
    *(_OWORD *)(a4 + 16) = v76[1];
    *(_OWORD *)(a4 + 32) = v76[2];
    if ( v68 )
      *v68 = 48LL;
    return 0LL;
  }
  if ( !v32 )
    return 3221225793LL;
  if ( v32 == 1 )
    return 3221225624LL;
  if ( (unsigned int)a5 < a5 )
  {
    ObfDereferenceObject((PVOID)v32);
    return 3221225715LL;
  }
  else
  {
    v67 = 0;
    v54 = ObQueryNameStringMode((char *)v32, a4, a5, &v67, PreviousMode);
    ObfDereferenceObject((PVOID)v32);
    if ( v68 )
      *v68 = v67;
    return v54;
  }
}
