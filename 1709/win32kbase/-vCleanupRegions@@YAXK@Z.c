/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C001EB10
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     bDeleteRegion @ 0x1C001F530 (bDeleteRegion.c)
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 *     HmgNextOwned @ 0x1C004DEA0 (HmgNextOwned.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int v2; // esi
  HRGN v3; // rdi
  struct _ENTRY *EntryFromObject; // rax
  struct OBJECT *v5; // rax
  struct OBJECT *v6; // rbx
  HRGN v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v7);
    if ( !v2 )
      break;
    v3 = v7;
    if ( (BYTE2(v7) & 0x1F) == 4 )
    {
      v5 = (struct OBJECT *)HmgLockEx((struct HOBJ__ *)v7);
      v6 = v5;
      if ( v5 )
      {
        EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, v5);
        if ( EntryFromObject )
          *((_QWORD *)EntryFromObject + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
        v3 = v7;
      }
      bDeleteRegion(v3);
    }
  }
}
