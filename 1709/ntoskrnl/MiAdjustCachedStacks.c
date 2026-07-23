/*
 * XREFs of MiAdjustCachedStacks @ 0x14008CEDC
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     MiDeleteCachedKernelStack @ 0x14011C5D8 (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiAdjustCachedStacks()
{
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v2; // rcx
  unsigned __int16 v3; // r15
  unsigned __int16 v4; // si
  __int64 v5; // rbp
  __int64 v6; // r14
  _SLIST_HEADER *v7; // rdi
  __int64 result; // rax
  int Alignment; // ecx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  int v15; // ebx
  int v16; // r9d
  PSLIST_ENTRY v17; // rax

  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( *(_QWORD *)(Prcb + 23560) )
    {
      v2 = _InterlockedExchange64((volatile __int64 *)(Prcb + 23560), 0LL);
      if ( v2 )
        MiDeleteCachedKernelStack(v2);
    }
  }
  v3 = KeNumberNodes;
  v4 = 0;
  do
  {
    v5 = 0LL;
    v6 = 25LL * v4;
    do
    {
      v7 = &qword_140388510[v6];
      result = (unsigned int)(*((_DWORD *)&qword_140388510[v6 + 8].HeaderX64 + 1)
                            - *((_DWORD *)&qword_140388510[v6 + 8].HeaderX64 + 2));
      if ( (_DWORD)result )
      {
        Alignment = v7[8].Alignment;
        if ( (unsigned int)result >= 0x10 || Alignment < 16 )
        {
          v16 = 4;
          v10 = v7[8].Alignment;
          v11 = Alignment >> 31;
        }
        else
        {
          v10 = v7[8].Alignment;
          v11 = Alignment >> 31;
          if ( Alignment >= 64 )
          {
            result = (unsigned int)(Alignment / 16);
LABEL_13:
            *((_DWORD *)&v7[8].HeaderX64 + 2) = *((_DWORD *)&qword_140388510[v6 + 8].HeaderX64 + 1);
            if ( !(_DWORD)result )
              result = 1LL;
            v12 = result + Alignment;
            if ( v12 > 256 )
              v12 = 256;
            LODWORD(v7[8].Alignment) = v12;
            goto LABEL_18;
          }
          v16 = 8;
        }
        result = (unsigned int)(__SPAIR64__(v11, v10) / v16);
        goto LABEL_13;
      }
      if ( !*((_DWORD *)&v7[8].HeaderX64 + 3) )
      {
        v13 = v7[8].Alignment;
        v14 = v13 / 20;
        if ( !(v13 / 20) )
          v14 = v13 != 0;
        v15 = v13 - v14;
        if ( v5 != 1 && v15 < 5 )
          v15 = 5;
        LODWORD(v7[8].Alignment) = v15;
        while ( 1 )
        {
          result = LOWORD(v7[7].Alignment);
          if ( (int)result <= v15 )
            break;
          v17 = RtlpInterlockedPopEntrySList(v7 + 7);
          if ( v17 )
            MiDeleteCachedKernelStack(v17);
        }
      }
LABEL_18:
      ++v5;
      *((_DWORD *)&v7[8].HeaderX64 + 3) = 0;
      v6 += 2LL;
    }
    while ( v5 <= 1 );
    ++v4;
  }
  while ( v4 < v3 );
  return result;
}
