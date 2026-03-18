/*
 * XREFs of HvcallFastExtended @ 0x140261A84
 * Callers:
 *     HvlpReadPerfRegister @ 0x14017B56C (HvlpReadPerfRegister.c)
 *     HvlpGetVtlCallVa @ 0x140269A64 (HvlpGetVtlCallVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !(_DWORD)a5 )
    return HvcallpExtendedFastHypercall(a1, a2, a3);
  LODWORD(a5) = (unsigned int)a5 >> 4;
  return HvcallpExtendedFastHypercallWithOutput(a1, a2, (unsigned int)(a3 + 15) >> 4, a4, a5);
}
