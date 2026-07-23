/*
 * XREFs of MiAdjustCachedStacks @ 0x1400380FC
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     MiDeleteCachedKernelStack @ 0x140038BCC (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiAdjustCachedStacks()
{
  ULONG i; // ebx
  __int64 Prcb; // rax
  unsigned __int16 v2; // r15
  unsigned __int16 v3; // si
  __int64 v4; // rbp
  __int64 v5; // r14
  _SLIST_HEADER *v6; // rdi
  __int64 result; // rax
  int Alignment; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // ebx
  int v13; // edx
  int v14; // ebx
  int v15; // r9d
  PSLIST_ENTRY v16; // rax

  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( *(_QWORD *)(Prcb + 23560) && _InterlockedExchange64((volatile __int64 *)(Prcb + 23560), 0LL) )
      ((void (*)(void))MiDeleteCachedKernelStack)();
  }
  v2 = KeNumberNodes;
  v3 = 0;
  do
  {
    v4 = 0LL;
    v5 = 25LL * v3;
    do
    {
      v6 = &qword_1403CB6A8[v5];
      result = (unsigned int)(*((_DWORD *)&qword_1403CB6A8[v5 + 8].HeaderX64 + 1)
                            - *((_DWORD *)&qword_1403CB6A8[v5 + 8].HeaderX64 + 2));
      if ( (_DWORD)result )
      {
        Alignment = v6[8].Alignment;
        if ( Alignment < 16 || (unsigned int)result >= 0x10 )
        {
          v15 = 4;
          v9 = v6[8].Alignment;
          v10 = Alignment >> 31;
        }
        else
        {
          v9 = v6[8].Alignment;
          v10 = Alignment >> 31;
          if ( Alignment >= 64 )
          {
            result = (unsigned int)(Alignment / 16);
LABEL_11:
            *((_DWORD *)&v6[8].HeaderX64 + 2) = *((_DWORD *)&qword_1403CB6A8[v5 + 8].HeaderX64 + 1);
            if ( !(_DWORD)result )
              result = 1LL;
            v11 = result + Alignment;
            if ( v11 > 256 )
              v11 = 256;
            LODWORD(v6[8].Alignment) = v11;
            goto LABEL_16;
          }
          v15 = 8;
        }
        result = (unsigned int)(__SPAIR64__(v10, v9) / v15);
        goto LABEL_11;
      }
      if ( !*((_DWORD *)&v6[8].HeaderX64 + 3) )
      {
        v12 = v6[8].Alignment;
        v13 = v12 / 20;
        if ( !(v12 / 20) )
          v13 = v12 != 0;
        v14 = v12 - v13;
        if ( v4 != 1 && v14 < 5 )
          v14 = 5;
        LODWORD(v6[8].Alignment) = v14;
        while ( 1 )
        {
          result = LOWORD(v6[7].Alignment);
          if ( (int)result <= v14 )
            break;
          v16 = RtlpInterlockedPopEntrySList(v6 + 7);
          if ( v16 )
            MiDeleteCachedKernelStack(v16);
        }
      }
LABEL_16:
      ++v4;
      *((_DWORD *)&v6[8].HeaderX64 + 3) = 0;
      v5 += 2LL;
    }
    while ( v4 <= 1 );
    ++v3;
  }
  while ( v3 < v2 );
  return result;
}
