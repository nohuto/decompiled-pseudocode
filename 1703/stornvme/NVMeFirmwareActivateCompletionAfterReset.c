/*
 * XREFs of NVMeFirmwareActivateCompletionAfterReset @ 0x1C000A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFirmwareActivateCompletionAfterReset(__int64 a1, char a2, __int64 a3)
{
  char v3; // r10
  __int64 v5; // r9
  __int64 v6; // rcx

  v3 = *(_BYTE *)(a3 + 2);
  if ( v3 == 40 )
    v5 = *(_QWORD *)(a3 + 104);
  else
    v5 = *(_QWORD *)(a3 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( v3 == 40 )
    v6 = *(_QWORD *)(a3 + 64);
  else
    v6 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(v6 + 20) = a2 != 0 ? 0 : 0x20;
  *(_BYTE *)(v5 + 4245) |= 8u;
  *(_BYTE *)(a3 + 3) = 1;
  return NVMeRequestComplete(a1, a3);
}
