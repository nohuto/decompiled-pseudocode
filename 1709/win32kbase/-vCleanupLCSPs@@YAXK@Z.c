/*
 * XREFs of ?vCleanupLCSPs@@YAXK@Z @ 0x1C0085738
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C004DEA0 (HmgNextOwned.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0085788 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 */

void __fastcall vCleanupLCSPs(int a1)
{
  int Owned; // ebx
  HCOLORSPACE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v3);
    if ( !Owned )
      break;
    if ( (BYTE2(v3) & 0x1F) == 9 )
      bDeleteColorSpace(v3);
  }
}
