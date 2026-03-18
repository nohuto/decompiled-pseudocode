/*
 * XREFs of CmpVirtualPathPresent @ 0x140692DDC
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1406924B0 (CmpReparseToVirtualPath.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x14068F3D0 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x14069194C (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x140692028 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  PVOID v1; // rbp
  __int64 v3; // rdi
  char PathByName; // al
  __int64 v6; // rsi
  bool v7; // bl
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+74h] [rbp+1Ch]
  PVOID v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v1 = CmpMasterHive;
  v12 = 0LL;
  v11 = 0;
  v3 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v12) < 0
    || (int)CmpBlockTwoHiveWrites((__int64)v1, (__int64)v12, 1) < 0 )
  {
    return 0;
  }
  PathByName = CmpFindPathByName(0LL, a1, 0LL, &v9, v8);
  v6 = v8[0];
  v7 = PathByName;
  if ( v8[0] )
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v8[0] + 8LL))(v8[0], v9, &v10);
  if ( v7 )
    v7 = v3 && CmpVEEnabled && (*(_WORD *)(v3 + 2) & 0x100) != 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, int *))(v6 + 16))(v6, &v10);
  CmpUnblockTwoHiveWrites(v1, v12);
  return v7;
}
