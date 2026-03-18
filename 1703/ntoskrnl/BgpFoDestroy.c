/*
 * XREFs of BgpFoDestroy @ 0x140758CA0
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140758A70 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     FopFreeFontData @ 0x140758D6C (FopFreeFontData.c)
 */

void __fastcall BgpFoDestroy(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 **v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 **v6; // rax
  __int64 v7; // rcx

  if ( FontLibraryInitialized )
  {
    v2 = (__int64 *)FopFontFileListHead;
    while ( v2 != &FopFontFileListHead )
    {
      if ( a1 && v2[2] != a1 )
      {
        v2 = (__int64 *)*v2;
      }
      else
      {
        v3 = (__int64 **)(v2 + 5);
        while ( *v3 != (__int64 *)v3 )
        {
          v4 = **v3;
          if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v4 + 8) != *v3 )
            __fastfail(3u);
          *v3 = (__int64 *)v4;
          *(_QWORD *)(v4 + 8) = v3;
          FopFreeFontData();
        }
        v5 = *v2;
        v6 = (__int64 **)v2[1];
        if ( *(__int64 **)(*v2 + 8) != v2 || *v6 != v2 )
          __fastfail(3u);
        *v6 = (__int64 *)v5;
        v7 = (__int64)v2;
        *(_QWORD *)(v5 + 8) = v6;
        v2 = (__int64 *)*v2;
        BgpFwFreeMemory(v7);
      }
    }
  }
}
