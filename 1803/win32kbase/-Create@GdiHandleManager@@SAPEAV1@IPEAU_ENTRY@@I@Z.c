/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C016886C
 * Callers:
 *     HmgCreate @ 0x1C00C2B84 (HmgCreate.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C016893C (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(__int64 a1, struct _ENTRY *a2, unsigned int a3)
{
  struct _ENTRY *v3; // rbp
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  struct GdiHandleEntryDirectory *v9; // rax

  v3 = (struct _ENTRY *)gpGdiSharedMemory;
  v5 = gMaxGdiHandleCount;
  if ( a3 < 0x10000 && a3 < gMaxGdiHandleCount )
    return 0LL;
  v7 = Win32AllocPool(32LL, 0x636D6847u);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  *(_DWORD *)v7 = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_DWORD *)(v7 + 8) = v5;
  v9 = GdiHandleEntryDirectory::Create(v3, a3);
  *(_QWORD *)(v8 + 16) = v9;
  if ( !v9 )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  return (struct GdiHandleManager *)v8;
}
