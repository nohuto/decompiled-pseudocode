/*
 * XREFs of MiDeleteEnclavePages @ 0x1406E87CC
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiDeleteEnclavePage @ 0x1402295DC (MiDeleteEnclavePage.c)
 *     MiReturnReservedEnclavePages @ 0x1406E9118 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 *     PsDeleteVsmEnclave @ 0x14071BD68 (PsDeleteVsmEnclave.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r9
  __int64 v5; // rax

  if ( (*(_DWORD *)(a2 + 64) & 4) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1296) + 144LL));
  result = *(unsigned int *)(a2 + 64);
  if ( (result & 1) != 0 )
  {
    if ( (result & 8) == 0 )
      MiTerminateHardwareEnclave();
    v4 = *(__int64 **)(a2 + 72);
    v5 = *v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v5) = MiReadPteShadow();
    if ( (v5 & 1) != 0 )
      MiDeleteEnclavePage((unsigned __int64)v4, 0LL);
    MiReleasePtes((__int64)&qword_140389360, *(_QWORD *)(a2 + 72), 1u, (unsigned __int64)v4);
    return MiReturnReservedEnclavePages(a2);
  }
  else if ( *(_QWORD *)(a2 + 72) )
  {
    return PsDeleteVsmEnclave();
  }
  return result;
}
