/*
 * XREFs of EtwTraceWorkingSetSwap @ 0x1404C9698
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x14007D3E4 (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x1406BF580 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x1406BF65C (MmInSwapVirtualAddresses.c)
 * Callees:
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetSwap(PEPROCESS Process, char a2, __int64 a3)
{
  REGHANDLE v3; // rsi
  BOOLEAN result; // al
  ULONG v8; // r9d
  const EVENT_DESCRIPTOR *v9; // rdx
  unsigned int ProcessId; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+60h] [rbp-11h]
  int v14; // [rsp+64h] [rbp-Dh]
  __int64 v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  __int64 v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  __int64 v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]

  v3 = EtwpMemoryProvRegHandle;
  result = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v14 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v8 = 2;
    UserData.Size = 4;
    v13 = 4;
    if ( (a2 & 2) != 0 )
    {
      v12 = a3;
      v9 = (const EVENT_DESCRIPTOR *)&KERNEL_MEM_EVENT_WS_INSWAP_START;
      if ( (a2 & 1) == 0 )
        v9 = (const EVENT_DESCRIPTOR *)&KERNEL_MEM_EVENT_WS_OUTSWAP_START;
    }
    else
    {
      v12 = a3 + 32;
      if ( (a2 & 1) != 0 )
      {
        v9 = (const EVENT_DESCRIPTOR *)&KERNEL_MEM_EVENT_WS_INSWAP_STOP;
      }
      else
      {
        v17 = 0;
        v20 = 0;
        v9 = &KERNEL_MEM_EVENT_WS_OUTSWAP_STOP;
        v23 = 0;
        v26 = 0;
        v18 = a3 + 8;
        v21 = a3 + 16;
        v24 = a3 + 24;
        v8 = 6;
        v15 = a3;
        v16 = 8;
        v19 = 8;
        v22 = 8;
        v25 = 8;
      }
    }
    return EtwWrite(v3, v9, 0LL, v8, &UserData);
  }
  return result;
}
