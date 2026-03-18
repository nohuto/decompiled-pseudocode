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

char __fastcall EtwpTraceSystemShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  int v5; // [rsp+30h] [rbp-39h] BYREF
  __int64 v6; // [rsp+38h] [rbp-31h] BYREF
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  int *v10; // [rsp+80h] [rbp+17h]
  int v11; // [rsp+88h] [rbp+1Fh]
  int v12; // [rsp+8Ch] [rbp+23h]
  __int64 *v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+98h] [rbp+2Fh]
  int v15; // [rsp+9Ch] [rbp+33h]

  result = KeQuerySystemTimePrecise(&v6, a2, a3, a4);
  if ( stru_14033C690.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_14033C690, 0x400000000000uLL);
    if ( result )
    {
      v12 = 0;
      v15 = 0;
      v7 = v6;
      v10 = &v5;
      v13 = &v7;
      v5 = 2;
      v11 = 4;
      v14 = 8;
      result = TlgWrite(&stru_14033C690, &unk_1402AF016, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)&v6;
    UserData.Size = 8;
    return EtwWrite(EtwKernelProvRegHandle, &KernelSystemStop, 0LL, 1u, &UserData);
  }
  return result;
}
