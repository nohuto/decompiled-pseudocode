/*
 * XREFs of RtlStringCbCopyA @ 0x140062428
 * Callers:
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x1406C30BC (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1407104C4 (EtwpLogRefSetAutoMark.c)
 *     IopStoreArcInformation @ 0x1407F8A30 (IopStoreArcInformation.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140062468 (RtlStringCopyWorkerA.c)
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
