/*
 * XREFs of PplHotAddProcCompleteNotify @ 0x1C007CA0C
 * Callers:
 *     ndisDmaAddCpuNotify @ 0x1C004B05C (ndisDmaAddCpuNotify.c)
 * Callees:
 *     PplpFreeOneLookasideList @ 0x1C00020CC (PplpFreeOneLookasideList.c)
 */

void __fastcall PplHotAddProcCompleteNotify(unsigned int *a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  ULONG MaximumProcessorCount; // r9d
  struct _LOOKASIDE_LIST_EX **v7; // rdi
  unsigned int v8; // ecx
  ULONG v9; // edx
  __int64 v10; // rsi

  v2 = *((_QWORD *)a1 + 4);
  v4 = *a1;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( (unsigned int)v4 <= MaximumProcessorCount )
  {
    v7 = (struct _LOOKASIDE_LIST_EX **)(v2 + 8 * v4);
    if ( *v7 )
    {
      v8 = 0;
      v9 = v4;
      do
      {
        if ( !*(_QWORD *)(v2 + 8LL * v9) )
          break;
        ++v8;
        ++v9;
      }
      while ( v9 <= MaximumProcessorCount );
      if ( a2 >= 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v8);
      }
      else if ( (unsigned int)v4 < v8 + (unsigned int)v4 )
      {
        v10 = v8;
        do
        {
          PplpFreeOneLookasideList(*v7, a1[3]);
          *v7++ = 0LL;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
