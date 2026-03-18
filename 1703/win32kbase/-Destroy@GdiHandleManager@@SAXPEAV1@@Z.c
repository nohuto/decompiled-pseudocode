/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006820C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C0068248 (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 */

void __fastcall GdiHandleManager::Destroy(struct GdiHandleManager *a1)
{
  GdiHandleManager *v1; // rbx
  __int64 v2; // rcx

  v1 = gpHandleManager;
  v2 = *((_QWORD *)gpHandleManager + 3);
  if ( v2 )
    Win32FreePool(v2);
  GdiHandleEntryDirectory::Destroy(*((struct GdiHandleEntryDirectory **)v1 + 2));
  Win32FreePool((__int64)v1);
}
