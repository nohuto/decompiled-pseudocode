/*
 * XREFs of ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00BBDF0
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BBD34 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00B547C (ndisPnPNotifyBindingUnlocked.c)
 */

void __fastcall ndisPauseProtocolInner(struct _NDIS_OPEN_BLOCK *a1)
{
  _QWORD v2[22]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v3; // [rsp+D0h] [rbp+37h] BYREF
  int v4; // [rsp+D8h] [rbp+3Fh]

  v4 = 1;
  v3 = 786816LL;
  memset(v2, 0, sizeof(v2));
  v2[0] = 11272832LL;
  *(_QWORD *)((char *)&v2[20] + 4) = 0LL;
  LODWORD(v2[20]) = 0;
  LODWORD(v2[1]) = 8;
  v2[2] = &v3;
  LODWORD(v2[3]) = 12;
  ndisPnPNotifyBindingUnlocked((__int64)a1, (__int64)v2);
}
