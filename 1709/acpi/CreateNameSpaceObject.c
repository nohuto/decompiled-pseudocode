/*
 * XREFs of CreateNameSpaceObject @ 0x1C001C380
 * Callers:
 *     Mutex @ 0x1C0011A20 (Mutex.c)
 *     CreateNativeNameSpaceObject @ 0x1C001211C (CreateNativeNameSpaceObject.c)
 *     Field @ 0x1C001A430 (Field.c)
 *     CreateXField @ 0x1C001BC5C (CreateXField.c)
 *     Method @ 0x1C001BD50 (Method.c)
 *     Name @ 0x1C001BF20 (Name.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 *     Device @ 0x1C001C780 (Device.c)
 *     OpRegion @ 0x1C0027850 (OpRegion.c)
 *     Processor @ 0x1C0029810 (Processor.c)
 *     Alias @ 0x1C0029CD0 (Alias.c)
 *     IndexField @ 0x1C002ABB0 (IndexField.c)
 *     ThermalZone @ 0x1C002B3C0 (ThermalZone.c)
 *     Event @ 0x1C002B7A0 (Event.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CA10 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CB74 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CCD0 (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C005EF20 (BankField.c)
 *     PowerRes @ 0x1C005F190 (PowerRes.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00B12F8 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C000BEE0 (GetNameSpaceObjectNoLock.c)
 *     NewNameSpaceObject @ 0x1C001A558 (NewNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x1C001A5C8 (InsertOwnerObjList.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C005BF20 (Simulator_NotifyNamespaceCollision.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _EX_RUNDOWN_REF **a5,
        int a6)
{
  struct _EX_RUNDOWN_REF **v6; // r14
  struct _EX_RUNDOWN_REF *v7; // r13
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
  struct _EX_RUNDOWN_REF *v22; // rcx
  struct _EX_RUNDOWN_REF **v23; // rcx
  KIRQL v25; // bl
  struct _EX_RUNDOWN_REF **v26; // rcx
  struct _EX_RUNDOWN_REF *v27; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF *v29; // rax
  struct _EX_RUNDOWN_REF *v30; // rcx
  KIRQL v31; // [rsp+30h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+38h] [rbp-100h] BYREF
  __int64 v33; // [rsp+40h] [rbp-F8h] BYREF
  struct _EX_RUNDOWN_REF **v34; // [rsp+48h] [rbp-F0h]
  __int64 v35; // [rsp+50h] [rbp-E8h]
  struct _EX_RUNDOWN_REF *v36; // [rsp+58h] [rbp-E0h]
  char Str[128]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = a5;
  v7 = 0LL;
  v8 = 0;
  v36 = a4;
  v35 = a1;
  v34 = a5;
  v32 = 0LL;
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
    v12 = v35;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( v11 )
  {
    v31 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    if ( *v11 )
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock((const char *)v11, a3, (__int64)&v32, 1);
      v8 = NameSpaceObjectNoLock;
      if ( !NameSpaceObjectNoLock )
      {
        if ( (a6 & 0x20000) != 0 )
        {
          v8 = -1073741771;
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
          v7 = v32;
        }
        else
        {
          v7 = v32;
          if ( (v32[8].Count & 0x100) != 0 )
          {
            Count = v32[6].Count;
            if ( Count )
            {
              v29 = *(struct _EX_RUNDOWN_REF **)(Count + 24);
              v30 = (struct _EX_RUNDOWN_REF *)(Count + 24);
              if ( v29 )
              {
                while ( v29 != v32 )
                {
                  v30 = v29 + 7;
                  v29 = (struct _EX_RUNDOWN_REF *)v29[7].Count;
                  if ( !v29 )
                    goto LABEL_75;
                }
                v30->Count = v32[7].Count;
              }
LABEL_75:
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7[6].Count + 32));
            }
            InsertOwnerObjList(a4, v7);
            LOWORD(v7[8].Count) = v7[8].Count & 0xFE7F | 0x80;
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
          }
          else
          {
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
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
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
        v7 = v32;
        goto LABEL_37;
      }
      v7 = v32;
    }
    v8 = 0;
    v16 = *v11 - (unsigned __int8)pszSrc[0];
    if ( !v16 )
      v16 = v11[1] - (unsigned __int8)pszSrc[1];
    if ( !v16 )
    {
      v27 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v12);
      v7 = v27;
      if ( v27 )
      {
        LODWORD(v27[5].Count) = 1600085852;
        gpnsNameSpaceRoot = (__int64)v27;
        InsertOwnerObjList(a4, v27);
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
    if ( v17 )
    {
      *v17 = 0;
      v18 = (unsigned __int8 *)(v17 + 1);
      v8 = GetNameSpaceObjectNoLock((const char *)v11, a3, (__int64)&v33, -2147483647);
      if ( v8 )
      {
LABEL_35:
        v6 = v34;
LABEL_36:
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v31);
LABEL_37:
        if ( !v8 || v8 == -1073741771 )
        {
LABEL_38:
          if ( v6 )
            *v6 = v7;
          goto LABEL_40;
        }
        goto LABEL_40;
      }
      a3 = v33;
    }
    else
    {
      if ( *v11 == 92 )
      {
        a3 = gpnsNameSpaceRoot;
        v18 = v11 + 1;
        goto LABEL_20;
      }
      v18 = v11;
      if ( *v11 != 94 )
      {
LABEL_20:
        v33 = a3;
        goto LABEL_21;
      }
      v33 = a3;
      do
      {
        if ( !a3 )
          break;
        a3 = *(_QWORD *)(a3 + 16);
        ++v18;
        v33 = a3;
      }
      while ( *v18 == 94 );
    }
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
      v20 = (struct _EX_RUNDOWN_REF *)HeapAlloc(v35, 1330859592, 0xA0u);
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
      v32 = v21;
      v7 = v21;
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
          v7 = v32;
          a3 = v33;
        }
        v22 = v36;
        v21[6].Count = (unsigned __int64)v36;
        if ( v22 )
        {
          v21[7].Count = v22[3].Count;
          v22[3].Count = (unsigned __int64)v21;
          ExAcquireRundownProtection(v22 + 4);
        }
        v23 = *(struct _EX_RUNDOWN_REF ***)(a3 + 32);
        if ( *v23 != (struct _EX_RUNDOWN_REF *)(a3 + 24) )
          __fastfail(3u);
        v21->Count = a3 + 24;
        v21[1].Count = (unsigned __int64)v23;
        *v23 = v21;
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
  v32 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v12);
  v7 = v32;
  if ( v32 )
  {
    v25 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v32[2].Count = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
      v7 = v32;
    }
    InsertOwnerObjList(a4, v7);
    v26 = *(struct _EX_RUNDOWN_REF ***)(a3 + 32);
    if ( *v26 != (struct _EX_RUNDOWN_REF *)(a3 + 24) )
      __fastfail(3u);
    v7[1].Count = (unsigned __int64)v26;
    v7->Count = a3 + 24;
    *v26 = v7;
    *(_QWORD *)(a3 + 32) = v7;
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v25);
    goto LABEL_38;
  }
  v8 = -1073741670;
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(36, 0, 0, 0, 0LL);
LABEL_40:
  if ( PoolWithTag )
  {
    if ( Str != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v8;
}
