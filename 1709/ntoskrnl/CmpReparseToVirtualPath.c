/*
 * XREFs of CmpReparseToVirtualPath @ 0x1406924B0
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmpVirtualPathPresent @ 0x140692DDC (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  if ( (*(_DWORD *)(a1 + 176) & 0x800000) != 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3) >= 0 )
  {
    if ( (unsigned __int8)CmpVirtualPathPresent(a3) )
      return 1;
    RtlFreeUnicodeString(a3);
  }
  return 0;
}
