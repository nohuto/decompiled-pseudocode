/*
 * XREFs of ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0155AC8
 * Callers:
 *     CitSetInfo @ 0x1C00242D0 (CitSetInfo.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

__int64 __fastcall CitpSetSpeechRecognitionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, __int64 a3)
{
  struct _CIT_IMPACT_CONTEXT *v3; // rbx
  struct _CIT_PROCESS **CurrentProcessWin32Process; // r10
  unsigned __int16 v8; // r9
  unsigned int v9; // edx
  unsigned int v10; // r11d
  unsigned int v11; // eax
  __int16 v12; // di
  unsigned int v13; // r8d
  __int64 v14; // rax
  struct tagPROCESSINFO **v15; // rax
  __int64 v16; // r8
  struct _CIT_INTERACTION_SUMMARY *v17; // rax

  v3 = qword_1C0193750;
  if ( (unsigned int)dword_1C018D554 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1C018D548);
  CurrentProcessWin32Process = (struct _CIT_PROCESS **)PsGetCurrentProcessWin32Process(a1, a2, a3);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    CurrentProcessWin32Process = (struct _CIT_PROCESS **)*((_QWORD *)v3 + 15);
  if ( !CurrentProcessWin32Process )
    return 3221226021LL;
  v8 = *((_WORD *)a1 + 1);
  if ( v8 >= 0x40u )
    v8 = 64;
  v9 = -1;
  if ( ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
     / 0x3E8 <= 0xFFFFFFFF )
    v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       / 0x3E8;
  if ( v8 > v9 )
    v8 = v9;
  if ( v9 >= 0x40 )
  {
    v10 = *((_DWORD *)v3 + 202);
    v11 = v9 - 63;
    if ( v9 - 63 > v10 )
    {
      *((_DWORD *)v3 + 202) = v11;
      if ( v11 - v10 < 0x40 )
        *((_QWORD *)v3 + 100) >>= (unsigned __int8)v11 - (unsigned __int8)v10;
      else
        *((_QWORD *)v3 + 100) = 0LL;
    }
  }
  v12 = 0;
  if ( v9 > 0x40 )
    v9 = 64;
  v13 = 64 - v8;
  if ( v13 < v9 )
  {
    v14 = *((_QWORD *)v3 + 100);
    do
    {
      if ( (v14 & (1LL << v13)) == 0 )
      {
        v14 |= 1LL << v13;
        ++v12;
      }
      ++v13;
    }
    while ( v13 < v9 );
    *((_QWORD *)v3 + 100) = v14;
    if ( v12 )
    {
      v15 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(CurrentProcessWin32Process);
      if ( v15 )
      {
        v17 = CitpInteractionSummaryEnsure(v3, v15, v16);
        if ( v17 )
          CitpStatIncrement((unsigned __int16 *)v17 + 42, v12);
      }
    }
  }
  return 0LL;
}
