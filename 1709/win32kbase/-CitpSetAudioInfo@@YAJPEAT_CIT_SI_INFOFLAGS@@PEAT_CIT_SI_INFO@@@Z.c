/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0091950
 * Callers:
 *     CitSetInfo @ 0x1C00242D0 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C0091ABC (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rbx
  __int16 v4; // bp
  __int64 v5; // r15
  struct _CIT_PROCESS **CurrentProcessWin32Process; // r14
  struct tagPROCESSINFO **v7; // rax
  __int64 v8; // r8
  struct tagPROCESSINFO **v9; // rsi
  struct _CIT_INTERACTION_SUMMARY *v10; // rdi
  char *v11; // rbx
  char *v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  char v15; // cl
  char v16; // al
  char v17; // al
  char v19; // cl

  v3 = qword_1C0193750;
  v4 = *((_WORD *)a1 + 1);
  v5 = (unsigned __int8)*(_DWORD *)a1;
  CurrentProcessWin32Process = (struct _CIT_PROCESS **)PsGetCurrentProcessWin32Process(a1, a2, a3);
  v7 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(CurrentProcessWin32Process);
  v9 = v7;
  if ( !v7 )
    return 3221225473LL;
  v10 = CitpInteractionSummaryEnsure(v3, v7, v8);
  v11 = 0LL;
  if ( v4 )
  {
    if ( (unsigned int)dword_1C018D56C < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C018D560);
    v12 = (char *)(v9 + 11);
    v13 = 10LL;
    if ( v10 )
      v11 = (char *)v10 + 96;
  }
  else
  {
    if ( (unsigned int)dword_1C018CF54 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C018CF48);
    v12 = (char *)v9 + 89;
    v13 = 11LL;
    if ( v10 )
      v11 = (char *)v10 + 104;
  }
  v14 = *v12;
  if ( v5 == 3 )
  {
    if ( v14 != -1 )
    {
      v15 = v14 + 1;
      *v12 = v15;
      if ( v15 == 1 )
        PsUpdateComponentPower(*CurrentProcessWin32Process, v13);
    }
    if ( v11 )
    {
      v16 = v11[3];
      if ( v16 != -1 )
      {
        v17 = v16 + 1;
        v11[3] = v17;
        if ( v17 == 1 )
          *((_DWORD *)v11 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v14 )
    {
      v19 = v14 - 1;
      *v12 = v19;
      if ( !v19 )
        PsUpdateComponentPower(*CurrentProcessWin32Process, v13);
    }
    if ( v11 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v11, 1u);
  }
  return 0LL;
}
