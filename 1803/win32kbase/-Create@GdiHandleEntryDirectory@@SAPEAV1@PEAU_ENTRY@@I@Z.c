/*
 * XREFs of ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C016893C
 * Callers:
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C016886C (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0168B0C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 */

struct GdiHandleEntryDirectory *__fastcall GdiHandleEntryDirectory::Create(struct _ENTRY *a1, unsigned int a2)
{
  __int64 v4; // rdi
  struct GdiHandleEntryTable *v5; // rax
  struct GdiHandleEntryTable *v6; // rsi

  v4 = Win32AllocPool(2064LL, 0x63746547u);
  if ( v4 )
  {
    v5 = GdiHandleEntryTable::_Create(a2, 0);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = a1;
      memset((void *)(v4 + 8), 0, 0x800uLL);
      *(_BYTE *)v4 = 0;
      *(_DWORD *)(v4 + 2056) = a2;
      *(_QWORD *)(v4 + 8) = v6;
      *(_WORD *)(v4 + 2) = 1;
      return (struct GdiHandleEntryDirectory *)v4;
    }
    Win32FreePool(v4);
  }
  return 0LL;
}
