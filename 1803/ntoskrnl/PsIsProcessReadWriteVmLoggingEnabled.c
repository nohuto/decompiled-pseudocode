/*
 * XREFs of PsIsProcessReadWriteVmLoggingEnabled @ 0x1400A5E04
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x140551A50 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProcessReadWriteVmLoggingEnabled(__int64 a1, int a2)
{
  int v2; // eax

  v2 = 0x1000000;
  if ( a2 != 16 )
    v2 = 0x2000000;
  return (v2 & *(_DWORD *)(a1 + 768)) != 0;
}
