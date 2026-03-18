/*
 * XREFs of EtwpTraceRegistryTransaction @ 0x140747A80
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogTxREvent @ 0x140746E20 (EtwpLogTxREvent.c)
 */

void __fastcall EtwpTraceRegistryTransaction(unsigned __int8 a1, __int64 a2, __int128 *a3, int a4, int a5, __int64 a6)
{
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  _DWORD *v13; // rcx

  v10 = *(_DWORD *)(EtwpHostSiloState + 4172);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = (_DWORD *)(32LL * (unsigned int)v12 + EtwpHostSiloState + 4208);
    if ( v13 )
    {
      if ( (*v13 & 0x20000) != 0 )
        EtwpLogTxREvent(
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4156),
          a1,
          a3,
          a4,
          a5,
          (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4157) - 1LL)),
          a6);
    }
  }
}
