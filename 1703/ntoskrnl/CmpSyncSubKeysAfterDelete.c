/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x14058D860
 * Callers:
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x14043B918 (CmpFindSubKeyByNumber.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInitializeKeyNameString @ 0x14058DF54 (CmpInitializeKeyNameString.c)
 *     CmpDeleteTree @ 0x14058E778 (CmpDeleteTree.c)
 */

char __fastcall CmpSyncSubKeysAfterDelete(__int64 a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, __int64 a5)
{
  unsigned int v5; // r15d
  char v9; // si
  int SubKeyByNumber; // edi
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-44h] BYREF
  _DWORD v16[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF

  v16[0] = -1;
  v5 = 0;
  v16[1] = 0;
  v9 = 1;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, &v14);
    if ( SubKeyByNumber < 0 )
      return 0;
    if ( v14 == -1 )
      goto LABEL_12;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v14, v16);
    v12 = v11;
    if ( !v11 )
    {
      SubKeyByNumber = -1073741670;
LABEL_16:
      if ( v12 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v16);
LABEL_12:
      if ( SubKeyByNumber >= 0 )
        return v9;
      return 0;
    }
    CmpInitializeKeyNameString(v11, v17, a5);
    CmpFindSubKeyByNameWithStatus(a1, a2, (__int64)v17, &v15);
    if ( v15 == -1 )
    {
      if ( *(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24) )
        CmpDeleteTree(a3);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v14, 1);
      if ( SubKeyByNumber < 0 )
        goto LABEL_16;
    }
    else
    {
      ++v5;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v16);
  }
}
