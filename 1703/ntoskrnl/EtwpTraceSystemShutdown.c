/*
 * XREFs of EtwpTraceSystemShutdown @ 0x14070C4E4
 * Callers:
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char EtwpTraceSystemShutdown()
{
  char result; // al
  int v1; // [rsp+30h] [rbp-39h] BYREF
  LARGE_INTEGER v2; // [rsp+38h] [rbp-31h] BYREF
  LARGE_INTEGER v3; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  int *v6; // [rsp+80h] [rbp+17h]
  int v7; // [rsp+88h] [rbp+1Fh]
  int v8; // [rsp+8Ch] [rbp+23h]
  LARGE_INTEGER *v9; // [rsp+90h] [rbp+27h]
  int v10; // [rsp+98h] [rbp+2Fh]
  int v11; // [rsp+9Ch] [rbp+33h]

  result = KeQuerySystemTimePrecise(&v2).LowPart;
  if ( stru_14033C690.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_14033C690, 0x400000000000uLL);
    if ( result )
    {
      v8 = 0;
      v11 = 0;
      v3 = v2;
      v6 = &v1;
      v9 = &v3;
      v1 = 2;
      v7 = 4;
      v10 = 8;
      result = TlgWrite(&stru_14033C690, &unk_1402AF016, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
