/*
 * XREFs of EtwpTraceNetwork @ 0x140254E60
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpNetProvTraceNetwork @ 0x140254378 (EtwpNetProvTraceNetwork.c)
 */

void *__fastcall EtwpTraceNetwork(__int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( (dword_140345000 & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData, a1);
  return EtwTraceKernelEvent((int)&UserData, 1, 0x10000u, a1, 4200450);
}
