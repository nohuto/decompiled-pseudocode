/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x140692C3C
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x14068F3D0 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x14069194C (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x140692028 (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, __m128i *a2, char *a3)
{
  PVOID v6; // r15
  PVOID v8; // r14
  char PathByName; // al
  __int64 v11; // rsi
  char v12; // di
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]
  PVOID v20; // [rsp+80h] [rbp+40h] BYREF
  int v21; // [rsp+90h] [rbp+50h] BYREF
  int v22; // [rsp+94h] [rbp+54h]
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v21 = -1;
  v22 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *a3 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    if ( !a2->m128i_i16[0] )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 176) & 0x1000000) != 0;
    v8 = *(PVOID *)(a1 + 24);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a2, (__int64)&v20) < 0 )
      return 0;
    v6 = CmpMasterHive;
    v8 = v20;
  }
  if ( (int)CmpBlockTwoHiveWrites((__int64)v6, (__int64)v8, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByName(a1, a2, (__int64)&v18, (unsigned int *)&v20, &v23);
  v11 = v23;
  v12 = PathByName;
  if ( v23 && (v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v23 + 8))(v23, (unsigned int)v20, &v21)) != 0 )
  {
    if ( v12 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v13 + 2) & 0x100) == 0 )
        v12 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v14 = (*(_WORD *)(v13 + 2) & 0x100) == 0, v15 = 1, v14) )
        v15 = 0;
      v16 = 0;
      v17 = (unsigned __int16)v18 >> 1;
      *a3 = v15;
      if ( v17 )
      {
        while ( *(_WORD *)(v19 + 2LL * v16) != 92 )
        {
          if ( ++v16 >= v17 )
            goto LABEL_28;
        }
        *a3 = 0;
      }
    }
LABEL_28:
    (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v21);
  }
  else
  {
    v12 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v8);
  return v12;
}
