/*
 * XREFs of BgpFoDestroy @ 0x1407D0A18
 * Callers:
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1407D0C28 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     FopFreeFontData @ 0x1407CE9D0 (FopFreeFontData.c)
 */

void __fastcall BgpFoDestroy(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 **v7; // rdx
  __int64 v8; // rcx

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
        v3 = v2 + 5;
        while ( (__int64 *)*v3 != v3 )
        {
          v4 = (__int64 *)*v3;
          if ( *(__int64 **)(*v3 + 8) != v3 || (v5 = *v4, *(__int64 **)(*v4 + 8) != v4) )
            __fastfail(3u);
          *v3 = v5;
          *(_QWORD *)(v5 + 8) = v3;
          FopFreeFontData(v4);
        }
        v6 = *v2;
        if ( *(__int64 **)(*v2 + 8) != v2 || (v7 = (__int64 **)v2[1], *v7 != v2) )
          __fastfail(3u);
        *v7 = (__int64 *)v6;
        v8 = (__int64)v2;
        *(_QWORD *)(v6 + 8) = v7;
        v2 = (__int64 *)*v2;
        BgpFwFreeMemory(v8);
      }
    }
  }
}
