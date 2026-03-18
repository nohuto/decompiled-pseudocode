/*
 * XREFs of CmpFindDrivers @ 0x140836F04
 * Callers:
 *     CmGetSystemDriverList @ 0x140835884 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpLoadServicesNode @ 0x140835AF8 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140835B98 (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x1408365C8 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140837000 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1408693E0 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // esi
  __int64 v10; // rdi
  unsigned int GroupOrderList; // r15d
  unsigned int v12; // r14d
  unsigned int v13; // esi
  char ManufacturingProfileServicesNode; // al
  __int64 v16; // [rsp+28h] [rbp-18h]
  _DWORD *v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  int v19; // [rsp+88h] [rbp+48h] BYREF
  int v20; // [rsp+8Ch] [rbp+4Ch]

  v18 = a3;
  v19 = -1;
  a6 = 0xFFFFFFFFLL;
  v8 = a2;
  v20 = 0;
  if ( !CmpLoadServicesNode(BugCheckParameter3, a2, (__int64 *)&v17, (__int64)&a6) )
    return 0;
  v10 = 0LL;
  a8 = 0LL;
  if ( a7 )
  {
    ManufacturingProfileServicesNode = CmpLoadManufacturingProfileServicesNode(
                                         BugCheckParameter3,
                                         v8,
                                         a7,
                                         (unsigned int)&a8,
                                         (__int64)&v19);
    v10 = a8 & -(__int64)(ManufacturingProfileServicesNode != 0);
  }
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v8);
  if ( GroupOrderList == -1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v17, v12, &v18);
    v13 = v18;
    ++v12;
    if ( v18 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, v10, v16) )
      CmpAddDriverToList(BugCheckParameter3, v13, GroupOrderList);
  }
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v19);
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a6);
  return 1;
}
