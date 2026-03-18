/*
 * XREFs of ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01643B0
 * Callers:
 *     CitSetInfo @ 0x1C003B590 (CitSetInfo.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003BDB8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003BDDC (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003BEF8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

__int64 __fastcall CitpSetSpeechRecognitionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  struct _CIT_PROCESS **CurrentProcessWin32Process; // rsi
  unsigned __int16 v7; // r8
  unsigned int v8; // r10d
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int16 v11; // di
  unsigned int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // r8
  __int16 v15; // ax
  __int64 v16; // r11
  __int64 v17; // rax
  struct tagPROCESSINFO **v18; // rax
  struct _CIT_INTERACTION_SUMMARY *v19; // rax

  v2 = qword_1C01A16B0;
  if ( (unsigned int)dword_1C019ED5C < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C019ED50);
  CurrentProcessWin32Process = (struct _CIT_PROCESS **)PsGetCurrentProcessWin32Process(a1);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    CurrentProcessWin32Process = (struct _CIT_PROCESS **)*((_QWORD *)v2 + 15);
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  v7 = *((_WORD *)a1 + 1);
  if ( v7 >= 0x40u )
    v7 = 64;
  v8 = -1;
  if ( ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
     / 0x3E8 <= 0xFFFFFFFF )
    v8 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       / 0x3E8;
  if ( v7 > v8 )
    v7 = v8;
  if ( v8 >= 0x40 )
  {
    v9 = *((_DWORD *)v2 + 206);
    v10 = v8 - 63;
    if ( v8 - 63 > v9 )
    {
      *((_DWORD *)v2 + 206) = v10;
      if ( v10 - v9 < 0x40 )
        *((_QWORD *)v2 + 102) >>= (unsigned __int8)v10 - (unsigned __int8)v9;
      else
        *((_QWORD *)v2 + 102) = 0LL;
    }
  }
  v11 = 0;
  if ( v8 > 0x40 )
    v8 = 64;
  v12 = 64 - v7;
  if ( v12 < v8 )
  {
    v13 = *((_QWORD *)v2 + 102);
    do
    {
      v14 = v13;
      v15 = v11;
      v16 = (1LL << v12) & v13;
      ++v11;
      if ( v16 )
        v11 = v15;
      v17 = v16;
      v13 = (1LL << v12) | v14;
      if ( v17 )
        v13 = v14;
      ++v12;
    }
    while ( v12 < v8 );
    *((_QWORD *)v2 + 102) = v13;
    if ( v11 )
    {
      v18 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(CurrentProcessWin32Process);
      if ( v18 )
      {
        v19 = CitpInteractionSummaryEnsure(v2, v18, 1);
        if ( v19 )
          CitpStatIncrement((unsigned __int16 *)v19 + 44, v11);
      }
    }
  }
  return 0LL;
}
