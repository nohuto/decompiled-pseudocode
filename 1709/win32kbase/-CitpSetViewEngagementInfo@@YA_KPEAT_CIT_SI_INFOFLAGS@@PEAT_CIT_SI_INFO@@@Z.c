/*
 * XREFs of ?CitpSetViewEngagementInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C008C5CC
 * Callers:
 *     CitSetInfo @ 0x1C00242D0 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

unsigned __int64 __fastcall CitpSetViewEngagementInfo(union _CIT_SI_INFOFLAGS *a1, __int128 **a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rdi
  struct _CIT_PROCESS **ProcessWin32Process; // rax
  struct _CIT_PROCESS **v4; // rbx
  __int64 v5; // r8
  struct _CIT_INTERACTION_SUMMARY *v6; // rax
  __int128 v8; // [rsp+28h] [rbp-20h]
  PEPROCESS Process; // [rsp+50h] [rbp+8h] BYREF

  Process = a1;
  v2 = qword_1C0193750;
  if ( ((unsigned __int8)*a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = **a2;
  Process = 0LL;
  if ( PsLookupProcessByProcessId((HANDLE)SDWORD2(v8), &Process) >= 0 )
  {
    if ( (unsigned int)PsGetProcessSessionId(Process) == gSessionId )
    {
      ProcessWin32Process = (struct _CIT_PROCESS **)PsGetProcessWin32Process(Process);
      v4 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        if ( CitpProcessEnsureContext(ProcessWin32Process) )
        {
          v6 = CitpInteractionSummaryEnsure(v2, (struct tagPROCESSINFO **)v4[110], v5);
          if ( v6 )
            *((_QWORD *)v6 + 2) |= v8;
          *(_QWORD *)v4[110] = v8;
        }
      }
    }
    ObfDereferenceObject(Process);
  }
  return 0LL;
}
