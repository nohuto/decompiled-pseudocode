/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C0161D74
 * Callers:
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0161AD0 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0162004 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0162248 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C01622DC (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0164570 (-CitpStart@@YAJXZ.c)
 *     TraceLoggingRegisterEx @ 0x1C01D719C (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString)
{
  int v2; // eax
  const char *v3; // rdx
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  memset(&dword_1C01A1684, 0, 0x2CuLL);
  unk_1C01A16A4 = 1074266146;
  dword_1C01A1688 = 60000;
  dword_1C01A1684 = 64;
  dword_1C01A168C = 3600000;
  dword_1C01A1690 = 21600000;
  qword_1C01A1694 = 0xEA6000000001LL;
  dword_1C01A169C = 1000;
  byte_1C01A16AB = 1;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&dword_1C01A1684);
  memset(&qword_1C01A16B0, 0, 0x30uLL);
  qword_1C01A16C0 = MEMORY[0xFFFFF78000000008];
  qword_1C01A16C8 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  qword_1C01A16D0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LOBYTE(g_CompatImpact) = 1;
  dword_1C01A16D8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C01A16B8 = dword_1C01A16D8;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C019A310, 0LL, 0LL);
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v2 = CitpEnsureDataKey(&Handle);
    if ( v2 < 0 )
      CitpLogFailureWorker(v2, v3, 0x7Fu);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&dword_1C01A1684, SourceString);
  if ( !(_BYTE)word_1C01A16A8 )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
