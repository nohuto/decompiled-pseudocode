/*
 * XREFs of EtwKernelMemoryRundown @ 0x1407A7550
 * Callers:
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 */

char EtwKernelMemoryRundown()
{
  __int64 v0; // rax
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v5[8]; // [rsp+30h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  LOBYTE(v0) = EtwpHostSiloState;
  v5[1] = 8;
  v1 = *(_DWORD *)(EtwpHostSiloState + 4188);
  while ( _BitScanForward((unsigned int *)&v3, v1) )
  {
    v1 &= v1 - 1;
    v0 = EtwpHostSiloState + 32 * (v3 + 132);
    if ( v0 )
    {
      LODWORD(v0) = *(_DWORD *)(v0 + 20);
      if ( (v0 & 1) != 0 )
        LOBYTE(v0) = EtwpKernelTraceRundown(
                       v5,
                       EtwpHostSiloState,
                       *(unsigned __int8 *)(EtwpHostSiloState + 2 * v3 + 4172),
                       0,
                       0LL,
                       0);
    }
  }
  return v0;
}
