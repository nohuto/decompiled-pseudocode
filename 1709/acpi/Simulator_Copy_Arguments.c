/*
 * XREFs of Simulator_Copy_Arguments @ 0x1C005BC38
 * Callers:
 *     Simulator_Pre_AsyncEvalObject @ 0x1C005C154 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C005C24C (Simulator_Pre_EvalNameSpaceObject.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 */

__int64 __fastcall Simulator_Copy_Arguments(int a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v7; // r15
  int i; // esi
  unsigned __int64 v10; // rcx

  v3 = 0;
  v4 = a1;
  if ( a3 )
  {
    if ( a2 && a1 > 0 )
    {
      v7 = HeapAlloc(gpheapGlobal, 1413563464, 40 * a1);
      if ( !v7 )
        return 3221225495LL;
      for ( i = 0; i < (int)v4; ++i )
      {
        v10 = 40LL * i;
        if ( v10 > 40 * v4 )
          break;
        if ( (unsigned int)DupObjData(gpheapGlobal, v10 + v7, v10 + a2) )
          break;
      }
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
