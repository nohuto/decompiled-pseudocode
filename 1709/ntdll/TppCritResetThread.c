/*
 * XREFs of TppCritResetThread @ 0x18000A5D4
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A0260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtSetInformationObject @ 0x1800A0C30 (NtSetInformationObject.c)
 */

__int64 __fastcall TppCritResetThread(void *a1)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF
  __int16 v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    Handle = a1;
    NtSetInformationThread(-2LL, 5LL, &Handle);
    v4 = 0;
    NtSetInformationThread(-2LL, 18LL, &v4);
    v3 = 0;
    NtSetInformationObject(Handle, 4LL, &v3, 2LL);
    NtClose(Handle);
    Handle = 0LL;
    return NtSetInformationThread(-2LL, 5LL, &Handle);
  }
  return result;
}
