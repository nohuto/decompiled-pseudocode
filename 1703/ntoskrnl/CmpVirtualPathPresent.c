/*
 * XREFs of CmpVirtualPathPresent @ 0x140667F7C
 * Callers:
 *     CmpReparseToVirtualPath @ 0x14056B1F0 (CmpReparseToVirtualPath.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1404D36E8 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpUnblockTwoHiveWrites @ 0x1404D3938 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1404D4574 (CmpFindPathByName.c)
 *     CmpBlockTwoHiveWrites @ 0x1404D83B0 (CmpBlockTwoHiveWrites.c)
 */

bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  char PathByName; // al
  __int64 v6; // rsi
  bool v7; // bl
  __int64 v8[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+74h] [rbp+1Ch]
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v1 = CmpMasterHive;
  v12 = 0LL;
  v11 = 0;
  v3 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, &v12) < 0 || (int)CmpBlockTwoHiveWrites(v1, v12, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByName(0LL, a1, 0LL, &v9, v8);
  v6 = v8[0];
  v7 = PathByName;
  if ( v8[0] )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v8[0] + 8))(v8[0], v9, &v10);
  if ( v7 )
    v7 = v3 && CmpVEEnabled && (*(_WORD *)(v3 + 2) & 0x100) != 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, int *))(v6 + 16))(v6, &v10);
  CmpUnblockTwoHiveWrites(v1, v12);
  return v7;
}
