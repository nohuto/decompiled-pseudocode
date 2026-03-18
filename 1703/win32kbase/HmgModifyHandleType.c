/*
 * XREFs of HmgModifyHandleType @ 0x1C0078370
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0037088 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00781E0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C0078300 (HmgLockAndModifyHandleType.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  GdiHandleEntryDirectory **v1; // rbx
  __int64 v3; // rbp
  unsigned int v4; // edi
  unsigned int v5; // eax
  struct _ENTRY *Entry; // r14
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r8
  signed int v11; // ecx
  __int64 v12; // rax
  __int64 result; // rax

  v1 = (GdiHandleEntryDirectory **)gpHandleManager;
  v3 = *((_QWORD *)gpHandleManager + 2);
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v5 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v4);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v3, v5, 0);
  v7 = GdiHandleManager::DecodeIndex(v1, v4);
  v8 = *(_DWORD *)(v3 + 2056);
  v9 = v7;
  if ( v7 >= v8 + ((*(unsigned __int16 *)(v3 + 2) + 0xFFFF) << 16) )
    goto LABEL_9;
  v10 = 0LL;
  if ( v7 >= v8 )
  {
    v11 = ((v7 - v8) >> 16) + 1;
    if ( (v7 - v8) >> 16 != -2 )
      goto LABEL_4;
LABEL_9:
    v10 = 0LL;
    goto LABEL_8;
  }
  v11 = 0;
LABEL_4:
  v12 = *(_QWORD *)(v3 + 8LL * v11 + 8);
  if ( v11 )
    v9 = (_DWORD)v9 - (v11 << 16) - v8 + 0x10000;
  if ( (unsigned int)v9 < *(_DWORD *)(v12 + 20) )
    v10 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
LABEL_8:
  *((_WORD *)Entry + 6) = WORD1(a1);
  result = a1;
  *v10 = a1;
  return result;
}
