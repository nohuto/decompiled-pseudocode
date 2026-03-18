/*
 * XREFs of PfpRpInitialize @ 0x14081DFDC
 * Callers:
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PfpRpStart @ 0x1405DADBC (PfpRpStart.c)
 */

__int64 __fastcall PfpRpInitialize(__int64 a1)
{
  int v2; // ebp
  unsigned int v3; // esi
  unsigned int v4; // eax
  int v5; // ecx
  __int64 result; // rax

  *(_QWORD *)(a1 + 48) = 0LL;
  v2 = -1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v3 = 8;
  *(_QWORD *)a1 = 0LL;
  v4 = 8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = -1;
  do
  {
    ++v5;
    v4 >>= 1;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  do
  {
    ++v2;
    v3 >>= 1;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 108) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = v2;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 136));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  result = (unsigned int)xmmword_14036DC84;
  if ( (xmmword_14036DC84 & 2) != 0 )
    return PfpRpStart(a1);
  return result;
}
