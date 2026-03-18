/*
 * XREFs of CmpLoadServicesNode @ 0x140835AF8
 * Callers:
 *     CmpFindDrivers @ 0x140836F04 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x1405BC614 (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadServicesNode(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int SubKeyByName; // edi
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = -1;
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v11);
  if ( !v7 )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(a1, v7, (__int64)&CmpServicesString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
  if ( SubKeyByName == -1 )
    return 0;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, SubKeyByName, a4);
  *a3 = v9;
  return v9 != 0;
}
