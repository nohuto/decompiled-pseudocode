/*
 * XREFs of EtwTraceWorkingSetInSwapStoreFail @ 0x1404C9D98
 * Callers:
 *     MiInSwapStoreWorker @ 0x1404C9E00 (MiInSwapStoreWorker.c)
 * Callees:
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetInSwapStoreFail(PEPROCESS Process, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  unsigned int ProcessId; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  int v10; // [rsp+88h] [rbp+10h] BYREF

  v10 = a2;
  v2 = EtwpMemoryProvRegHandle;
  result = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x80uLL);
  if ( result )
  {
    UserData.Reserved = 0;
    v9 = 0;
    ProcessId = (unsigned int)PsGetProcessId(Process);
    UserData.Size = 4;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v7 = &v10;
    v8 = 4;
    return EtwWrite(v2, &KERNEL_MEM_EVENT_WS_INSWAP_STORE_FAIL, 0LL, 2u, &UserData);
  }
  return result;
}
