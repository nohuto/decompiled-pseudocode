/*
 * XREFs of ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x1C004EA18
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C004E82C (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

bool __fastcall GdiHandleEntryTable::EntryDataLookupTable::Initialize(
        GdiHandleEntryTable::EntryDataLookupTable *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // si
  _QWORD *v5; // rcx
  bool result; // al

  v3 = (unsigned __int64)a2 >> 8;
  v4 = a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v3) )
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v3) = Win32AllocPool(4096LL, 0x636C6547u);
    if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v3) )
      return 0;
  }
  v5 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v3) + 16LL * v4);
  result = 1;
  *v5 = 0LL;
  v5[1] = 0LL;
  return result;
}
