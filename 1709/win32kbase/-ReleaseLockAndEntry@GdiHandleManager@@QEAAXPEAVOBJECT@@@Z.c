/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C004E570
 * Callers:
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C004DDA8 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E710 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C004E75C (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseLockAndEntry(GdiHandleManager *this, struct OBJECT *a2)
{
  GdiHandleManager *v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rax
  unsigned int v6; // edi

  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000u);
  v5 = *((_QWORD *)v3 + 3);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 4LL * (unsigned __int16)v4);
    if ( v6 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v3 + 2), v6, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v3 + 2), v6, 1);
      *(_DWORD *)(*((_QWORD *)v3 + 3) + 4LL * (unsigned __int16)v4) = 0;
      --*((_DWORD *)v3 + 1);
    }
  }
  GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v3 + 2), v4, 0);
  *(_QWORD *)a2 = 0LL;
  --*((_DWORD *)v3 + 1);
}
