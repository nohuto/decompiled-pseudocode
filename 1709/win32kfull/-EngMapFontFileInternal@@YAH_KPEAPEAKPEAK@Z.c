/*
 * XREFs of ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C02686F4
 * Callers:
 *     EngMapFontFile @ 0x1C0269550 (EngMapFontFile.c)
 * Callees:
 *     vUnmapFile @ 0x1C00C1B94 (vUnmapFile.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0101884 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     bMapFile @ 0x1C0269910 (bMapFile.c)
 */

__int64 __fastcall EngMapFontFileInternal(__int64 a1, unsigned int **a2, unsigned int *a3)
{
  unsigned int v6; // edi
  int v7; // esi
  unsigned int **v8; // r14
  void *v9; // rcx
  unsigned int v10; // esi
  PVOID v12[10]; // [rsp+20h] [rbp-68h] BYREF
  ULONG_PTR ViewSize; // [rsp+90h] [rbp+8h] BYREF

  memset(v12, 0, sizeof(v12));
  v6 = 1;
  v7 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v8 = (unsigned int **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) )
  {
    v7 = 0;
    ++*(_DWORD *)(a1 + 96);
  }
  else if ( *(_QWORD *)(a1 + 80) )
  {
    v9 = *(void **)(a1 + 32);
    if ( v9 )
    {
      ViewSize = 0LL;
      if ( MmMapViewInSessionSpace(v9, (PVOID *)(a1 + 8), &ViewSize) < 0 )
        v6 = 0;
      else
        *(_DWORD *)(a1 + 96) = 1;
      v7 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( v7 )
  {
    if ( !(unsigned int)bMapFile(*(_QWORD *)(a1 + 80), v12, 0LL, &ViewSize) )
      return 0;
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(a1 + 96);
    if ( *v8 )
    {
      v10 = 0;
    }
    else
    {
      v10 = bMapRoutine((__int64 *)a1, (__int64 *)v12, 0, ViewSize);
      v6 = v10;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v10 )
      vUnmapFile(v12);
  }
  if ( v6 )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 24);
  }
  return v6;
}
