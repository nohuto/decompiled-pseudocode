/*
 * XREFs of ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001B640
 * Callers:
 *     CitProcessForegroundChange @ 0x1C001B5F0 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1C0155C70 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
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
  v8 = qword_1C0193750;
  if ( !qword_1C0193750 )
    return 0LL;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)IsRemoteConnection() && !*((_WORD *)v8 + 57) )
  {
    if ( (unsigned int)dword_1C018CF84 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1C018CF78);
    *((_BYTE *)v8 + 112) |= 4u;
    ++*((_WORD *)v8 + 57);
  }
  *((_QWORD *)v8 + 16) = a1;
  return CitpSetForegroundProcess(v8, v9, a1, a2, a4, a5);
}
