/*
 * XREFs of ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x180054C2C (-RmpActivityHostTrySetCommitTargetForPple@@YAJPEAU_RM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271E0 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18004E814 (-RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180052858 (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180053360 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053564 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 */

__int64 __fastcall RmpResourceSetTrySetPpleTarget(struct _RM_RESOURCE_SET *a1, unsigned __int64 a2, char a3)
{
  void *v3; // rsi
  int IsEligibleForCustomTarget; // ebx
  struct _RM_COMMIT_THRESHOLDS *Heap; // rax
  struct _RM_COMMIT_THRESHOLDS *v9; // r15
  int v10; // ebx
  void *v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v15; // rbx
  PVOID P; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v17[4]; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v18[32]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v20; // [rsp+78h] [rbp-31h]
  _BYTE v21[16]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v22; // [rsp+98h] [rbp-11h]
  _BYTE v23[16]; // [rsp+A8h] [rbp-1h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+Fh]

  v3 = (void *)*((_QWORD *)a1 + 20);
  P = 0LL;
  if ( !a2 && !v3 )
    goto LABEL_3;
  RmpResourceSetGetReportedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v19);
  if ( v20 == -1 )
    goto LABEL_3;
  if ( !a2 )
    goto LABEL_11;
  if ( a2 == -1LL )
  {
    IsEligibleForCustomTarget = -805306128;
    goto LABEL_17;
  }
  IsEligibleForCustomTarget = RmpResourceSetIsEligibleForCustomTarget(a1, a2);
  if ( IsEligibleForCustomTarget >= 0 )
    IsEligibleForCustomTarget = 0;
  if ( IsEligibleForCustomTarget >= 0 )
  {
LABEL_11:
    RmpResourceSetGetEnforcedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v18);
    if ( !a2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)a1 + 20));
      *((_QWORD *)a1 + 20) = 0LL;
      v3 = 0LL;
      goto LABEL_28;
    }
    RmpResourceSetGetReportedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v21);
    if ( v22 != -1 )
    {
      Heap = (struct _RM_COMMIT_THRESHOLDS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
      *((_QWORD *)a1 + 20) = Heap;
      v9 = Heap;
      if ( !Heap )
      {
        v10 = -1073741801;
        goto LABEL_16;
      }
      v15 = (_QWORD *)*((_QWORD *)a1 + 6);
      memset_0(v17, 0, sizeof(v17));
      v17[3] = v15[190];
      v17[2] = v15[185];
      v17[1] = v15[189];
      v17[0] = v15[227];
      v10 = RmpCommitThresholdsScaleToTarget((struct _RM_COMMIT_THRESHOLDS *)v17, a2, v9);
      if ( v10 < 0 )
        goto LABEL_16;
LABEL_28:
      v10 = RmpRsEnforcedThresholdsCheckCreate(
              a1,
              (struct _RM_COMMIT_THRESHOLDS *)v18,
              (struct _RM_RS_ENFORCEMENT_CONTEXT **)&P);
      if ( v10 >= 0 )
      {
        RmpRsEnforcedThresholdsCheckTransition(
          a1,
          (struct _RM_COMMIT_THRESHOLDS *)v18,
          (struct _RM_RS_ENFORCEMENT_CONTEXT *)P);
        P = 0LL;
        goto LABEL_32;
      }
      if ( (a3 & 1) != 0 )
      {
LABEL_32:
        RmpResourceSetGetReportedCommitThresholds(a1, (struct _RM_COMMIT_THRESHOLDS *)v23);
        RmpResourceSetUpdateReceivedCommit(a1, v24);
        if ( v3 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
          v3 = 0LL;
        }
        goto LABEL_3;
      }
LABEL_16:
      IsEligibleForCustomTarget = v10 | 0x10000000;
      goto LABEL_17;
    }
LABEL_3:
    IsEligibleForCustomTarget = 0;
  }
LABEL_17:
  if ( v3 )
  {
    v11 = (void *)*((_QWORD *)a1 + 20);
    if ( v11 != v3 )
    {
      if ( v11 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      *((_QWORD *)a1 + 20) = v3;
    }
  }
  v12 = P;
  if ( P )
  {
    RmpObjectRelease(*(char **)P);
    v13 = v12[5];
    if ( v13 )
      TpReleaseTimer(v13);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return (unsigned int)IsEligibleForCustomTarget;
}
