/*
 * XREFs of ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800982AC
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180098038 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 * Callees:
 *     ?_Atexit@@YAXP6AXXZ@Z @ 0x18009F804 (-_Atexit@@YAXP6AXXZ@Z.c)
 */

void __fastcall std::locale::_Setgloballocale(void *a1)
{
  if ( !byte_18015D048 )
  {
    byte_18015D048 = 1;
    _Atexit(tidy_global);
  }
  qword_18015D000 = a1;
}
