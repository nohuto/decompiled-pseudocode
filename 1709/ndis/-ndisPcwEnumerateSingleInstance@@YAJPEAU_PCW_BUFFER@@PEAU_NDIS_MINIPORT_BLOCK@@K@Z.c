/*
 * XREFs of ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EEAC0
 * Callers:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B098 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00CA11C (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00CA18C (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

int __fastcall ndisPcwEnumerateSingleInstance(PPCW_BUFFER Buffer, struct _NDIS_MINIPORT_BLOCK *a2, int a3)
{
  ULONG MiniportInstanceId; // edi
  unsigned int v5; // r10d
  struct _NDIS_MINIPORT_BLOCK *v6; // r9
  int result; // eax
  UNICODE_STRING Name; // [rsp+30h] [rbp-258h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-248h] BYREF
  char v10; // [rsp+50h] [rbp-238h] BYREF

  MiniportInstanceId = ndisPcwGetMiniportInstanceId(a2, a3);
  *(_DWORD *)&Name.Length = 33685504;
  Name.Buffer = (wchar_t *)&v10;
  Data.Data = 0LL;
  Data.Size = 0;
  result = ndisPcwGetInstanceName(v6, (const struct _UNICODE_STRING *)v5, &Name);
  if ( result >= 0 )
    return PcwAddInstance(Buffer, &Name, MiniportInstanceId, 1u, &Data);
  return result;
}
