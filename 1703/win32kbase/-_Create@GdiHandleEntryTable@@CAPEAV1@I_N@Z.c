/*
 * XREFs of ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C006B1D4
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0032F44 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C006B140 (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C006B26C (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

struct GdiHandleEntryTable *__fastcall GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v6; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v7; // rax

  v2 = 0;
  v3 = a1;
  v4 = 32LL;
  if ( a2 )
  {
    v2 = 24 * v3;
    if ( (unsigned __int64)(24 * v3) > 0xFFFFFFFF || v2 + 32 < v2 )
      return 0LL;
    v4 = v2 + 32;
  }
  v6 = Win32AllocPool(v4, 0x63746547u);
  if ( !v6 )
    return (struct GdiHandleEntryTable *)v6;
  v7 = GdiHandleEntryTable::EntryDataLookupTable::Create(v3);
  *(_QWORD *)(v6 + 24) = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_QWORD *)v6 = v6 + 32;
      memset((void *)(v6 + 32), 0, v2);
    }
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 8) = v3;
    *(_DWORD *)(v6 + 12) = -1;
    return (struct GdiHandleEntryTable *)v6;
  }
  Win32FreePool(v6);
  return 0LL;
}
