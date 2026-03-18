/*
 * XREFs of EtwKernelMemoryRundown @ 0x14070A548
 * Callers:
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 */

char EtwKernelMemoryRundown()
{
  char *v0; // rax
  unsigned int v1; // ebx
  unsigned int v3; // ecx
  int v5[8]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(v0) = (unsigned __int8)memset(v5, 0, sizeof(v5));
  v5[1] |= 8u;
  v1 = EtwpActiveSystemLoggers;
  while ( _BitScanForward(&v3, v1) )
  {
    v1 &= v1 - 1;
    v0 = (char *)&EtwpGroupMasks + 32 * v3;
    if ( v0 )
    {
      LODWORD(v0) = *((_DWORD *)v0 + 5);
      if ( ((unsigned __int8)v0 & 1) != 0 )
        LOBYTE(v0) = EtwpKernelTraceRundown(v5, (unsigned __int8)EtwpSystemLogger[2 * v3], 0, 0, 0);
    }
  }
  return (char)v0;
}
