/*
 * XREFs of CmpVirtualPathPresent @ 0x1406F5CCC
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1406F5694 (CmpReparseToVirtualPath.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpUnblockTwoHiveWrites @ 0x1405BFE38 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1405C00FC (CmpFindPathByName.c)
 *     CmpBlockTwoHiveWrites @ 0x1405C041C (CmpBlockTwoHiveWrites.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1405C04E8 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  char *v1; // rbp
  __int64 v3; // rdi
  char PathByName; // al
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  bool v9; // bl
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+74h] [rbp+1Ch]
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = -1;
  v1 = (char *)CmpMasterHive;
  v14 = 0LL;
  v13 = 0;
  v3 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v14) < 0
    || (int)CmpBlockTwoHiveWrites((__int64)v1, (__int64)v14, 1) < 0 )
  {
    return 0;
  }
  PathByName = CmpFindPathByName(0LL, a1, 0LL, &v11, v10);
  v8 = v10[0];
  v9 = PathByName;
  if ( v10[0] )
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v10[0] + 8LL))(v10[0], v11, &v12);
  if ( v9 )
    v9 = v3 && CmpVEEnabled && (*(_WORD *)(v3 + 2) & 0x100) != 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, int *))(v8 + 16))(v8, &v12);
  CmpUnblockTwoHiveWrites(v1, v14, v6, v7);
  return v9;
}
