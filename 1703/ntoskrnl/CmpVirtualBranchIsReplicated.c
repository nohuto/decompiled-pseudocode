/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1404D37D0
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1404D36E8 (CmpGetCmHiveFromVirtualPath.c)
 *     CmpUnblockTwoHiveWrites @ 0x1404D3938 (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x1404D4574 (CmpFindPathByName.c)
 *     CmpBlockTwoHiveWrites @ 0x1404D83B0 (CmpBlockTwoHiveWrites.c)
 */

char __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  char *v3; // r12
  int v4; // esi
  int v5; // edi
  __int64 v6; // r15
  __int64 v7; // r14
  char PathByName; // al
  __int64 v9; // rsi
  char v10; // di
  __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // dx
  char v17; // bl
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]
  __int64 v20; // [rsp+80h] [rbp+40h] BYREF
  int v21; // [rsp+90h] [rbp+50h] BYREF
  int v22; // [rsp+94h] [rbp+54h]
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v21 = -1;
  v22 = 0;
  v18 = 0LL;
  v3 = a3;
  v19 = 0LL;
  v4 = (int)a2;
  v20 = 0LL;
  v5 = a1;
  *a3 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    if ( !*a2 )
    {
      if ( !CmpVEEnabled )
        return 0;
      v17 = 1;
      if ( (*(_DWORD *)(a1 + 176) & 0x1000000) == 0 )
        return 0;
      return v17;
    }
    v7 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a2, &v20) < 0 )
      return 0;
    v6 = CmpMasterHive;
    v7 = v20;
  }
  LOBYTE(a3) = 1;
  if ( (int)CmpBlockTwoHiveWrites(v6, v7, a3) < 0 )
    return 0;
  PathByName = CmpFindPathByName(v5, v4, (unsigned int)&v18, (unsigned int)&v20, (__int64)&v23);
  v9 = v23;
  v10 = PathByName;
  if ( v23 && (v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v23 + 8))(v23, (unsigned int)v20, &v21)) != 0 )
  {
    if ( v10 )
    {
      if ( !CmpVEEnabled || (*(_WORD *)(v11 + 2) & 0x100) == 0 )
        v10 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v12 = (*(_WORD *)(v11 + 2) & 0x100) == 0, v13 = 1, v12) )
        v13 = 0;
      v14 = 0;
      v15 = (unsigned __int16)v18 >> 1;
      *v3 = v13;
      if ( v15 )
      {
        while ( *(_WORD *)(v19 + 2LL * v14) != 92 )
        {
          if ( ++v14 >= v15 )
            goto LABEL_16;
        }
        *v3 = 0;
      }
    }
LABEL_16:
    (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v21);
  }
  else
  {
    v10 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v10;
}
