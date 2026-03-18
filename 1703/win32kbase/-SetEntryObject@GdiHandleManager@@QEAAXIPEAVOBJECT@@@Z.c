/*
 * XREFs of ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0032E3C
 * Callers:
 *     HmgReplaceObject @ 0x1C003EC10 (HmgReplaceObject.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EBE30 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 */

void __fastcall GdiHandleManager::SetEntryObject(GdiHandleManager *this, unsigned int a2, struct OBJECT *a3)
{
  GdiHandleManager *v3; // rbx
  unsigned int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]
  struct GdiHandleEntryTable *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = HIDWORD(this);
  v3 = gpHandleManager;
  v8 = 0LL;
  v6 = 0;
  v5 = GdiHandleManager::DecodeIndex(gpHandleManager, a2);
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(*((GdiHandleEntryDirectory **)v3 + 2), v5, &v8, &v6)
    && v6 < *((_DWORD *)v8 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v8 + 3) + 8 * ((unsigned __int64)v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8) = a3;
  }
}
