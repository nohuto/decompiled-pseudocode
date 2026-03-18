/*
 * XREFs of ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C008C57C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall OBJECT::SwapShareCount(struct OBJECT *a1, struct OBJECT *a2)
{
  int v2; // r8d
  GdiHandleEntryDirectory **v5; // rsi
  __int64 v6; // rcx

  v2 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v2;
  v5 = (GdiHandleEntryDirectory **)gpHandleManager;
  if ( *((_BYTE *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, a1) + 14) == 5
    && *((_BYTE *)GdiHandleManager::GetEntryFromObject(v5, a1) + 14) == 5 )
  {
    v6 = *((_QWORD *)a1 + 77);
    *((_QWORD *)a1 + 77) = *((_QWORD *)a2 + 77);
    *((_QWORD *)a2 + 77) = v6;
  }
}
