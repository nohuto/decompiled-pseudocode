/*
 * XREFs of EtwKernelMemoryRundown @ 0x1407455D8
 * Callers:
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 */

__int64 EtwKernelMemoryRundown()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v5; // ecx
  _DWORD v6[8]; // [rsp+30h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  result = EtwpHostSiloState;
  v6[1] |= 8u;
  v1 = *(_DWORD *)(EtwpHostSiloState + 4172);
  while ( _BitScanForward(&v5, v1) )
  {
    v1 &= v1 - 1;
    v2 = v5;
    result = 32LL * v5;
    v3 = result + EtwpHostSiloState + 4208;
    if ( v3 )
    {
      result = *(unsigned int *)(v3 + 20);
      if ( (result & 1) != 0 )
        result = EtwpKernelTraceRundown(
                   (unsigned int)v6,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v2 + 4156),
                   0,
                   0LL,
                   0);
    }
  }
  return result;
}
