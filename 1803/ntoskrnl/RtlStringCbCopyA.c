/*
 * XREFs of RtlStringCbCopyA @ 0x14008BC44
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x14075AF1C (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1407AEE14 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x1408C6DD0 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14008BC84 (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v5);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
