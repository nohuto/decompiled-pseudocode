/*
 * XREFs of PspSetQuotaLimits @ 0x140449BF0
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1400D46B0 (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspSinglePrivCheck @ 0x140449FE4 (PspSinglePrivCheck.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14046C374 (SePrivilegedServiceAuditAlarm.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 */

__int64 __fastcall PspSetQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r12d
  char v11; // r15
  _QWORD *v12; // r14
  char v13; // r13
  __int64 v14; // r14
  __int64 v15; // r9
  bool v16; // zf
  int v17; // r14d
  signed __int64 *v18; // rdi
  PACCESS_TOKEN v19; // rbx
  char v20; // [rsp+40h] [rbp-118h]
  char v21; // [rsp+41h] [rbp-117h]
  char v22; // [rsp+42h] [rbp-116h]
  char v23; // [rsp+43h] [rbp-115h] BYREF
  int v24; // [rsp+44h] [rbp-114h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v27; // [rsp+58h] [rbp-100h]
  _OWORD v28[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v30[24]; // [rsp+E0h] [rbp-78h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v31; // [rsp+F8h] [rbp-60h] BYREF

  if ( a3 == 48 )
  {
    v28[0] = *(_OWORD *)a2;
    v28[1] = *(_OWORD *)(a2 + 16);
    v28[2] = *(_OWORD *)(a2 + 32);
    memset(&v28[3], 0, 0x28uLL);
    v20 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v20 = 0;
    v28[0] = *(_OWORD *)a2;
    v28[1] = *(_OWORD *)(a2 + 16);
    v28[2] = *(_OWORD *)(a2 + 32);
    v28[3] = *(_OWORD *)(a2 + 48);
    v28[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v28[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v28[5] & 0xFFFFFFE0) != 0 || (v28[5] & 3) == 3 || (v28[5] & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v28[5] & 1) != 0 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 0;
    if ( (v28[5] & 2) != 0 )
      v7 = 8;
  }
  if ( (v28[5] & 4) != 0 )
  {
    v7 |= 1u;
  }
  else if ( (v28[5] & 8) != 0 )
  {
    v7 |= 2u;
  }
  if ( *((_QWORD *)&v28[3] + 1) | *(_QWORD *)&v28[4] | *((_QWORD *)&v28[4] + 1) | DWORD1(v28[5]) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 2035381072, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v28[1] && *((_QWORD *)&v28[1] + 1) )
    {
      if ( *(_QWORD *)&v28[1] && *((_QWORD *)&v28[1] + 1) )
      {
        if ( v28[1] == __PAIR128__(-1LL, -1LL) )
        {
          v21 = 1;
          LOBYTE(v24) = 0;
          v22 = 0;
        }
        else
        {
          v21 = 0;
          LOBYTE(v9) = a4;
          v24 = PspSinglePrivCheck(&PspSystemQuotaBlock, v8, v9, &SubjectContext);
          v22 = 1;
        }
        v11 = 0;
        v12 = Object;
        v27 = Object;
        do
        {
          v13 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v31);
          --CurrentThread->SpecialApcDisable;
          v14 = v12[118];
          if ( v14 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 848) & 1) != 0 )
            {
              v7 = 1;
              LOBYTE(v24) = 1;
              v13 = 1;
              if ( !v21 )
                v28[1] = *(_OWORD *)(v14 + 792);
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140359F30, 0LL);
            ExReleaseResourceLite((PERESOURCE)(v14 + 56));
          }
          v10 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v28[1],
                  *((unsigned __int64 *)&v28[1] + 1),
                  0,
                  v24,
                  v7,
                  &v23);
          if ( v10 < 0 && v13 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v7);
          if ( v14 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140359F30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140359F30);
            KeAbPostRelease((ULONG_PTR)&qword_140359F30);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KiUnstackDetachProcess(&v31, 0LL);
          if ( v23 == 1 && !v13 )
            v11 = 1;
          v16 = v27[118] == v14;
          v12 = v27;
        }
        while ( !v16 );
        if ( v22 == 1 && v30[20] )
        {
          if ( v11 == 1 )
          {
            LOBYTE(v15) = v30[21];
            SePrivilegedServiceAuditAlarm(L"$&", &SubjectContext, v30, v15);
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
      goto LABEL_34;
    }
    if ( v20 == 1 )
    {
      memset(v28, 0, 0x58uLL);
      LODWORD(v28[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v18 = (signed __int64 *)Object;
      v19 = PsReferencePrimaryToken((PEPROCESS)Object);
      v17 = PspAssignProcessQuotaBlock(v28, v18, v19);
      ObFastDereferenceObject(v18 + 107, (unsigned __int64)v19);
      if ( v17 >= 0 )
      {
LABEL_34:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v10;
      }
    }
    else
    {
      v17 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v17;
  }
  return result;
}
