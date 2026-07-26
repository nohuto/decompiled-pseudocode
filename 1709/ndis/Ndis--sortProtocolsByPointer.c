/*
 * XREFs of Ndis::sortProtocolsByPointer @ 0x1C00B1E6C
 * Callers:
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::sortProtocolsByPointer(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 80LL) < *(_QWORD *)(*(_QWORD *)a2 + 80LL);
}
