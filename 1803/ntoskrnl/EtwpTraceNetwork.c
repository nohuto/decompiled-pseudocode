/*
 * XREFs of EtwpTraceNetwork @ 0x1402B0840
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpNetProvTraceNetwork @ 0x1402AFCC4 (EtwpNetProvTraceNetwork.c)
 */

__int64 __fastcall EtwpTraceNetwork(__int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( EtwpHostSiloState != -4480 && (*(_DWORD *)(EtwpHostSiloState + 4480) & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData, a1);
  return EtwTraceKernelEvent((int)&UserData, 1, 0x10000u, a1, 4200450);
}
