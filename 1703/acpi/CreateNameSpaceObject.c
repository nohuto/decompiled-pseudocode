/*
 * XREFs of CreateNameSpaceObject @ 0x1C00196F0
 * Callers:
 *     Device @ 0x1C0012740 (Device.c)
 *     CreateXField @ 0x1C00177E8 (CreateXField.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     Name @ 0x1C001B2E0 (Name.c)
 *     Method @ 0x1C001B390 (Method.c)
 *     Field @ 0x1C001C180 (Field.c)
 *     OpRegion @ 0x1C001C420 (OpRegion.c)
 *     Processor @ 0x1C001DA30 (Processor.c)
 *     CreateNativeNameSpaceObject @ 0x1C002307C (CreateNativeNameSpaceObject.c)
 *     Mutex @ 0x1C0023420 (Mutex.c)
 *     Alias @ 0x1C0029030 (Alias.c)
 *     IndexField @ 0x1C0029CC0 (IndexField.c)
 *     ThermalZone @ 0x1C002A7F0 (ThermalZone.c)
 *     Event @ 0x1C002AC30 (Event.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005BA04 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CC20 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CD84 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CEE0 (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C005E380 (BankField.c)
 *     PowerRes @ 0x1C005E5F0 (PowerRes.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AF294 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0019AF0 (GetNameSpaceObjectNoLock.c)
 *     InsertOwnerObjList @ 0x1C001C0D4 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C001C104 (NewNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C005B3AC (Simulator_NotifyNamespaceCollision.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        _QWORD *a5,
        int a6)
{
  _QWORD *v6; // r14
  _QWORD *p_Count; // r13
  unsigned int v8; // r12d
  unsigned __int8 *v11; // rdi
  __int64 v12; // rbx
  size_t v13; // rbx
  char *PoolWithTag; // r15
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  unsigned __int8 *v18; // r14
  __int64 v19; // rbx
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rsi
  struct _EX_RUNDOWN_REF **v22; // rcx
  KIRQL v24; // bl
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 i; // rax
  KIRQL v28; // [rsp+30h] [rbp-108h]
  __int64 v29; // [rsp+38h] [rbp-100h]
  __int64 v30; // [rsp+40h] [rbp-F8h]
  char Str[128]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = a5;
  p_Count = 0LL;
  v8 = 0;
  v11 = a2;
  v12 = a1;
  if ( a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 + 1 >= 0x80 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 1, 0x69706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else
    {
      PoolWithTag = Str;
    }
    memmove(PoolWithTag, v11, v13);
    PoolWithTag[v13] = 0;
    v11 = (unsigned __int8 *)PoolWithTag;
    v12 = a1;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( !v11 )
  {
    v29 = NewNameSpaceObject(v12);
    p_Count = (_QWORD *)v29;
    if ( v29 )
    {
      v24 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      *(_QWORD *)(v29 + 16) = a3;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
        p_Count = (_QWORD *)v29;
      }
      InsertOwnerObjList(a4, p_Count);
      v25 = *(_QWORD **)(a3 + 32);
      if ( *v25 != a3 + 24 )
        __fastfail(3u);
      p_Count[1] = v25;
      *p_Count = a3 + 24;
      *v25 = p_Count;
      *(_QWORD *)(a3 + 32) = p_Count;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v24);
      goto LABEL_38;
    }
    v8 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(36, 0, 0, 0, 0LL);
    goto LABEL_40;
  }
  v28 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( *v11 )
  {
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v11);
    v8 = NameSpaceObjectNoLock;
    if ( !NameSpaceObjectNoLock )
    {
      if ( (a6 & 0x20000) != 0 )
      {
        v8 = -1073741771;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
        p_Count = 0LL;
      }
      else
      {
        p_Count = 0LL;
        if ( (MEMORY[0x40] & 0x100) != 0 )
        {
          if ( MEMORY[0x30] )
          {
            for ( i = *(_QWORD *)(MEMORY[0x30] + 24LL); i; i = *(_QWORD *)(i + 56) )
              ;
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(MEMORY[0x30] + 32LL));
          }
          InsertOwnerObjList(a4, 0LL);
          MEMORY[0x40] = MEMORY[0x40] & 0xFE7F | 0x80;
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
        }
        else
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
          if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v11, a3) < 0)
            && (a6 & 0x10000) == 0 )
          {
            LogError(3221225525LL);
            AcpiDiagTraceAmlError(0LL, 3221225525LL);
            PrintDebugMessage(35, (_DWORD)v11, 0, 0, 0LL);
          }
          v8 = -1073741771;
        }
      }
      goto LABEL_38;
    }
    if ( NameSpaceObjectNoLock != -1073741772 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
      p_Count = 0LL;
      goto LABEL_37;
    }
    p_Count = 0LL;
  }
  v8 = 0;
  v16 = *v11 - (unsigned __int8)pszSrc[0];
  if ( !v16 )
    v16 = v11[1] - (unsigned __int8)pszSrc[1];
  if ( !v16 )
  {
    v26 = NewNameSpaceObject(v12);
    p_Count = (_QWORD *)v26;
    if ( v26 )
    {
      *(_DWORD *)(v26 + 40) = 1600085852;
      gpnsNameSpaceRoot = v26;
      InsertOwnerObjList(a4, v26);
    }
    else
    {
      v8 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
    }
    goto LABEL_36;
  }
  v17 = strrchr((const char *)v11, 46);
  if ( !v17 )
  {
    if ( *v11 == 92 )
    {
      a3 = gpnsNameSpaceRoot;
      v18 = v11 + 1;
    }
    else
    {
      v18 = v11;
      if ( *v11 == 94 )
      {
        v30 = a3;
        do
        {
          if ( !a3 )
            break;
          a3 = *(_QWORD *)(a3 + 16);
          ++v18;
          v30 = a3;
        }
        while ( *v18 == 94 );
LABEL_21:
        v19 = -1LL;
        do
          ++v19;
        while ( v18[v19] );
        if ( (unsigned int)v19 > 4 && *v18 )
        {
          v8 = -1073741773;
          LogError(3221225523LL);
          AcpiDiagTraceAmlError(0LL, 3221225523LL);
          PrintDebugMessage(37, (_DWORD)v18, 0, 0, 0LL);
        }
        else
        {
          v20 = (struct _EX_RUNDOWN_REF *)HeapAlloc(a1, 1330859592, 0xA0u);
          v21 = v20;
          if ( v20 )
          {
            memset(v20, 0, 0xA0uLL);
            v21[4].Count = (unsigned __int64)&v21[3];
            v21[3].Count = (unsigned __int64)&v21[3];
            LODWORD(v21[14].Count) = 2;
            LODWORD(v21[16].Count) = 1;
            v21[15].Count = (unsigned __int64)v21;
            v21[18].Count = 0LL;
            v21[19].Count = -1LL;
          }
          p_Count = &v21->Count;
          if ( v21 )
          {
            if ( *v11 )
            {
              LODWORD(v21[5].Count) = 1600085855;
              memmove(&v21[5], v18, (unsigned int)v19);
            }
            else
            {
              LODWORD(v21[5].Count) = 0;
            }
            v21[2].Count = a3;
            if ( (gdwfAMLI & 4) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
              p_Count = &v21->Count;
              a3 = v30;
            }
            v21[6].Count = (unsigned __int64)a4;
            if ( a4 )
            {
              v21[7].Count = a4[3].Count;
              a4[3].Count = (unsigned __int64)v21;
              ExAcquireRundownProtection(a4 + 4);
            }
            v22 = *(struct _EX_RUNDOWN_REF ***)(a3 + 32);
            if ( *v22 != (struct _EX_RUNDOWN_REF *)(a3 + 24) )
              __fastfail(3u);
            v21->Count = a3 + 24;
            v21[1].Count = (unsigned __int64)v22;
            *v22 = v21;
            *(_QWORD *)(a3 + 32) = v21;
          }
          else
          {
            v8 = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(0LL, 3221225626LL);
            PrintDebugMessage(36, 0, 0, 0, 0LL);
          }
        }
        goto LABEL_35;
      }
    }
    v30 = a3;
    goto LABEL_21;
  }
  *v17 = 0;
  v18 = (unsigned __int8 *)(v17 + 1);
  v8 = GetNameSpaceObjectNoLock(v11);
  if ( !v8 )
  {
    a3 = v30;
    goto LABEL_21;
  }
LABEL_35:
  v6 = a5;
LABEL_36:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
LABEL_37:
  if ( !v8 || v8 == -1073741771 )
  {
LABEL_38:
    if ( v6 )
      *v6 = p_Count;
  }
LABEL_40:
  if ( PoolWithTag )
  {
    if ( Str != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v8;
}
