/*
 * XREFs of ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C0168A88
 * Callers:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0168B0C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

struct GdiHandleEntryTable::EntryDataLookupTable *__fastcall GdiHandleEntryTable::EntryDataLookupTable::Create(int a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rbx

  v1 = 8 * ((unsigned __int64)(unsigned int)(a1 + 255) >> 8);
  if ( v1 > 0xFFFFFFFF )
    return 0LL;
  v3 = 8 * ((unsigned int)(a1 + 255) >> 8);
  if ( (unsigned int)v1 >= 0xFFFFFFF0 )
    return 0LL;
  v4 = Win32AllocPool((unsigned int)(v1 + 16), 0x746C6547u);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = v4 + 16;
    *(_DWORD *)(v4 + 8) = a1;
    memset((void *)(v4 + 16), 0, v3);
  }
  return (struct GdiHandleEntryTable::EntryDataLookupTable *)v5;
}
