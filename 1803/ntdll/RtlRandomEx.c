/*
 * XREFs of RtlRandomEx @ 0x18007AA80
 * Callers:
 *     sub_1800DD5D8 @ 0x1800DD5D8 (sub_1800DD5D8.c)
 *     sub_1800F388C @ 0x1800F388C (sub_1800F388C.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 */

ULONG __cdecl RtlRandomEx(PULONG Seed)
{
  __int64 v2; // r8
  unsigned __int32 v3; // r9d
  __int32 v4; // r9d
  int v5; // ecx
  unsigned int v8; // r9d

  RtlRunOnceExecuteOnce(&RunOnce, sub_1800F7760, 0LL, 0LL);
  v2 = dword_18015AA00 & 0x7F;
  v3 = (2147483629 * (unsigned __int64)*Seed + 2147483587) % 0x7FFFFFFF;
  *Seed = v3;
  v4 = _InterlockedExchange(&dword_18015A800[v2], v3);
  if ( MEMORY[0x7FFE0290] )
  {
    v5 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v5 >= 0xA )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LODWORD(_RDX) = 0;
  }
  v8 = _RDX ^ v4;
  _InterlockedExchangeAdd(&dword_18015AA00, v8);
  return v8;
}
