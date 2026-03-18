/*
 * XREFs of ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0040920
 * Callers:
 *     CitProcessForegroundChange @ 0x1C0040A20 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C0164D40 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 */

__int64 __fastcall CitpProcessForegroundChange(
        struct tagPROCESSINFO *a1,
        struct tagWND *a2,
        struct tagPROCESSINFO *a3,
        struct tagMONITOR *a4,
        struct tagSHELL_INPUT_USAGE_DATA_INFO *a5)
{
  struct _CIT_IMPACT_CONTEXT *v8; // rbx
  unsigned __int64 v9; // rsi
  __int16 v11; // cx

  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL);
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)a1, 4LL);
    }
  }
  v8 = qword_1C01A16B0;
  if ( !qword_1C01A16B0 )
    return 0LL;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)IsRemoteConnection() )
  {
    v11 = *((_WORD *)v8 + 57);
    if ( !v11 )
    {
      if ( (unsigned int)dword_1C019EDA4 < MEMORY[0xFFFFF7800000037C] )
      {
        EtwTelemetryCoverageReport(&off_1C019ED98);
        v11 = *((_WORD *)v8 + 57);
      }
      *((_BYTE *)v8 + 112) |= 4u;
      *((_WORD *)v8 + 57) = v11 + 1;
    }
  }
  *((_QWORD *)v8 + 16) = a1;
  return CitpSetForegroundProcess(v8, v9, a1, a2, a4, a5);
}
