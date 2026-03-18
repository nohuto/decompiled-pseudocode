/*
 * XREFs of EtwpTraceRegistryTransaction @ 0x1407A91A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogTxREvent @ 0x1407A8A40 (EtwpLogTxREvent.c)
 */

void __fastcall EtwpTraceRegistryTransaction(unsigned __int8 a1, __int64 a2, __int128 *a3, int a4, int a5, __int64 a6)
{
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  _DWORD *v13; // rax

  v10 = *(_DWORD *)(EtwpHostSiloState + 4188);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = (_DWORD *)(EtwpHostSiloState + 32 * (v12 + 132));
    if ( v13 )
    {
      if ( (*v13 & 0x20000) != 0 )
        EtwpLogTxREvent(
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4172),
          a1,
          a3,
          a4,
          a5,
          (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4173) - 1LL)),
          a6);
    }
  }
}
