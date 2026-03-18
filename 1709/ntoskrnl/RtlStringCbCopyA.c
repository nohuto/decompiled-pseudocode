/*
 * XREFs of RtlStringCbCopyA @ 0x1400B9B10
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x1406F1B2C (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x14074D59C (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140845950 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1400B9B50 (RtlStringCopyWorkerA.c)
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
