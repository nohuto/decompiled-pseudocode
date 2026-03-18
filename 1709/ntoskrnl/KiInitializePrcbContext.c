/*
 * XREFs of KiInitializePrcbContext @ 0x1404253FC
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KiInitializePrcbContext(__int64 a1, __int64 a2)
{
  char v3; // di
  unsigned int v4; // eax
  unsigned int v5; // ebp
  void *IndependentPages; // rax
  void *v7; // rsi
  _DWORD *v8; // r8
  int v9; // eax
  int v10; // eax

  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    v3 = 1;
    v4 = 2 * KeXStateLength + 885;
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  if ( v4 )
  {
    v5 = v4;
    IndependentPages = (void *)MmAllocateIndependentPages(v4, a2);
    v7 = IndependentPages;
    if ( !IndependentPages )
      return 3221225626LL;
    memset(IndependentPages, 0, v5);
    *(_QWORD *)(a1 + 25296) = ((unsigned __int64)v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  }
  if ( v3 )
  {
    v8 = (_DWORD *)((*(_QWORD *)(a1 + 25296) + (unsigned int)KeXStateLength + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v8[310] = -1232;
    v8[311] = 1232;
    v8[312] = (((_DWORD)v8 + 1319) & 0xFFFFFFC0) - ((_DWORD)v8 + 1232);
    v9 = KeXStateLength - 512;
    v8[308] = -1232;
    v8[313] = v9;
    v8[309] = (((_DWORD)v8 + 1319) & 0xFFFFFFC0) - (_DWORD)v8 + v9;
    *(_QWORD *)(a1 + 25280) = v8;
  }
  *(_DWORD *)(a1 + 25288) = 1048587;
  if ( v3 )
  {
    v10 = *(_DWORD *)(a1 + 25288);
    if ( !*(_DWORD *)(a1 + 36) )
      v10 = 1048651;
    *(_DWORD *)(a1 + 25288) = v10;
  }
  return 0LL;
}
