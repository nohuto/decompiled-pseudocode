/*
 * XREFs of Bulk_GetConfiguration @ 0x1C005F064
 * Callers:
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 */

__int64 __fastcall Bulk_GetConfiguration(__int64 a1, __int64 a2)
{
  bool v2; // cf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // r9d

  *(_DWORD *)(a2 + 12) = 3;
  *(_QWORD *)(a2 + 32) = BulkFunctionTable;
  *(_DWORD *)(a2 + 20) = 512;
  *(_DWORD *)(a2 + 16) = 416;
  v2 = Controller_IsSecureDevice(a1) != 0;
  result = *(_QWORD *)(v4 + 272);
  *(_DWORD *)(v3 + 24) = v2 ? 0 : v6;
  if ( (result & 8) != 0 )
    *(_DWORD *)(v3 + 4) = 114688;
  return result;
}
