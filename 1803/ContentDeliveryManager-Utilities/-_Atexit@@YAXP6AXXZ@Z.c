/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800ACA68
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800A5330 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_18017B1A8 )
    abort();
  --qword_18017B1A8;
  qword_18017B440[qword_18017B1A8] = EncodePointer(a1);
}
