/*
 * XREFs of ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E4E34
 * Callers:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C0069A68 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00E4ED8 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E5168 (-ndisPcwGetMiniportInstanceId@@YAKPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

NTSTATUS __fastcall ndisPcwEnumerateSingleInstance(
        PPCW_BUFFER Buffer,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned int a3)
{
  ULONG MiniportInstanceId; // edi
  struct _NDIS_MINIPORT_BLOCK *v5; // r10
  unsigned int v6; // r11d
  NTSTATUS result; // eax
  UNICODE_STRING Name; // [rsp+30h] [rbp-258h] BYREF
  struct _PCW_DATA Data; // [rsp+40h] [rbp-248h] BYREF
  char v10; // [rsp+50h] [rbp-238h] BYREF

  MiniportInstanceId = ndisPcwGetMiniportInstanceId(a2, a3);
  *(_DWORD *)&Name.Length = 33685504;
  Name.Buffer = (wchar_t *)&v10;
  Data.Data = 0LL;
  Data.Size = 0;
  result = ndisPcwGetInstanceName(v5, v6, &Name);
  if ( result >= 0 )
    return PcwAddInstance(Buffer, &Name, MiniportInstanceId, 1u, &Data);
  return result;
}
