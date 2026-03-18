/*
 * XREFs of Simulator_Free_Arguments @ 0x1C005BDC8
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     AMLIRegEventHandler @ 0x1C0011640 (AMLIRegEventHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C005BAC0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 */

__int64 __fastcall Simulator_Free_Arguments(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned int v8; // eax

  if ( a1 > 0 && a2 )
  {
    v5 = a2;
    v6 = (unsigned int)a1;
    v7 = (_QWORD *)(a2 + 32);
    do
    {
      v8 = *((unsigned __int16 *)v7 - 15);
      if ( v8 >= 2 && (v8 <= 5 || v8 > 6 && (v8 <= 0xC || v8 == 14 || v8 - 130 <= 2)) )
      {
        if ( *v7 )
          FreeObjData(v5, a2, a3, a4);
      }
      v5 += 40LL;
      v7 += 5;
      --v6;
    }
    while ( v6 );
    HeapFree(a2);
  }
  return 0LL;
}
