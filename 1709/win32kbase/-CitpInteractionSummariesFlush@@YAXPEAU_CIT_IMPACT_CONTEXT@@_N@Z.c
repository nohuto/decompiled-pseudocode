/*
 * XREFs of ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C001B4FC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081EF8 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084ACC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C001B764 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C008B484 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 */

void __fastcall CitpInteractionSummariesFlush(struct _CIT_IMPACT_CONTEXT *a1, char a2)
{
  struct _CIT_INTERACTION_SUMMARY **v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  int v7; // r14d
  struct _CIT_INTERACTION_SUMMARY *v8; // rbx
  struct _CIT_INTERACTION_SUMMARY *v9; // rdx
  struct _CIT_INTERACTION_SUMMARY **v10; // rax
  __int64 v11; // rax
  struct _CIT_INTERACTION_SUMMARY *v12; // [rsp+20h] [rbp-10h] BYREF
  struct _CIT_INTERACTION_SUMMARY **v13; // [rsp+28h] [rbp-8h]

  v4 = (struct _CIT_INTERACTION_SUMMARY **)((char *)a1 + 768);
  v5 = MEMORY[0xFFFFF78000000014];
  v13 = &v12;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = 0;
  v12 = (struct _CIT_INTERACTION_SUMMARY *)&v12;
  while ( 1 )
  {
    v8 = *v4;
    if ( *v4 == (struct _CIT_INTERACTION_SUMMARY *)v4 )
      break;
    CitpInteractionSummaryStopTracking(*v4, v6);
    ++v7;
    if ( !a2 && (*((_BYTE *)v8 + 99) || *((_BYTE *)v8 + 107)) )
    {
      v10 = v13;
      if ( *v13 != (struct _CIT_INTERACTION_SUMMARY *)&v12 )
        __fastfail(3u);
      *((_QWORD *)v8 + 1) = v13;
      *(_QWORD *)v8 = &v12;
      *v10 = v8;
      v13 = (struct _CIT_INTERACTION_SUMMARY **)v8;
    }
  }
  if ( v7 )
    ++*((_DWORD *)a1 + 199);
  *((_DWORD *)a1 + 198) = v6;
  *((_QWORD *)a1 + 98) = v5;
  while ( 1 )
  {
    v9 = v12;
    if ( v12 == (struct _CIT_INTERACTION_SUMMARY *)&v12 )
      break;
    if ( *((struct _CIT_INTERACTION_SUMMARY ***)v12 + 1) != &v12
      || (v11 = *(_QWORD *)v12, *(struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)v12 + 8LL) != v12) )
    {
      __fastfail(3u);
    }
    v12 = *(struct _CIT_INTERACTION_SUMMARY **)v12;
    *(_QWORD *)(v11 + 8) = &v12;
    *((_QWORD *)v9 + 1) = v9;
    *(_QWORD *)v9 = v9;
    CitpInteractionSummaryStartTracking(a1, v9);
  }
}
