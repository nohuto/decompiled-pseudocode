/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18009F804
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800982AC (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_18015CD88 )
    abort();
  --qword_18015CD88;
  qword_18015D0A0[qword_18015CD88] = EncodePointer(a1);
}
