/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1C0082410
 * Callers:
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1C0082584 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0082630 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C008288C (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0082B88 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpInitialize(unsigned __int16 *a1)
{
  const unsigned __int16 *v1; // rdx
  __int64 result; // rax
  int v3; // eax
  const char *v4; // rdx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = a1;
  memset(&dword_1C0193724, 0, 0x28uLL);
  LODWORD(qword_1C0193740) = 1074266146;
  dword_1C0193728 = 60000;
  dword_1C0193734 = 60000;
  dword_1C0193724 = 64;
  dword_1C019372C = 3600000;
  dword_1C0193730 = 1;
  dword_1C0193738 = 1000;
  HIBYTE(qword_1C0193740) = 1;
  CitpParametersCompute((struct _CIT_PARAMETERS *)&dword_1C0193724);
  memset(&qword_1C0193750, 0, 0x30uLL);
  qword_1C0193760 = MEMORY[0xFFFFF78000000008];
  qword_1C0193768 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v1 = (const unsigned __int16 *)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  qword_1C0193770 = (__int64)v1;
  dword_1C0193778 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C0193758 = dword_1C0193778;
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
  CitpParametersLoad((struct _CIT_PARAMETERS *)&dword_1C0193724, v1);
  if ( !BYTE4(qword_1C0193740) )
    return 0LL;
  result = CitpStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
