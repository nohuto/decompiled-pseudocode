/*
 * XREFs of Simulator_Free_Arguments @ 0x1C005B258
 * Callers:
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C005AF50 (Simulator_AsyncEvalObjectCallBack.c)
 *     Simulator_Post_Generic @ 0x1C005B5D4 (Simulator_Post_Generic.c)
 * Callees:
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  unsigned int v6; // eax

  if ( a1 > 0 && a2 )
  {
    v3 = a2;
    v4 = (unsigned int)a1;
    v5 = (_QWORD *)(a2 + 32);
    do
    {
      v6 = *((unsigned __int16 *)v5 - 15);
      if ( v6 >= 2 && (v6 <= 5 || v6 > 6 && (v6 <= 0xC || v6 == 14 || v6 - 130 <= 2)) )
      {
        if ( *v5 )
          FreeObjData(v3);
      }
      v3 += 40LL;
      v5 += 5;
      --v4;
    }
    while ( v4 );
    HeapFree(a2);
  }
  return 0LL;
}
