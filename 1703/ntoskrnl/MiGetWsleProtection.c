/*
 * XREFs of MiGetWsleProtection @ 0x1400FBF20
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiGetPfnProtection @ 0x140078704 (MiGetPfnProtection.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleProtection(unsigned __int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v5; // rdx

  v2 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v3 = (a2 >> 4) & 7;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v2 - 0x98000000000LL);
    if ( (v5 & 0x18) == 8 )
    {
      v3 |= 0x18u;
    }
    else if ( (v5 & 0x10) != 0 )
    {
      v3 |= 8u;
    }
  }
  return v3;
}
