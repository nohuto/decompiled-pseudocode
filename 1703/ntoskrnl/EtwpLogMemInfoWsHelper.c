/*
 * XREFs of EtwpLogMemInfoWsHelper @ 0x14070B850
 * Callers:
 *     EtwpLogMemInfoWs @ 0x14070B538 (EtwpLogMemInfoWs.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall EtwpLogMemInfoWsHelper(unsigned int *a1, _DWORD *a2)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  UserData.Reserved = 0;
  v6 = 0;
  v4 = a2 + 1;
  v2 = 68 * *a2;
  UserData.Ptr = (ULONGLONG)a2;
  UserData.Size = 4;
  v5 = v2;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&UserData, EtwpHostSiloState, *a1, 2u, 0x27Du, 0x401804u);
  }
  else
  {
    EtwTraceKernelEvent((int)&UserData, 2, 0x20800000u, 637, 4200452);
    if ( (dword_140345004 & 0x800000) != 0 )
      EtwWrite(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO_WS, 0LL, 2u, &UserData);
  }
}
