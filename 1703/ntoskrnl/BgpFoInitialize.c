/*
 * XREFs of BgpFoInitialize @ 0x140837E64
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x140162410 (FioFwReadUlongAtOffset.c)
 *     memset @ 0x140192D80 (memset.c)
 *     FopInitializeFonts @ 0x140837F60 (FopInitializeFonts.c)
 */

__int64 __fastcall BgpFoInitialize(__int64 a1, int a2)
{
  void *Memory; // rax
  __int64 v5; // rbx
  int UlongAtOffset; // edi
  __int64 v7; // rax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  if ( !FontLibraryInitialized )
  {
    qword_1403419B8 = (__int64)&FopFontFileListHead;
    FopFontFileListHead = (__int64)&FopFontFileListHead;
    FontLibraryInitialized = 1;
  }
  Memory = (void *)BgpFwAllocateMemory(0x38uLL);
  v5 = (__int64)Memory;
  if ( !Memory )
    return (unsigned int)-1073741801;
  memset(Memory, 0, 0x38uLL);
  *(_QWORD *)(v5 + 48) = v5 + 40;
  *(_QWORD *)(v5 + 40) = v5 + 40;
  *(_QWORD *)(v5 + 16) = a1;
  *(_DWORD *)(v5 + 28) = a2;
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 0, &v9);
  if ( UlongAtOffset < 0 )
    goto LABEL_11;
  if ( v9 == 1953784678 )
  {
    *(_DWORD *)(v5 + 32) |= 1u;
    UlongAtOffset = FioFwReadUlongAtOffset(a1, 4u, &v9);
    if ( UlongAtOffset < 0 )
      goto LABEL_11;
    if ( ((v9 - 0x10000) & 0xFFFEFFFF) != 0 )
    {
      UlongAtOffset = -1073741701;
      goto LABEL_11;
    }
    UlongAtOffset = FioFwReadUlongAtOffset(a1, 8u, (_DWORD *)(v5 + 24));
    if ( UlongAtOffset < 0 )
      goto LABEL_11;
  }
  else
  {
    *(_DWORD *)(v5 + 24) = 1;
  }
  UlongAtOffset = FopInitializeFonts(v5);
  if ( UlongAtOffset < 0 )
  {
LABEL_11:
    BgpFwFreeMemory(v5);
    return (unsigned int)UlongAtOffset;
  }
  v7 = FopFontFileListHead;
  if ( *(__int64 **)(FopFontFileListHead + 8) != &FopFontFileListHead )
    __fastfail(3u);
  *(_QWORD *)v5 = FopFontFileListHead;
  *(_QWORD *)(v5 + 8) = &FopFontFileListHead;
  *(_QWORD *)(v7 + 8) = v5;
  FopFontFileListHead = v5;
  return (unsigned int)UlongAtOffset;
}
