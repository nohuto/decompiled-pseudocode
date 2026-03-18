/*
 * XREFs of CitProcessCallout @ 0x1C0050E98
 * Callers:
 *     xxxInitProcessInfo @ 0x1C005038C (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0051FF8 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0052034 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C005332C (-CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x1C0084F68 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0086350 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00871BC (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 */

void __fastcall CitProcessCallout(struct tagPROCESSINFO *a1, char a2, int a3, void *a4)
{
  __int64 v5; // rdi
  __int64 i; // rax
  struct _LUID v7; // rax
  struct _CIT_IMPACT_CONTEXT *v8; // r14
  unsigned __int64 v9; // rbp
  struct _CIT_USE_DATA *UseData; // rax
  struct _CIT_USE_DATA *v11; // r15
  unsigned int v12; // ecx
  int v13; // ebx
  int v14; // r10d
  int v15; // r9d
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // r11
  int v21; // r8d
  int v22; // ecx
  bool v23; // cf
  unsigned int v24; // eax
  struct _LUID v25; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( gppiList && !*(_QWORD *)(gppiList + 344) && !(_BYTE)g_CompatImpact )
      CitpInitialize((const unsigned __int16 *)a1);
    if ( qword_1C018E8C8 && !*((_QWORD *)qword_1C018E8C8 + 52) )
    {
      for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_UNKNOWN **)(i + 24) == &gTermIO )
        {
          v7 = *(struct _LUID *)(i + 152);
          goto LABEL_14;
        }
      }
      v7 = (struct _LUID)`CCompositionBuffer::GetAdapterLuid'::`2'::sc_luidZero;
LABEL_14:
      v25 = v7;
      if ( v7 )
        CitpContextUserLogon(qword_1C018E8C8, &v25);
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 109);
    if ( v5 )
    {
      v8 = qword_1C018E8C8;
      if ( qword_1C018E8C8 )
      {
        v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( a1 == *((struct tagPROCESSINFO **)qword_1C018E8C8 + 55) )
          CitpSetForegroundProcess(qword_1C018E8C8, v9, 0LL, 0LL, 0LL, 0LL);
        if ( a1 == *((struct tagPROCESSINFO **)v8 + 56) )
          *((_QWORD *)v8 + 56) = 0LL;
        UseData = CitpProcessGetUseData(a1);
        v11 = UseData;
        if ( UseData )
        {
          v12 = *((_DWORD *)UseData + 4);
          v13 = -1;
          v14 = v9 - *(_DWORD *)(v5 + 56);
          v15 = -1;
          if ( v12 + 1 >= v12 )
            v15 = v12 + 1;
          v16 = -1;
          *((_DWORD *)UseData + 4) = v15;
          v17 = *((_DWORD *)UseData + 5);
          if ( v17 + v14 >= v17 )
            v16 = v17 + v14;
          *((_DWORD *)v11 + 5) = v16;
          CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)v8 + 592), v9);
          v18 = *((_DWORD *)v11 + 14);
          v19 = -1;
          v21 = *(_DWORD *)(v20 + 12) - *(_DWORD *)(v5 + 60);
          v22 = v18 + 1;
          v23 = v18 + 1 < v18;
          v24 = *((_DWORD *)v11 + 15);
          if ( !v23 )
            v19 = v22;
          *((_DWORD *)v11 + 14) = v19;
          if ( v24 + v21 >= v24 )
            v13 = v24 + v21;
          *((_DWORD *)v11 + 15) = v13;
        }
      }
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(v5 + 80));
      CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)(v5 + 16));
      Win32FreePool(v5);
      *((_QWORD *)a1 + 109) = 0LL;
    }
    if ( gppiList && !*(_QWORD *)(gppiList + 344) )
    {
      if ( qword_1C018E8C8 )
        CitpContextFlush(
          qword_1C018E8C8,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
          a3,
          a4);
      CitpCleanup();
    }
  }
}
