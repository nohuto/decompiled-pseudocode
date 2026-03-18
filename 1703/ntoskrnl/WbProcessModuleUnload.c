/*
 * XREFs of WbProcessModuleUnload @ 0x14045131C
 * Callers:
 *     WbDispatchOperation @ 0x14053BA60 (WbDispatchOperation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140451400 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1404514C4 (WbHeapExecutionUnloadModule.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 */

__int64 __fastcall WbProcessModuleUnload(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  unsigned __int64 v6; // rax

  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = WbAlloc(0x10uLL);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      if ( v6 + 16 > 0x7FFFFFFF0000LL || v6 + 16 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
      MEMORY[0] = *(_OWORD *)a2[1];
      if ( MEMORY[0] )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        WbHeapExecutionUnloadModule(a1, MEMORY[8]);
        WbInPlaceEncryptionUnloadModule(a1, MEMORY[8]);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
