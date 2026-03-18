/*
 * XREFs of ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00534C8
 * Callers:
 *     CitSetInfo @ 0x1C0004C60 (CitSetInfo.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0154654 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ?CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z @ 0x1C0053894 (-CitpDPGetAppIndex@@YAIPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00539D4 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpUTCToMS@@YAI_KI@Z @ 0x1C0053E5C (-CitpUTCToMS@@YAI_KI@Z.c)
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00871BC (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessEnsureContext(struct tagPROCESSINFO *a1)
{
  int ProgramId; // ebx
  _DWORD *v4; // rax
  const char *v5; // rdx
  _DWORD *v6; // rsi
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  LONGLONG TimeQuadPart; // rax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // r10

  if ( *((_QWORD *)a1 + 109) )
    return 0;
  v4 = (_DWORD *)Win32AllocPool(88LL, 0x49637355u);
  *((_QWORD *)a1 + 109) = v4;
  v6 = v4;
  if ( !v4 )
  {
    ProgramId = -1073741670;
    CitpLogFailureWorker(-1073741670, v5, 0x1198u);
    return (unsigned int)ProgramId;
  }
  memset(v4, 0, 0x58uLL);
  memset(v6 + 4, 0, 0x28uLL);
  v7 = qword_1C018E8C8;
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a1);
  v9 = CitpUTCToMS(TimeQuadPart, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  *(_QWORD *)v6 = a1;
  v6[14] = v9;
  v6[16] = v9;
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)v7 + 592), v10);
  v6[15] = *(_DWORD *)(v11 + 12);
  ProgramId = CitpProcessGetProgramId(a1, (struct _CIT_PROGRAM_ID *)(v6 + 4));
  if ( ProgramId >= 0 )
  {
    *((_BYTE *)v6 + 75) ^= (*((_BYTE *)v6 + 75) ^ (2 * CitpDPGetAppIndex((struct _CIT_PROCESS *)v6))) & 0x1E;
    return 0;
  }
  return (unsigned int)ProgramId;
}
