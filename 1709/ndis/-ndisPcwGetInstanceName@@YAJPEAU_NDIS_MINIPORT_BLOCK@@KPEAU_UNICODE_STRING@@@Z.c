/*
 * XREFs of ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00CA11C
 * Callers:
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00C9E0C (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C9F54 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EEAC0 (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0004008 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C002350C (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00235F4 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C006AE84 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

NTSTATUS __fastcall ndisPcwGetInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  ULONG v6; // r8d
  _UNICODE_STRING *pModifiedInstanceName; // rdx

  if ( (_DWORD)a2 == -2 )
    return RtlUnicodeStringCopy(a3, a2);
  if ( (_DWORD)a2 == 4095 )
    result = RtlUnicodeStringCopyString(a3, &a2->Length);
  else
    result = RtlUnicodeStringPrintf(a3, L"%u, ", (unsigned int)a2);
  if ( result >= 0 )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    return RtlUnicodeStringCat(a3, pModifiedInstanceName, v6);
  }
  return result;
}
