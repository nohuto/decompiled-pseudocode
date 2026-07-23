/*
 * XREFs of SepTrustLevelCheck @ 0x14005E4CC
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SeGetTrustLabelAce @ 0x14005E540 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400EF700 (RtlSidDominatesForTrust.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        PSID Sid1,
        char a6,
        int *a7)
{
  NTSTATUS v7; // esi
  char v10; // r15
  __int64 TrustLabelAce; // rax
  int v13; // r14d
  void *v14; // r12
  struct _KTHREAD *CurrentThread; // rax
  PSID v16; // rbp
  BOOLEAN v17[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 DominatesTrust; // [rsp+60h] [rbp+8h] BYREF

  DominatesTrust = a1;
  v7 = 0;
  v17[0] = 0;
  LOBYTE(DominatesTrust) = 0;
  v10 = 0;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( !TrustLabelAce || (v13 = *(_DWORD *)(TrustLabelAce + 4), v14 = (void *)(TrustLabelAce + 8), TrustLabelAce == -8) )
  {
    *a7 = -1;
    return (unsigned int)v7;
  }
  if ( a6 )
  {
    v10 = 1;
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    else
    {
      SeLockSubjectContext(a3);
    }
  }
  if ( a4 )
  {
    v16 = Sid1;
    goto LABEL_15;
  }
  if ( !a3->ClientToken )
  {
LABEL_14:
    v16 = (PSID)*((_QWORD *)a3->PrimaryToken + 138);
LABEL_15:
    v7 = RtlSidDominatesForTrust(v16, v14, v17);
    if ( v7 >= 0 )
    {
      if ( v17[0] )
        *a7 = -1;
      else
        *a7 = v13 | 0x1000000;
    }
    goto LABEL_19;
  }
  v16 = (PSID)*((_QWORD *)a3->ClientToken + 138);
  v7 = RtlSidDominatesForTrust(*((PSID *)a3->PrimaryToken + 138), v16, (PBOOLEAN)&DominatesTrust);
  if ( v7 >= 0 )
  {
    if ( (_BYTE)DominatesTrust )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_19:
  if ( v10 )
  {
    if ( a4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(a3);
    }
  }
  return (unsigned int)v7;
}
