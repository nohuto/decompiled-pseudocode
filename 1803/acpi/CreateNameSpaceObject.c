/*
 * XREFs of CreateNameSpaceObject @ 0x1C0049AB8
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0045240 (CreateNativeNameSpaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0045BFC (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C004A930 (BankField.c)
 *     CreateXField @ 0x1C004ADAC (CreateXField.c)
 *     Device @ 0x1C004AED0 (Device.c)
 *     Event @ 0x1C004AF90 (Event.c)
 *     Field @ 0x1C004AFF0 (Field.c)
 *     IndexField @ 0x1C004B180 (IndexField.c)
 *     Method @ 0x1C004B510 (Method.c)
 *     Mutex @ 0x1C004B680 (Mutex.c)
 *     OpRegion @ 0x1C004B730 (OpRegion.c)
 *     PowerRes @ 0x1C004B8B0 (PowerRes.c)
 *     Processor @ 0x1C004BA20 (Processor.c)
 *     ThermalZone @ 0x1C004BB90 (ThermalZone.c)
 *     Alias @ 0x1C004F180 (Alias.c)
 *     Name @ 0x1C004F230 (Name.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C009C064 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0044910 (Simulator_NotifyNamespaceCollision.c)
 *     InsertOwnerObjList @ 0x1C0046E04 (InsertOwnerObjList.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004A2E0 (GetNameSpaceObjectNoLock.c)
 *     NewNameSpaceObject @ 0x1C004A874 (NewNameSpaceObject.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        __int64 *a5,
        int a6)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r15
  unsigned __int8 *v10; // r14
  size_t v11; // r15
  void *v12; // r12
  KIRQL v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rsi
  KIRQL v17; // dl
  KIRQL v18; // cl
  unsigned int NameSpaceObjectNoLock; // eax
  __int64 v20; // rcx
  __int64 *i; // rcx
  __int64 v22; // rax
  char v23; // r15
  int v24; // ecx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rcx
  char *v27; // rax
  unsigned __int8 *v28; // r15
  unsigned int v29; // eax
  size_t v30; // rax
  bool v31; // zf
  unsigned __int8 v32; // al
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rsi
  KIRQL v38; // dl
  KIRQL OldIrql; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v42; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  size_t Size; // [rsp+60h] [rbp-A0h]
  __int64 *v46; // [rsp+68h] [rbp-98h]
  char Str[128]; // [rsp+70h] [rbp-90h] BYREF

  v6 = 0LL;
  v46 = a5;
  v7 = 0;
  v44 = a1;
  v42 = a4;
  v8 = a1;
  v40 = 0LL;
  v10 = a2;
  if ( a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    if ( v11 + 1 >= 0x80 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 1, 0x69706341u);
      v12 = P;
      if ( !P )
        return 3221225626LL;
    }
    else
    {
      v12 = Str;
      P = Str;
    }
    memmove(v12, v10, v11);
    *((_BYTE *)v12 + v11) = 0;
    v10 = (unsigned __int8 *)v12;
    v8 = v44;
  }
  else
  {
    P = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( v10 )
  {
    v18 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    OldIrql = v18;
    if ( *v10 )
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v10, a3, &v40, 1LL);
      v18 = OldIrql;
      v7 = NameSpaceObjectNoLock;
      v6 = v40;
    }
    else
    {
      v7 = -1073741772;
    }
    if ( !v7 )
    {
      if ( (a6 & 0x20000) != 0 )
      {
        v7 = -1073741771;
        v17 = v18;
      }
      else
      {
        if ( (*(_WORD *)(v6 + 64) & 0x100) == 0 )
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v18);
          v23 = BYTE2(a6) & 1;
          if ( g_SimulatorCallbackObject && (int)Simulator_NotifyNamespaceCollision((__int64)v10, a3) >= 0 )
            v23 = 1;
          if ( !v23 )
          {
            LogError(-1073741771);
            AcpiDiagTraceAmlError(0LL, -1073741771);
            PrintDebugMessage(35, v10, 0LL, 0LL, 0LL);
          }
          v7 = -1073741771;
          goto LABEL_78;
        }
        v20 = *(_QWORD *)(v6 + 48);
        if ( v20 )
        {
          for ( i = (__int64 *)(v20 + 24); ; i = (__int64 *)(v22 + 56) )
          {
            v22 = *i;
            if ( !*i )
              break;
            if ( v22 == v6 )
            {
              *i = *(_QWORD *)(v6 + 56);
              break;
            }
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v6 + 48) + 32LL));
        }
        InsertOwnerObjList(v42, (struct _EX_RUNDOWN_REF *)v6);
        v17 = OldIrql;
        *(_WORD *)(v6 + 64) = *(_WORD *)(v6 + 64) & 0xFE7F | 0x80;
      }
      goto LABEL_20;
    }
    if ( v7 != -1073741772 )
    {
      v38 = v18;
      goto LABEL_76;
    }
    v7 = 0;
    v24 = *v10 - (unsigned __int8)asc_1C005D46C[0];
    if ( !v24 )
      v24 = v10[1] - (unsigned __int8)asc_1C005D46C[1];
    if ( !v24 )
    {
      v25 = NewNameSpaceObject(v8);
      v6 = v25;
      if ( v25 )
      {
        v26 = v42;
        *(_DWORD *)(v25 + 40) = 1600085852;
        gpnsNameSpaceRoot = v25;
        InsertOwnerObjList(v26, (struct _EX_RUNDOWN_REF *)v25);
LABEL_74:
        v38 = OldIrql;
LABEL_76:
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
        if ( v7 && v7 != -1073741771 )
          goto LABEL_80;
LABEL_78:
        if ( v46 )
          *v46 = v6;
        goto LABEL_80;
      }
LABEL_65:
      v7 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      PrintDebugMessage(36, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_74;
    }
    v27 = strrchr((const char *)v10, 46);
    if ( v27 )
    {
      v28 = (unsigned __int8 *)(v27 + 1);
      *v27 = 0;
      v29 = GetNameSpaceObjectNoLock(v10, a3, &v41, 2147483649LL);
      a3 = v41;
      v7 = v29;
      goto LABEL_51;
    }
    v32 = *v10;
    if ( *v10 == 92 )
    {
      a3 = gpnsNameSpaceRoot;
      v28 = v10 + 1;
      v41 = gpnsNameSpaceRoot;
    }
    else
    {
      v41 = a3;
      v28 = v10;
      if ( v32 != 94 )
      {
LABEL_51:
        if ( v7 )
          goto LABEL_74;
        goto LABEL_52;
      }
      v33 = a3;
      do
      {
        if ( !v33 )
          break;
        v33 = *(_QWORD *)(a3 + 16);
        ++v28;
        a3 = v33;
        v41 = v33;
      }
      while ( *v28 == 94 );
    }
LABEL_52:
    v30 = -1LL;
    do
      ++v30;
    while ( v28[v30] );
    v31 = *v28 == 0;
    Size = v30;
    if ( !v31 && (unsigned int)v30 > 4 )
    {
      v7 = -1073741773;
      LogError(-1073741773);
      AcpiDiagTraceAmlError(0LL, -1073741773);
      PrintDebugMessage(37, v28, 0LL, 0LL, 0LL);
      goto LABEL_74;
    }
    v34 = NewNameSpaceObject(v44);
    v40 = v34;
    v6 = v34;
    if ( v34 )
    {
      if ( *v10 )
      {
        v35 = (unsigned int)Size;
        *(_DWORD *)(v34 + 40) = 1600085855;
        memmove((void *)(v34 + 40), v28, v35);
      }
      else
      {
        *(_DWORD *)(v34 + 40) = 0;
      }
      *(_QWORD *)(v6 + 16) = a3;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a3 + 112), 1u);
        v6 = v40;
        a3 = v41;
      }
      InsertOwnerObjList(v42, (struct _EX_RUNDOWN_REF *)v6);
      v36 = *(__int64 **)(a3 + 32);
      v37 = a3 + 24;
      if ( *v36 != v37 )
        __fastfail(3u);
      *(_QWORD *)v6 = v37;
      *(_QWORD *)(v6 + 8) = v36;
      *v36 = v6;
      *(_QWORD *)(v37 + 8) = v6;
      goto LABEL_74;
    }
    goto LABEL_65;
  }
  v40 = NewNameSpaceObject(v8);
  v6 = v40;
  if ( v40 )
  {
    v14 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v40 + 16) = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(a3 + 112), 1u);
      v6 = v40;
    }
    InsertOwnerObjList(v42, (struct _EX_RUNDOWN_REF *)v6);
    v15 = *(__int64 **)(a3 + 32);
    v16 = a3 + 24;
    if ( *v15 != v16 )
      __fastfail(3u);
    *(_QWORD *)v6 = v16;
    v17 = v14;
    *(_QWORD *)(v6 + 8) = v15;
    *v15 = v6;
    *(_QWORD *)(v16 + 8) = v6;
LABEL_20:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v17);
    goto LABEL_78;
  }
  v7 = -1073741670;
  LogError(-1073741670);
  AcpiDiagTraceAmlError(0LL, -1073741670);
  PrintDebugMessage(36, 0LL, 0LL, 0LL, 0LL);
LABEL_80:
  if ( P )
  {
    if ( Str != P )
      ExFreePoolWithTag(P, 0);
  }
  return v7;
}
