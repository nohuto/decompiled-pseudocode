/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C006A320
 * Callers:
 *     CitSetInfo @ 0x1C003B590 (CitSetInfo.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003BDDC (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003BEF8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C006A494 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r15
  struct _CIT_PROCESS **CurrentProcessWin32Process; // r14
  struct tagPROCESSINFO **v6; // rax
  struct tagPROCESSINFO **v7; // rsi
  struct _CIT_INTERACTION_SUMMARY *v8; // rdi
  char *v9; // rbx
  char *v10; // rcx
  __int64 v11; // rdx
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v17; // al

  v2 = qword_1C01A16B0;
  v3 = *(_QWORD *)a1 >> 16;
  v4 = (unsigned __int8)*(_QWORD *)a1;
  CurrentProcessWin32Process = (struct _CIT_PROCESS **)PsGetCurrentProcessWin32Process(a1);
  v6 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(CurrentProcessWin32Process);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = CitpInteractionSummaryEnsure(v2, v6, 16);
  v9 = 0LL;
  if ( (_WORD)v3 )
  {
    if ( (unsigned int)dword_1C019ED74 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C019ED68);
    v10 = (char *)(v7 + 11);
    v11 = 10LL;
    if ( v8 )
      v9 = (char *)v8 + 100;
  }
  else
  {
    if ( (unsigned int)dword_1C019A2CC < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C019A2C0);
    v10 = (char *)v7 + 89;
    v11 = 11LL;
    if ( v8 )
      v9 = (char *)v8 + 108;
  }
  v12 = *v10;
  if ( v4 == 3 )
  {
    if ( v12 != -1 )
    {
      v13 = v12 + 1;
      *v10 = v13;
      if ( v13 == 1 )
        PsUpdateComponentPower(*CurrentProcessWin32Process, v11);
    }
    if ( v9 )
    {
      v14 = v9[3];
      if ( v14 != -1 )
      {
        v15 = v14 + 1;
        v9[3] = v15;
        if ( v15 == 1 )
          *((_DWORD *)v9 + 1) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v12 )
    {
      v17 = v12 - 1;
      *v10 = v17;
      if ( !v17 )
        PsUpdateComponentPower(*CurrentProcessWin32Process, v11);
    }
    if ( v9 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v9, 1u);
  }
  return 0LL;
}
