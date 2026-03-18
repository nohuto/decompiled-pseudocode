/*
 * XREFs of CmpReparseToVirtualPath @ 0x14056B1F0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpVirtualPathPresent @ 0x140667F7C (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  if ( (*(_DWORD *)(a1 + 176) & 0x800000) == 0 || (int)CmRealKCBToVirtualPath(a1, 0LL, a3) < 0 )
    return 0;
  if ( !(unsigned __int8)CmpVirtualPathPresent(a3) )
  {
    RtlFreeUnicodeString(a3);
    return 0;
  }
  return 1;
}
