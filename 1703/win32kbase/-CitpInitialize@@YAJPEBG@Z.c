/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C0086350
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 * Callees:
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0085FB8 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0086458 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0086590 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C008694C (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpInitialize(unsigned __int16 *a1)
{
  const unsigned __int16 *v1; // rdx
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = a1;
  CitpParametersInitialize((struct _CIT_PARAMETERS *)&unk_1C018E858);
  memset(&qword_1C018E8C8, 0, 0x58uLL);
  qword_1C018E8F8 = MEMORY[0xFFFFF78000000008];
  qword_1C018E900 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v1 = (const unsigned __int16 *)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  qword_1C018E908 = (__int64)v1;
  dword_1C018E910 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  LOBYTE(g_CompatImpact) = 1;
  if ( gSessionId == gServiceSessionId )
  {
    Handle = 0LL;
    v3 = CitpEnsureDataKey(&Handle);
    if ( v3 < 0 )
      CitpLogFailureWorker(v3, v4, 0x77u);
    else
      ZwClose(Handle);
  }
  CitpParametersLoad((struct _CIT_PARAMETERS *)&unk_1C018E858, v1);
  if ( !byte_1C018E8B4 )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
