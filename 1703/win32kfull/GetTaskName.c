/*
 * XREFs of GetTaskName @ 0x1C01B2230
 * Callers:
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall GetTaskName(__int64 a1, _WORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // ebx
  const void **v6; // rdx
  __int64 v7; // r8
  PEPROCESS ThreadProcess; // rax
  const char *ProcessImageFileName; // rax
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v5 = 0;
  v6 = *(const void ***)(a1 + 448);
  if ( v6 )
  {
    v7 = *(unsigned __int16 *)v6;
    v5 = v7 + 2;
    if ( v7 + 2 >= v3 )
      v5 = v3;
    memmove(a2, v6[1], v5);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(ThreadProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( (unsigned int)v3 < 2 )
      return 2 * (unsigned int)DestinationString.Length + 2;
    v11.Buffer = a2;
    v11.MaximumLength = v3 - 2;
    if ( RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0) < 0 )
    {
      *a2 = 0;
      return v5;
    }
    v5 = v11.Length + 2;
  }
  if ( v5 > (unsigned int)v3 )
    v5 = v3;
  a2[((unsigned __int64)v5 >> 1) - 1] = 0;
  return v5;
}
