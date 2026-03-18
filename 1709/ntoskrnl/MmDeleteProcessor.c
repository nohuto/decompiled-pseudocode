/*
 * XREFs of MmDeleteProcessor @ 0x1402143B8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 */

__int64 __fastcall MmDeleteProcessor(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 24320);
  if ( v4 )
  {
    result = MiReleasePtes((__int64)&qword_140389360, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x40u, a4);
    *(_QWORD *)(a1 + 24320) = 0LL;
  }
  return result;
}
