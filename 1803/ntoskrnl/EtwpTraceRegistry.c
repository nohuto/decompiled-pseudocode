/*
 * XREFs of EtwpTraceRegistry @ 0x1407A90C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogRegistryEvent @ 0x1407A874C (EtwpLogRegistryEvent.c)
 */

__int64 __fastcall EtwpTraceRegistry(unsigned __int8 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10

  result = EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4188);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = EtwpHostSiloState + 32 * (v13 + 132);
    if ( result )
    {
      result = *(unsigned int *)result;
      if ( (result & 0x20000) != 0 )
        result = EtwpLogRegistryEvent(
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4172),
                   a1,
                   a3,
                   a4,
                   a5,
                   (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4173) - 1LL)),
                   a6);
    }
  }
  return result;
}
