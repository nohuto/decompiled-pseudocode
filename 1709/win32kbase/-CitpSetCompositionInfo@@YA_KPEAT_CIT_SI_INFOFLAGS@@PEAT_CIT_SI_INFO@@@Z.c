/*
 * XREFs of ?CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00244A0
 * Callers:
 *     CitSetInfo @ 0x1C00242D0 (CitSetInfo.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

unsigned __int64 __fastcall CitpSetCompositionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int16 i; // r14
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rdi
  struct _CIT_INTERACTION_SUMMARY *v11; // rax
  struct _CIT_INTERACTION_SUMMARY *v12; // r9
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v4 = qword_1C0193750;
  if ( !UserIsCurrentProcessDwm() )
    return -1073741790LL;
  v5 = *(_QWORD *)a2;
  v6 = *((unsigned __int16 *)a1 + 1);
  v7 = 24 * v6;
  for ( i = 0; i < (unsigned __int16)v6; ++i )
  {
    if ( (unsigned __int64)(v7 - 1) > 0xFFFE )
    {
      if ( v7 )
      {
        if ( (v5 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v7 + v5 > MmUserProbeAddress || v7 + v5 < v5 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    else if ( (v5 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v14 = *(_OWORD *)(v5 + 24LL * i);
    v15 = *(_QWORD *)(v5 + 24LL * i + 16);
    if ( (_QWORD)v14 )
    {
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)(int)v15, &Process) >= 0 )
      {
        if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v14 + 1)
          && (unsigned int)PsGetProcessSessionId(Process) == gSessionId )
        {
          PsUpdateComponentPower(Process, 7LL);
          ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(Process);
          v10 = ProcessWin32Process;
          if ( ProcessWin32Process )
          {
            if ( CitpProcessEnsureContext(ProcessWin32Process) )
            {
              v11 = CitpInteractionSummaryEnsure(v4, *((struct _CIT_PROCESS **)v10 + 110));
              v12 = v11;
              if ( v11 )
              {
                if ( (_WORD)v14 )
                  CitpStatIncrement((unsigned __int16 *)v11 + 44, 1u);
                if ( WORD1(v14) )
                  CitpStatIncrement((unsigned __int16 *)v12 + 45, 1u);
                if ( WORD2(v14) )
                  CitpStatIncrement((unsigned __int16 *)v12 + 46, 1u);
              }
            }
          }
        }
        ObfDereferenceObject(Process);
      }
    }
  }
  return 0LL;
}
