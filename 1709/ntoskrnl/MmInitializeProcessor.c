/*
 * XREFs of MmInitializeProcessor @ 0x140425688
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmInitializeProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25264) = -1LL;
  result = MiReservePtes((__int64)&qword_140389360, 0x40uLL, a3);
  if ( result )
  {
    *(_QWORD *)(a1 + 24320) = (__int64)(result << 25) >> 16;
    *(_DWORD *)(a1 + 23580) = dword_140388540;
    v5 = qword_14038A0D0 + 8256LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
    *(_DWORD *)(a1 + 23572) = *(unsigned __int8 *)(v5 + 8092);
    *(_DWORD *)(a1 + 23576) = *(_DWORD *)(v5 + 8088);
    return 1LL;
  }
  return result;
}
