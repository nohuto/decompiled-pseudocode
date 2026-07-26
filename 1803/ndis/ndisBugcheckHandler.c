/*
 * XREFs of ndisBugcheckHandler @ 0x1C0062680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisMInvokeShutdown @ 0x1C0060844 (ndisMInvokeShutdown.c)
 */

void __fastcall ndisBugcheckHandler(_DWORD *Buffer, ULONG Length)
{
  int v2; // eax

  if ( Length == 5816 )
  {
    v2 = Buffer[973];
    Buffer[31] |= 0x1000000u;
    if ( (unsigned int)(v2 - 2) > 2 )
    {
      if ( *((_BYTE *)Buffer + 32) >= 6u )
        ndisMInvokeShutdown((__int64)Buffer, 1u);
      else
        (*((void (__fastcall **)(_QWORD))Buffer + 259))(*((_QWORD *)Buffer + 258));
    }
  }
}
