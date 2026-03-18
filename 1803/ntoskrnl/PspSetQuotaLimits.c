/*
 * XREFs of PspSetQuotaLimits @ 0x14057899C
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x14008A9B8 (MmEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404D5720 (SePrivilegedServiceAuditAlarm.c)
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 *     PspSinglePrivCheck @ 0x140578D80 (PspSinglePrivCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  int v19; // r14d
  signed __int64 *v20; // rdi
  PACCESS_TOKEN v21; // rbx
  char v22; // [rsp+40h] [rbp-118h]
  char v23; // [rsp+41h] [rbp-117h]
  char v24; // [rsp+42h] [rbp-116h]
  char v25; // [rsp+43h] [rbp-115h] BYREF
  int v26; // [rsp+44h] [rbp-114h]
  PVOID Object; // [rsp+48h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-108h]
  _QWORD *v29; // [rsp+58h] [rbp-100h]
  _OWORD v30[6]; // [rsp+60h] [rbp-F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-98h] BYREF
  _BYTE v32[24]; // [rsp+E0h] [rbp-78h] BYREF
  _BYTE v33[48]; // [rsp+F8h] [rbp-60h] BYREF

  if ( a3 == 48 )
  {
    v30[0] = *(_OWORD *)a2;
    v30[1] = *(_OWORD *)(a2 + 16);
    v30[2] = *(_OWORD *)(a2 + 32);
    memset(&v30[3], 0, 0x28uLL);
    v22 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v22 = 0;
    v30[0] = *(_OWORD *)a2;
    v30[1] = *(_OWORD *)(a2 + 16);
    v30[2] = *(_OWORD *)(a2 + 32);
    v30[3] = *(_OWORD *)(a2 + 48);
    v30[4] = *(_OWORD *)(a2 + 64);
    *(_QWORD *)&v30[5] = *(_QWORD *)(a2 + 80);
  }
  if ( (v30[5] & 0xFFFFFFE0) != 0 || (v30[5] & 3) == 3 || (v30[5] & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v30[5] & 1) != 0 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 0;
    if ( (v30[5] & 2) != 0 )
      v7 = 8;
  }
  if ( (v30[5] & 4) != 0 )
  {
    v7 |= 1u;
  }
  else if ( (v30[5] & 8) != 0 )
  {
    v7 |= 2u;
  }
  if ( *((_QWORD *)&v30[3] + 1) | *(_QWORD *)&v30[4] | *((_QWORD *)&v30[4] + 1) | DWORD1(v30[5]) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0;
    if ( *((_UNKNOWN **)Object + 130) != &PspSystemQuotaBlock || *(_QWORD *)&v30[1] && *((_QWORD *)&v30[1] + 1) )
    {
      if ( *(_QWORD *)&v30[1] && *((_QWORD *)&v30[1] + 1) )
      {
        if ( v30[1] == __PAIR128__(-1LL, -1LL) )
        {
          v23 = 1;
          LOBYTE(v26) = 0;
          v24 = 0;
        }
        else
        {
          v23 = 0;
          LOBYTE(v9) = a4;
          v26 = PspSinglePrivCheck(&PspSystemQuotaBlock, v8, v9, &SubjectContext);
          v24 = 1;
        }
        v11 = 0;
        v12 = Object;
        v29 = Object;
        do
        {
          v13 = 0;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v33);
          --CurrentThread->SpecialApcDisable;
          v14 = v12[118];
          if ( v14 )
          {
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            if ( (*(_DWORD *)(v14 + 848) & 1) != 0 )
            {
              v7 = 1;
              LOBYTE(v26) = 1;
              v13 = 1;
              if ( !v23 )
                v30[1] = *(_OWORD *)(v14 + 792);
            }
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14039D570, 0LL);
            ExReleaseResourceLite((PERESOURCE)(v14 + 56));
          }
          v10 = MmAdjustWorkingSetSizeEx(
                  *(unsigned __int64 *)&v30[1],
                  *((unsigned __int64 *)&v30[1] + 1),
                  0,
                  v26,
                  v7,
                  &v25);
          if ( v10 < 0 && v13 == 1 )
            MmEnforceWorkingSetLimit((_KPROCESS *)Object, v7);
          if ( v14 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14039D570, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_14039D570, v15, v16, v17);
            KeAbPostRelease((ULONG_PTR)&qword_14039D570);
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KiUnstackDetachProcess((__int64)v33, 0LL);
          if ( v25 == 1 && !v13 )
            v11 = 1;
          v18 = v29[118] == v14;
          v12 = v29;
        }
        while ( !v18 );
        if ( v24 == 1 && v32[20] )
        {
          if ( v11 == 1 )
            SePrivilegedServiceAuditAlarm((int)L"$&", (__int64 *)&SubjectContext, (__int64)v32, v32[21]);
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
      goto LABEL_40;
    }
    if ( v22 == 1 )
    {
      memset(v30, 0, 0x58uLL);
      LODWORD(v30[5]) = 16;
    }
    if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a4) )
    {
      v20 = (signed __int64 *)Object;
      v21 = PsReferencePrimaryToken((PEPROCESS)Object);
      v19 = PspAssignProcessQuotaBlock((__int64)v30, (__int64)v20, (__int64)v21);
      ObFastDereferenceObject(v20 + 107, (unsigned __int64)v21);
      if ( v19 >= 0 )
      {
LABEL_40:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (unsigned int)v10;
      }
    }
    else
    {
      v19 = -1073741727;
    }
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    return (unsigned int)v19;
  }
  return result;
}
